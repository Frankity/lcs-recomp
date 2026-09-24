#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0152[4095] = {
    1, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 8,
    0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14,
    15, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0,
    0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 29,
    0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0,
    0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0,
    44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 49, 0, 50, 0, 0, 0,
    0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0,
    58, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0,
    0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 72,
    0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0,
    0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 81, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 86,
    0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0,
    0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0,
    0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0,
    107, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 0, 114, 115, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0,
    121, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0,
    0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 135,
    0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0,
    143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 148, 0, 149, 0, 0, 0,
    0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0,
    157, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0,
    0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 171,
    0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0,
    0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0,
    0, 0, 0, 0, 0, 185, 186, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0,
    0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0,
    0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0,
    206, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 213,
    0, 214, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219,
    220, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0,
    0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 234,
    0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0,
    0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0,
    249, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0,
    0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 259, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0,
    0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0,
    270, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0,
    0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 284,
    0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 294, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0,
    298, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0,
    0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 0, 0, 0, 312,
    0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 320,
    0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 324, 0, 325, 0, 0, 0, 0, 0, 0, 326,
    0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0,
    0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0,
    341, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 348,
    0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 354, 0,
    355, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0,
    0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 369,
    0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0,
    0, 376, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0,
    0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 387, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 390, 0,
    0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0,
    397, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0,
    0, 0, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 411, 0, 0, 0,
    0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 418,
    0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 421, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 425,
    0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 0, 0,
    0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 439, 0,
    440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 447,
    0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 452, 0, 453, 0, 0, 0, 0,
    0, 0, 454, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 461,
    0, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0,
    0, 468, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 475, 0,
    0, 0, 0, 0, 0, 476, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 482, 0, 0,
    0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 488, 0, 489, 0,
    0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0, 0, 0, 492, 0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 0, 0, 0, 0, 0,
    496, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0, 0, 500, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0,
    0, 0, 0, 0, 504, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 0, 0, 510,
    0, 511, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0,
    518, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 522, 523, 0, 524, 0, 0, 0,
    0, 0, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0, 531, 0,
    532, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 0, 0, 0, 537, 0, 538, 0, 0, 0, 0,
    0, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 546,
    0, 0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0, 0, 0, 0, 549, 0, 550, 0, 0, 0, 0, 0, 0, 551, 0, 552, 0, 0, 0, 0, 0,
    0, 553, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0, 560, 0,
    0, 0, 0, 0, 0, 561, 0, 562, 0, 0, 0, 0, 563, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 566, 0,
    0, 0, 0, 0, 0, 567, 568, 0, 569, 0, 0, 0, 0, 0, 0, 570, 0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0,
    0, 574, 0, 575, 0, 0, 0, 0, 0, 0, 576, 0, 577, 0, 0, 0, 0, 0, 0, 578, 0, 579, 0, 0, 0, 0, 0, 0, 580, 0, 581, 0,
    0, 0, 0, 0, 0, 582, 0, 583, 0, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0, 0,
    588, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 595, 0, 0,
    0, 596, 0, 0, 0, 0, 597, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 601,
    602, 0, 603, 0, 0, 0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0, 0, 0, 0, 0, 0, 608, 0, 609, 0, 0,
    0, 0, 0, 0, 610, 0, 611, 0, 0, 0, 0, 0, 0, 612, 0, 613, 0, 0, 0, 0, 0, 0, 614, 0, 615, 0, 0, 0, 0, 0, 0, 616,
    0, 617, 0, 0, 0, 0, 0, 0, 618, 0, 619, 0, 0, 0, 0, 0, 0, 620, 0, 621, 0, 0, 0, 0, 0, 0, 622, 0, 623, 0, 0, 0,
    0, 0, 0, 624, 0, 625, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 627, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 0, 0, 631,
    0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0,
    0, 637, 638, 0, 639, 0, 0, 0, 0, 0, 0, 640, 0, 641, 0, 0, 0, 0, 0, 0, 642, 0, 643, 0, 0, 0, 0, 0, 0, 644, 0, 645,
    0, 0, 0, 0, 0, 0, 646, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 649, 0, 0, 0, 0, 0, 0, 650, 0, 651, 0, 0, 0, 0, 0,
    0, 652, 0, 653, 0, 0, 0, 0, 0, 0, 654, 0, 655, 0, 0, 0, 0, 0, 0, 656, 0, 657, 0, 0, 0, 0, 0, 0, 658, 0, 659, 0,
    0, 0, 0, 0, 0, 660, 0, 661, 0, 0, 0, 0, 0, 0, 662, 0, 663, 0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0,
    0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 669, 670, 0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 673, 0,
    0, 0, 0, 0, 0, 674, 0, 675, 0, 0, 0, 0, 0, 0, 676, 0, 677, 0, 0, 0, 0, 0, 0, 678, 0, 679, 0, 0, 0, 0, 0, 0,
    680, 0, 681, 0, 0, 0, 0, 0, 0, 682, 0, 683, 0, 0, 0, 0, 0, 0, 684, 0, 685, 0, 0, 0, 0, 0, 0, 686, 0, 687, 0, 0,
    0, 0, 0, 0, 688, 0, 689, 0, 0, 0, 0, 0, 0, 690, 0, 691, 0, 0, 0, 0, 0, 0, 692, 0, 693, 0, 0, 0, 0, 0, 0, 694,
    0, 695, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 697, 0, 698, 0, 0, 0, 0, 0, 0, 699, 0, 700, 0, 0, 0, 701, 0, 0, 0, 0,
    0, 0, 702, 0, 703, 0, 0, 0, 0, 704, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0,
    0, 0, 708, 709, 0, 710, 0, 0, 0, 0, 0, 0, 711, 0, 712, 0, 0, 0, 0, 0, 0, 713, 0, 714, 0, 0, 0, 0, 0, 0, 715, 0,
    716, 0, 0, 0, 0, 0, 0, 717, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 720, 0, 0, 0, 0, 0, 0, 721, 0, 722, 0, 0, 0, 0,
    0, 0, 723, 0, 724, 0, 0, 0, 0, 0, 0, 725, 0, 726, 0, 0, 0, 0, 0, 0, 727, 0, 728, 0, 0, 0, 0, 0, 0, 729, 0, 730,
    0, 0, 0, 0, 0, 0, 731, 0, 732, 0, 0, 0, 0, 0, 0, 733, 0, 734, 0, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 0,
    0, 737, 0, 738, 0, 0, 0, 0, 0, 0, 739, 0, 740, 0, 0, 0, 741, 0, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 744, 0, 0, 0,
    0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 747, 748, 0, 749, 0, 0, 0, 0, 0, 0, 750, 0, 751, 0,
    0, 0, 0, 0, 0, 752, 0, 753, 0, 0, 0, 0, 0, 0, 754, 0, 755, 0, 0, 0, 0, 0, 0, 756, 0, 757, 0, 0, 0, 0, 0, 0,
    758, 0, 759, 0, 0, 0, 0, 0, 0, 760, 0, 761, 0, 0, 0, 0, 0, 0, 762, 0, 763, 0, 0, 0, 0, 0, 0, 764, 0, 765, 0, 0,
    0, 0, 0, 0, 766, 0, 767, 0, 0, 0, 0, 0, 0, 768, 0, 769, 0, 0, 0, 0, 0, 0, 770, 0, 771, 0, 0, 0, 0, 0, 0, 772,
    0, 773, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 775, 0, 776, 0, 0, 0, 777, 0, 0, 0, 0, 778, 0, 0, 779, 0, 0, 0, 0, 0,
    0, 0, 0, 780, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 782, 783, 0, 784, 0, 0, 0, 0, 0, 0, 785, 0, 786, 0, 0, 0,
    0, 0, 0, 787, 0, 788, 0, 0, 0, 0, 0, 0, 789, 0, 790, 0, 0, 0, 0, 0, 0, 791, 0, 792, 0, 0, 0, 0, 0, 0, 793, 0,
    794, 0, 0, 0, 0, 0, 0, 795, 0, 796, 0, 0, 0, 0, 0, 0, 797, 0, 798, 0, 0, 0, 0, 0, 0, 799, 0, 800, 0, 0, 0, 0,
    0, 0, 801, 0, 802, 0, 0, 0, 0, 0, 0, 803, 0, 804, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 806, 0, 807, 0, 0, 0, 808, 0,
    0, 0, 0, 809, 0, 0, 810, 0, 0, 0, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 813, 814, 0, 815,
    0, 0, 0, 0, 0, 0, 816, 0, 817, 0, 0, 0, 0, 0, 0, 818, 0, 819, 0, 0, 0, 0, 0, 0, 820, 0, 821, 0, 0, 0, 0, 0,
    0, 822, 0, 823, 0, 0, 0, 0, 0, 0, 824, 0, 825, 0, 0, 0, 0, 0, 0, 826, 0, 827, 0, 0, 0, 0, 0, 0, 828, 0, 829, 0,
    0, 0, 0, 0, 0, 830, 0, 831, 0, 0, 0, 0, 0, 0, 832, 0, 833, 0, 0, 0, 834, 0, 0, 0, 0, 0, 0, 835, 0, 836, 0, 0,
    0, 837, 0, 0, 0, 0, 0, 0, 838, 0, 839, 0, 0, 0, 0, 0, 0, 840, 0, 841, 0, 0, 0, 0, 842, 0, 0, 843, 0, 0, 0, 0,
    0, 0, 0, 0, 844, 0, 0, 0, 0, 0, 845, 0, 0, 0, 0, 0, 0, 846, 847, 0, 848, 0, 0, 0, 0, 0, 0, 849, 0, 850, 0, 0,
    0, 0, 0, 0, 851, 0, 852, 0, 0, 0, 0, 0, 0, 853, 0, 854, 0, 0, 0, 0, 0, 0, 855, 0, 856, 0, 0, 0, 0, 0, 0, 857,
    0, 858, 0, 0, 0, 0, 0, 0, 859, 0, 860, 0, 0, 0, 0, 0, 0, 861, 0, 862, 0, 0, 0, 0, 0, 0, 863, 0, 864, 0, 0, 0,
    0, 0, 0, 865, 0, 866, 0, 0, 0, 0, 0, 0, 867, 0, 868, 0, 0, 0, 0, 0, 0, 869, 0, 870, 0, 0, 0, 0, 0, 0, 871, 0,
    872, 0, 0, 0, 0, 0, 0, 873, 0, 874, 0, 0, 0, 0, 0, 0, 875, 0, 876, 0, 0, 0, 0, 0, 0, 877, 0, 878, 0, 0, 0, 0,
    879, 0, 0, 880, 0, 0, 0, 0, 0, 0, 0, 0, 881, 0, 0, 0, 0, 0, 882, 0, 0, 0, 0, 0, 0, 883, 884, 0, 885, 0, 0, 0,
    0, 0, 0, 886, 0, 887, 0, 0, 0, 0, 0, 0, 888, 0, 889, 0, 0, 0, 0, 0, 0, 890, 0, 891, 0, 0, 0, 0, 0, 0, 892, 0,
    893, 0, 0, 0, 0, 0, 0, 894, 0, 895, 0, 0, 0, 0, 0, 0, 896, 0, 897, 0, 0, 0, 0, 0, 0, 898, 0, 899, 0, 0, 0, 0,
    0, 0, 900, 0, 901, 0, 0, 0, 0, 0, 0, 902, 0, 903, 0, 0, 0, 904, 0, 0, 0, 0, 0, 0, 905, 0, 906, 0, 0, 0, 907,
};
void recomp_unit_0152_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A64000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0152[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A64000;
    case 2u: goto L_08A64010;
    case 3u: goto L_08A64018;
    case 4u: goto L_08A64034;
    case 5u: goto L_08A6403C;
    case 6u: goto L_08A64058;
    case 7u: goto L_08A64060;
    case 8u: goto L_08A6407C;
    case 9u: goto L_08A64084;
    case 10u: goto L_08A64098;
    case 11u: goto L_08A640A4;
    case 12u: goto L_08A640C8;
    case 13u: goto L_08A640E0;
    case 14u: goto L_08A640FC;
    case 15u: goto L_08A64100;
    case 16u: goto L_08A64108;
    case 17u: goto L_08A64124;
    case 18u: goto L_08A6412C;
    case 19u: goto L_08A64148;
    case 20u: goto L_08A64150;
    case 21u: goto L_08A6416C;
    case 22u: goto L_08A64174;
    case 23u: goto L_08A64190;
    case 24u: goto L_08A64198;
    case 25u: goto L_08A641B4;
    case 26u: goto L_08A641BC;
    case 27u: goto L_08A641D8;
    case 28u: goto L_08A641E0;
    case 29u: goto L_08A641FC;
    case 30u: goto L_08A64204;
    case 31u: goto L_08A64220;
    case 32u: goto L_08A64228;
    case 33u: goto L_08A64244;
    case 34u: goto L_08A6424C;
    case 35u: goto L_08A64268;
    case 36u: goto L_08A64270;
    case 37u: goto L_08A6428C;
    case 38u: goto L_08A64294;
    case 39u: goto L_08A642B0;
    case 40u: goto L_08A642B8;
    case 41u: goto L_08A642D4;
    case 42u: goto L_08A642DC;
    case 43u: goto L_08A642EC;
    case 44u: goto L_08A64300;
    case 45u: goto L_08A6430C;
    case 46u: goto L_08A64330;
    case 47u: goto L_08A64348;
    case 48u: goto L_08A64364;
    case 49u: goto L_08A64368;
    case 50u: goto L_08A64370;
    case 51u: goto L_08A6438C;
    case 52u: goto L_08A64394;
    case 53u: goto L_08A643B0;
    case 54u: goto L_08A643B8;
    case 55u: goto L_08A643D4;
    case 56u: goto L_08A643DC;
    case 57u: goto L_08A643F8;
    case 58u: goto L_08A64400;
    case 59u: goto L_08A6441C;
    case 60u: goto L_08A64424;
    case 61u: goto L_08A64440;
    case 62u: goto L_08A64448;
    case 63u: goto L_08A64464;
    case 64u: goto L_08A6446C;
    case 65u: goto L_08A64488;
    case 66u: goto L_08A64490;
    case 67u: goto L_08A644AC;
    case 68u: goto L_08A644B4;
    case 69u: goto L_08A644D0;
    case 70u: goto L_08A644D8;
    case 71u: goto L_08A644F4;
    case 72u: goto L_08A644FC;
    case 73u: goto L_08A64518;
    case 74u: goto L_08A64520;
    case 75u: goto L_08A64530;
    case 76u: goto L_08A64544;
    case 77u: goto L_08A64550;
    case 78u: goto L_08A64574;
    case 79u: goto L_08A6458C;
    case 80u: goto L_08A645A8;
    case 81u: goto L_08A645AC;
    case 82u: goto L_08A645B4;
    case 83u: goto L_08A645D0;
    case 84u: goto L_08A645D8;
    case 85u: goto L_08A645F4;
    case 86u: goto L_08A645FC;
    case 87u: goto L_08A64618;
    case 88u: goto L_08A64620;
    case 89u: goto L_08A6463C;
    case 90u: goto L_08A64644;
    case 91u: goto L_08A64660;
    case 92u: goto L_08A64668;
    case 93u: goto L_08A64684;
    case 94u: goto L_08A6468C;
    case 95u: goto L_08A646A8;
    case 96u: goto L_08A646B0;
    case 97u: goto L_08A646CC;
    case 98u: goto L_08A646D4;
    case 99u: goto L_08A646F0;
    case 100u: goto L_08A646F8;
    case 101u: goto L_08A64714;
    case 102u: goto L_08A6471C;
    case 103u: goto L_08A64738;
    case 104u: goto L_08A64740;
    case 105u: goto L_08A6475C;
    case 106u: goto L_08A64764;
    case 107u: goto L_08A64780;
    case 108u: goto L_08A64788;
    case 109u: goto L_08A64798;
    case 110u: goto L_08A647AC;
    case 111u: goto L_08A647B8;
    case 112u: goto L_08A647DC;
    case 113u: goto L_08A647F4;
    case 114u: goto L_08A64810;
    case 115u: goto L_08A64814;
    case 116u: goto L_08A6481C;
    case 117u: goto L_08A64838;
    case 118u: goto L_08A64840;
    case 119u: goto L_08A6485C;
    case 120u: goto L_08A64864;
    case 121u: goto L_08A64880;
    case 122u: goto L_08A64888;
    case 123u: goto L_08A648A4;
    case 124u: goto L_08A648AC;
    case 125u: goto L_08A648C8;
    case 126u: goto L_08A648D0;
    case 127u: goto L_08A648EC;
    case 128u: goto L_08A648F4;
    case 129u: goto L_08A64910;
    case 130u: goto L_08A64918;
    case 131u: goto L_08A64934;
    case 132u: goto L_08A6493C;
    case 133u: goto L_08A64958;
    case 134u: goto L_08A64960;
    case 135u: goto L_08A6497C;
    case 136u: goto L_08A64984;
    case 137u: goto L_08A649A0;
    case 138u: goto L_08A649A8;
    case 139u: goto L_08A649C4;
    case 140u: goto L_08A649CC;
    case 141u: goto L_08A649DC;
    case 142u: goto L_08A649EC;
    case 143u: goto L_08A64A00;
    case 144u: goto L_08A64A0C;
    case 145u: goto L_08A64A30;
    case 146u: goto L_08A64A48;
    case 147u: goto L_08A64A64;
    case 148u: goto L_08A64A68;
    case 149u: goto L_08A64A70;
    case 150u: goto L_08A64A8C;
    case 151u: goto L_08A64A94;
    case 152u: goto L_08A64AB0;
    case 153u: goto L_08A64AB8;
    case 154u: goto L_08A64AD4;
    case 155u: goto L_08A64ADC;
    case 156u: goto L_08A64AF8;
    case 157u: goto L_08A64B00;
    case 158u: goto L_08A64B1C;
    case 159u: goto L_08A64B24;
    case 160u: goto L_08A64B40;
    case 161u: goto L_08A64B48;
    case 162u: goto L_08A64B64;
    case 163u: goto L_08A64B6C;
    case 164u: goto L_08A64B88;
    case 165u: goto L_08A64B90;
    case 166u: goto L_08A64BAC;
    case 167u: goto L_08A64BB4;
    case 168u: goto L_08A64BD0;
    case 169u: goto L_08A64BD8;
    case 170u: goto L_08A64BF4;
    case 171u: goto L_08A64BFC;
    case 172u: goto L_08A64C18;
    case 173u: goto L_08A64C20;
    case 174u: goto L_08A64C3C;
    case 175u: goto L_08A64C44;
    case 176u: goto L_08A64C60;
    case 177u: goto L_08A64C68;
    case 178u: goto L_08A64C84;
    case 179u: goto L_08A64C8C;
    case 180u: goto L_08A64C9C;
    case 181u: goto L_08A64CB0;
    case 182u: goto L_08A64CBC;
    case 183u: goto L_08A64CE0;
    case 184u: goto L_08A64CF8;
    case 185u: goto L_08A64D14;
    case 186u: goto L_08A64D18;
    case 187u: goto L_08A64D20;
    case 188u: goto L_08A64D3C;
    case 189u: goto L_08A64D44;
    case 190u: goto L_08A64D60;
    case 191u: goto L_08A64D68;
    case 192u: goto L_08A64D84;
    case 193u: goto L_08A64D8C;
    case 194u: goto L_08A64DA8;
    case 195u: goto L_08A64DB0;
    case 196u: goto L_08A64DCC;
    case 197u: goto L_08A64DD4;
    case 198u: goto L_08A64DF0;
    case 199u: goto L_08A64DF8;
    case 200u: goto L_08A64E14;
    case 201u: goto L_08A64E1C;
    case 202u: goto L_08A64E38;
    case 203u: goto L_08A64E40;
    case 204u: goto L_08A64E5C;
    case 205u: goto L_08A64E64;
    case 206u: goto L_08A64E80;
    case 207u: goto L_08A64E88;
    case 208u: goto L_08A64EA4;
    case 209u: goto L_08A64EAC;
    case 210u: goto L_08A64EBC;
    case 211u: goto L_08A64ED8;
    case 212u: goto L_08A64EE0;
    case 213u: goto L_08A64EFC;
    case 214u: goto L_08A64F04;
    case 215u: goto L_08A64F18;
    case 216u: goto L_08A64F24;
    case 217u: goto L_08A64F48;
    case 218u: goto L_08A64F60;
    case 219u: goto L_08A64F7C;
    case 220u: goto L_08A64F80;
    case 221u: goto L_08A64F88;
    case 222u: goto L_08A64FA4;
    case 223u: goto L_08A64FAC;
    case 224u: goto L_08A64FC8;
    case 225u: goto L_08A64FD0;
    case 226u: goto L_08A64FEC;
    case 227u: goto L_08A64FF4;
    case 228u: goto L_08A65010;
    case 229u: goto L_08A65018;
    case 230u: goto L_08A65034;
    case 231u: goto L_08A6503C;
    case 232u: goto L_08A65058;
    case 233u: goto L_08A65060;
    case 234u: goto L_08A6507C;
    case 235u: goto L_08A65084;
    case 236u: goto L_08A650A0;
    case 237u: goto L_08A650A8;
    case 238u: goto L_08A650C4;
    case 239u: goto L_08A650CC;
    case 240u: goto L_08A650E8;
    case 241u: goto L_08A650F0;
    case 242u: goto L_08A6510C;
    case 243u: goto L_08A65114;
    case 244u: goto L_08A65130;
    case 245u: goto L_08A65138;
    case 246u: goto L_08A65154;
    case 247u: goto L_08A6515C;
    case 248u: goto L_08A65178;
    case 249u: goto L_08A65180;
    case 250u: goto L_08A6519C;
    case 251u: goto L_08A651A4;
    case 252u: goto L_08A651C0;
    case 253u: goto L_08A651C8;
    case 254u: goto L_08A651DC;
    case 255u: goto L_08A651E8;
    case 256u: goto L_08A6520C;
    case 257u: goto L_08A65224;
    case 258u: goto L_08A65240;
    case 259u: goto L_08A65244;
    case 260u: goto L_08A6524C;
    case 261u: goto L_08A65268;
    case 262u: goto L_08A65270;
    case 263u: goto L_08A6528C;
    case 264u: goto L_08A65294;
    case 265u: goto L_08A652B0;
    case 266u: goto L_08A652B8;
    case 267u: goto L_08A652D4;
    case 268u: goto L_08A652DC;
    case 269u: goto L_08A652F8;
    case 270u: goto L_08A65300;
    case 271u: goto L_08A6531C;
    case 272u: goto L_08A65324;
    case 273u: goto L_08A65340;
    case 274u: goto L_08A65348;
    case 275u: goto L_08A65364;
    case 276u: goto L_08A6536C;
    case 277u: goto L_08A65388;
    case 278u: goto L_08A65390;
    case 279u: goto L_08A653AC;
    case 280u: goto L_08A653B4;
    case 281u: goto L_08A653D0;
    case 282u: goto L_08A653D8;
    case 283u: goto L_08A653F4;
    case 284u: goto L_08A653FC;
    case 285u: goto L_08A6540C;
    case 286u: goto L_08A6541C;
    case 287u: goto L_08A6542C;
    case 288u: goto L_08A6543C;
    case 289u: goto L_08A65450;
    case 290u: goto L_08A6545C;
    case 291u: goto L_08A65480;
    case 292u: goto L_08A65498;
    case 293u: goto L_08A654B4;
    case 294u: goto L_08A654B8;
    case 295u: goto L_08A654C0;
    case 296u: goto L_08A654DC;
    case 297u: goto L_08A654E4;
    case 298u: goto L_08A65500;
    case 299u: goto L_08A65508;
    case 300u: goto L_08A65524;
    case 301u: goto L_08A6552C;
    case 302u: goto L_08A65548;
    case 303u: goto L_08A65550;
    case 304u: goto L_08A6556C;
    case 305u: goto L_08A65574;
    case 306u: goto L_08A65590;
    case 307u: goto L_08A65598;
    case 308u: goto L_08A655B4;
    case 309u: goto L_08A655BC;
    case 310u: goto L_08A655D8;
    case 311u: goto L_08A655E0;
    case 312u: goto L_08A655FC;
    case 313u: goto L_08A65604;
    case 314u: goto L_08A65620;
    case 315u: goto L_08A65628;
    case 316u: goto L_08A65644;
    case 317u: goto L_08A6564C;
    case 318u: goto L_08A6565C;
    case 319u: goto L_08A65670;
    case 320u: goto L_08A6567C;
    case 321u: goto L_08A656A0;
    case 322u: goto L_08A656B8;
    case 323u: goto L_08A656D4;
    case 324u: goto L_08A656D8;
    case 325u: goto L_08A656E0;
    case 326u: goto L_08A656FC;
    case 327u: goto L_08A65704;
    case 328u: goto L_08A65720;
    case 329u: goto L_08A65728;
    case 330u: goto L_08A65744;
    case 331u: goto L_08A6574C;
    case 332u: goto L_08A65768;
    case 333u: goto L_08A65770;
    case 334u: goto L_08A6578C;
    case 335u: goto L_08A65794;
    case 336u: goto L_08A657B0;
    case 337u: goto L_08A657B8;
    case 338u: goto L_08A657D4;
    case 339u: goto L_08A657DC;
    case 340u: goto L_08A657F8;
    case 341u: goto L_08A65800;
    case 342u: goto L_08A6581C;
    case 343u: goto L_08A65824;
    case 344u: goto L_08A65840;
    case 345u: goto L_08A65848;
    case 346u: goto L_08A65864;
    case 347u: goto L_08A6586C;
    case 348u: goto L_08A6587C;
    case 349u: goto L_08A65890;
    case 350u: goto L_08A6589C;
    case 351u: goto L_08A658C0;
    case 352u: goto L_08A658D8;
    case 353u: goto L_08A658F4;
    case 354u: goto L_08A658F8;
    case 355u: goto L_08A65900;
    case 356u: goto L_08A6591C;
    case 357u: goto L_08A65924;
    case 358u: goto L_08A65940;
    case 359u: goto L_08A65948;
    case 360u: goto L_08A65964;
    case 361u: goto L_08A6596C;
    case 362u: goto L_08A65988;
    case 363u: goto L_08A65990;
    case 364u: goto L_08A659AC;
    case 365u: goto L_08A659B4;
    case 366u: goto L_08A659D0;
    case 367u: goto L_08A659D8;
    case 368u: goto L_08A659F4;
    case 369u: goto L_08A659FC;
    case 370u: goto L_08A65A18;
    case 371u: goto L_08A65A20;
    case 372u: goto L_08A65A3C;
    case 373u: goto L_08A65A44;
    case 374u: goto L_08A65A60;
    case 375u: goto L_08A65A68;
    case 376u: goto L_08A65A84;
    case 377u: goto L_08A65A8C;
    case 378u: goto L_08A65A9C;
    case 379u: goto L_08A65AB8;
    case 380u: goto L_08A65AC0;
    case 381u: goto L_08A65AD0;
    case 382u: goto L_08A65AE4;
    case 383u: goto L_08A65AF0;
    case 384u: goto L_08A65B14;
    case 385u: goto L_08A65B2C;
    case 386u: goto L_08A65B48;
    case 387u: goto L_08A65B4C;
    case 388u: goto L_08A65B54;
    case 389u: goto L_08A65B70;
    case 390u: goto L_08A65B78;
    case 391u: goto L_08A65B94;
    case 392u: goto L_08A65B9C;
    case 393u: goto L_08A65BB8;
    case 394u: goto L_08A65BC0;
    case 395u: goto L_08A65BDC;
    case 396u: goto L_08A65BE4;
    case 397u: goto L_08A65C00;
    case 398u: goto L_08A65C08;
    case 399u: goto L_08A65C24;
    case 400u: goto L_08A65C2C;
    case 401u: goto L_08A65C48;
    case 402u: goto L_08A65C50;
    case 403u: goto L_08A65C6C;
    case 404u: goto L_08A65C74;
    case 405u: goto L_08A65C90;
    case 406u: goto L_08A65C98;
    case 407u: goto L_08A65CB4;
    case 408u: goto L_08A65CBC;
    case 409u: goto L_08A65CCC;
    case 410u: goto L_08A65CE8;
    case 411u: goto L_08A65CF0;
    case 412u: goto L_08A65D0C;
    case 413u: goto L_08A65D14;
    case 414u: goto L_08A65D30;
    case 415u: goto L_08A65D38;
    case 416u: goto L_08A65D4C;
    case 417u: goto L_08A65D58;
    case 418u: goto L_08A65D7C;
    case 419u: goto L_08A65D94;
    case 420u: goto L_08A65DB0;
    case 421u: goto L_08A65DB4;
    case 422u: goto L_08A65DBC;
    case 423u: goto L_08A65DD8;
    case 424u: goto L_08A65DE0;
    case 425u: goto L_08A65DFC;
    case 426u: goto L_08A65E04;
    case 427u: goto L_08A65E20;
    case 428u: goto L_08A65E28;
    case 429u: goto L_08A65E44;
    case 430u: goto L_08A65E4C;
    case 431u: goto L_08A65E68;
    case 432u: goto L_08A65E70;
    case 433u: goto L_08A65E8C;
    case 434u: goto L_08A65E94;
    case 435u: goto L_08A65EB0;
    case 436u: goto L_08A65EB8;
    case 437u: goto L_08A65ED4;
    case 438u: goto L_08A65EDC;
    case 439u: goto L_08A65EF8;
    case 440u: goto L_08A65F00;
    case 441u: goto L_08A65F10;
    case 442u: goto L_08A65F2C;
    case 443u: goto L_08A65F34;
    case 444u: goto L_08A65F50;
    case 445u: goto L_08A65F58;
    case 446u: goto L_08A65F68;
    case 447u: goto L_08A65F7C;
    case 448u: goto L_08A65F88;
    case 449u: goto L_08A65FAC;
    case 450u: goto L_08A65FC4;
    case 451u: goto L_08A65FE0;
    case 452u: goto L_08A65FE4;
    case 453u: goto L_08A65FEC;
    case 454u: goto L_08A66008;
    case 455u: goto L_08A66010;
    case 456u: goto L_08A6602C;
    case 457u: goto L_08A66034;
    case 458u: goto L_08A66050;
    case 459u: goto L_08A66058;
    case 460u: goto L_08A66074;
    case 461u: goto L_08A6607C;
    case 462u: goto L_08A66098;
    case 463u: goto L_08A660A0;
    case 464u: goto L_08A660BC;
    case 465u: goto L_08A660C4;
    case 466u: goto L_08A660E0;
    case 467u: goto L_08A660E8;
    case 468u: goto L_08A66104;
    case 469u: goto L_08A6610C;
    case 470u: goto L_08A66128;
    case 471u: goto L_08A66130;
    case 472u: goto L_08A6614C;
    case 473u: goto L_08A66154;
    case 474u: goto L_08A66170;
    case 475u: goto L_08A66178;
    case 476u: goto L_08A66194;
    case 477u: goto L_08A6619C;
    case 478u: goto L_08A661B8;
    case 479u: goto L_08A661C0;
    case 480u: goto L_08A661DC;
    case 481u: goto L_08A661E4;
    case 482u: goto L_08A661F4;
    case 483u: goto L_08A66208;
    case 484u: goto L_08A66214;
    case 485u: goto L_08A66238;
    case 486u: goto L_08A66250;
    case 487u: goto L_08A6626C;
    case 488u: goto L_08A66270;
    case 489u: goto L_08A66278;
    case 490u: goto L_08A66294;
    case 491u: goto L_08A6629C;
    case 492u: goto L_08A662B8;
    case 493u: goto L_08A662C0;
    case 494u: goto L_08A662DC;
    case 495u: goto L_08A662E4;
    case 496u: goto L_08A66300;
    case 497u: goto L_08A66308;
    case 498u: goto L_08A66324;
    case 499u: goto L_08A6632C;
    case 500u: goto L_08A66348;
    case 501u: goto L_08A66350;
    case 502u: goto L_08A6636C;
    case 503u: goto L_08A66374;
    case 504u: goto L_08A66390;
    case 505u: goto L_08A66398;
    case 506u: goto L_08A663B4;
    case 507u: goto L_08A663BC;
    case 508u: goto L_08A663D8;
    case 509u: goto L_08A663E0;
    case 510u: goto L_08A663FC;
    case 511u: goto L_08A66404;
    case 512u: goto L_08A66420;
    case 513u: goto L_08A66428;
    case 514u: goto L_08A66438;
    case 515u: goto L_08A66448;
    case 516u: goto L_08A66464;
    case 517u: goto L_08A6646C;
    case 518u: goto L_08A66480;
    case 519u: goto L_08A6648C;
    case 520u: goto L_08A664B0;
    case 521u: goto L_08A664C8;
    case 522u: goto L_08A664E4;
    case 523u: goto L_08A664E8;
    case 524u: goto L_08A664F0;
    case 525u: goto L_08A6650C;
    case 526u: goto L_08A66514;
    case 527u: goto L_08A66530;
    case 528u: goto L_08A66538;
    case 529u: goto L_08A66554;
    case 530u: goto L_08A6655C;
    case 531u: goto L_08A66578;
    case 532u: goto L_08A66580;
    case 533u: goto L_08A6659C;
    case 534u: goto L_08A665A4;
    case 535u: goto L_08A665C0;
    case 536u: goto L_08A665C8;
    case 537u: goto L_08A665E4;
    case 538u: goto L_08A665EC;
    case 539u: goto L_08A66608;
    case 540u: goto L_08A66610;
    case 541u: goto L_08A6662C;
    case 542u: goto L_08A66634;
    case 543u: goto L_08A66650;
    case 544u: goto L_08A66658;
    case 545u: goto L_08A66674;
    case 546u: goto L_08A6667C;
    case 547u: goto L_08A66698;
    case 548u: goto L_08A666A0;
    case 549u: goto L_08A666BC;
    case 550u: goto L_08A666C4;
    case 551u: goto L_08A666E0;
    case 552u: goto L_08A666E8;
    case 553u: goto L_08A66704;
    case 554u: goto L_08A6670C;
    case 555u: goto L_08A66728;
    case 556u: goto L_08A66730;
    case 557u: goto L_08A6674C;
    case 558u: goto L_08A66754;
    case 559u: goto L_08A66770;
    case 560u: goto L_08A66778;
    case 561u: goto L_08A66794;
    case 562u: goto L_08A6679C;
    case 563u: goto L_08A667B0;
    case 564u: goto L_08A667BC;
    case 565u: goto L_08A667E0;
    case 566u: goto L_08A667F8;
    case 567u: goto L_08A66814;
    case 568u: goto L_08A66818;
    case 569u: goto L_08A66820;
    case 570u: goto L_08A6683C;
    case 571u: goto L_08A66844;
    case 572u: goto L_08A66860;
    case 573u: goto L_08A66868;
    case 574u: goto L_08A66884;
    case 575u: goto L_08A6688C;
    case 576u: goto L_08A668A8;
    case 577u: goto L_08A668B0;
    case 578u: goto L_08A668CC;
    case 579u: goto L_08A668D4;
    case 580u: goto L_08A668F0;
    case 581u: goto L_08A668F8;
    case 582u: goto L_08A66914;
    case 583u: goto L_08A6691C;
    case 584u: goto L_08A66938;
    case 585u: goto L_08A66940;
    case 586u: goto L_08A6695C;
    case 587u: goto L_08A66964;
    case 588u: goto L_08A66980;
    case 589u: goto L_08A66988;
    case 590u: goto L_08A669A4;
    case 591u: goto L_08A669AC;
    case 592u: goto L_08A669C8;
    case 593u: goto L_08A669D0;
    case 594u: goto L_08A669EC;
    case 595u: goto L_08A669F4;
    case 596u: goto L_08A66A04;
    case 597u: goto L_08A66A18;
    case 598u: goto L_08A66A24;
    case 599u: goto L_08A66A48;
    case 600u: goto L_08A66A60;
    case 601u: goto L_08A66A7C;
    case 602u: goto L_08A66A80;
    case 603u: goto L_08A66A88;
    case 604u: goto L_08A66AA4;
    case 605u: goto L_08A66AAC;
    case 606u: goto L_08A66AC8;
    case 607u: goto L_08A66AD0;
    case 608u: goto L_08A66AEC;
    case 609u: goto L_08A66AF4;
    case 610u: goto L_08A66B10;
    case 611u: goto L_08A66B18;
    case 612u: goto L_08A66B34;
    case 613u: goto L_08A66B3C;
    case 614u: goto L_08A66B58;
    case 615u: goto L_08A66B60;
    case 616u: goto L_08A66B7C;
    case 617u: goto L_08A66B84;
    case 618u: goto L_08A66BA0;
    case 619u: goto L_08A66BA8;
    case 620u: goto L_08A66BC4;
    case 621u: goto L_08A66BCC;
    case 622u: goto L_08A66BE8;
    case 623u: goto L_08A66BF0;
    case 624u: goto L_08A66C0C;
    case 625u: goto L_08A66C14;
    case 626u: goto L_08A66C24;
    case 627u: goto L_08A66C40;
    case 628u: goto L_08A66C48;
    case 629u: goto L_08A66C64;
    case 630u: goto L_08A66C6C;
    case 631u: goto L_08A66C7C;
    case 632u: goto L_08A66C8C;
    case 633u: goto L_08A66CA0;
    case 634u: goto L_08A66CAC;
    case 635u: goto L_08A66CD0;
    case 636u: goto L_08A66CE8;
    case 637u: goto L_08A66D04;
    case 638u: goto L_08A66D08;
    case 639u: goto L_08A66D10;
    case 640u: goto L_08A66D2C;
    case 641u: goto L_08A66D34;
    case 642u: goto L_08A66D50;
    case 643u: goto L_08A66D58;
    case 644u: goto L_08A66D74;
    case 645u: goto L_08A66D7C;
    case 646u: goto L_08A66D98;
    case 647u: goto L_08A66DA0;
    case 648u: goto L_08A66DBC;
    case 649u: goto L_08A66DC4;
    case 650u: goto L_08A66DE0;
    case 651u: goto L_08A66DE8;
    case 652u: goto L_08A66E04;
    case 653u: goto L_08A66E0C;
    case 654u: goto L_08A66E28;
    case 655u: goto L_08A66E30;
    case 656u: goto L_08A66E4C;
    case 657u: goto L_08A66E54;
    case 658u: goto L_08A66E70;
    case 659u: goto L_08A66E78;
    case 660u: goto L_08A66E94;
    case 661u: goto L_08A66E9C;
    case 662u: goto L_08A66EB8;
    case 663u: goto L_08A66EC0;
    case 664u: goto L_08A66ED0;
    case 665u: goto L_08A66EE4;
    case 666u: goto L_08A66EF0;
    case 667u: goto L_08A66F14;
    case 668u: goto L_08A66F2C;
    case 669u: goto L_08A66F48;
    case 670u: goto L_08A66F4C;
    case 671u: goto L_08A66F54;
    case 672u: goto L_08A66F70;
    case 673u: goto L_08A66F78;
    case 674u: goto L_08A66F94;
    case 675u: goto L_08A66F9C;
    case 676u: goto L_08A66FB8;
    case 677u: goto L_08A66FC0;
    case 678u: goto L_08A66FDC;
    case 679u: goto L_08A66FE4;
    case 680u: goto L_08A67000;
    case 681u: goto L_08A67008;
    case 682u: goto L_08A67024;
    case 683u: goto L_08A6702C;
    case 684u: goto L_08A67048;
    case 685u: goto L_08A67050;
    case 686u: goto L_08A6706C;
    case 687u: goto L_08A67074;
    case 688u: goto L_08A67090;
    case 689u: goto L_08A67098;
    case 690u: goto L_08A670B4;
    case 691u: goto L_08A670BC;
    case 692u: goto L_08A670D8;
    case 693u: goto L_08A670E0;
    case 694u: goto L_08A670FC;
    case 695u: goto L_08A67104;
    case 696u: goto L_08A67114;
    case 697u: goto L_08A67130;
    case 698u: goto L_08A67138;
    case 699u: goto L_08A67154;
    case 700u: goto L_08A6715C;
    case 701u: goto L_08A6716C;
    case 702u: goto L_08A67188;
    case 703u: goto L_08A67190;
    case 704u: goto L_08A671A4;
    case 705u: goto L_08A671B0;
    case 706u: goto L_08A671D4;
    case 707u: goto L_08A671EC;
    case 708u: goto L_08A67208;
    case 709u: goto L_08A6720C;
    case 710u: goto L_08A67214;
    case 711u: goto L_08A67230;
    case 712u: goto L_08A67238;
    case 713u: goto L_08A67254;
    case 714u: goto L_08A6725C;
    case 715u: goto L_08A67278;
    case 716u: goto L_08A67280;
    case 717u: goto L_08A6729C;
    case 718u: goto L_08A672A4;
    case 719u: goto L_08A672C0;
    case 720u: goto L_08A672C8;
    case 721u: goto L_08A672E4;
    case 722u: goto L_08A672EC;
    case 723u: goto L_08A67308;
    case 724u: goto L_08A67310;
    case 725u: goto L_08A6732C;
    case 726u: goto L_08A67334;
    case 727u: goto L_08A67350;
    case 728u: goto L_08A67358;
    case 729u: goto L_08A67374;
    case 730u: goto L_08A6737C;
    case 731u: goto L_08A67398;
    case 732u: goto L_08A673A0;
    case 733u: goto L_08A673BC;
    case 734u: goto L_08A673C4;
    case 735u: goto L_08A673E0;
    case 736u: goto L_08A673E8;
    case 737u: goto L_08A67404;
    case 738u: goto L_08A6740C;
    case 739u: goto L_08A67428;
    case 740u: goto L_08A67430;
    case 741u: goto L_08A67440;
    case 742u: goto L_08A67450;
    case 743u: goto L_08A67464;
    case 744u: goto L_08A67470;
    case 745u: goto L_08A67494;
    case 746u: goto L_08A674AC;
    case 747u: goto L_08A674C8;
    case 748u: goto L_08A674CC;
    case 749u: goto L_08A674D4;
    case 750u: goto L_08A674F0;
    case 751u: goto L_08A674F8;
    case 752u: goto L_08A67514;
    case 753u: goto L_08A6751C;
    case 754u: goto L_08A67538;
    case 755u: goto L_08A67540;
    case 756u: goto L_08A6755C;
    case 757u: goto L_08A67564;
    case 758u: goto L_08A67580;
    case 759u: goto L_08A67588;
    case 760u: goto L_08A675A4;
    case 761u: goto L_08A675AC;
    case 762u: goto L_08A675C8;
    case 763u: goto L_08A675D0;
    case 764u: goto L_08A675EC;
    case 765u: goto L_08A675F4;
    case 766u: goto L_08A67610;
    case 767u: goto L_08A67618;
    case 768u: goto L_08A67634;
    case 769u: goto L_08A6763C;
    case 770u: goto L_08A67658;
    case 771u: goto L_08A67660;
    case 772u: goto L_08A6767C;
    case 773u: goto L_08A67684;
    case 774u: goto L_08A67694;
    case 775u: goto L_08A676B0;
    case 776u: goto L_08A676B8;
    case 777u: goto L_08A676C8;
    case 778u: goto L_08A676DC;
    case 779u: goto L_08A676E8;
    case 780u: goto L_08A6770C;
    case 781u: goto L_08A67724;
    case 782u: goto L_08A67740;
    case 783u: goto L_08A67744;
    case 784u: goto L_08A6774C;
    case 785u: goto L_08A67768;
    case 786u: goto L_08A67770;
    case 787u: goto L_08A6778C;
    case 788u: goto L_08A67794;
    case 789u: goto L_08A677B0;
    case 790u: goto L_08A677B8;
    case 791u: goto L_08A677D4;
    case 792u: goto L_08A677DC;
    case 793u: goto L_08A677F8;
    case 794u: goto L_08A67800;
    case 795u: goto L_08A6781C;
    case 796u: goto L_08A67824;
    case 797u: goto L_08A67840;
    case 798u: goto L_08A67848;
    case 799u: goto L_08A67864;
    case 800u: goto L_08A6786C;
    case 801u: goto L_08A67888;
    case 802u: goto L_08A67890;
    case 803u: goto L_08A678AC;
    case 804u: goto L_08A678B4;
    case 805u: goto L_08A678C4;
    case 806u: goto L_08A678E0;
    case 807u: goto L_08A678E8;
    case 808u: goto L_08A678F8;
    case 809u: goto L_08A6790C;
    case 810u: goto L_08A67918;
    case 811u: goto L_08A6793C;
    case 812u: goto L_08A67954;
    case 813u: goto L_08A67970;
    case 814u: goto L_08A67974;
    case 815u: goto L_08A6797C;
    case 816u: goto L_08A67998;
    case 817u: goto L_08A679A0;
    case 818u: goto L_08A679BC;
    case 819u: goto L_08A679C4;
    case 820u: goto L_08A679E0;
    case 821u: goto L_08A679E8;
    case 822u: goto L_08A67A04;
    case 823u: goto L_08A67A0C;
    case 824u: goto L_08A67A28;
    case 825u: goto L_08A67A30;
    case 826u: goto L_08A67A4C;
    case 827u: goto L_08A67A54;
    case 828u: goto L_08A67A70;
    case 829u: goto L_08A67A78;
    case 830u: goto L_08A67A94;
    case 831u: goto L_08A67A9C;
    case 832u: goto L_08A67AB8;
    case 833u: goto L_08A67AC0;
    case 834u: goto L_08A67AD0;
    case 835u: goto L_08A67AEC;
    case 836u: goto L_08A67AF4;
    case 837u: goto L_08A67B04;
    case 838u: goto L_08A67B20;
    case 839u: goto L_08A67B28;
    case 840u: goto L_08A67B44;
    case 841u: goto L_08A67B4C;
    case 842u: goto L_08A67B60;
    case 843u: goto L_08A67B6C;
    case 844u: goto L_08A67B90;
    case 845u: goto L_08A67BA8;
    case 846u: goto L_08A67BC4;
    case 847u: goto L_08A67BC8;
    case 848u: goto L_08A67BD0;
    case 849u: goto L_08A67BEC;
    case 850u: goto L_08A67BF4;
    case 851u: goto L_08A67C10;
    case 852u: goto L_08A67C18;
    case 853u: goto L_08A67C34;
    case 854u: goto L_08A67C3C;
    case 855u: goto L_08A67C58;
    case 856u: goto L_08A67C60;
    case 857u: goto L_08A67C7C;
    case 858u: goto L_08A67C84;
    case 859u: goto L_08A67CA0;
    case 860u: goto L_08A67CA8;
    case 861u: goto L_08A67CC4;
    case 862u: goto L_08A67CCC;
    case 863u: goto L_08A67CE8;
    case 864u: goto L_08A67CF0;
    case 865u: goto L_08A67D0C;
    case 866u: goto L_08A67D14;
    case 867u: goto L_08A67D30;
    case 868u: goto L_08A67D38;
    case 869u: goto L_08A67D54;
    case 870u: goto L_08A67D5C;
    case 871u: goto L_08A67D78;
    case 872u: goto L_08A67D80;
    case 873u: goto L_08A67D9C;
    case 874u: goto L_08A67DA4;
    case 875u: goto L_08A67DC0;
    case 876u: goto L_08A67DC8;
    case 877u: goto L_08A67DE4;
    case 878u: goto L_08A67DEC;
    case 879u: goto L_08A67E00;
    case 880u: goto L_08A67E0C;
    case 881u: goto L_08A67E30;
    case 882u: goto L_08A67E48;
    case 883u: goto L_08A67E64;
    case 884u: goto L_08A67E68;
    case 885u: goto L_08A67E70;
    case 886u: goto L_08A67E8C;
    case 887u: goto L_08A67E94;
    case 888u: goto L_08A67EB0;
    case 889u: goto L_08A67EB8;
    case 890u: goto L_08A67ED4;
    case 891u: goto L_08A67EDC;
    case 892u: goto L_08A67EF8;
    case 893u: goto L_08A67F00;
    case 894u: goto L_08A67F1C;
    case 895u: goto L_08A67F24;
    case 896u: goto L_08A67F40;
    case 897u: goto L_08A67F48;
    case 898u: goto L_08A67F64;
    case 899u: goto L_08A67F6C;
    case 900u: goto L_08A67F88;
    case 901u: goto L_08A67F90;
    case 902u: goto L_08A67FAC;
    case 903u: goto L_08A67FB4;
    case 904u: goto L_08A67FC4;
    case 905u: goto L_08A67FE0;
    case 906u: goto L_08A67FE8;
    case 907u: goto L_08A67FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A64000:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64010u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64010u) goto L_08A64010;
    return;
L_08A64010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 840u, 0x08A63E3Cu>(ctx, &aot_mem); return;
      }
      goto L_08A64018;
    }
L_08A64018:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64034u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64034u) goto L_08A64034;
    return;
L_08A64034:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 840u, 0x08A63E3Cu>(ctx, &aot_mem); return;
      }
      goto L_08A6403C;
    }
L_08A6403C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64058u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64058u) goto L_08A64058;
    return;
L_08A64058:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 840u, 0x08A63E3Cu>(ctx, &aot_mem); return;
      }
      goto L_08A64060;
    }
L_08A64060:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6407Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6407Cu) goto L_08A6407C;
    return;
L_08A6407C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 840u, 0x08A63E3Cu>(ctx, &aot_mem); return;
      }
      goto L_08A64084;
    }
L_08A64084:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A64098u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A64098u) goto L_08A64098;
    return;
L_08A64098:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A640A4:
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
          goto L_08A642EC;
      }
      goto L_08A640C8;
    }
L_08A640C8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(27560)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A640E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1026u);
    ctx.gpr[31] = (0x08A640FCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A640FCu) goto L_08A640FC;
    return;
L_08A640FC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A64100;
L_08A64100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64300;
      }
      goto L_08A64108;
    }
L_08A64108:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1034u);
    ctx.gpr[31] = (0x08A64124u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64124u) goto L_08A64124;
    return;
L_08A64124:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64100;
      }
      goto L_08A6412C;
    }
L_08A6412C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1024u);
    ctx.gpr[31] = (0x08A64148u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64148u) goto L_08A64148;
    return;
L_08A64148:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64100;
      }
      goto L_08A64150;
    }
L_08A64150:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1013u);
    ctx.gpr[31] = (0x08A6416Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6416Cu) goto L_08A6416C;
    return;
L_08A6416C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64100;
      }
      goto L_08A64174;
    }
L_08A64174:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1020u);
    ctx.gpr[31] = (0x08A64190u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64190u) goto L_08A64190;
    return;
L_08A64190:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64100;
      }
      goto L_08A64198;
    }
L_08A64198:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1016u);
    ctx.gpr[31] = (0x08A641B4u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A641B4u) goto L_08A641B4;
    return;
L_08A641B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64100;
      }
      goto L_08A641BC;
    }
L_08A641BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1022u);
    ctx.gpr[31] = (0x08A641D8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A641D8u) goto L_08A641D8;
    return;
L_08A641D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64100;
      }
      goto L_08A641E0;
    }
L_08A641E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A641FCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A641FCu) goto L_08A641FC;
    return;
L_08A641FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64100;
      }
      goto L_08A64204;
    }
L_08A64204:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1029u);
    ctx.gpr[31] = (0x08A64220u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64220u) goto L_08A64220;
    return;
L_08A64220:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64100;
      }
      goto L_08A64228;
    }
L_08A64228:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1031u);
    ctx.gpr[31] = (0x08A64244u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64244u) goto L_08A64244;
    return;
L_08A64244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64100;
      }
      goto L_08A6424C;
    }
L_08A6424C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64268u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64268u) goto L_08A64268;
    return;
L_08A64268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64100;
      }
      goto L_08A64270;
    }
L_08A64270:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6428Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6428Cu) goto L_08A6428C;
    return;
L_08A6428C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64100;
      }
      goto L_08A64294;
    }
L_08A64294:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A642B0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A642B0u) goto L_08A642B0;
    return;
L_08A642B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64100;
      }
      goto L_08A642B8;
    }
L_08A642B8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A642D4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A642D4u) goto L_08A642D4;
    return;
L_08A642D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64100;
      }
      goto L_08A642DC;
    }
L_08A642DC:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A64100;
      }
      goto L_08A642EC;
    }
L_08A642EC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A64300u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A64300u) goto L_08A64300;
    return;
L_08A64300:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6430C:
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
          goto L_08A64530;
      }
      goto L_08A64330;
    }
L_08A64330:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(27720)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64348:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2317u);
    ctx.gpr[31] = (0x08A64364u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64364u) goto L_08A64364;
    return;
L_08A64364:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A64368;
L_08A64368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64544;
      }
      goto L_08A64370;
    }
L_08A64370:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2315u);
    ctx.gpr[31] = (0x08A6438Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6438Cu) goto L_08A6438C;
    return;
L_08A6438C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64368;
      }
      goto L_08A64394;
    }
L_08A64394:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2304u);
    ctx.gpr[31] = (0x08A643B0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A643B0u) goto L_08A643B0;
    return;
L_08A643B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64368;
      }
      goto L_08A643B8;
    }
L_08A643B8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2311u);
    ctx.gpr[31] = (0x08A643D4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A643D4u) goto L_08A643D4;
    return;
L_08A643D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64368;
      }
      goto L_08A643DC;
    }
L_08A643DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2307u);
    ctx.gpr[31] = (0x08A643F8u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A643F8u) goto L_08A643F8;
    return;
L_08A643F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64368;
      }
      goto L_08A64400;
    }
L_08A64400:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2313u);
    ctx.gpr[31] = (0x08A6441Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6441Cu) goto L_08A6441C;
    return;
L_08A6441C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64368;
      }
      goto L_08A64424;
    }
L_08A64424:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64440u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64440u) goto L_08A64440;
    return;
L_08A64440:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64368;
      }
      goto L_08A64448;
    }
L_08A64448:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2320u);
    ctx.gpr[31] = (0x08A64464u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64464u) goto L_08A64464;
    return;
L_08A64464:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64368;
      }
      goto L_08A6446C;
    }
L_08A6446C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2322u);
    ctx.gpr[31] = (0x08A64488u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64488u) goto L_08A64488;
    return;
L_08A64488:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64368;
      }
      goto L_08A64490;
    }
L_08A64490:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A644ACu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A644ACu) goto L_08A644AC;
    return;
L_08A644AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64368;
      }
      goto L_08A644B4;
    }
L_08A644B4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A644D0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A644D0u) goto L_08A644D0;
    return;
L_08A644D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64368;
      }
      goto L_08A644D8;
    }
L_08A644D8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A644F4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A644F4u) goto L_08A644F4;
    return;
L_08A644F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64368;
      }
      goto L_08A644FC;
    }
L_08A644FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64518u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64518u) goto L_08A64518;
    return;
L_08A64518:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64368;
      }
      goto L_08A64520;
    }
L_08A64520:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A64368;
      }
      goto L_08A64530;
    }
L_08A64530:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A64544u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A64544u) goto L_08A64544;
    return;
L_08A64544:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64550:
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
          goto L_08A64798;
      }
      goto L_08A64574;
    }
L_08A64574:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(27880)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6458C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2341u);
    ctx.gpr[31] = (0x08A645A8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A645A8u) goto L_08A645A8;
    return;
L_08A645A8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A645AC;
L_08A645AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A647AC;
      }
      goto L_08A645B4;
    }
L_08A645B4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2346u);
    ctx.gpr[31] = (0x08A645D0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A645D0u) goto L_08A645D0;
    return;
L_08A645D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A645AC;
      }
      goto L_08A645D8;
    }
L_08A645D8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2336u);
    ctx.gpr[31] = (0x08A645F4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A645F4u) goto L_08A645F4;
    return;
L_08A645F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A645AC;
      }
      goto L_08A645FC;
    }
L_08A645FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2325u);
    ctx.gpr[31] = (0x08A64618u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64618u) goto L_08A64618;
    return;
L_08A64618:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A645AC;
      }
      goto L_08A64620;
    }
L_08A64620:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2332u);
    ctx.gpr[31] = (0x08A6463Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6463Cu) goto L_08A6463C;
    return;
L_08A6463C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A645AC;
      }
      goto L_08A64644;
    }
L_08A64644:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2328u);
    ctx.gpr[31] = (0x08A64660u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64660u) goto L_08A64660;
    return;
L_08A64660:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A645AC;
      }
      goto L_08A64668;
    }
L_08A64668:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2334u);
    ctx.gpr[31] = (0x08A64684u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64684u) goto L_08A64684;
    return;
L_08A64684:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A645AC;
      }
      goto L_08A6468C;
    }
L_08A6468C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2338u);
    ctx.gpr[31] = (0x08A646A8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A646A8u) goto L_08A646A8;
    return;
L_08A646A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A645AC;
      }
      goto L_08A646B0;
    }
L_08A646B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A646CCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A646CCu) goto L_08A646CC;
    return;
L_08A646CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A645AC;
      }
      goto L_08A646D4;
    }
L_08A646D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A646F0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A646F0u) goto L_08A646F0;
    return;
L_08A646F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A645AC;
      }
      goto L_08A646F8;
    }
L_08A646F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2343u);
    ctx.gpr[31] = (0x08A64714u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64714u) goto L_08A64714;
    return;
L_08A64714:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A645AC;
      }
      goto L_08A6471C;
    }
L_08A6471C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64738u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64738u) goto L_08A64738;
    return;
L_08A64738:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A645AC;
      }
      goto L_08A64740;
    }
L_08A64740:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6475Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6475Cu) goto L_08A6475C;
    return;
L_08A6475C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A645AC;
      }
      goto L_08A64764;
    }
L_08A64764:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64780u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64780u) goto L_08A64780;
    return;
L_08A64780:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A645AC;
      }
      goto L_08A64788;
    }
L_08A64788:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A645AC;
      }
      goto L_08A64798;
    }
L_08A64798:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A647ACu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A647ACu) goto L_08A647AC;
    return;
L_08A647AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A647B8:
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
          goto L_08A649EC;
      }
      goto L_08A647DC;
    }
L_08A647DC:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28040)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A647F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2366u);
    ctx.gpr[31] = (0x08A64810u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64810u) goto L_08A64810;
    return;
L_08A64810:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A64814;
L_08A64814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64A00;
      }
      goto L_08A6481C;
    }
L_08A6481C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2364u);
    ctx.gpr[31] = (0x08A64838u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64838u) goto L_08A64838;
    return;
L_08A64838:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64814;
      }
      goto L_08A64840;
    }
L_08A64840:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2357u);
    ctx.gpr[31] = (0x08A6485Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6485Cu) goto L_08A6485C;
    return;
L_08A6485C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64814;
      }
      goto L_08A64864;
    }
L_08A64864:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2347u);
    ctx.gpr[31] = (0x08A64880u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64880u) goto L_08A64880;
    return;
L_08A64880:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64814;
      }
      goto L_08A64888;
    }
L_08A64888:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2353u);
    ctx.gpr[31] = (0x08A648A4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A648A4u) goto L_08A648A4;
    return;
L_08A648A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64814;
      }
      goto L_08A648AC;
    }
L_08A648AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2350u);
    ctx.gpr[31] = (0x08A648C8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A648C8u) goto L_08A648C8;
    return;
L_08A648C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64814;
      }
      goto L_08A648D0;
    }
L_08A648D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2355u);
    ctx.gpr[31] = (0x08A648ECu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A648ECu) goto L_08A648EC;
    return;
L_08A648EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64814;
      }
      goto L_08A648F4;
    }
L_08A648F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64910u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64910u) goto L_08A64910;
    return;
L_08A64910:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64814;
      }
      goto L_08A64918;
    }
L_08A64918:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2359u);
    ctx.gpr[31] = (0x08A64934u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64934u) goto L_08A64934;
    return;
L_08A64934:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64814;
      }
      goto L_08A6493C;
    }
L_08A6493C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64958u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64958u) goto L_08A64958;
    return;
L_08A64958:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64814;
      }
      goto L_08A64960;
    }
L_08A64960:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2362u);
    ctx.gpr[31] = (0x08A6497Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6497Cu) goto L_08A6497C;
    return;
L_08A6497C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64814;
      }
      goto L_08A64984;
    }
L_08A64984:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A649A0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A649A0u) goto L_08A649A0;
    return;
L_08A649A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64814;
      }
      goto L_08A649A8;
    }
L_08A649A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A649C4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A649C4u) goto L_08A649C4;
    return;
L_08A649C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64814;
      }
      goto L_08A649CC;
    }
L_08A649CC:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A64814;
      }
      goto L_08A649DC;
    }
L_08A649DC:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A64814;
      }
      goto L_08A649EC;
    }
L_08A649EC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A64A00u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A64A00u) goto L_08A64A00;
    return;
L_08A64A00:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64A0C:
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
          goto L_08A64C9C;
      }
      goto L_08A64A30;
    }
L_08A64A30:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28200)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64A48:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2380u);
    ctx.gpr[31] = (0x08A64A64u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64A64u) goto L_08A64A64;
    return;
L_08A64A64:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A64A68;
L_08A64A68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64CB0;
      }
      goto L_08A64A70;
    }
L_08A64A70:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2370u);
    ctx.gpr[31] = (0x08A64A8Cu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64A8Cu) goto L_08A64A8C;
    return;
L_08A64A8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64A68;
      }
      goto L_08A64A94;
    }
L_08A64A94:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2378u);
    ctx.gpr[31] = (0x08A64AB0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64AB0u) goto L_08A64AB0;
    return;
L_08A64AB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64A68;
      }
      goto L_08A64AB8;
    }
L_08A64AB8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2367u);
    ctx.gpr[31] = (0x08A64AD4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64AD4u) goto L_08A64AD4;
    return;
L_08A64AD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64A68;
      }
      goto L_08A64ADC;
    }
L_08A64ADC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2374u);
    ctx.gpr[31] = (0x08A64AF8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64AF8u) goto L_08A64AF8;
    return;
L_08A64AF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64A68;
      }
      goto L_08A64B00;
    }
L_08A64B00:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2376u);
    ctx.gpr[31] = (0x08A64B1Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64B1Cu) goto L_08A64B1C;
    return;
L_08A64B1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64A68;
      }
      goto L_08A64B24;
    }
L_08A64B24:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64B40u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64B40u) goto L_08A64B40;
    return;
L_08A64B40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64A68;
      }
      goto L_08A64B48;
    }
L_08A64B48:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64B64u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64B64u) goto L_08A64B64;
    return;
L_08A64B64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64A68;
      }
      goto L_08A64B6C;
    }
L_08A64B6C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2383u);
    ctx.gpr[31] = (0x08A64B88u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64B88u) goto L_08A64B88;
    return;
L_08A64B88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64A68;
      }
      goto L_08A64B90;
    }
L_08A64B90:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2385u);
    ctx.gpr[31] = (0x08A64BACu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64BACu) goto L_08A64BAC;
    return;
L_08A64BAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64A68;
      }
      goto L_08A64BB4;
    }
L_08A64BB4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64BD0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64BD0u) goto L_08A64BD0;
    return;
L_08A64BD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64A68;
      }
      goto L_08A64BD8;
    }
L_08A64BD8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64BF4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64BF4u) goto L_08A64BF4;
    return;
L_08A64BF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64A68;
      }
      goto L_08A64BFC;
    }
L_08A64BFC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64C18u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64C18u) goto L_08A64C18;
    return;
L_08A64C18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64A68;
      }
      goto L_08A64C20;
    }
L_08A64C20:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64C3Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64C3Cu) goto L_08A64C3C;
    return;
L_08A64C3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64A68;
      }
      goto L_08A64C44;
    }
L_08A64C44:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64C60u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64C60u) goto L_08A64C60;
    return;
L_08A64C60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64A68;
      }
      goto L_08A64C68;
    }
L_08A64C68:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2388u);
    ctx.gpr[31] = (0x08A64C84u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64C84u) goto L_08A64C84;
    return;
L_08A64C84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64A68;
      }
      goto L_08A64C8C;
    }
L_08A64C8C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A64A68;
      }
      goto L_08A64C9C;
    }
L_08A64C9C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A64CB0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A64CB0u) goto L_08A64CB0;
    return;
L_08A64CB0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64CBC:
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
          goto L_08A64F04;
      }
      goto L_08A64CE0;
    }
L_08A64CE0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28360)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64CF8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1048u);
    ctx.gpr[31] = (0x08A64D14u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64D14u) goto L_08A64D14;
    return;
L_08A64D14:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A64D18;
L_08A64D18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64F18;
      }
      goto L_08A64D20;
    }
L_08A64D20:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1038u);
    ctx.gpr[31] = (0x08A64D3Cu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64D3Cu) goto L_08A64D3C;
    return;
L_08A64D3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64D18;
      }
      goto L_08A64D44;
    }
L_08A64D44:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1046u);
    ctx.gpr[31] = (0x08A64D60u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64D60u) goto L_08A64D60;
    return;
L_08A64D60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64D18;
      }
      goto L_08A64D68;
    }
L_08A64D68:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1035u);
    ctx.gpr[31] = (0x08A64D84u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64D84u) goto L_08A64D84;
    return;
L_08A64D84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64D18;
      }
      goto L_08A64D8C;
    }
L_08A64D8C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1042u);
    ctx.gpr[31] = (0x08A64DA8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64DA8u) goto L_08A64DA8;
    return;
L_08A64DA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64D18;
      }
      goto L_08A64DB0;
    }
L_08A64DB0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1044u);
    ctx.gpr[31] = (0x08A64DCCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64DCCu) goto L_08A64DCC;
    return;
L_08A64DCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64D18;
      }
      goto L_08A64DD4;
    }
L_08A64DD4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64DF0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64DF0u) goto L_08A64DF0;
    return;
L_08A64DF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64D18;
      }
      goto L_08A64DF8;
    }
L_08A64DF8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1051u);
    ctx.gpr[31] = (0x08A64E14u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64E14u) goto L_08A64E14;
    return;
L_08A64E14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64D18;
      }
      goto L_08A64E1C;
    }
L_08A64E1C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1053u);
    ctx.gpr[31] = (0x08A64E38u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64E38u) goto L_08A64E38;
    return;
L_08A64E38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64D18;
      }
      goto L_08A64E40;
    }
L_08A64E40:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64E5Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64E5Cu) goto L_08A64E5C;
    return;
L_08A64E5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64D18;
      }
      goto L_08A64E64;
    }
L_08A64E64:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64E80u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64E80u) goto L_08A64E80;
    return;
L_08A64E80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64D18;
      }
      goto L_08A64E88;
    }
L_08A64E88:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64EA4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64EA4u) goto L_08A64EA4;
    return;
L_08A64EA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64D18;
      }
      goto L_08A64EAC;
    }
L_08A64EAC:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A64D18;
      }
      goto L_08A64EBC;
    }
L_08A64EBC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1056u);
    ctx.gpr[31] = (0x08A64ED8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64ED8u) goto L_08A64ED8;
    return;
L_08A64ED8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64D18;
      }
      goto L_08A64EE0;
    }
L_08A64EE0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A64EFCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64EFCu) goto L_08A64EFC;
    return;
L_08A64EFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64D18;
      }
      goto L_08A64F04;
    }
L_08A64F04:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A64F18u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A64F18u) goto L_08A64F18;
    return;
L_08A64F18:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64F24:
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
          goto L_08A651C8;
      }
      goto L_08A64F48;
    }
L_08A64F48:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28520)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64F60:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3778u);
    ctx.gpr[31] = (0x08A64F7Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64F7Cu) goto L_08A64F7C;
    return;
L_08A64F7C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A64F80;
L_08A64F80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A651DC;
      }
      goto L_08A64F88;
    }
L_08A64F88:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3791u);
    ctx.gpr[31] = (0x08A64FA4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64FA4u) goto L_08A64FA4;
    return;
L_08A64FA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64F80;
      }
      goto L_08A64FAC;
    }
L_08A64FAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3794u);
    ctx.gpr[31] = (0x08A64FC8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64FC8u) goto L_08A64FC8;
    return;
L_08A64FC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64F80;
      }
      goto L_08A64FD0;
    }
L_08A64FD0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3789u);
    ctx.gpr[31] = (0x08A64FECu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A64FECu) goto L_08A64FEC;
    return;
L_08A64FEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64F80;
      }
      goto L_08A64FF4;
    }
L_08A64FF4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3785u);
    ctx.gpr[31] = (0x08A65010u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65010u) goto L_08A65010;
    return;
L_08A65010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64F80;
      }
      goto L_08A65018;
    }
L_08A65018:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3781u);
    ctx.gpr[31] = (0x08A65034u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65034u) goto L_08A65034;
    return;
L_08A65034:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64F80;
      }
      goto L_08A6503C;
    }
L_08A6503C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3787u);
    ctx.gpr[31] = (0x08A65058u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65058u) goto L_08A65058;
    return;
L_08A65058:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64F80;
      }
      goto L_08A65060;
    }
L_08A65060:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6507Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6507Cu) goto L_08A6507C;
    return;
L_08A6507C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64F80;
      }
      goto L_08A65084;
    }
L_08A65084:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A650A0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A650A0u) goto L_08A650A0;
    return;
L_08A650A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64F80;
      }
      goto L_08A650A8;
    }
L_08A650A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A650C4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A650C4u) goto L_08A650C4;
    return;
L_08A650C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64F80;
      }
      goto L_08A650CC;
    }
L_08A650CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3796u);
    ctx.gpr[31] = (0x08A650E8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A650E8u) goto L_08A650E8;
    return;
L_08A650E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64F80;
      }
      goto L_08A650F0;
    }
L_08A650F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6510Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6510Cu) goto L_08A6510C;
    return;
L_08A6510C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64F80;
      }
      goto L_08A65114;
    }
L_08A65114:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65130u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65130u) goto L_08A65130;
    return;
L_08A65130:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64F80;
      }
      goto L_08A65138;
    }
L_08A65138:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65154u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65154u) goto L_08A65154;
    return;
L_08A65154:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64F80;
      }
      goto L_08A6515C;
    }
L_08A6515C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65178u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65178u) goto L_08A65178;
    return;
L_08A65178:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64F80;
      }
      goto L_08A65180;
    }
L_08A65180:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3799u);
    ctx.gpr[31] = (0x08A6519Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6519Cu) goto L_08A6519C;
    return;
L_08A6519C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64F80;
      }
      goto L_08A651A4;
    }
L_08A651A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A651C0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A651C0u) goto L_08A651C0;
    return;
L_08A651C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A64F80;
      }
      goto L_08A651C8;
    }
L_08A651C8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A651DCu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A651DCu) goto L_08A651DC;
    return;
L_08A651DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A651E8:
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
          goto L_08A6543C;
      }
      goto L_08A6520C;
    }
L_08A6520C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28680)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A65224:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3823u);
    ctx.gpr[31] = (0x08A65240u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65240u) goto L_08A65240;
    return;
L_08A65240:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A65244;
L_08A65244:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65450;
      }
      goto L_08A6524C;
    }
L_08A6524C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3821u);
    ctx.gpr[31] = (0x08A65268u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65268u) goto L_08A65268;
    return;
L_08A65268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65244;
      }
      goto L_08A65270;
    }
L_08A65270:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3816u);
    ctx.gpr[31] = (0x08A6528Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6528Cu) goto L_08A6528C;
    return;
L_08A6528C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65244;
      }
      goto L_08A65294;
    }
L_08A65294:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3803u);
    ctx.gpr[31] = (0x08A652B0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A652B0u) goto L_08A652B0;
    return;
L_08A652B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65244;
      }
      goto L_08A652B8;
    }
L_08A652B8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3812u);
    ctx.gpr[31] = (0x08A652D4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A652D4u) goto L_08A652D4;
    return;
L_08A652D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65244;
      }
      goto L_08A652DC;
    }
L_08A652DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3808u);
    ctx.gpr[31] = (0x08A652F8u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A652F8u) goto L_08A652F8;
    return;
L_08A652F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65244;
      }
      goto L_08A65300;
    }
L_08A65300:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3814u);
    ctx.gpr[31] = (0x08A6531Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6531Cu) goto L_08A6531C;
    return;
L_08A6531C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65244;
      }
      goto L_08A65324;
    }
L_08A65324:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65340u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65340u) goto L_08A65340;
    return;
L_08A65340:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65244;
      }
      goto L_08A65348;
    }
L_08A65348:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3818u);
    ctx.gpr[31] = (0x08A65364u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65364u) goto L_08A65364;
    return;
L_08A65364:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65244;
      }
      goto L_08A6536C;
    }
L_08A6536C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65388u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65388u) goto L_08A65388;
    return;
L_08A65388:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65244;
      }
      goto L_08A65390;
    }
L_08A65390:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A653ACu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A653ACu) goto L_08A653AC;
    return;
L_08A653AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65244;
      }
      goto L_08A653B4;
    }
L_08A653B4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3806u);
    ctx.gpr[31] = (0x08A653D0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A653D0u) goto L_08A653D0;
    return;
L_08A653D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65244;
      }
      goto L_08A653D8;
    }
L_08A653D8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A653F4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A653F4u) goto L_08A653F4;
    return;
L_08A653F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65244;
      }
      goto L_08A653FC;
    }
L_08A653FC:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A65244;
      }
      goto L_08A6540C;
    }
L_08A6540C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A65244;
      }
      goto L_08A6541C;
    }
L_08A6541C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A65244;
      }
      goto L_08A6542C;
    }
L_08A6542C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A65244;
      }
      goto L_08A6543C;
    }
L_08A6543C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A65450u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A65450u) goto L_08A65450;
    return;
L_08A65450:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6545C:
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
          goto L_08A6565C;
      }
      goto L_08A65480;
    }
L_08A65480:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28840)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A65498:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5478u);
    ctx.gpr[31] = (0x08A654B4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A654B4u) goto L_08A654B4;
    return;
L_08A654B4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A654B8;
L_08A654B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65670;
      }
      goto L_08A654C0;
    }
L_08A654C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5476u);
    ctx.gpr[31] = (0x08A654DCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A654DCu) goto L_08A654DC;
    return;
L_08A654DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A654B8;
      }
      goto L_08A654E4;
    }
L_08A654E4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5465u);
    ctx.gpr[31] = (0x08A65500u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65500u) goto L_08A65500;
    return;
L_08A65500:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A654B8;
      }
      goto L_08A65508;
    }
L_08A65508:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5472u);
    ctx.gpr[31] = (0x08A65524u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65524u) goto L_08A65524;
    return;
L_08A65524:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A654B8;
      }
      goto L_08A6552C;
    }
L_08A6552C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5468u);
    ctx.gpr[31] = (0x08A65548u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65548u) goto L_08A65548;
    return;
L_08A65548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A654B8;
      }
      goto L_08A65550;
    }
L_08A65550:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5474u);
    ctx.gpr[31] = (0x08A6556Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6556Cu) goto L_08A6556C;
    return;
L_08A6556C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A654B8;
      }
      goto L_08A65574;
    }
L_08A65574:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65590u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65590u) goto L_08A65590;
    return;
L_08A65590:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A654B8;
      }
      goto L_08A65598;
    }
L_08A65598:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5481u);
    ctx.gpr[31] = (0x08A655B4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A655B4u) goto L_08A655B4;
    return;
L_08A655B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A654B8;
      }
      goto L_08A655BC;
    }
L_08A655BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5483u);
    ctx.gpr[31] = (0x08A655D8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A655D8u) goto L_08A655D8;
    return;
L_08A655D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A654B8;
      }
      goto L_08A655E0;
    }
L_08A655E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A655FCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A655FCu) goto L_08A655FC;
    return;
L_08A655FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A654B8;
      }
      goto L_08A65604;
    }
L_08A65604:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65620u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65620u) goto L_08A65620;
    return;
L_08A65620:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A654B8;
      }
      goto L_08A65628;
    }
L_08A65628:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5486u);
    ctx.gpr[31] = (0x08A65644u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65644u) goto L_08A65644;
    return;
L_08A65644:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A654B8;
      }
      goto L_08A6564C;
    }
L_08A6564C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A654B8;
      }
      goto L_08A6565C;
    }
L_08A6565C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A65670u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A65670u) goto L_08A65670;
    return;
L_08A65670:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6567C:
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
          goto L_08A6587C;
      }
      goto L_08A656A0;
    }
L_08A656A0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(29000)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A656B8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5501u);
    ctx.gpr[31] = (0x08A656D4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A656D4u) goto L_08A656D4;
    return;
L_08A656D4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A656D8;
L_08A656D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65890;
      }
      goto L_08A656E0;
    }
L_08A656E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5490u);
    ctx.gpr[31] = (0x08A656FCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A656FCu) goto L_08A656FC;
    return;
L_08A656FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A656D8;
      }
      goto L_08A65704;
    }
L_08A65704:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5497u);
    ctx.gpr[31] = (0x08A65720u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65720u) goto L_08A65720;
    return;
L_08A65720:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A656D8;
      }
      goto L_08A65728;
    }
L_08A65728:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5493u);
    ctx.gpr[31] = (0x08A65744u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65744u) goto L_08A65744;
    return;
L_08A65744:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A656D8;
      }
      goto L_08A6574C;
    }
L_08A6574C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5499u);
    ctx.gpr[31] = (0x08A65768u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65768u) goto L_08A65768;
    return;
L_08A65768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A656D8;
      }
      goto L_08A65770;
    }
L_08A65770:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5503u);
    ctx.gpr[31] = (0x08A6578Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6578Cu) goto L_08A6578C;
    return;
L_08A6578C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A656D8;
      }
      goto L_08A65794;
    }
L_08A65794:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A657B0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A657B0u) goto L_08A657B0;
    return;
L_08A657B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A656D8;
      }
      goto L_08A657B8;
    }
L_08A657B8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5506u);
    ctx.gpr[31] = (0x08A657D4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A657D4u) goto L_08A657D4;
    return;
L_08A657D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A656D8;
      }
      goto L_08A657DC;
    }
L_08A657DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5508u);
    ctx.gpr[31] = (0x08A657F8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A657F8u) goto L_08A657F8;
    return;
L_08A657F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A656D8;
      }
      goto L_08A65800;
    }
L_08A65800:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6581Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6581Cu) goto L_08A6581C;
    return;
L_08A6581C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A656D8;
      }
      goto L_08A65824;
    }
L_08A65824:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65840u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65840u) goto L_08A65840;
    return;
L_08A65840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A656D8;
      }
      goto L_08A65848;
    }
L_08A65848:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5511u);
    ctx.gpr[31] = (0x08A65864u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65864u) goto L_08A65864;
    return;
L_08A65864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A656D8;
      }
      goto L_08A6586C;
    }
L_08A6586C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A656D8;
      }
      goto L_08A6587C;
    }
L_08A6587C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A65890u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A65890u) goto L_08A65890;
    return;
L_08A65890:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6589C:
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
          goto L_08A65AD0;
      }
      goto L_08A658C0;
    }
L_08A658C0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(29160)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A658D8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 444u);
    ctx.gpr[31] = (0x08A658F4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A658F4u) goto L_08A658F4;
    return;
L_08A658F4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A658F8;
L_08A658F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65AE4;
      }
      goto L_08A65900;
    }
L_08A65900:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 451u);
    ctx.gpr[31] = (0x08A6591Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6591Cu) goto L_08A6591C;
    return;
L_08A6591C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A658F8;
      }
      goto L_08A65924;
    }
L_08A65924:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 441u);
    ctx.gpr[31] = (0x08A65940u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65940u) goto L_08A65940;
    return;
L_08A65940:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A658F8;
      }
      goto L_08A65948;
    }
L_08A65948:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 447u);
    ctx.gpr[31] = (0x08A65964u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65964u) goto L_08A65964;
    return;
L_08A65964:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A658F8;
      }
      goto L_08A6596C;
    }
L_08A6596C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 449u);
    ctx.gpr[31] = (0x08A65988u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65988u) goto L_08A65988;
    return;
L_08A65988:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A658F8;
      }
      goto L_08A65990;
    }
L_08A65990:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A659ACu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A659ACu) goto L_08A659AC;
    return;
L_08A659AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A658F8;
      }
      goto L_08A659B4;
    }
L_08A659B4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 453u);
    ctx.gpr[31] = (0x08A659D0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A659D0u) goto L_08A659D0;
    return;
L_08A659D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A658F8;
      }
      goto L_08A659D8;
    }
L_08A659D8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A659F4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A659F4u) goto L_08A659F4;
    return;
L_08A659F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A658F8;
      }
      goto L_08A659FC;
    }
L_08A659FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 456u);
    ctx.gpr[31] = (0x08A65A18u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65A18u) goto L_08A65A18;
    return;
L_08A65A18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A658F8;
      }
      goto L_08A65A20;
    }
L_08A65A20:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65A3Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65A3Cu) goto L_08A65A3C;
    return;
L_08A65A3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A658F8;
      }
      goto L_08A65A44;
    }
L_08A65A44:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 458u);
    ctx.gpr[31] = (0x08A65A60u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65A60u) goto L_08A65A60;
    return;
L_08A65A60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A658F8;
      }
      goto L_08A65A68;
    }
L_08A65A68:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65A84u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65A84u) goto L_08A65A84;
    return;
L_08A65A84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A658F8;
      }
      goto L_08A65A8C;
    }
L_08A65A8C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A658F8;
      }
      goto L_08A65A9C;
    }
L_08A65A9C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 461u);
    ctx.gpr[31] = (0x08A65AB8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65AB8u) goto L_08A65AB8;
    return;
L_08A65AB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A658F8;
      }
      goto L_08A65AC0;
    }
L_08A65AC0:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A658F8;
      }
      goto L_08A65AD0;
    }
L_08A65AD0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A65AE4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A65AE4u) goto L_08A65AE4;
    return;
L_08A65AE4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A65AF0:
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
          goto L_08A65D38;
      }
      goto L_08A65B14;
    }
L_08A65B14:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(29320)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A65B2C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 480u);
    ctx.gpr[31] = (0x08A65B48u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65B48u) goto L_08A65B48;
    return;
L_08A65B48:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A65B4C;
L_08A65B4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65D4C;
      }
      goto L_08A65B54;
    }
L_08A65B54:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 469u);
    ctx.gpr[31] = (0x08A65B70u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65B70u) goto L_08A65B70;
    return;
L_08A65B70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65B4C;
      }
      goto L_08A65B78;
    }
L_08A65B78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 473u);
    ctx.gpr[31] = (0x08A65B94u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65B94u) goto L_08A65B94;
    return;
L_08A65B94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65B4C;
      }
      goto L_08A65B9C;
    }
L_08A65B9C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 478u);
    ctx.gpr[31] = (0x08A65BB8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65BB8u) goto L_08A65BB8;
    return;
L_08A65BB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65B4C;
      }
      goto L_08A65BC0;
    }
L_08A65BC0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 462u);
    ctx.gpr[31] = (0x08A65BDCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65BDCu) goto L_08A65BDC;
    return;
L_08A65BDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65B4C;
      }
      goto L_08A65BE4;
    }
L_08A65BE4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 465u);
    ctx.gpr[31] = (0x08A65C00u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65C00u) goto L_08A65C00;
    return;
L_08A65C00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65B4C;
      }
      goto L_08A65C08;
    }
L_08A65C08:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 471u);
    ctx.gpr[31] = (0x08A65C24u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65C24u) goto L_08A65C24;
    return;
L_08A65C24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65B4C;
      }
      goto L_08A65C2C;
    }
L_08A65C2C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 475u);
    ctx.gpr[31] = (0x08A65C48u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65C48u) goto L_08A65C48;
    return;
L_08A65C48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65B4C;
      }
      goto L_08A65C50;
    }
L_08A65C50:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65C6Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65C6Cu) goto L_08A65C6C;
    return;
L_08A65C6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65B4C;
      }
      goto L_08A65C74;
    }
L_08A65C74:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65C90u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65C90u) goto L_08A65C90;
    return;
L_08A65C90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65B4C;
      }
      goto L_08A65C98;
    }
L_08A65C98:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65CB4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65CB4u) goto L_08A65CB4;
    return;
L_08A65CB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65B4C;
      }
      goto L_08A65CBC;
    }
L_08A65CBC:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A65B4C;
      }
      goto L_08A65CCC;
    }
L_08A65CCC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 483u);
    ctx.gpr[31] = (0x08A65CE8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65CE8u) goto L_08A65CE8;
    return;
L_08A65CE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65B4C;
      }
      goto L_08A65CF0;
    }
L_08A65CF0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65D0Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65D0Cu) goto L_08A65D0C;
    return;
L_08A65D0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65B4C;
      }
      goto L_08A65D14;
    }
L_08A65D14:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65D30u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65D30u) goto L_08A65D30;
    return;
L_08A65D30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65B4C;
      }
      goto L_08A65D38;
    }
L_08A65D38:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A65D4Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A65D4Cu) goto L_08A65D4C;
    return;
L_08A65D4C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A65D58:
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
          goto L_08A65F68;
      }
      goto L_08A65D7C;
    }
L_08A65D7C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(29480)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A65D94:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 504u);
    ctx.gpr[31] = (0x08A65DB0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65DB0u) goto L_08A65DB0;
    return;
L_08A65DB0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A65DB4;
L_08A65DB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65F7C;
      }
      goto L_08A65DBC;
    }
L_08A65DBC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 492u);
    ctx.gpr[31] = (0x08A65DD8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65DD8u) goto L_08A65DD8;
    return;
L_08A65DD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65DB4;
      }
      goto L_08A65DE0;
    }
L_08A65DE0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 496u);
    ctx.gpr[31] = (0x08A65DFCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65DFCu) goto L_08A65DFC;
    return;
L_08A65DFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65DB4;
      }
      goto L_08A65E04;
    }
L_08A65E04:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 484u);
    ctx.gpr[31] = (0x08A65E20u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65E20u) goto L_08A65E20;
    return;
L_08A65E20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65DB4;
      }
      goto L_08A65E28;
    }
L_08A65E28:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 487u);
    ctx.gpr[31] = (0x08A65E44u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65E44u) goto L_08A65E44;
    return;
L_08A65E44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65DB4;
      }
      goto L_08A65E4C;
    }
L_08A65E4C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 494u);
    ctx.gpr[31] = (0x08A65E68u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65E68u) goto L_08A65E68;
    return;
L_08A65E68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65DB4;
      }
      goto L_08A65E70;
    }
L_08A65E70:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 498u);
    ctx.gpr[31] = (0x08A65E8Cu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65E8Cu) goto L_08A65E8C;
    return;
L_08A65E8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65DB4;
      }
      goto L_08A65E94;
    }
L_08A65E94:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 502u);
    ctx.gpr[31] = (0x08A65EB0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65EB0u) goto L_08A65EB0;
    return;
L_08A65EB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65DB4;
      }
      goto L_08A65EB8;
    }
L_08A65EB8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65ED4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65ED4u) goto L_08A65ED4;
    return;
L_08A65ED4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65DB4;
      }
      goto L_08A65EDC;
    }
L_08A65EDC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65EF8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65EF8u) goto L_08A65EF8;
    return;
L_08A65EF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65DB4;
      }
      goto L_08A65F00;
    }
L_08A65F00:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A65DB4;
      }
      goto L_08A65F10;
    }
L_08A65F10:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 507u);
    ctx.gpr[31] = (0x08A65F2Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65F2Cu) goto L_08A65F2C;
    return;
L_08A65F2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65DB4;
      }
      goto L_08A65F34;
    }
L_08A65F34:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A65F50u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65F50u) goto L_08A65F50;
    return;
L_08A65F50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65DB4;
      }
      goto L_08A65F58;
    }
L_08A65F58:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A65DB4;
      }
      goto L_08A65F68;
    }
L_08A65F68:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A65F7Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A65F7Cu) goto L_08A65F7C;
    return;
L_08A65F7C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A65F88:
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
          goto L_08A661F4;
      }
      goto L_08A65FAC;
    }
L_08A65FAC:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(29640)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A65FC4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 528u);
    ctx.gpr[31] = (0x08A65FE0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A65FE0u) goto L_08A65FE0;
    return;
L_08A65FE0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A65FE4;
L_08A65FE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66208;
      }
      goto L_08A65FEC;
    }
L_08A65FEC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 525u);
    ctx.gpr[31] = (0x08A66008u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66008u) goto L_08A66008;
    return;
L_08A66008:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65FE4;
      }
      goto L_08A66010;
    }
L_08A66010:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 523u);
    ctx.gpr[31] = (0x08A6602Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6602Cu) goto L_08A6602C;
    return;
L_08A6602C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65FE4;
      }
      goto L_08A66034;
    }
L_08A66034:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 520u);
    ctx.gpr[31] = (0x08A66050u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66050u) goto L_08A66050;
    return;
L_08A66050:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65FE4;
      }
      goto L_08A66058;
    }
L_08A66058:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 514u);
    ctx.gpr[31] = (0x08A66074u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66074u) goto L_08A66074;
    return;
L_08A66074:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65FE4;
      }
      goto L_08A6607C;
    }
L_08A6607C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 518u);
    ctx.gpr[31] = (0x08A66098u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66098u) goto L_08A66098;
    return;
L_08A66098:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65FE4;
      }
      goto L_08A660A0;
    }
L_08A660A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 508u);
    ctx.gpr[31] = (0x08A660BCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A660BCu) goto L_08A660BC;
    return;
L_08A660BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65FE4;
      }
      goto L_08A660C4;
    }
L_08A660C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 511u);
    ctx.gpr[31] = (0x08A660E0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A660E0u) goto L_08A660E0;
    return;
L_08A660E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65FE4;
      }
      goto L_08A660E8;
    }
L_08A660E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 516u);
    ctx.gpr[31] = (0x08A66104u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66104u) goto L_08A66104;
    return;
L_08A66104:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65FE4;
      }
      goto L_08A6610C;
    }
L_08A6610C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66128u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66128u) goto L_08A66128;
    return;
L_08A66128:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65FE4;
      }
      goto L_08A66130;
    }
L_08A66130:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6614Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6614Cu) goto L_08A6614C;
    return;
L_08A6614C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65FE4;
      }
      goto L_08A66154;
    }
L_08A66154:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66170u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66170u) goto L_08A66170;
    return;
L_08A66170:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65FE4;
      }
      goto L_08A66178;
    }
L_08A66178:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66194u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66194u) goto L_08A66194;
    return;
L_08A66194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65FE4;
      }
      goto L_08A6619C;
    }
L_08A6619C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A661B8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A661B8u) goto L_08A661B8;
    return;
L_08A661B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65FE4;
      }
      goto L_08A661C0;
    }
L_08A661C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A661DCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A661DCu) goto L_08A661DC;
    return;
L_08A661DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A65FE4;
      }
      goto L_08A661E4;
    }
L_08A661E4:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A65FE4;
      }
      goto L_08A661F4;
    }
L_08A661F4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A66208u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A66208u) goto L_08A66208;
    return;
L_08A66208:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A66214:
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
          goto L_08A6646C;
      }
      goto L_08A66238;
    }
L_08A66238:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(29800)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A66250:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 532u);
    ctx.gpr[31] = (0x08A6626Cu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6626Cu) goto L_08A6626C;
    return;
L_08A6626C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A66270;
L_08A66270:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66480;
      }
      goto L_08A66278;
    }
L_08A66278:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 546u);
    ctx.gpr[31] = (0x08A66294u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66294u) goto L_08A66294;
    return;
L_08A66294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66270;
      }
      goto L_08A6629C;
    }
L_08A6629C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 551u);
    ctx.gpr[31] = (0x08A662B8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A662B8u) goto L_08A662B8;
    return;
L_08A662B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66270;
      }
      goto L_08A662C0;
    }
L_08A662C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 541u);
    ctx.gpr[31] = (0x08A662DCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A662DCu) goto L_08A662DC;
    return;
L_08A662DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66270;
      }
      goto L_08A662E4;
    }
L_08A662E4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 529u);
    ctx.gpr[31] = (0x08A66300u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66300u) goto L_08A66300;
    return;
L_08A66300:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66270;
      }
      goto L_08A66308;
    }
L_08A66308:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 536u);
    ctx.gpr[31] = (0x08A66324u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66324u) goto L_08A66324;
    return;
L_08A66324:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66270;
      }
      goto L_08A6632C;
    }
L_08A6632C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 538u);
    ctx.gpr[31] = (0x08A66348u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66348u) goto L_08A66348;
    return;
L_08A66348:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66270;
      }
      goto L_08A66350;
    }
L_08A66350:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6636Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6636Cu) goto L_08A6636C;
    return;
L_08A6636C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66270;
      }
      goto L_08A66374;
    }
L_08A66374:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 543u);
    ctx.gpr[31] = (0x08A66390u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66390u) goto L_08A66390;
    return;
L_08A66390:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66270;
      }
      goto L_08A66398;
    }
L_08A66398:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A663B4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A663B4u) goto L_08A663B4;
    return;
L_08A663B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66270;
      }
      goto L_08A663BC;
    }
L_08A663BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A663D8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A663D8u) goto L_08A663D8;
    return;
L_08A663D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66270;
      }
      goto L_08A663E0;
    }
L_08A663E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 548u);
    ctx.gpr[31] = (0x08A663FCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A663FCu) goto L_08A663FC;
    return;
L_08A663FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66270;
      }
      goto L_08A66404;
    }
L_08A66404:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66420u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66420u) goto L_08A66420;
    return;
L_08A66420:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66270;
      }
      goto L_08A66428;
    }
L_08A66428:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A66270;
      }
      goto L_08A66438;
    }
L_08A66438:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A66270;
      }
      goto L_08A66448;
    }
L_08A66448:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66464u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66464u) goto L_08A66464;
    return;
L_08A66464:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66270;
      }
      goto L_08A6646C;
    }
L_08A6646C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A66480u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A66480u) goto L_08A66480;
    return;
L_08A66480:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6648C:
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
          goto L_08A6679C;
      }
      goto L_08A664B0;
    }
L_08A664B0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(29960)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A664C8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 567u);
    ctx.gpr[31] = (0x08A664E4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A664E4u) goto L_08A664E4;
    return;
L_08A664E4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A664E8;
L_08A664E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A667B0;
      }
      goto L_08A664F0;
    }
L_08A664F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 562u);
    ctx.gpr[31] = (0x08A6650Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6650Cu) goto L_08A6650C;
    return;
L_08A6650C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A664E8;
      }
      goto L_08A66514;
    }
L_08A66514:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 552u);
    ctx.gpr[31] = (0x08A66530u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66530u) goto L_08A66530;
    return;
L_08A66530:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A664E8;
      }
      goto L_08A66538;
    }
L_08A66538:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 558u);
    ctx.gpr[31] = (0x08A66554u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66554u) goto L_08A66554;
    return;
L_08A66554:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A664E8;
      }
      goto L_08A6655C;
    }
L_08A6655C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 560u);
    ctx.gpr[31] = (0x08A66578u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66578u) goto L_08A66578;
    return;
L_08A66578:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A664E8;
      }
      goto L_08A66580;
    }
L_08A66580:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 555u);
    ctx.gpr[31] = (0x08A6659Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6659Cu) goto L_08A6659C;
    return;
L_08A6659C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A664E8;
      }
      goto L_08A665A4;
    }
L_08A665A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A665C0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A665C0u) goto L_08A665C0;
    return;
L_08A665C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A664E8;
      }
      goto L_08A665C8;
    }
L_08A665C8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 564u);
    ctx.gpr[31] = (0x08A665E4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A665E4u) goto L_08A665E4;
    return;
L_08A665E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A664E8;
      }
      goto L_08A665EC;
    }
L_08A665EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66608u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66608u) goto L_08A66608;
    return;
L_08A66608:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A664E8;
      }
      goto L_08A66610;
    }
L_08A66610:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6662Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6662Cu) goto L_08A6662C;
    return;
L_08A6662C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A664E8;
      }
      goto L_08A66634;
    }
L_08A66634:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66650u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66650u) goto L_08A66650;
    return;
L_08A66650:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A664E8;
      }
      goto L_08A66658;
    }
L_08A66658:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 569u);
    ctx.gpr[31] = (0x08A66674u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66674u) goto L_08A66674;
    return;
L_08A66674:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A664E8;
      }
      goto L_08A6667C;
    }
L_08A6667C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66698u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66698u) goto L_08A66698;
    return;
L_08A66698:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A664E8;
      }
      goto L_08A666A0;
    }
L_08A666A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A666BCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A666BCu) goto L_08A666BC;
    return;
L_08A666BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A664E8;
      }
      goto L_08A666C4;
    }
L_08A666C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A666E0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A666E0u) goto L_08A666E0;
    return;
L_08A666E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A664E8;
      }
      goto L_08A666E8;
    }
L_08A666E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66704u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66704u) goto L_08A66704;
    return;
L_08A66704:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A664E8;
      }
      goto L_08A6670C;
    }
L_08A6670C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66728u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66728u) goto L_08A66728;
    return;
L_08A66728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A664E8;
      }
      goto L_08A66730;
    }
L_08A66730:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6674Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6674Cu) goto L_08A6674C;
    return;
L_08A6674C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A664E8;
      }
      goto L_08A66754;
    }
L_08A66754:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 572u);
    ctx.gpr[31] = (0x08A66770u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66770u) goto L_08A66770;
    return;
L_08A66770:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A664E8;
      }
      goto L_08A66778;
    }
L_08A66778:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66794u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66794u) goto L_08A66794;
    return;
L_08A66794:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A664E8;
      }
      goto L_08A6679C;
    }
L_08A6679C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A667B0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A667B0u) goto L_08A667B0;
    return;
L_08A667B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A667BC:
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
          goto L_08A66A04;
      }
      goto L_08A667E0;
    }
L_08A667E0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30120)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A667F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2914u);
    ctx.gpr[31] = (0x08A66814u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66814u) goto L_08A66814;
    return;
L_08A66814:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A66818;
L_08A66818:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66A18;
      }
      goto L_08A66820;
    }
L_08A66820:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2907u);
    ctx.gpr[31] = (0x08A6683Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6683Cu) goto L_08A6683C;
    return;
L_08A6683C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66818;
      }
      goto L_08A66844;
    }
L_08A66844:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2899u);
    ctx.gpr[31] = (0x08A66860u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66860u) goto L_08A66860;
    return;
L_08A66860:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66818;
      }
      goto L_08A66868;
    }
L_08A66868:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2912u);
    ctx.gpr[31] = (0x08A66884u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66884u) goto L_08A66884;
    return;
L_08A66884:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66818;
      }
      goto L_08A6688C;
    }
L_08A6688C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2917u);
    ctx.gpr[31] = (0x08A668A8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A668A8u) goto L_08A668A8;
    return;
L_08A668A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66818;
      }
      goto L_08A668B0;
    }
L_08A668B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2896u);
    ctx.gpr[31] = (0x08A668CCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A668CCu) goto L_08A668CC;
    return;
L_08A668CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66818;
      }
      goto L_08A668D4;
    }
L_08A668D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2903u);
    ctx.gpr[31] = (0x08A668F0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A668F0u) goto L_08A668F0;
    return;
L_08A668F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66818;
      }
      goto L_08A668F8;
    }
L_08A668F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2905u);
    ctx.gpr[31] = (0x08A66914u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66914u) goto L_08A66914;
    return;
L_08A66914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66818;
      }
      goto L_08A6691C;
    }
L_08A6691C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2909u);
    ctx.gpr[31] = (0x08A66938u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66938u) goto L_08A66938;
    return;
L_08A66938:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66818;
      }
      goto L_08A66940;
    }
L_08A66940:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6695Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6695Cu) goto L_08A6695C;
    return;
L_08A6695C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66818;
      }
      goto L_08A66964;
    }
L_08A66964:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66980u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66980u) goto L_08A66980;
    return;
L_08A66980:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66818;
      }
      goto L_08A66988;
    }
L_08A66988:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A669A4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A669A4u) goto L_08A669A4;
    return;
L_08A669A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66818;
      }
      goto L_08A669AC;
    }
L_08A669AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A669C8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A669C8u) goto L_08A669C8;
    return;
L_08A669C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66818;
      }
      goto L_08A669D0;
    }
L_08A669D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A669ECu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A669ECu) goto L_08A669EC;
    return;
L_08A669EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66818;
      }
      goto L_08A669F4;
    }
L_08A669F4:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A66818;
      }
      goto L_08A66A04;
    }
L_08A66A04:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A66A18u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A66A18u) goto L_08A66A18;
    return;
L_08A66A18:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A66A24:
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
          goto L_08A66C8C;
      }
      goto L_08A66A48;
    }
L_08A66A48:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30280)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A66A60:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2934u);
    ctx.gpr[31] = (0x08A66A7Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66A7Cu) goto L_08A66A7C;
    return;
L_08A66A7C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A66A80;
L_08A66A80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66CA0;
      }
      goto L_08A66A88;
    }
L_08A66A88:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2939u);
    ctx.gpr[31] = (0x08A66AA4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66AA4u) goto L_08A66AA4;
    return;
L_08A66AA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66A80;
      }
      goto L_08A66AAC;
    }
L_08A66AAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2929u);
    ctx.gpr[31] = (0x08A66AC8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66AC8u) goto L_08A66AC8;
    return;
L_08A66AC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66A80;
      }
      goto L_08A66AD0;
    }
L_08A66AD0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2918u);
    ctx.gpr[31] = (0x08A66AECu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66AECu) goto L_08A66AEC;
    return;
L_08A66AEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66A80;
      }
      goto L_08A66AF4;
    }
L_08A66AF4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2925u);
    ctx.gpr[31] = (0x08A66B10u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66B10u) goto L_08A66B10;
    return;
L_08A66B10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66A80;
      }
      goto L_08A66B18;
    }
L_08A66B18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2921u);
    ctx.gpr[31] = (0x08A66B34u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66B34u) goto L_08A66B34;
    return;
L_08A66B34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66A80;
      }
      goto L_08A66B3C;
    }
L_08A66B3C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2927u);
    ctx.gpr[31] = (0x08A66B58u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66B58u) goto L_08A66B58;
    return;
L_08A66B58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66A80;
      }
      goto L_08A66B60;
    }
L_08A66B60:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2931u);
    ctx.gpr[31] = (0x08A66B7Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66B7Cu) goto L_08A66B7C;
    return;
L_08A66B7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66A80;
      }
      goto L_08A66B84;
    }
L_08A66B84:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66BA0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66BA0u) goto L_08A66BA0;
    return;
L_08A66BA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66A80;
      }
      goto L_08A66BA8;
    }
L_08A66BA8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66BC4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66BC4u) goto L_08A66BC4;
    return;
L_08A66BC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66A80;
      }
      goto L_08A66BCC;
    }
L_08A66BCC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2936u);
    ctx.gpr[31] = (0x08A66BE8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66BE8u) goto L_08A66BE8;
    return;
L_08A66BE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66A80;
      }
      goto L_08A66BF0;
    }
L_08A66BF0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66C0Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66C0Cu) goto L_08A66C0C;
    return;
L_08A66C0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66A80;
      }
      goto L_08A66C14;
    }
L_08A66C14:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A66A80;
      }
      goto L_08A66C24;
    }
L_08A66C24:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66C40u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66C40u) goto L_08A66C40;
    return;
L_08A66C40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66A80;
      }
      goto L_08A66C48;
    }
L_08A66C48:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66C64u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66C64u) goto L_08A66C64;
    return;
L_08A66C64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66A80;
      }
      goto L_08A66C6C;
    }
L_08A66C6C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A66A80;
      }
      goto L_08A66C7C;
    }
L_08A66C7C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A66A80;
      }
      goto L_08A66C8C;
    }
L_08A66C8C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A66CA0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A66CA0u) goto L_08A66CA0;
    return;
L_08A66CA0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A66CAC:
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
          goto L_08A66ED0;
      }
      goto L_08A66CD0;
    }
L_08A66CD0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30440)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A66CE8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4160u);
    ctx.gpr[31] = (0x08A66D04u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66D04u) goto L_08A66D04;
    return;
L_08A66D04:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A66D08;
L_08A66D08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66EE4;
      }
      goto L_08A66D10;
    }
L_08A66D10:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4158u);
    ctx.gpr[31] = (0x08A66D2Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66D2Cu) goto L_08A66D2C;
    return;
L_08A66D2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66D08;
      }
      goto L_08A66D34;
    }
L_08A66D34:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4148u);
    ctx.gpr[31] = (0x08A66D50u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66D50u) goto L_08A66D50;
    return;
L_08A66D50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66D08;
      }
      goto L_08A66D58;
    }
L_08A66D58:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4154u);
    ctx.gpr[31] = (0x08A66D74u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66D74u) goto L_08A66D74;
    return;
L_08A66D74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66D08;
      }
      goto L_08A66D7C;
    }
L_08A66D7C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4151u);
    ctx.gpr[31] = (0x08A66D98u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66D98u) goto L_08A66D98;
    return;
L_08A66D98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66D08;
      }
      goto L_08A66DA0;
    }
L_08A66DA0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4156u);
    ctx.gpr[31] = (0x08A66DBCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66DBCu) goto L_08A66DBC;
    return;
L_08A66DBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66D08;
      }
      goto L_08A66DC4;
    }
L_08A66DC4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66DE0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66DE0u) goto L_08A66DE0;
    return;
L_08A66DE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66D08;
      }
      goto L_08A66DE8;
    }
L_08A66DE8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4162u);
    ctx.gpr[31] = (0x08A66E04u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66E04u) goto L_08A66E04;
    return;
L_08A66E04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66D08;
      }
      goto L_08A66E0C;
    }
L_08A66E0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4164u);
    ctx.gpr[31] = (0x08A66E28u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66E28u) goto L_08A66E28;
    return;
L_08A66E28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66D08;
      }
      goto L_08A66E30;
    }
L_08A66E30:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66E4Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66E4Cu) goto L_08A66E4C;
    return;
L_08A66E4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66D08;
      }
      goto L_08A66E54;
    }
L_08A66E54:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66E70u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66E70u) goto L_08A66E70;
    return;
L_08A66E70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66D08;
      }
      goto L_08A66E78;
    }
L_08A66E78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66E94u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66E94u) goto L_08A66E94;
    return;
L_08A66E94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66D08;
      }
      goto L_08A66E9C;
    }
L_08A66E9C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A66EB8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66EB8u) goto L_08A66EB8;
    return;
L_08A66EB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66D08;
      }
      goto L_08A66EC0;
    }
L_08A66EC0:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A66D08;
      }
      goto L_08A66ED0;
    }
L_08A66ED0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A66EE4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A66EE4u) goto L_08A66EE4;
    return;
L_08A66EE4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A66EF0:
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
          goto L_08A67190;
      }
      goto L_08A66F14;
    }
L_08A66F14:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30600)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A66F2C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4180u);
    ctx.gpr[31] = (0x08A66F48u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66F48u) goto L_08A66F48;
    return;
L_08A66F48:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A66F4C;
L_08A66F4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A671A4;
      }
      goto L_08A66F54;
    }
L_08A66F54:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4188u);
    ctx.gpr[31] = (0x08A66F70u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66F70u) goto L_08A66F70;
    return;
L_08A66F70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66F4C;
      }
      goto L_08A66F78;
    }
L_08A66F78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4178u);
    ctx.gpr[31] = (0x08A66F94u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66F94u) goto L_08A66F94;
    return;
L_08A66F94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66F4C;
      }
      goto L_08A66F9C;
    }
L_08A66F9C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4167u);
    ctx.gpr[31] = (0x08A66FB8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66FB8u) goto L_08A66FB8;
    return;
L_08A66FB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66F4C;
      }
      goto L_08A66FC0;
    }
L_08A66FC0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4174u);
    ctx.gpr[31] = (0x08A66FDCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A66FDCu) goto L_08A66FDC;
    return;
L_08A66FDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66F4C;
      }
      goto L_08A66FE4;
    }
L_08A66FE4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4170u);
    ctx.gpr[31] = (0x08A67000u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67000u) goto L_08A67000;
    return;
L_08A67000:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66F4C;
      }
      goto L_08A67008;
    }
L_08A67008:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4176u);
    ctx.gpr[31] = (0x08A67024u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67024u) goto L_08A67024;
    return;
L_08A67024:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66F4C;
      }
      goto L_08A6702C;
    }
L_08A6702C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67048u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67048u) goto L_08A67048;
    return;
L_08A67048:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66F4C;
      }
      goto L_08A67050;
    }
L_08A67050:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6706Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6706Cu) goto L_08A6706C;
    return;
L_08A6706C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66F4C;
      }
      goto L_08A67074;
    }
L_08A67074:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4183u);
    ctx.gpr[31] = (0x08A67090u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67090u) goto L_08A67090;
    return;
L_08A67090:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66F4C;
      }
      goto L_08A67098;
    }
L_08A67098:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A670B4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A670B4u) goto L_08A670B4;
    return;
L_08A670B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66F4C;
      }
      goto L_08A670BC;
    }
L_08A670BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 4185u);
    ctx.gpr[31] = (0x08A670D8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A670D8u) goto L_08A670D8;
    return;
L_08A670D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66F4C;
      }
      goto L_08A670E0;
    }
L_08A670E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A670FCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A670FCu) goto L_08A670FC;
    return;
L_08A670FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66F4C;
      }
      goto L_08A67104;
    }
L_08A67104:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A66F4C;
      }
      goto L_08A67114;
    }
L_08A67114:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67130u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67130u) goto L_08A67130;
    return;
L_08A67130:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66F4C;
      }
      goto L_08A67138;
    }
L_08A67138:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67154u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67154u) goto L_08A67154;
    return;
L_08A67154:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66F4C;
      }
      goto L_08A6715C;
    }
L_08A6715C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A66F4C;
      }
      goto L_08A6716C;
    }
L_08A6716C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67188u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67188u) goto L_08A67188;
    return;
L_08A67188:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A66F4C;
      }
      goto L_08A67190;
    }
L_08A67190:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A671A4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A671A4u) goto L_08A671A4;
    return;
L_08A671A4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A671B0:
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
          goto L_08A67450;
      }
      goto L_08A671D4;
    }
L_08A671D4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30760)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A671EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1278u);
    ctx.gpr[31] = (0x08A67208u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67208u) goto L_08A67208;
    return;
L_08A67208:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6720C;
L_08A6720C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67464;
      }
      goto L_08A67214;
    }
L_08A67214:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1273u);
    ctx.gpr[31] = (0x08A67230u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67230u) goto L_08A67230;
    return;
L_08A67230:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6720C;
      }
      goto L_08A67238;
    }
L_08A67238:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1268u);
    ctx.gpr[31] = (0x08A67254u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67254u) goto L_08A67254;
    return;
L_08A67254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6720C;
      }
      goto L_08A6725C;
    }
L_08A6725C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1258u);
    ctx.gpr[31] = (0x08A67278u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67278u) goto L_08A67278;
    return;
L_08A67278:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6720C;
      }
      goto L_08A67280;
    }
L_08A67280:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1265u);
    ctx.gpr[31] = (0x08A6729Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6729Cu) goto L_08A6729C;
    return;
L_08A6729C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6720C;
      }
      goto L_08A672A4;
    }
L_08A672A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1261u);
    ctx.gpr[31] = (0x08A672C0u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A672C0u) goto L_08A672C0;
    return;
L_08A672C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6720C;
      }
      goto L_08A672C8;
    }
L_08A672C8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1267u);
    ctx.gpr[31] = (0x08A672E4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A672E4u) goto L_08A672E4;
    return;
L_08A672E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6720C;
      }
      goto L_08A672EC;
    }
L_08A672EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67308u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67308u) goto L_08A67308;
    return;
L_08A67308:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6720C;
      }
      goto L_08A67310;
    }
L_08A67310:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1270u);
    ctx.gpr[31] = (0x08A6732Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6732Cu) goto L_08A6732C;
    return;
L_08A6732C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6720C;
      }
      goto L_08A67334;
    }
L_08A67334:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67350u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67350u) goto L_08A67350;
    return;
L_08A67350:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6720C;
      }
      goto L_08A67358;
    }
L_08A67358:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67374u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67374u) goto L_08A67374;
    return;
L_08A67374:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6720C;
      }
      goto L_08A6737C;
    }
L_08A6737C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67398u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67398u) goto L_08A67398;
    return;
L_08A67398:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6720C;
      }
      goto L_08A673A0;
    }
L_08A673A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1275u);
    ctx.gpr[31] = (0x08A673BCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A673BCu) goto L_08A673BC;
    return;
L_08A673BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6720C;
      }
      goto L_08A673C4;
    }
L_08A673C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A673E0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A673E0u) goto L_08A673E0;
    return;
L_08A673E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6720C;
      }
      goto L_08A673E8;
    }
L_08A673E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67404u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67404u) goto L_08A67404;
    return;
L_08A67404:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6720C;
      }
      goto L_08A6740C;
    }
L_08A6740C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67428u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67428u) goto L_08A67428;
    return;
L_08A67428:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6720C;
      }
      goto L_08A67430;
    }
L_08A67430:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A6720C;
      }
      goto L_08A67440;
    }
L_08A67440:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A6720C;
      }
      goto L_08A67450;
    }
L_08A67450:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A67464u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A67464u) goto L_08A67464;
    return;
L_08A67464:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A67470:
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
          goto L_08A676C8;
      }
      goto L_08A67494;
    }
L_08A67494:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30920)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A674AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1292u);
    ctx.gpr[31] = (0x08A674C8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A674C8u) goto L_08A674C8;
    return;
L_08A674C8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A674CC;
L_08A674CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A676DC;
      }
      goto L_08A674D4;
    }
L_08A674D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1282u);
    ctx.gpr[31] = (0x08A674F0u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A674F0u) goto L_08A674F0;
    return;
L_08A674F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A674CC;
      }
      goto L_08A674F8;
    }
L_08A674F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1290u);
    ctx.gpr[31] = (0x08A67514u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67514u) goto L_08A67514;
    return;
L_08A67514:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A674CC;
      }
      goto L_08A6751C;
    }
L_08A6751C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1279u);
    ctx.gpr[31] = (0x08A67538u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67538u) goto L_08A67538;
    return;
L_08A67538:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A674CC;
      }
      goto L_08A67540;
    }
L_08A67540:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1286u);
    ctx.gpr[31] = (0x08A6755Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6755Cu) goto L_08A6755C;
    return;
L_08A6755C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A674CC;
      }
      goto L_08A67564;
    }
L_08A67564:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1288u);
    ctx.gpr[31] = (0x08A67580u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67580u) goto L_08A67580;
    return;
L_08A67580:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A674CC;
      }
      goto L_08A67588;
    }
L_08A67588:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A675A4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A675A4u) goto L_08A675A4;
    return;
L_08A675A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A674CC;
      }
      goto L_08A675AC;
    }
L_08A675AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A675C8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A675C8u) goto L_08A675C8;
    return;
L_08A675C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A674CC;
      }
      goto L_08A675D0;
    }
L_08A675D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1295u);
    ctx.gpr[31] = (0x08A675ECu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A675ECu) goto L_08A675EC;
    return;
L_08A675EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A674CC;
      }
      goto L_08A675F4;
    }
L_08A675F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1297u);
    ctx.gpr[31] = (0x08A67610u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67610u) goto L_08A67610;
    return;
L_08A67610:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A674CC;
      }
      goto L_08A67618;
    }
L_08A67618:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67634u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67634u) goto L_08A67634;
    return;
L_08A67634:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A674CC;
      }
      goto L_08A6763C;
    }
L_08A6763C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67658u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67658u) goto L_08A67658;
    return;
L_08A67658:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A674CC;
      }
      goto L_08A67660;
    }
L_08A67660:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6767Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6767Cu) goto L_08A6767C;
    return;
L_08A6767C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A674CC;
      }
      goto L_08A67684;
    }
L_08A67684:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A674CC;
      }
      goto L_08A67694;
    }
L_08A67694:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1300u);
    ctx.gpr[31] = (0x08A676B0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A676B0u) goto L_08A676B0;
    return;
L_08A676B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A674CC;
      }
      goto L_08A676B8;
    }
L_08A676B8:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A674CC;
      }
      goto L_08A676C8;
    }
L_08A676C8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A676DCu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A676DCu) goto L_08A676DC;
    return;
L_08A676DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A676E8:
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
          goto L_08A678F8;
      }
      goto L_08A6770C;
    }
L_08A6770C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31080)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A67724:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1304u);
    ctx.gpr[31] = (0x08A67740u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67740u) goto L_08A67740;
    return;
L_08A67740:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A67744;
L_08A67744:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6790C;
      }
      goto L_08A6774C;
    }
L_08A6774C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1312u);
    ctx.gpr[31] = (0x08A67768u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67768u) goto L_08A67768;
    return;
L_08A67768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67744;
      }
      goto L_08A67770;
    }
L_08A67770:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1301u);
    ctx.gpr[31] = (0x08A6778Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6778Cu) goto L_08A6778C;
    return;
L_08A6778C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67744;
      }
      goto L_08A67794;
    }
L_08A67794:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1308u);
    ctx.gpr[31] = (0x08A677B0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A677B0u) goto L_08A677B0;
    return;
L_08A677B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67744;
      }
      goto L_08A677B8;
    }
L_08A677B8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1310u);
    ctx.gpr[31] = (0x08A677D4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A677D4u) goto L_08A677D4;
    return;
L_08A677D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67744;
      }
      goto L_08A677DC;
    }
L_08A677DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1314u);
    ctx.gpr[31] = (0x08A677F8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A677F8u) goto L_08A677F8;
    return;
L_08A677F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67744;
      }
      goto L_08A67800;
    }
L_08A67800:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6781Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A6781Cu) goto L_08A6781C;
    return;
L_08A6781C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67744;
      }
      goto L_08A67824;
    }
L_08A67824:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1317u);
    ctx.gpr[31] = (0x08A67840u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67840u) goto L_08A67840;
    return;
L_08A67840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67744;
      }
      goto L_08A67848;
    }
L_08A67848:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1319u);
    ctx.gpr[31] = (0x08A67864u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67864u) goto L_08A67864;
    return;
L_08A67864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67744;
      }
      goto L_08A6786C;
    }
L_08A6786C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67888u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67888u) goto L_08A67888;
    return;
L_08A67888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67744;
      }
      goto L_08A67890;
    }
L_08A67890:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A678ACu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A678ACu) goto L_08A678AC;
    return;
L_08A678AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67744;
      }
      goto L_08A678B4;
    }
L_08A678B4:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A67744;
      }
      goto L_08A678C4;
    }
L_08A678C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1322u);
    ctx.gpr[31] = (0x08A678E0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A678E0u) goto L_08A678E0;
    return;
L_08A678E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67744;
      }
      goto L_08A678E8;
    }
L_08A678E8:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A67744;
      }
      goto L_08A678F8;
    }
L_08A678F8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6790Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A6790Cu) goto L_08A6790C;
    return;
L_08A6790C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A67918:
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
          goto L_08A67B4C;
      }
      goto L_08A6793C;
    }
L_08A6793C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31240)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A67954:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2070u);
    ctx.gpr[31] = (0x08A67970u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67970u) goto L_08A67970;
    return;
L_08A67970:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A67974;
L_08A67974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67B60;
      }
      goto L_08A6797C;
    }
L_08A6797C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2061u);
    ctx.gpr[31] = (0x08A67998u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67998u) goto L_08A67998;
    return;
L_08A67998:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67974;
      }
      goto L_08A679A0;
    }
L_08A679A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2068u);
    ctx.gpr[31] = (0x08A679BCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A679BCu) goto L_08A679BC;
    return;
L_08A679BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67974;
      }
      goto L_08A679C4;
    }
L_08A679C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2058u);
    ctx.gpr[31] = (0x08A679E0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A679E0u) goto L_08A679E0;
    return;
L_08A679E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67974;
      }
      goto L_08A679E8;
    }
L_08A679E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2064u);
    ctx.gpr[31] = (0x08A67A04u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67A04u) goto L_08A67A04;
    return;
L_08A67A04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67974;
      }
      goto L_08A67A0C;
    }
L_08A67A0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2066u);
    ctx.gpr[31] = (0x08A67A28u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67A28u) goto L_08A67A28;
    return;
L_08A67A28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67974;
      }
      goto L_08A67A30;
    }
L_08A67A30:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67A4Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67A4Cu) goto L_08A67A4C;
    return;
L_08A67A4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67974;
      }
      goto L_08A67A54;
    }
L_08A67A54:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67A70u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67A70u) goto L_08A67A70;
    return;
L_08A67A70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67974;
      }
      goto L_08A67A78;
    }
L_08A67A78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2073u);
    ctx.gpr[31] = (0x08A67A94u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67A94u) goto L_08A67A94;
    return;
L_08A67A94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67974;
      }
      goto L_08A67A9C;
    }
L_08A67A9C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2075u);
    ctx.gpr[31] = (0x08A67AB8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67AB8u) goto L_08A67AB8;
    return;
L_08A67AB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67974;
      }
      goto L_08A67AC0;
    }
L_08A67AC0:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A67974;
      }
      goto L_08A67AD0;
    }
L_08A67AD0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67AECu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67AECu) goto L_08A67AEC;
    return;
L_08A67AEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67974;
      }
      goto L_08A67AF4;
    }
L_08A67AF4:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A67974;
      }
      goto L_08A67B04;
    }
L_08A67B04:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2078u);
    ctx.gpr[31] = (0x08A67B20u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67B20u) goto L_08A67B20;
    return;
L_08A67B20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67974;
      }
      goto L_08A67B28;
    }
L_08A67B28:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67B44u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67B44u) goto L_08A67B44;
    return;
L_08A67B44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67974;
      }
      goto L_08A67B4C;
    }
L_08A67B4C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A67B60u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A67B60u) goto L_08A67B60;
    return;
L_08A67B60:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A67B6C:
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
          goto L_08A67DEC;
      }
      goto L_08A67B90;
    }
L_08A67B90:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31400)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A67BA8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2091u);
    ctx.gpr[31] = (0x08A67BC4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67BC4u) goto L_08A67BC4;
    return;
L_08A67BC4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A67BC8;
L_08A67BC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67E00;
      }
      goto L_08A67BD0;
    }
L_08A67BD0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2082u);
    ctx.gpr[31] = (0x08A67BECu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67BECu) goto L_08A67BEC;
    return;
L_08A67BEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67BC8;
      }
      goto L_08A67BF4;
    }
L_08A67BF4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2089u);
    ctx.gpr[31] = (0x08A67C10u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67C10u) goto L_08A67C10;
    return;
L_08A67C10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67BC8;
      }
      goto L_08A67C18;
    }
L_08A67C18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2079u);
    ctx.gpr[31] = (0x08A67C34u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67C34u) goto L_08A67C34;
    return;
L_08A67C34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67BC8;
      }
      goto L_08A67C3C;
    }
L_08A67C3C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2085u);
    ctx.gpr[31] = (0x08A67C58u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67C58u) goto L_08A67C58;
    return;
L_08A67C58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67BC8;
      }
      goto L_08A67C60;
    }
L_08A67C60:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2087u);
    ctx.gpr[31] = (0x08A67C7Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67C7Cu) goto L_08A67C7C;
    return;
L_08A67C7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67BC8;
      }
      goto L_08A67C84;
    }
L_08A67C84:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67CA0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67CA0u) goto L_08A67CA0;
    return;
L_08A67CA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67BC8;
      }
      goto L_08A67CA8;
    }
L_08A67CA8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67CC4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67CC4u) goto L_08A67CC4;
    return;
L_08A67CC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67BC8;
      }
      goto L_08A67CCC;
    }
L_08A67CCC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2094u);
    ctx.gpr[31] = (0x08A67CE8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67CE8u) goto L_08A67CE8;
    return;
L_08A67CE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67BC8;
      }
      goto L_08A67CF0;
    }
L_08A67CF0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2096u);
    ctx.gpr[31] = (0x08A67D0Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67D0Cu) goto L_08A67D0C;
    return;
L_08A67D0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67BC8;
      }
      goto L_08A67D14;
    }
L_08A67D14:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67D30u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67D30u) goto L_08A67D30;
    return;
L_08A67D30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67BC8;
      }
      goto L_08A67D38;
    }
L_08A67D38:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67D54u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67D54u) goto L_08A67D54;
    return;
L_08A67D54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67BC8;
      }
      goto L_08A67D5C;
    }
L_08A67D5C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67D78u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67D78u) goto L_08A67D78;
    return;
L_08A67D78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67BC8;
      }
      goto L_08A67D80;
    }
L_08A67D80:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67D9Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67D9Cu) goto L_08A67D9C;
    return;
L_08A67D9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67BC8;
      }
      goto L_08A67DA4;
    }
L_08A67DA4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2099u);
    ctx.gpr[31] = (0x08A67DC0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67DC0u) goto L_08A67DC0;
    return;
L_08A67DC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67BC8;
      }
      goto L_08A67DC8;
    }
L_08A67DC8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67DE4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67DE4u) goto L_08A67DE4;
    return;
L_08A67DE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67BC8;
      }
      goto L_08A67DEC;
    }
L_08A67DEC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A67E00u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A67E00u) goto L_08A67E00;
    return;
L_08A67E00:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A67E0C:
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
          goto L_08A67FF8;
      }
      goto L_08A67E30;
    }
L_08A67E30:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31560)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A67E48:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 733u);
    ctx.gpr[31] = (0x08A67E64u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67E64u) goto L_08A67E64;
    return;
L_08A67E64:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A67E68;
L_08A67E68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 2u, 0x08A6800Cu>(ctx, &aot_mem); return;
      }
      goto L_08A67E70;
    }
L_08A67E70:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 731u);
    ctx.gpr[31] = (0x08A67E8Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67E8Cu) goto L_08A67E8C;
    return;
L_08A67E8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67E68;
      }
      goto L_08A67E94;
    }
L_08A67E94:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 722u);
    ctx.gpr[31] = (0x08A67EB0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67EB0u) goto L_08A67EB0;
    return;
L_08A67EB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67E68;
      }
      goto L_08A67EB8;
    }
L_08A67EB8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 727u);
    ctx.gpr[31] = (0x08A67ED4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67ED4u) goto L_08A67ED4;
    return;
L_08A67ED4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67E68;
      }
      goto L_08A67EDC;
    }
L_08A67EDC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 724u);
    ctx.gpr[31] = (0x08A67EF8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67EF8u) goto L_08A67EF8;
    return;
L_08A67EF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67E68;
      }
      goto L_08A67F00;
    }
L_08A67F00:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 729u);
    ctx.gpr[31] = (0x08A67F1Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67F1Cu) goto L_08A67F1C;
    return;
L_08A67F1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67E68;
      }
      goto L_08A67F24;
    }
L_08A67F24:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67F40u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67F40u) goto L_08A67F40;
    return;
L_08A67F40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67E68;
      }
      goto L_08A67F48;
    }
L_08A67F48:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 736u);
    ctx.gpr[31] = (0x08A67F64u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67F64u) goto L_08A67F64;
    return;
L_08A67F64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67E68;
      }
      goto L_08A67F6C;
    }
L_08A67F6C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 738u);
    ctx.gpr[31] = (0x08A67F88u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67F88u) goto L_08A67F88;
    return;
L_08A67F88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67E68;
      }
      goto L_08A67F90;
    }
L_08A67F90:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A67FACu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67FACu) goto L_08A67FAC;
    return;
L_08A67FAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67E68;
      }
      goto L_08A67FB4;
    }
L_08A67FB4:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A67E68;
      }
      goto L_08A67FC4;
    }
L_08A67FC4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 741u);
    ctx.gpr[31] = (0x08A67FE0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A67FE0u) goto L_08A67FE0;
    return;
L_08A67FE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A67E68;
      }
      goto L_08A67FE8;
    }
L_08A67FE8:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A67E68;
      }
      goto L_08A67FF8;
    }
L_08A67FF8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = 0x08A68000u; return;
}

void recomp_unit_0152(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0152_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_152(Runtime &runtime) {
    runtime.register_generated_unit(152u, 0x08A64000u, 16384u, &recomp_unit_0152, &recomp_unit_0152_entry);
    runtime.register_function(0x08A64000u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64010u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64018u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64034u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6403Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64058u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64060u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6407Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64084u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64098u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A640A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A640C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A640E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A640FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64100u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64108u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64124u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6412Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64148u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64150u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6416Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64174u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64190u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64198u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A641B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A641BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A641D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A641E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A641FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64204u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64220u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64228u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64244u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6424Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64268u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64270u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6428Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64294u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A642B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A642B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A642D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A642DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A642ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64300u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6430Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64330u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64348u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64364u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64368u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64370u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6438Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64394u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A643B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A643B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A643D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A643DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A643F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64400u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6441Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64424u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64440u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64448u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64464u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6446Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64488u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64490u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A644ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A644B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A644D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A644D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A644F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A644FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64518u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64520u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64530u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64544u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64550u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64574u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6458Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A645A8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A645ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A645B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A645D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A645D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A645F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A645FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64618u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64620u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6463Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64644u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64660u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64668u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64684u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6468Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A646A8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A646B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A646CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A646D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A646F0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A646F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64714u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6471Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64738u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64740u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6475Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64764u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64780u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64788u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64798u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A647ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A647B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A647DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A647F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64810u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64814u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6481Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64838u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64840u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6485Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64864u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64880u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64888u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A648A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A648ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A648C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A648D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A648ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A648F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64910u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64918u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64934u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6493Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64958u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64960u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6497Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64984u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A649A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A649A8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A649C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A649CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A649DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A649ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A00u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A0Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A30u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A48u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A64u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A68u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A70u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A8Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A94u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64AB0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64AB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64AD4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64ADCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64AF8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B00u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B1Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B24u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B40u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B48u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B64u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B6Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B88u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B90u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64BACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64BB4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64BD0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64BD8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64BF4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64BFCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C18u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C20u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C3Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C44u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C60u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C68u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C84u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C8Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C9Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64CB0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64CBCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64CE0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64CF8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D14u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D18u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D20u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D3Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D44u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D60u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D68u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D84u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D8Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64DA8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64DB0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64DCCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64DD4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64DF0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64DF8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64E14u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64E1Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64E38u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64E40u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64E5Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64E64u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64E80u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64E88u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64EA4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64EACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64EBCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64ED8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64EE0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64EFCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F04u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F18u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F24u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F48u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F60u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F7Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F80u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F88u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64FA4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64FACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64FC8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64FD0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64FECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64FF4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65010u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65018u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65034u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6503Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65058u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65060u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6507Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65084u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A650A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A650A8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A650C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A650CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A650E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A650F0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6510Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65114u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65130u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65138u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65154u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6515Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65178u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65180u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6519Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A651A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A651C0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A651C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A651DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A651E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6520Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65224u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65240u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65244u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6524Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65268u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65270u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6528Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65294u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A652B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A652B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A652D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A652DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A652F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65300u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6531Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65324u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65340u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65348u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65364u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6536Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65388u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65390u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A653ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A653B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A653D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A653D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A653F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A653FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6540Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6541Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6542Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6543Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65450u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6545Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65480u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65498u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A654B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A654B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A654C0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A654DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A654E4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65500u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65508u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65524u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6552Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65548u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65550u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6556Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65574u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65590u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65598u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A655B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A655BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A655D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A655E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A655FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65604u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65620u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65628u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65644u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6564Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6565Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65670u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6567Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A656A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A656B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A656D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A656D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A656E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A656FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65704u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65720u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65728u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65744u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6574Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65768u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65770u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6578Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65794u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A657B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A657B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A657D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A657DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A657F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65800u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6581Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65824u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65840u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65848u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65864u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6586Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6587Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65890u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6589Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A658C0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A658D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A658F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A658F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65900u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6591Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65924u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65940u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65948u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65964u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6596Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65988u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65990u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A659ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A659B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A659D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A659D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A659F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A659FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A18u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A20u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A3Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A44u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A60u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A68u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A84u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A8Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A9Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65AB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65AC0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65AD0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65AE4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65AF0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B14u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B2Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B48u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B4Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B54u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B70u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B78u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B94u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B9Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65BB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65BC0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65BDCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65BE4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65C00u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65C08u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65C24u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65C2Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65C48u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65C50u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65C6Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65C74u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65C90u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65C98u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65CB4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65CBCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65CCCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65CE8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65CF0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65D0Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65D14u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65D30u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65D38u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65D4Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65D58u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65D7Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65D94u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65DB0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65DB4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65DBCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65DD8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65DE0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65DFCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E04u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E20u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E28u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E44u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E4Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E68u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E70u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E8Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E94u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65EB0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65EB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65ED4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65EDCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65EF8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F00u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F10u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F2Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F34u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F50u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F58u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F68u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F7Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F88u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65FACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65FC4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65FE0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65FE4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65FECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66008u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66010u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6602Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66034u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66050u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66058u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66074u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6607Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66098u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A660A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A660BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A660C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A660E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A660E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66104u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6610Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66128u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66130u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6614Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66154u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66170u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66178u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66194u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6619Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A661B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A661C0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A661DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A661E4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A661F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66208u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66214u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66238u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66250u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6626Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66270u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66278u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66294u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6629Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A662B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A662C0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A662DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A662E4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66300u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66308u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66324u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6632Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66348u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66350u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6636Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66374u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66390u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66398u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A663B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A663BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A663D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A663E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A663FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66404u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66420u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66428u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66438u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66448u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66464u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6646Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66480u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6648Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A664B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A664C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A664E4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A664E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A664F0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6650Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66514u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66530u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66538u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66554u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6655Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66578u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66580u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6659Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A665A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A665C0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A665C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A665E4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A665ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66608u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66610u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6662Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66634u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66650u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66658u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66674u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6667Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66698u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A666A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A666BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A666C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A666E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A666E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66704u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6670Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66728u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66730u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6674Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66754u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66770u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66778u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66794u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6679Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A667B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A667BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A667E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A667F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66814u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66818u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66820u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6683Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66844u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66860u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66868u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66884u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6688Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A668A8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A668B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A668CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A668D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A668F0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A668F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66914u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6691Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66938u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66940u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6695Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66964u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66980u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66988u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A669A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A669ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A669C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A669D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A669ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A669F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A04u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A18u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A24u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A48u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A60u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A7Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A80u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A88u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66AA4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66AACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66AC8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66AD0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66AECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66AF4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66B10u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66B18u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66B34u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66B3Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66B58u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66B60u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66B7Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66B84u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66BA0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66BA8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66BC4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66BCCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66BE8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66BF0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66C0Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66C14u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66C24u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66C40u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66C48u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66C64u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66C6Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66C7Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66C8Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66CA0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66CACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66CD0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66CE8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66D04u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66D08u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66D10u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66D2Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66D34u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66D50u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66D58u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66D74u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66D7Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66D98u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66DA0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66DBCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66DC4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66DE0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66DE8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66E04u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66E0Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66E28u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66E30u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66E4Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66E54u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66E70u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66E78u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66E94u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66E9Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66EB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66EC0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66ED0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66EE4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66EF0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66F14u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66F2Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66F48u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66F4Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66F54u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66F70u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66F78u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66F94u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66F9Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66FB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66FC0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66FDCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66FE4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67000u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67008u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67024u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6702Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67048u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67050u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6706Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67074u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67090u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67098u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A670B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A670BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A670D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A670E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A670FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67104u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67114u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67130u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67138u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67154u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6715Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6716Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67188u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67190u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A671A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A671B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A671D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A671ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67208u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6720Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67214u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67230u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67238u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67254u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6725Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67278u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67280u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6729Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A672A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A672C0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A672C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A672E4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A672ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67308u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67310u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6732Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67334u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67350u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67358u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67374u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6737Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67398u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A673A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A673BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A673C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A673E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A673E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67404u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6740Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67428u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67430u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67440u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67450u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67464u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67470u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67494u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A674ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A674C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A674CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A674D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A674F0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A674F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67514u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6751Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67538u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67540u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6755Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67564u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67580u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67588u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A675A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A675ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A675C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A675D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A675ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A675F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67610u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67618u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67634u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6763Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67658u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67660u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6767Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67684u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67694u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A676B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A676B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A676C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A676DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A676E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6770Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67724u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67740u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67744u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6774Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67768u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67770u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6778Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67794u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A677B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A677B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A677D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A677DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A677F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67800u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6781Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67824u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67840u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67848u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67864u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6786Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67888u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67890u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A678ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A678B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A678C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A678E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A678E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A678F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6790Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67918u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6793Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67954u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67970u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67974u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6797Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67998u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A679A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A679BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A679C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A679E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A679E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A04u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A0Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A28u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A30u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A4Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A54u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A70u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A78u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A94u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A9Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67AB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67AC0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67AD0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67AECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67AF4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67B04u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67B20u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67B28u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67B44u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67B4Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67B60u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67B6Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67B90u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67BA8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67BC4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67BC8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67BD0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67BECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67BF4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C10u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C18u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C34u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C3Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C58u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C60u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C7Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C84u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67CA0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67CA8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67CC4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67CCCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67CE8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67CF0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67D0Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67D14u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67D30u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67D38u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67D54u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67D5Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67D78u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67D80u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67D9Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67DA4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67DC0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67DC8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67DE4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67DECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E00u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E0Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E30u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E48u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E64u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E68u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E70u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E8Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E94u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67EB0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67EB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67ED4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67EDCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67EF8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67F00u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67F1Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67F24u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67F40u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67F48u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67F64u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67F6Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67F88u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67F90u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67FACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67FB4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67FC4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67FE0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67FE8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67FF8u, &recomp_unit_0152, "recomp_unit_0152");
}
} // namespace psprecomp
