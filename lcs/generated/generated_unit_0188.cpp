#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0188[4093] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0,
    13, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 19, 0, 0, 0, 0, 20, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 23, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0,
    27, 0, 0, 28, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 33, 34, 0, 0, 0, 0,
    35, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 44, 0, 0, 0, 45, 0,
    0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0,
    0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 61,
    0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 71, 0, 72, 0, 73, 74,
    0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 81, 0, 0,
    82, 0, 83, 0, 0, 84, 0, 85, 0, 0, 86, 0, 0, 87, 0, 88, 0, 89, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 0, 0, 93, 0,
    94, 0, 0, 95, 0, 96, 0, 97, 0, 0, 98, 0, 0, 99, 0, 100, 0, 0, 101, 0, 102, 0, 0, 103, 0, 104, 0, 0, 105, 0, 106, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 117, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 120, 0, 121, 122, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 125, 126, 0, 0, 0, 127, 128, 0, 129, 0, 0, 130, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0,
    0, 0, 0, 0, 0, 0, 0, 134, 135, 0, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 140, 0, 0, 141, 0, 0, 142, 143, 0,
    144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0,
    0, 161, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0,
    168, 0, 169, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 183, 184, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205,
    0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0,
    0, 209, 0, 0, 210, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 215, 0, 216, 0, 217,
    0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 238, 0, 0,
    0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 251,
    0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 256, 0, 257, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0,
    0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 264, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0,
    268, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 0, 276, 0, 277, 0, 278, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 284, 0, 0,
    285, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 291, 0, 0, 292, 0, 293,
    0, 0, 0, 294, 0, 0, 295, 0, 0, 296, 297, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 303, 304, 0, 305, 0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 317, 0, 318, 0, 319, 0, 0,
    320, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 323, 0, 324, 0, 0, 0, 325, 0, 0, 326, 0, 327, 0, 328, 0, 0, 329, 330, 0, 331, 0, 332, 0, 333, 0, 0, 0, 0, 0, 334, 335,
    0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0,
    343, 0, 344, 0, 345, 0, 0, 346, 0, 347, 0, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0,
    359, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0,
    374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 378, 379, 0, 0, 0, 380, 0, 0, 381, 0, 0,
    0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 384, 0, 385, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0,
    388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 393, 0, 394, 0, 0,
    0, 0, 395, 0, 396, 0, 397, 0, 398, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0,
    402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 408, 0, 409,
    0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 412, 413, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 416, 0, 417, 0, 0, 0, 418,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 420, 421, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    423, 0, 424, 0, 425, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 429, 0,
    430, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 435, 0, 0, 0, 436,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 439, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 452, 453, 0, 0, 0, 0,
    454, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 458, 459, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 462, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 464, 465, 0, 0, 0, 0, 0, 0, 0, 466,
    0, 467, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0,
    0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 0,
    0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 479, 0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0,
    0, 483, 484, 0, 0, 485, 0, 0, 486, 0, 487, 488, 0, 0, 489, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 492, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 497, 0, 0, 498, 499, 0, 500, 0, 0, 0,
    501, 0, 502, 0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 508, 0,
    509, 0, 510, 511, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515,
    0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0, 518, 519, 0, 0, 520, 0, 521, 0, 522, 0, 523, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 526, 0, 0, 527, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0, 530, 0, 531,
    532, 0, 533, 0, 0, 534, 0, 0, 535, 0, 536, 0, 0, 0, 0, 0, 0, 0, 537, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    539, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 545, 0, 0, 546, 0,
    0, 0, 547, 0, 0, 548, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 551, 0, 0, 552, 0, 553, 0, 0, 554, 555, 0, 0, 0,
    556, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 561, 0,
    0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 564, 0, 0, 0,
    0, 0, 0, 0, 0, 565, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 568, 0, 0, 0, 569, 570, 0, 571, 0, 572, 0, 0, 573, 0,
    0, 0, 0, 0, 0, 574, 0, 575, 0, 576, 0, 0, 577, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0,
    0, 0, 0, 581, 0, 0, 0, 0, 582, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    584, 0, 0, 585, 0, 0, 586, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 0, 589, 0, 590, 0, 0, 0, 0, 0, 591, 592, 593, 0, 594, 0,
    0, 0, 0, 0, 0, 595, 0, 596, 0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 601, 0, 602, 0, 0,
    603, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 606, 0, 607, 0, 0, 608, 609, 0, 0, 0, 0, 610, 0, 611, 0, 0, 0, 612,
    0, 0, 0, 0, 0, 0, 613, 614, 615, 0, 616, 0, 0, 0, 617, 0, 0, 0, 0, 0, 618, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 0,
    621, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 624, 625, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627,
    0, 0, 628, 0, 0, 0, 0, 0, 0, 629, 630, 0, 0, 631, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0,
    634, 0, 0, 0, 0, 0, 0, 635, 0, 0, 636, 0, 0, 0, 637, 0, 0, 0, 638, 639, 0, 640, 0, 641, 0, 0, 642, 0, 0, 0, 643, 0,
    644, 0, 0, 645, 0, 0, 646, 0, 647, 0, 0, 648, 649, 0, 650, 0, 651, 0, 652, 653, 0, 0, 654, 0, 0, 0, 0, 655, 0, 0, 0, 0,
    0, 656, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 659, 660, 0, 661, 0, 662, 0, 663, 0, 0, 0, 664, 665, 666, 0, 667, 0, 0, 0,
    668, 669, 0, 670, 0, 0, 0, 0, 0, 671, 0, 0, 672, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    674, 0, 0, 675, 0, 0, 676, 0, 677, 0, 0, 0, 678, 0, 0, 0, 0, 679, 680, 0, 0, 0, 681, 682, 683, 0, 0, 0, 684, 0, 685, 0,
    686, 0, 687, 0, 0, 0, 0, 0, 0, 688, 0, 689, 690, 0, 691, 0, 0, 692, 693, 0, 694, 0, 0, 695, 0, 0, 696, 0, 697, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 0, 701, 0, 0, 0, 0, 702,
    0, 0, 0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 706, 0, 0, 0, 707, 0, 708, 0, 0, 0, 709, 0, 710, 0, 0,
    711, 0, 0, 0, 0, 0, 0, 0, 712, 0, 713, 0, 714, 715, 0, 716, 0, 0, 717, 0, 718, 0, 719, 0, 720, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0, 724, 725, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0,
    728, 0, 0, 0, 0, 0, 0, 729, 0, 730, 731, 0, 732, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 735, 0, 0, 0, 736,
    0, 737, 0, 738, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 742, 0, 0, 0, 743, 0, 744, 0, 0, 0, 745, 0, 0, 746, 0, 747, 0, 0, 0, 748,
    0, 0, 0, 0, 0, 749, 0, 0, 750, 0, 0, 0, 751, 0, 752, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 754, 0, 755,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 758, 0, 0, 759, 760, 0,
    0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 763, 0, 0, 764, 0, 0, 765, 766, 0, 0, 0, 767, 0, 768,
    0, 0, 769, 0, 770, 0, 771, 0, 0, 0, 772, 0, 773, 0, 0, 774, 0, 0, 775, 0, 0, 0, 0, 776, 0, 0, 0, 0, 777, 0, 0, 0,
    0, 0, 0, 778, 0, 779, 0, 0, 0, 0, 0, 0, 0, 780, 0, 781, 0, 0, 0, 0, 0, 782, 0, 783, 0, 784, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787,
    0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 791, 0, 0,
    0, 0, 0, 0, 0, 0, 792, 0, 793, 0, 0, 794, 795, 0, 0, 0, 796, 0, 0, 797, 0, 0, 0, 0, 798, 0, 0, 0, 799, 0, 0, 0,
    0, 0, 0, 800, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 803, 0, 804, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 806,
    0, 0, 0, 0, 0, 0, 807, 0, 808, 0, 809, 0, 0, 0, 0, 0, 810, 0, 0, 0, 811, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 814, 0, 0, 0, 815, 0, 0, 0, 0, 816, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0,
    818, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 0, 821, 0, 822, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 823, 0, 0, 824, 0, 0, 0, 0, 0, 825, 0, 826, 0, 0, 0, 0, 0, 0, 827, 828, 0, 0, 0, 0, 0, 829, 0, 830, 0, 0, 0,
    0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 833, 834, 0, 0, 0, 0, 0, 0, 835, 0, 0, 0,
    0, 0, 836, 0, 837, 0, 0, 0, 0, 0, 0, 838, 839, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 0, 841, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 843, 0, 844, 0, 0, 845, 0, 0, 0, 846, 0, 0, 0, 0, 847, 0, 0, 848, 0, 0, 0,
    0, 0, 0, 849, 0, 850, 0, 0, 0, 851, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 853,
};
void recomp_unit_0188_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AF4000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0188[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AF4000;
    case 2u: goto L_08AF4014;
    case 3u: goto L_08AF4034;
    case 4u: goto L_08AF4048;
    case 5u: goto L_08AF406C;
    case 6u: goto L_08AF4090;
    case 7u: goto L_08AF409C;
    case 8u: goto L_08AF40A8;
    case 9u: goto L_08AF40AC;
    case 10u: goto L_08AF40C0;
    case 11u: goto L_08AF40E8;
    case 12u: goto L_08AF40F4;
    case 13u: goto L_08AF4100;
    case 14u: goto L_08AF4104;
    case 15u: goto L_08AF4118;
    case 16u: goto L_08AF4144;
    case 17u: goto L_08AF4150;
    case 18u: goto L_08AF415C;
    case 19u: goto L_08AF4160;
    case 20u: goto L_08AF4174;
    case 21u: goto L_08AF41A0;
    case 22u: goto L_08AF41AC;
    case 23u: goto L_08AF41B8;
    case 24u: goto L_08AF41BC;
    case 25u: goto L_08AF41D0;
    case 26u: goto L_08AF41F4;
    case 27u: goto L_08AF4200;
    case 28u: goto L_08AF420C;
    case 29u: goto L_08AF4210;
    case 30u: goto L_08AF4224;
    case 31u: goto L_08AF4250;
    case 32u: goto L_08AF425C;
    case 33u: goto L_08AF4268;
    case 34u: goto L_08AF426C;
    case 35u: goto L_08AF4280;
    case 36u: goto L_08AF4288;
    case 37u: goto L_08AF4290;
    case 38u: goto L_08AF4298;
    case 39u: goto L_08AF42A0;
    case 40u: goto L_08AF42A8;
    case 41u: goto L_08AF42BC;
    case 42u: goto L_08AF42D0;
    case 43u: goto L_08AF42E4;
    case 44u: goto L_08AF42E8;
    case 45u: goto L_08AF42F8;
    case 46u: goto L_08AF4314;
    case 47u: goto L_08AF4334;
    case 48u: goto L_08AF4340;
    case 49u: goto L_08AF435C;
    case 50u: goto L_08AF436C;
    case 51u: goto L_08AF4374;
    case 52u: goto L_08AF4398;
    case 53u: goto L_08AF43A0;
    case 54u: goto L_08AF43B8;
    case 55u: goto L_08AF440C;
    case 56u: goto L_08AF4414;
    case 57u: goto L_08AF4424;
    case 58u: goto L_08AF4440;
    case 59u: goto L_08AF4460;
    case 60u: goto L_08AF446C;
    case 61u: goto L_08AF447C;
    case 62u: goto L_08AF448C;
    case 63u: goto L_08AF44A0;
    case 64u: goto L_08AF44EC;
    case 65u: goto L_08AF44FC;
    case 66u: goto L_08AF450C;
    case 67u: goto L_08AF4528;
    case 68u: goto L_08AF4530;
    case 69u: goto L_08AF454C;
    case 70u: goto L_08AF455C;
    case 71u: goto L_08AF4568;
    case 72u: goto L_08AF4570;
    case 73u: goto L_08AF4578;
    case 74u: goto L_08AF457C;
    case 75u: goto L_08AF4594;
    case 76u: goto L_08AF45A4;
    case 77u: goto L_08AF45C4;
    case 78u: goto L_08AF45D4;
    case 79u: goto L_08AF45DC;
    case 80u: goto L_08AF45EC;
    case 81u: goto L_08AF45F4;
    case 82u: goto L_08AF4600;
    case 83u: goto L_08AF4608;
    case 84u: goto L_08AF4614;
    case 85u: goto L_08AF461C;
    case 86u: goto L_08AF4628;
    case 87u: goto L_08AF4634;
    case 88u: goto L_08AF463C;
    case 89u: goto L_08AF4644;
    case 90u: goto L_08AF4654;
    case 91u: goto L_08AF4660;
    case 92u: goto L_08AF4668;
    case 93u: goto L_08AF4678;
    case 94u: goto L_08AF4680;
    case 95u: goto L_08AF468C;
    case 96u: goto L_08AF4694;
    case 97u: goto L_08AF469C;
    case 98u: goto L_08AF46A8;
    case 99u: goto L_08AF46B4;
    case 100u: goto L_08AF46BC;
    case 101u: goto L_08AF46C8;
    case 102u: goto L_08AF46D0;
    case 103u: goto L_08AF46DC;
    case 104u: goto L_08AF46E4;
    case 105u: goto L_08AF46F0;
    case 106u: goto L_08AF46F8;
    case 107u: goto L_08AF4700;
    case 108u: goto L_08AF4720;
    case 109u: goto L_08AF473C;
    case 110u: goto L_08AF4758;
    case 111u: goto L_08AF4760;
    case 112u: goto L_08AF4784;
    case 113u: goto L_08AF47A4;
    case 114u: goto L_08AF47D0;
    case 115u: goto L_08AF47D4;
    case 116u: goto L_08AF47E4;
    case 117u: goto L_08AF480C;
    case 118u: goto L_08AF481C;
    case 119u: goto L_08AF4824;
    case 120u: goto L_08AF4884;
    case 121u: goto L_08AF488C;
    case 122u: goto L_08AF4890;
    case 123u: goto L_08AF4898;
    case 124u: goto L_08AF48A8;
    case 125u: goto L_08AF4904;
    case 126u: goto L_08AF4908;
    case 127u: goto L_08AF4918;
    case 128u: goto L_08AF491C;
    case 129u: goto L_08AF4924;
    case 130u: goto L_08AF4930;
    case 131u: goto L_08AF4938;
    case 132u: goto L_08AF4948;
    case 133u: goto L_08AF4978;
    case 134u: goto L_08AF499C;
    case 135u: goto L_08AF49A0;
    case 136u: goto L_08AF49AC;
    case 137u: goto L_08AF49BC;
    case 138u: goto L_08AF49C8;
    case 139u: goto L_08AF49D4;
    case 140u: goto L_08AF49DC;
    case 141u: goto L_08AF49E8;
    case 142u: goto L_08AF49F4;
    case 143u: goto L_08AF49F8;
    case 144u: goto L_08AF4A00;
    case 145u: goto L_08AF4A14;
    case 146u: goto L_08AF4A24;
    case 147u: goto L_08AF4A30;
    case 148u: goto L_08AF4A38;
    case 149u: goto L_08AF4A5C;
    case 150u: goto L_08AF4A90;
    case 151u: goto L_08AF4AA0;
    case 152u: goto L_08AF4AC0;
    case 153u: goto L_08AF4AE4;
    case 154u: goto L_08AF4AF8;
    case 155u: goto L_08AF4B10;
    case 156u: goto L_08AF4B1C;
    case 157u: goto L_08AF4B44;
    case 158u: goto L_08AF4B4C;
    case 159u: goto L_08AF4B54;
    case 160u: goto L_08AF4B6C;
    case 161u: goto L_08AF4B84;
    case 162u: goto L_08AF4B90;
    case 163u: goto L_08AF4BA4;
    case 164u: goto L_08AF4BC4;
    case 165u: goto L_08AF4BCC;
    case 166u: goto L_08AF4BE0;
    case 167u: goto L_08AF4BF8;
    case 168u: goto L_08AF4C00;
    case 169u: goto L_08AF4C08;
    case 170u: goto L_08AF4C10;
    case 171u: goto L_08AF4C18;
    case 172u: goto L_08AF4C38;
    case 173u: goto L_08AF4C44;
    case 174u: goto L_08AF4C50;
    case 175u: goto L_08AF4C68;
    case 176u: goto L_08AF4C70;
    case 177u: goto L_08AF4C90;
    case 178u: goto L_08AF4C9C;
    case 179u: goto L_08AF4CBC;
    case 180u: goto L_08AF4CF4;
    case 181u: goto L_08AF4D4C;
    case 182u: goto L_08AF4D58;
    case 183u: goto L_08AF4D98;
    case 184u: goto L_08AF4D9C;
    case 185u: goto L_08AF4DA8;
    case 186u: goto L_08AF4DB8;
    case 187u: goto L_08AF4DC8;
    case 188u: goto L_08AF4DF0;
    case 189u: goto L_08AF4E08;
    case 190u: goto L_08AF4E18;
    case 191u: goto L_08AF4E38;
    case 192u: goto L_08AF4E48;
    case 193u: goto L_08AF4E58;
    case 194u: goto L_08AF4E6C;
    case 195u: goto L_08AF4E9C;
    case 196u: goto L_08AF4EBC;
    case 197u: goto L_08AF4ED8;
    case 198u: goto L_08AF4EE0;
    case 199u: goto L_08AF4F08;
    case 200u: goto L_08AF4F14;
    case 201u: goto L_08AF4F20;
    case 202u: goto L_08AF4F2C;
    case 203u: goto L_08AF4F50;
    case 204u: goto L_08AF4F58;
    case 205u: goto L_08AF4F7C;
    case 206u: goto L_08AF4F98;
    case 207u: goto L_08AF4FB8;
    case 208u: goto L_08AF4FF4;
    case 209u: goto L_08AF5004;
    case 210u: goto L_08AF5010;
    case 211u: goto L_08AF5018;
    case 212u: goto L_08AF5028;
    case 213u: goto L_08AF5050;
    case 214u: goto L_08AF5058;
    case 215u: goto L_08AF506C;
    case 216u: goto L_08AF5074;
    case 217u: goto L_08AF507C;
    case 218u: goto L_08AF5094;
    case 219u: goto L_08AF509C;
    case 220u: goto L_08AF50C0;
    case 221u: goto L_08AF50D4;
    case 222u: goto L_08AF50F0;
    case 223u: goto L_08AF5108;
    case 224u: goto L_08AF511C;
    case 225u: goto L_08AF5148;
    case 226u: goto L_08AF5170;
    case 227u: goto L_08AF5198;
    case 228u: goto L_08AF51B4;
    case 229u: goto L_08AF51C0;
    case 230u: goto L_08AF51D0;
    case 231u: goto L_08AF51E4;
    case 232u: goto L_08AF51EC;
    case 233u: goto L_08AF5200;
    case 234u: goto L_08AF521C;
    case 235u: goto L_08AF5254;
    case 236u: goto L_08AF5260;
    case 237u: goto L_08AF526C;
    case 238u: goto L_08AF5274;
    case 239u: goto L_08AF5288;
    case 240u: goto L_08AF52E0;
    case 241u: goto L_08AF52E8;
    case 242u: goto L_08AF5334;
    case 243u: goto L_08AF5348;
    case 244u: goto L_08AF5384;
    case 245u: goto L_08AF5398;
    case 246u: goto L_08AF53F0;
    case 247u: goto L_08AF53F8;
    case 248u: goto L_08AF5444;
    case 249u: goto L_08AF5460;
    case 250u: goto L_08AF546C;
    case 251u: goto L_08AF547C;
    case 252u: goto L_08AF5488;
    case 253u: goto L_08AF54A0;
    case 254u: goto L_08AF54AC;
    case 255u: goto L_08AF54B4;
    case 256u: goto L_08AF54CC;
    case 257u: goto L_08AF54D4;
    case 258u: goto L_08AF54D8;
    case 259u: goto L_08AF54E8;
    case 260u: goto L_08AF54F8;
    case 261u: goto L_08AF5504;
    case 262u: goto L_08AF5524;
    case 263u: goto L_08AF5530;
    case 264u: goto L_08AF5538;
    case 265u: goto L_08AF553C;
    case 266u: goto L_08AF5558;
    case 267u: goto L_08AF5568;
    case 268u: goto L_08AF5580;
    case 269u: goto L_08AF558C;
    case 270u: goto L_08AF5598;
    case 271u: goto L_08AF55A4;
    case 272u: goto L_08AF55B0;
    case 273u: goto L_08AF55BC;
    case 274u: goto L_08AF55C8;
    case 275u: goto L_08AF55D4;
    case 276u: goto L_08AF55E0;
    case 277u: goto L_08AF55E8;
    case 278u: goto L_08AF55F0;
    case 279u: goto L_08AF5624;
    case 280u: goto L_08AF5630;
    case 281u: goto L_08AF5644;
    case 282u: goto L_08AF565C;
    case 283u: goto L_08AF566C;
    case 284u: goto L_08AF5674;
    case 285u: goto L_08AF5680;
    case 286u: goto L_08AF5690;
    case 287u: goto L_08AF569C;
    case 288u: goto L_08AF56B0;
    case 289u: goto L_08AF56BC;
    case 290u: goto L_08AF56E4;
    case 291u: goto L_08AF56E8;
    case 292u: goto L_08AF56F4;
    case 293u: goto L_08AF56FC;
    case 294u: goto L_08AF570C;
    case 295u: goto L_08AF5718;
    case 296u: goto L_08AF5724;
    case 297u: goto L_08AF5728;
    case 298u: goto L_08AF5734;
    case 299u: goto L_08AF5740;
    case 300u: goto L_08AF5754;
    case 301u: goto L_08AF5788;
    case 302u: goto L_08AF579C;
    case 303u: goto L_08AF57AC;
    case 304u: goto L_08AF57B0;
    case 305u: goto L_08AF57B8;
    case 306u: goto L_08AF57C0;
    case 307u: goto L_08AF57D0;
    case 308u: goto L_08AF57E0;
    case 309u: goto L_08AF5810;
    case 310u: goto L_08AF5824;
    case 311u: goto L_08AF5830;
    case 312u: goto L_08AF5844;
    case 313u: goto L_08AF5868;
    case 314u: goto L_08AF58AC;
    case 315u: goto L_08AF58D0;
    case 316u: goto L_08AF58D8;
    case 317u: goto L_08AF58E4;
    case 318u: goto L_08AF58EC;
    case 319u: goto L_08AF58F4;
    case 320u: goto L_08AF5900;
    case 321u: goto L_08AF590C;
    case 322u: goto L_08AF5918;
    case 323u: goto L_08AF5984;
    case 324u: goto L_08AF598C;
    case 325u: goto L_08AF599C;
    case 326u: goto L_08AF59A8;
    case 327u: goto L_08AF59B0;
    case 328u: goto L_08AF59B8;
    case 329u: goto L_08AF59C4;
    case 330u: goto L_08AF59C8;
    case 331u: goto L_08AF59D0;
    case 332u: goto L_08AF59D8;
    case 333u: goto L_08AF59E0;
    case 334u: goto L_08AF59F8;
    case 335u: goto L_08AF59FC;
    case 336u: goto L_08AF5A04;
    case 337u: goto L_08AF5A10;
    case 338u: goto L_08AF5A34;
    case 339u: goto L_08AF5A3C;
    case 340u: goto L_08AF5A48;
    case 341u: goto L_08AF5A50;
    case 342u: goto L_08AF5A78;
    case 343u: goto L_08AF5A80;
    case 344u: goto L_08AF5A88;
    case 345u: goto L_08AF5A90;
    case 346u: goto L_08AF5A9C;
    case 347u: goto L_08AF5AA4;
    case 348u: goto L_08AF5AB4;
    case 349u: goto L_08AF5AC0;
    case 350u: goto L_08AF5ACC;
    case 351u: goto L_08AF5B00;
    case 352u: goto L_08AF5B2C;
    case 353u: goto L_08AF5B38;
    case 354u: goto L_08AF5B88;
    case 355u: goto L_08AF5BA0;
    case 356u: goto L_08AF5BC8;
    case 357u: goto L_08AF5BF0;
    case 358u: goto L_08AF5BF8;
    case 359u: goto L_08AF5C00;
    case 360u: goto L_08AF5C08;
    case 361u: goto L_08AF5C24;
    case 362u: goto L_08AF5C3C;
    case 363u: goto L_08AF5C4C;
    case 364u: goto L_08AF5C60;
    case 365u: goto L_08AF5C74;
    case 366u: goto L_08AF5CA4;
    case 367u: goto L_08AF5CB8;
    case 368u: goto L_08AF5CC4;
    case 369u: goto L_08AF5CD4;
    case 370u: goto L_08AF5CE0;
    case 371u: goto L_08AF5D08;
    case 372u: goto L_08AF5D70;
    case 373u: goto L_08AF5D78;
    case 374u: goto L_08AF5D80;
    case 375u: goto L_08AF5DA4;
    case 376u: goto L_08AF5DB8;
    case 377u: goto L_08AF5DC8;
    case 378u: goto L_08AF5DD4;
    case 379u: goto L_08AF5DD8;
    case 380u: goto L_08AF5DE8;
    case 381u: goto L_08AF5DF4;
    case 382u: goto L_08AF5E18;
    case 383u: goto L_08AF5E2C;
    case 384u: goto L_08AF5E34;
    case 385u: goto L_08AF5E3C;
    case 386u: goto L_08AF5E44;
    case 387u: goto L_08AF5E68;
    case 388u: goto L_08AF5E80;
    case 389u: goto L_08AF5EA8;
    case 390u: goto L_08AF5EB4;
    case 391u: goto L_08AF5ED0;
    case 392u: goto L_08AF5EE0;
    case 393u: goto L_08AF5EEC;
    case 394u: goto L_08AF5EF4;
    case 395u: goto L_08AF5F08;
    case 396u: goto L_08AF5F10;
    case 397u: goto L_08AF5F18;
    case 398u: goto L_08AF5F20;
    case 399u: goto L_08AF5F2C;
    case 400u: goto L_08AF5F34;
    case 401u: goto L_08AF5F78;
    case 402u: goto L_08AF5F80;
    case 403u: goto L_08AF5FA4;
    case 404u: goto L_08AF5FB0;
    case 405u: goto L_08AF5FB8;
    case 406u: goto L_08AF5FC4;
    case 407u: goto L_08AF5FEC;
    case 408u: goto L_08AF5FF4;
    case 409u: goto L_08AF5FFC;
    case 410u: goto L_08AF6008;
    case 411u: goto L_08AF6030;
    case 412u: goto L_08AF6034;
    case 413u: goto L_08AF6038;
    case 414u: goto L_08AF6044;
    case 415u: goto L_08AF6054;
    case 416u: goto L_08AF6064;
    case 417u: goto L_08AF606C;
    case 418u: goto L_08AF607C;
    case 419u: goto L_08AF60A8;
    case 420u: goto L_08AF60B0;
    case 421u: goto L_08AF60B4;
    case 422u: goto L_08AF60B8;
    case 423u: goto L_08AF6100;
    case 424u: goto L_08AF6108;
    case 425u: goto L_08AF6110;
    case 426u: goto L_08AF6114;
    case 427u: goto L_08AF612C;
    case 428u: goto L_08AF6170;
    case 429u: goto L_08AF6178;
    case 430u: goto L_08AF6180;
    case 431u: goto L_08AF6188;
    case 432u: goto L_08AF61AC;
    case 433u: goto L_08AF61D4;
    case 434u: goto L_08AF61DC;
    case 435u: goto L_08AF61EC;
    case 436u: goto L_08AF61FC;
    case 437u: goto L_08AF6230;
    case 438u: goto L_08AF623C;
    case 439u: goto L_08AF624C;
    case 440u: goto L_08AF6254;
    case 441u: goto L_08AF6264;
    case 442u: goto L_08AF6298;
    case 443u: goto L_08AF62A4;
    case 444u: goto L_08AF62C0;
    case 445u: goto L_08AF62C8;
    case 446u: goto L_08AF62D8;
    case 447u: goto L_08AF631C;
    case 448u: goto L_08AF6328;
    case 449u: goto L_08AF633C;
    case 450u: goto L_08AF634C;
    case 451u: goto L_08AF6358;
    case 452u: goto L_08AF6368;
    case 453u: goto L_08AF636C;
    case 454u: goto L_08AF6380;
    case 455u: goto L_08AF6388;
    case 456u: goto L_08AF63A8;
    case 457u: goto L_08AF63B0;
    case 458u: goto L_08AF63C0;
    case 459u: goto L_08AF63C4;
    case 460u: goto L_08AF63DC;
    case 461u: goto L_08AF63E4;
    case 462u: goto L_08AF63F0;
    case 463u: goto L_08AF6450;
    case 464u: goto L_08AF6458;
    case 465u: goto L_08AF645C;
    case 466u: goto L_08AF647C;
    case 467u: goto L_08AF6484;
    case 468u: goto L_08AF6488;
    case 469u: goto L_08AF64EC;
    case 470u: goto L_08AF6508;
    case 471u: goto L_08AF652C;
    case 472u: goto L_08AF6544;
    case 473u: goto L_08AF654C;
    case 474u: goto L_08AF6560;
    case 475u: goto L_08AF656C;
    case 476u: goto L_08AF658C;
    case 477u: goto L_08AF65A4;
    case 478u: goto L_08AF65BC;
    case 479u: goto L_08AF65C0;
    case 480u: goto L_08AF65D4;
    case 481u: goto L_08AF65DC;
    case 482u: goto L_08AF65F8;
    case 483u: goto L_08AF6604;
    case 484u: goto L_08AF6608;
    case 485u: goto L_08AF6614;
    case 486u: goto L_08AF6620;
    case 487u: goto L_08AF6628;
    case 488u: goto L_08AF662C;
    case 489u: goto L_08AF6638;
    case 490u: goto L_08AF6640;
    case 491u: goto L_08AF6650;
    case 492u: goto L_08AF6684;
    case 493u: goto L_08AF6690;
    case 494u: goto L_08AF66A4;
    case 495u: goto L_08AF66B4;
    case 496u: goto L_08AF66CC;
    case 497u: goto L_08AF66D8;
    case 498u: goto L_08AF66E4;
    case 499u: goto L_08AF66E8;
    case 500u: goto L_08AF66F0;
    case 501u: goto L_08AF6700;
    case 502u: goto L_08AF6708;
    case 503u: goto L_08AF6724;
    case 504u: goto L_08AF672C;
    case 505u: goto L_08AF673C;
    case 506u: goto L_08AF6760;
    case 507u: goto L_08AF6768;
    case 508u: goto L_08AF6778;
    case 509u: goto L_08AF6780;
    case 510u: goto L_08AF6788;
    case 511u: goto L_08AF678C;
    case 512u: goto L_08AF67A4;
    case 513u: goto L_08AF67D4;
    case 514u: goto L_08AF67EC;
    case 515u: goto L_08AF67FC;
    case 516u: goto L_08AF6804;
    case 517u: goto L_08AF6820;
    case 518u: goto L_08AF682C;
    case 519u: goto L_08AF6830;
    case 520u: goto L_08AF683C;
    case 521u: goto L_08AF6844;
    case 522u: goto L_08AF684C;
    case 523u: goto L_08AF6854;
    case 524u: goto L_08AF6874;
    case 525u: goto L_08AF68A8;
    case 526u: goto L_08AF68B4;
    case 527u: goto L_08AF68C0;
    case 528u: goto L_08AF68D0;
    case 529u: goto L_08AF68EC;
    case 530u: goto L_08AF68F4;
    case 531u: goto L_08AF68FC;
    case 532u: goto L_08AF6900;
    case 533u: goto L_08AF6908;
    case 534u: goto L_08AF6914;
    case 535u: goto L_08AF6920;
    case 536u: goto L_08AF6928;
    case 537u: goto L_08AF6948;
    case 538u: goto L_08AF6950;
    case 539u: goto L_08AF6980;
    case 540u: goto L_08AF6988;
    case 541u: goto L_08AF69A0;
    case 542u: goto L_08AF69AC;
    case 543u: goto L_08AF69D0;
    case 544u: goto L_08AF69E4;
    case 545u: goto L_08AF69EC;
    case 546u: goto L_08AF69F8;
    case 547u: goto L_08AF6A08;
    case 548u: goto L_08AF6A14;
    case 549u: goto L_08AF6A20;
    case 550u: goto L_08AF6A30;
    case 551u: goto L_08AF6A4C;
    case 552u: goto L_08AF6A58;
    case 553u: goto L_08AF6A60;
    case 554u: goto L_08AF6A6C;
    case 555u: goto L_08AF6A70;
    case 556u: goto L_08AF6A80;
    case 557u: goto L_08AF6AA4;
    case 558u: goto L_08AF6AB8;
    case 559u: goto L_08AF6AC4;
    case 560u: goto L_08AF6AEC;
    case 561u: goto L_08AF6AF8;
    case 562u: goto L_08AF6B1C;
    case 563u: goto L_08AF6B64;
    case 564u: goto L_08AF6B70;
    case 565u: goto L_08AF6B94;
    case 566u: goto L_08AF6B9C;
    case 567u: goto L_08AF6BC0;
    case 568u: goto L_08AF6BC8;
    case 569u: goto L_08AF6BD8;
    case 570u: goto L_08AF6BDC;
    case 571u: goto L_08AF6BE4;
    case 572u: goto L_08AF6BEC;
    case 573u: goto L_08AF6BF8;
    case 574u: goto L_08AF6C14;
    case 575u: goto L_08AF6C1C;
    case 576u: goto L_08AF6C24;
    case 577u: goto L_08AF6C30;
    case 578u: goto L_08AF6C3C;
    case 579u: goto L_08AF6C60;
    case 580u: goto L_08AF6C6C;
    case 581u: goto L_08AF6C8C;
    case 582u: goto L_08AF6CA0;
    case 583u: goto L_08AF6CA4;
    case 584u: goto L_08AF6D00;
    case 585u: goto L_08AF6D0C;
    case 586u: goto L_08AF6D18;
    case 587u: goto L_08AF6D24;
    case 588u: goto L_08AF6D34;
    case 589u: goto L_08AF6D48;
    case 590u: goto L_08AF6D50;
    case 591u: goto L_08AF6D68;
    case 592u: goto L_08AF6D6C;
    case 593u: goto L_08AF6D70;
    case 594u: goto L_08AF6D78;
    case 595u: goto L_08AF6D94;
    case 596u: goto L_08AF6D9C;
    case 597u: goto L_08AF6DA4;
    case 598u: goto L_08AF6DC0;
    case 599u: goto L_08AF6DCC;
    case 600u: goto L_08AF6DE0;
    case 601u: goto L_08AF6DEC;
    case 602u: goto L_08AF6DF4;
    case 603u: goto L_08AF6E00;
    case 604u: goto L_08AF6E04;
    case 605u: goto L_08AF6E2C;
    case 606u: goto L_08AF6E38;
    case 607u: goto L_08AF6E40;
    case 608u: goto L_08AF6E4C;
    case 609u: goto L_08AF6E50;
    case 610u: goto L_08AF6E64;
    case 611u: goto L_08AF6E6C;
    case 612u: goto L_08AF6E7C;
    case 613u: goto L_08AF6E98;
    case 614u: goto L_08AF6E9C;
    case 615u: goto L_08AF6EA0;
    case 616u: goto L_08AF6EA8;
    case 617u: goto L_08AF6EB8;
    case 618u: goto L_08AF6ED0;
    case 619u: goto L_08AF6EDC;
    case 620u: goto L_08AF6EE4;
    case 621u: goto L_08AF6F00;
    case 622u: goto L_08AF6F0C;
    case 623u: goto L_08AF6F38;
    case 624u: goto L_08AF6F44;
    case 625u: goto L_08AF6F48;
    case 626u: goto L_08AF6F50;
    case 627u: goto L_08AF6F7C;
    case 628u: goto L_08AF6F88;
    case 629u: goto L_08AF6FA4;
    case 630u: goto L_08AF6FA8;
    case 631u: goto L_08AF6FB4;
    case 632u: goto L_08AF6FC0;
    case 633u: goto L_08AF6FF4;
    case 634u: goto L_08AF7000;
    case 635u: goto L_08AF701C;
    case 636u: goto L_08AF7028;
    case 637u: goto L_08AF7038;
    case 638u: goto L_08AF7048;
    case 639u: goto L_08AF704C;
    case 640u: goto L_08AF7054;
    case 641u: goto L_08AF705C;
    case 642u: goto L_08AF7068;
    case 643u: goto L_08AF7078;
    case 644u: goto L_08AF7080;
    case 645u: goto L_08AF708C;
    case 646u: goto L_08AF7098;
    case 647u: goto L_08AF70A0;
    case 648u: goto L_08AF70AC;
    case 649u: goto L_08AF70B0;
    case 650u: goto L_08AF70B8;
    case 651u: goto L_08AF70C0;
    case 652u: goto L_08AF70C8;
    case 653u: goto L_08AF70CC;
    case 654u: goto L_08AF70D8;
    case 655u: goto L_08AF70EC;
    case 656u: goto L_08AF7104;
    case 657u: goto L_08AF7118;
    case 658u: goto L_08AF712C;
    case 659u: goto L_08AF7134;
    case 660u: goto L_08AF7138;
    case 661u: goto L_08AF7140;
    case 662u: goto L_08AF7148;
    case 663u: goto L_08AF7150;
    case 664u: goto L_08AF7160;
    case 665u: goto L_08AF7164;
    case 666u: goto L_08AF7168;
    case 667u: goto L_08AF7170;
    case 668u: goto L_08AF7180;
    case 669u: goto L_08AF7184;
    case 670u: goto L_08AF718C;
    case 671u: goto L_08AF71A4;
    case 672u: goto L_08AF71B0;
    case 673u: goto L_08AF71B4;
    case 674u: goto L_08AF7200;
    case 675u: goto L_08AF720C;
    case 676u: goto L_08AF7218;
    case 677u: goto L_08AF7220;
    case 678u: goto L_08AF7230;
    case 679u: goto L_08AF7244;
    case 680u: goto L_08AF7248;
    case 681u: goto L_08AF7258;
    case 682u: goto L_08AF725C;
    case 683u: goto L_08AF7260;
    case 684u: goto L_08AF7270;
    case 685u: goto L_08AF7278;
    case 686u: goto L_08AF7280;
    case 687u: goto L_08AF7288;
    case 688u: goto L_08AF72A4;
    case 689u: goto L_08AF72AC;
    case 690u: goto L_08AF72B0;
    case 691u: goto L_08AF72B8;
    case 692u: goto L_08AF72C4;
    case 693u: goto L_08AF72C8;
    case 694u: goto L_08AF72D0;
    case 695u: goto L_08AF72DC;
    case 696u: goto L_08AF72E8;
    case 697u: goto L_08AF72F0;
    case 698u: goto L_08AF731C;
    case 699u: goto L_08AF7348;
    case 700u: goto L_08AF735C;
    case 701u: goto L_08AF7368;
    case 702u: goto L_08AF737C;
    case 703u: goto L_08AF7394;
    case 704u: goto L_08AF73A4;
    case 705u: goto L_08AF73B8;
    case 706u: goto L_08AF73C4;
    case 707u: goto L_08AF73D4;
    case 708u: goto L_08AF73DC;
    case 709u: goto L_08AF73EC;
    case 710u: goto L_08AF73F4;
    case 711u: goto L_08AF7400;
    case 712u: goto L_08AF7420;
    case 713u: goto L_08AF7428;
    case 714u: goto L_08AF7430;
    case 715u: goto L_08AF7434;
    case 716u: goto L_08AF743C;
    case 717u: goto L_08AF7448;
    case 718u: goto L_08AF7450;
    case 719u: goto L_08AF7458;
    case 720u: goto L_08AF7460;
    case 721u: goto L_08AF7488;
    case 722u: goto L_08AF7498;
    case 723u: goto L_08AF74B4;
    case 724u: goto L_08AF74BC;
    case 725u: goto L_08AF74C0;
    case 726u: goto L_08AF74D0;
    case 727u: goto L_08AF74F0;
    case 728u: goto L_08AF7500;
    case 729u: goto L_08AF751C;
    case 730u: goto L_08AF7524;
    case 731u: goto L_08AF7528;
    case 732u: goto L_08AF7530;
    case 733u: goto L_08AF7538;
    case 734u: goto L_08AF7560;
    case 735u: goto L_08AF756C;
    case 736u: goto L_08AF757C;
    case 737u: goto L_08AF7584;
    case 738u: goto L_08AF758C;
    case 739u: goto L_08AF75A4;
    case 740u: goto L_08AF7660;
    case 741u: goto L_08AF76A0;
    case 742u: goto L_08AF76B0;
    case 743u: goto L_08AF76C0;
    case 744u: goto L_08AF76C8;
    case 745u: goto L_08AF76D8;
    case 746u: goto L_08AF76E4;
    case 747u: goto L_08AF76EC;
    case 748u: goto L_08AF76FC;
    case 749u: goto L_08AF7714;
    case 750u: goto L_08AF7720;
    case 751u: goto L_08AF7730;
    case 752u: goto L_08AF7738;
    case 753u: goto L_08AF776C;
    case 754u: goto L_08AF7774;
    case 755u: goto L_08AF777C;
    case 756u: goto L_08AF77B8;
    case 757u: goto L_08AF77CC;
    case 758u: goto L_08AF77E8;
    case 759u: goto L_08AF77F4;
    case 760u: goto L_08AF77F8;
    case 761u: goto L_08AF7808;
    case 762u: goto L_08AF783C;
    case 763u: goto L_08AF7848;
    case 764u: goto L_08AF7854;
    case 765u: goto L_08AF7860;
    case 766u: goto L_08AF7864;
    case 767u: goto L_08AF7874;
    case 768u: goto L_08AF787C;
    case 769u: goto L_08AF7888;
    case 770u: goto L_08AF7890;
    case 771u: goto L_08AF7898;
    case 772u: goto L_08AF78A8;
    case 773u: goto L_08AF78B0;
    case 774u: goto L_08AF78BC;
    case 775u: goto L_08AF78C8;
    case 776u: goto L_08AF78DC;
    case 777u: goto L_08AF78F0;
    case 778u: goto L_08AF790C;
    case 779u: goto L_08AF7914;
    case 780u: goto L_08AF7934;
    case 781u: goto L_08AF793C;
    case 782u: goto L_08AF7954;
    case 783u: goto L_08AF795C;
    case 784u: goto L_08AF7964;
    case 785u: goto L_08AF79C4;
    case 786u: goto L_08AF79E0;
    case 787u: goto L_08AF7A7C;
    case 788u: goto L_08AF7A88;
    case 789u: goto L_08AF7AA8;
    case 790u: goto L_08AF7AE0;
    case 791u: goto L_08AF7AF4;
    case 792u: goto L_08AF7B18;
    case 793u: goto L_08AF7B20;
    case 794u: goto L_08AF7B2C;
    case 795u: goto L_08AF7B30;
    case 796u: goto L_08AF7B40;
    case 797u: goto L_08AF7B4C;
    case 798u: goto L_08AF7B60;
    case 799u: goto L_08AF7B70;
    case 800u: goto L_08AF7B8C;
    case 801u: goto L_08AF7B90;
    case 802u: goto L_08AF7BB8;
    case 803u: goto L_08AF7BC4;
    case 804u: goto L_08AF7BCC;
    case 805u: goto L_08AF7BE0;
    case 806u: goto L_08AF7BFC;
    case 807u: goto L_08AF7C18;
    case 808u: goto L_08AF7C20;
    case 809u: goto L_08AF7C28;
    case 810u: goto L_08AF7C40;
    case 811u: goto L_08AF7C50;
    case 812u: goto L_08AF7C6C;
    case 813u: goto L_08AF7CA8;
    case 814u: goto L_08AF7CB0;
    case 815u: goto L_08AF7CC0;
    case 816u: goto L_08AF7CD4;
    case 817u: goto L_08AF7CE4;
    case 818u: goto L_08AF7D00;
    case 819u: goto L_08AF7D08;
    case 820u: goto L_08AF7D30;
    case 821u: goto L_08AF7D4C;
    case 822u: goto L_08AF7D54;
    case 823u: goto L_08AF7D84;
    case 824u: goto L_08AF7D90;
    case 825u: goto L_08AF7DA8;
    case 826u: goto L_08AF7DB0;
    case 827u: goto L_08AF7DCC;
    case 828u: goto L_08AF7DD0;
    case 829u: goto L_08AF7DE8;
    case 830u: goto L_08AF7DF0;
    case 831u: goto L_08AF7E04;
    case 832u: goto L_08AF7E34;
    case 833u: goto L_08AF7E50;
    case 834u: goto L_08AF7E54;
    case 835u: goto L_08AF7E70;
    case 836u: goto L_08AF7E88;
    case 837u: goto L_08AF7E90;
    case 838u: goto L_08AF7EAC;
    case 839u: goto L_08AF7EB0;
    case 840u: goto L_08AF7ECC;
    case 841u: goto L_08AF7EE0;
    case 842u: goto L_08AF7F10;
    case 843u: goto L_08AF7F2C;
    case 844u: goto L_08AF7F34;
    case 845u: goto L_08AF7F40;
    case 846u: goto L_08AF7F50;
    case 847u: goto L_08AF7F64;
    case 848u: goto L_08AF7F70;
    case 849u: goto L_08AF7F8C;
    case 850u: goto L_08AF7F94;
    case 851u: goto L_08AF7FA4;
    case 852u: goto L_08AF7FC0;
    case 853u: goto L_08AF7FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AF4000:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF4014u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08AF61FC;
L_08AF4014:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22836)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-22840)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AF4034u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08AF62D8;
L_08AF4034:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF4048u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08AF61FC;
L_08AF4048:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF406C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5872), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF4090u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 562u, 0x08AEA6F0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4090u) goto L_08AF4090;
    return;
L_08AF4090:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AF40AC;
      }
      goto L_08AF409C;
    }
L_08AF409C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5872)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF40AC;
      }
      goto L_08AF40A8;
    }
L_08AF40A8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08AF40AC;
L_08AF40AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF40C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5872), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF40E8u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 577u, 0x08AEA774u>(ctx, &aot_mem) && ctx.pc == 0x08AF40E8u) goto L_08AF40E8;
    return;
L_08AF40E8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AF4104;
      }
      goto L_08AF40F4;
    }
L_08AF40F4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5872)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF4104;
      }
      goto L_08AF4100;
    }
L_08AF4100:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08AF4104;
L_08AF4104:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4118:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5872), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF4144u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 468u, 0x08AEA2C0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4144u) goto L_08AF4144;
    return;
L_08AF4144:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AF4160;
      }
      goto L_08AF4150;
    }
L_08AF4150:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5872)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF4160;
      }
      goto L_08AF415C;
    }
L_08AF415C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08AF4160;
L_08AF4160:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4174:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5872), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF41A0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 532u, 0x08AEA5A8u>(ctx, &aot_mem) && ctx.pc == 0x08AF41A0u) goto L_08AF41A0;
    return;
L_08AF41A0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AF41BC;
      }
      goto L_08AF41AC;
    }
L_08AF41AC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5872)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF41BC;
      }
      goto L_08AF41B8;
    }
L_08AF41B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08AF41BC;
L_08AF41BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF41D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5872), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF41F4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 514u, 0x08AEA4B0u>(ctx, &aot_mem) && ctx.pc == 0x08AF41F4u) goto L_08AF41F4;
    return;
L_08AF41F4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AF4210;
      }
      goto L_08AF4200;
    }
L_08AF4200:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5872)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF4210;
      }
      goto L_08AF420C;
    }
L_08AF420C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08AF4210;
L_08AF4210:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4224:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5872), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF4250u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 547u, 0x08AEA64Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF4250u) goto L_08AF4250;
    return;
L_08AF4250:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AF426C;
      }
      goto L_08AF425C;
    }
L_08AF425C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5872)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF426C;
      }
      goto L_08AF4268;
    }
L_08AF4268:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08AF426C;
L_08AF426C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4280:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    goto L_08AF4288;
L_08AF4288:
    ctx.gpr[31] = (0x08AF4290u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 499u, 0x08AEA3F0u>(ctx, &aot_mem) && ctx.pc == 0x08AF4290u) goto L_08AF4290;
    return;
L_08AF4290:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF4288;
      }
      goto L_08AF4298;
    }
L_08AF4298:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF42A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF42A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_08AF42E8;
      }
      goto L_08AF42BC;
    }
L_08AF42BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08AF42D0u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 677u, 0x08AA3290u>(ctx, &aot_mem) && ctx.pc == 0x08AF42D0u) goto L_08AF42D0;
    return;
L_08AF42D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08AF435C;
      }
      goto L_08AF42E4;
    }
L_08AF42E4:
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    goto L_08AF42E8;
L_08AF42E8:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08AF4314;
    }
    goto L_08AF42F8;
L_08AF42F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4314:
    ctx.gpr[6] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08AF4334u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 677u, 0x08AA3290u>(ctx, &aot_mem) && ctx.pc == 0x08AF4334u) goto L_08AF4334;
    return;
L_08AF4334:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AF435C;
      }
      goto L_08AF4340;
    }
L_08AF4340:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF435C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF436C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF4398;
      }
      goto L_08AF4374;
    }
L_08AF4374:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AF4398;
L_08AF4398:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF43A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    goto L_08AF43B8;
L_08AF43B8:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[11] & 65535u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[11] = (ctx.gpr[11] >> 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[11] = (ctx.gpr[7] >> 16u);
    ctx.gpr[2] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[7] << 16u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[7] = (ctx.gpr[7] >> 16u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF43B8;
      }
      goto L_08AF440C;
    }
L_08AF440C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF448C;
      }
      goto L_08AF4414;
    }
L_08AF4414:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[10] << 2u);
        goto L_08AF447C;
    }
    goto L_08AF4424;
L_08AF4424:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AF4440u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08AF42A8;
L_08AF4440:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08AF4460u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AF4460u) goto L_08AF4460;
    return;
L_08AF4460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08AF446Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08AF436C;
L_08AF446C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[10] << 2u);
    goto L_08AF447C;
L_08AF447C:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    goto L_08AF448C;
L_08AF448C:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF44A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (0u | 9u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[9]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF44FC;
      }
      goto L_08AF44EC;
    }
L_08AF44EC:
    ctx.gpr[6] = (ctx.gpr[6] << 1u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF44EC;
      }
      goto L_08AF44FC;
    }
L_08AF44FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF450Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08AF42A8;
L_08AF450C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[20] = (0u | 9u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF4568;
      }
      goto L_08AF4528;
    }
L_08AF4528:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AF4530;
L_08AF4530:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF454Cu);
    ctx.gpr[6] = (0u | 10u);
    goto L_08AF43A0;
L_08AF454C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF4530;
      }
      goto L_08AF455C;
    }
L_08AF455C:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF4570;
      }
      goto L_08AF4568;
    }
L_08AF4568:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    goto L_08AF4570;
L_08AF4570:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF45A4;
      }
      goto L_08AF4578;
    }
L_08AF4578:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    goto L_08AF457C;
L_08AF457C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF4594u);
    ctx.gpr[6] = (0u | 10u);
    goto L_08AF43A0;
L_08AF4594:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
        goto L_08AF457C;
    }
    goto L_08AF45A4;
L_08AF45A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF45C4:
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF45DC;
      }
      goto L_08AF45D4;
    }
L_08AF45D4:
    ctx.gpr[2] = (0u | 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    goto L_08AF45DC;
L_08AF45DC:
    ctx.gpr[5] = (65280u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (61440u << 16u);
      if (branch_taken) {
          goto L_08AF45F4;
      }
      goto L_08AF45EC;
    }
L_08AF45EC:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    goto L_08AF45F4;
L_08AF45F4:
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (49152u << 16u);
      if (branch_taken) {
          goto L_08AF4608;
      }
      goto L_08AF4600;
    }
L_08AF4600:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    goto L_08AF4608;
L_08AF4608:
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (32768u << 16u);
      if (branch_taken) {
          goto L_08AF461C;
      }
      goto L_08AF4614;
    }
L_08AF4614:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    goto L_08AF461C;
L_08AF461C:
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (16384u << 16u);
      if (branch_taken) {
          goto L_08AF463C;
      }
      goto L_08AF4628;
    }
L_08AF4628:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF463C;
      }
      goto L_08AF4634;
    }
L_08AF4634:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 32u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF463C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4644:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] & 7u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08AF468C;
      }
      goto L_08AF4654;
    }
L_08AF4654:
    ctx.gpr[6] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 2u);
      if (branch_taken) {
          goto L_08AF4678;
      }
      goto L_08AF4660;
    }
L_08AF4660:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] >> 2u);
        goto L_08AF4680;
    }
    goto L_08AF4668;
L_08AF4668:
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4678:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4680:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 2u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF468C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF469C;
      }
      goto L_08AF4694;
    }
L_08AF4694:
    ctx.gpr[2] = (0u | 16u);
    ctx.gpr[5] = (ctx.gpr[5] >> 16u);
    goto L_08AF469C;
L_08AF469C:
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 15u);
      if (branch_taken) {
          goto L_08AF46B4;
      }
      goto L_08AF46A8;
    }
L_08AF46A8:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[5] & 15u);
    goto L_08AF46B4;
L_08AF46B4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 3u);
      if (branch_taken) {
          goto L_08AF46C8;
      }
      goto L_08AF46BC;
    }
L_08AF46BC:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    ctx.gpr[6] = (ctx.gpr[5] & 3u);
    goto L_08AF46C8;
L_08AF46C8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08AF46DC;
      }
      goto L_08AF46D0;
    }
L_08AF46D0:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[5] >> 2u);
    ctx.gpr[6] = (ctx.gpr[5] & 1u);
    goto L_08AF46DC;
L_08AF46DC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF46F8;
      }
      goto L_08AF46E4;
    }
L_08AF46E4:
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF46F8;
      }
      goto L_08AF46F0;
    }
L_08AF46F0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 32u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF46F8:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4700:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF4720u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08AF42A8;
L_08AF4720:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF473C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF4760;
      }
      goto L_08AF4758;
    }
L_08AF4758:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08AF4760;
L_08AF4760:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[8] << 2u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_08AF4784;
    }
    goto L_08AF4784;
L_08AF4784:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[31] = (0x08AF47A4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08AF42A8;
L_08AF47A4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[3] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[12] = (ctx.gpr[9] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AF47E4;
      }
      goto L_08AF47D0;
    }
L_08AF47D0:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), 0u);
    goto L_08AF47D4;
L_08AF47D4:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[12] = (ctx.gpr[9] < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[12] != 0u) {
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), 0u);
        goto L_08AF47D4;
    }
    goto L_08AF47E4;
L_08AF47E4:
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (ctx.gpr[9] << 2u);
    ctx.gpr[3] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[6]);
    ctx.gpr[11] = (ctx.gpr[3] + ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[10] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF4918;
      }
      goto L_08AF480C;
    }
L_08AF480C:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[13] & 65535u);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.gpr[9] = (ctx.gpr[3] | 0u);
      if (branch_taken) {
          goto L_08AF488C;
      }
      goto L_08AF481C;
    }
L_08AF481C:
    ctx.gpr[13] = (ctx.gpr[5] | 0u);
    ctx.gpr[12] = (0u | 0u);
    goto L_08AF4824;
L_08AF4824:
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[25] = (ctx.gpr[15] & 65535u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[25])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[15] = (ctx.gpr[15] >> 16u);
    ctx.gpr[25] = (ctx.gpr[24] & 65535u);
    ctx.gpr[24] = (ctx.gpr[24] >> 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[15] = (ctx.gpr[31] + ctx.gpr[25]);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[12]);
    ctx.gpr[12] = (ctx.gpr[15] >> 16u);
    ctx.gpr[25] = (ctx.lo);
    ctx.gpr[24] = (ctx.gpr[25] + ctx.gpr[24]);
    ctx.gpr[12] = (ctx.gpr[24] + ctx.gpr[12]);
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[12]));
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.gpr[12] = (ctx.gpr[12] >> 16u);
    ctx.gpr[15] = (ctx.gpr[9] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF4824;
      }
      goto L_08AF4884;
    }
L_08AF4884:
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    goto L_08AF488C;
L_08AF488C:
    ctx.gpr[14] = (ctx.gpr[13] >> 16u);
    goto L_08AF4890;
L_08AF4890:
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.gpr[13] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF4908;
      }
      goto L_08AF4898;
    }
L_08AF4898:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[3] | 0u);
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[15] = (ctx.gpr[24] | 0u);
    goto L_08AF48A8;
L_08AF48A8:
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.gpr[25] = (ctx.gpr[25] & 65535u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[25])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[24] = (ctx.gpr[24] >> 16u);
    ctx.gpr[15] = (ctx.lo);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[24]);
    ctx.gpr[12] = (ctx.gpr[15] + ctx.gpr[12]);
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(4));
    ctx.gpr[15] = (ctx.gpr[15] >> 16u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[15] = (ctx.gpr[12] >> 16u);
    ctx.gpr[12] = (ctx.gpr[24] & 65535u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[25] = (ctx.lo);
    ctx.gpr[12] = (ctx.gpr[25] + ctx.gpr[12]);
    ctx.gpr[15] = (ctx.gpr[12] + ctx.gpr[15]);
    ctx.gpr[25] = (ctx.gpr[9] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.gpr[12] = (ctx.gpr[15] >> 16u);
      if (branch_taken) {
          goto L_08AF48A8;
      }
      goto L_08AF4904;
    }
L_08AF4904:
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[15]);
    goto L_08AF4908;
L_08AF4908:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (ctx.gpr[10] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF480C;
      }
      goto L_08AF4918;
    }
L_08AF4918:
    ctx.gpr[13] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_08AF491C;
L_08AF491C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08AF4938;
      }
      goto L_08AF4924;
    }
L_08AF4924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF4938;
      }
      goto L_08AF4930;
    }
L_08AF4930:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF491C;
      }
      goto L_08AF4938;
    }
L_08AF4938:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4948:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] & 3u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AF49A0;
      }
      goto L_08AF4978;
    }
L_08AF4978:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22504));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF499Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AF43A0;
L_08AF499C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08AF49A0;
L_08AF49A0:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 2u));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AF4A38;
      }
      goto L_08AF49AC;
    }
L_08AF49AC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (ctx.gpr[19] & 1u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 1u));
      if (branch_taken) {
          goto L_08AF49D4;
      }
      goto L_08AF49BC;
    }
L_08AF49BC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AF49C8u);
    ctx.gpr[5] = (0u | 625u);
    goto L_08AF4700;
L_08AF49C8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    goto L_08AF49D4;
L_08AF49D4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AF49F8;
      }
      goto L_08AF49DC;
    }
L_08AF49DC:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF49E8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08AF473C;
L_08AF49E8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AF49F4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AF436C;
L_08AF49F4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08AF49F8;
L_08AF49F8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AF4A38;
      }
      goto L_08AF4A00;
    }
L_08AF4A00:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[19] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
      if (branch_taken) {
          goto L_08AF4A30;
      }
      goto L_08AF4A14;
    }
L_08AF4A14:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AF4A24u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08AF473C;
L_08AF4A24:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08AF4A30;
L_08AF4A30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF49D4;
      }
      goto L_08AF4A38;
    }
L_08AF4A38:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08AF4A5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[11] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 5u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[11] | 0u);
      if (branch_taken) {
          goto L_08AF4AA0;
      }
      goto L_08AF4A90;
    }
L_08AF4A90:
    ctx.gpr[9] = (ctx.gpr[9] << 1u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF4A90;
      }
      goto L_08AF4AA0;
    }
L_08AF4AA0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[31] = (0x08AF4AC0u);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    goto L_08AF42A8;
L_08AF4AC0:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AF4AF8;
      }
      goto L_08AF4AE4;
    }
L_08AF4AE4:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF4AE4;
      }
      goto L_08AF4AF8;
    }
L_08AF4AF8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] & 31u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08AF4B54;
      }
      goto L_08AF4B10;
    }
L_08AF4B10:
    ctx.gpr[3] = (0u | 32u);
    ctx.gpr[3] = (ctx.gpr[3] - ctx.gpr[6]);
    ctx.gpr[11] = (0u | 0u);
    goto L_08AF4B1C;
L_08AF4B1C:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (ctx.gpr[12] << (ctx.gpr[6] & 31u));
    ctx.gpr[11] = (ctx.gpr[12] | ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[12] = (ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] >> (ctx.gpr[3] & 31u));
      if (branch_taken) {
          goto L_08AF4B1C;
      }
      goto L_08AF4B44;
    }
L_08AF4B44:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF4B6C;
      }
      goto L_08AF4B4C;
    }
L_08AF4B4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF4B6C;
      }
      goto L_08AF4B54;
    }
L_08AF4B54:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF4B54;
      }
      goto L_08AF4B6C;
    }
L_08AF4B6C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AF4B84u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08AF436C;
L_08AF4B84:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4B90:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AF4BC4;
      }
      goto L_08AF4BA4;
    }
L_08AF4BA4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08AF4BCC;
      }
      goto L_08AF4BC4;
    }
L_08AF4BC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4BCC:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF4C00;
      }
      goto L_08AF4BE0;
    }
L_08AF4BE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08AF4BF8;
    }
    goto L_08AF4BF8;
L_08AF4BF8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4C00:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08AF4C10;
      }
      goto L_08AF4C08;
    }
L_08AF4C08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08AF4BCC;
      }
      goto L_08AF4C10;
    }
L_08AF4C10:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4C18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[11] = (ctx.gpr[5] | 0u);
    ctx.gpr[3] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[11] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF4C38u);
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    goto L_08AF4B90;
L_08AF4C38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF4C68;
      }
      goto L_08AF4C44;
    }
L_08AF4C44:
    ctx.gpr[4] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF4C50u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AF42A8;
L_08AF4C50:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4C68:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF4C90;
      }
      goto L_08AF4C70;
    }
L_08AF4C70:
    ctx.gpr[4] = (ctx.gpr[11] | 0u);
    ctx.gpr[11] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[11] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[10] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08AF4C9C;
      }
      goto L_08AF4C90;
    }
L_08AF4C90:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[11] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (ctx.gpr[10] + static_cast<std::uint32_t>(20));
    goto L_08AF4C9C;
L_08AF4C9C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AF4CBCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08AF42A8;
L_08AF4CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[9] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.gpr[3] = (0u | 0u);
    goto L_08AF4CF4;
L_08AF4CF4:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (ctx.gpr[10] & 65535u);
    ctx.gpr[13] = (ctx.gpr[11] & 65535u);
    ctx.gpr[12] = (ctx.gpr[12] - ctx.gpr[13]);
    ctx.gpr[13] = (ctx.gpr[12] + ctx.gpr[3]);
    ctx.gpr[10] = (ctx.gpr[10] >> 16u);
    ctx.gpr[11] = (ctx.gpr[11] >> 16u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 16u));
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[3]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[12] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[12] | 0u);
    ctx.gpr[3] = (ctx.gpr[11] | 0u);
    ctx.gpr[13] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08AF4CF4;
      }
      goto L_08AF4D4C;
    }
L_08AF4D4C:
    ctx.gpr[5] = (ctx.gpr[12] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(-4));
        goto L_08AF4D9C;
    }
    goto L_08AF4D58;
L_08AF4D58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[11]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[6] >> 16u);
    ctx.gpr[11] = (ctx.gpr[6] + ctx.gpr[10]);
    ctx.gpr[12] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[8] = (ctx.gpr[12] | 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08AF4D58;
      }
      goto L_08AF4D98;
    }
L_08AF4D98:
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(-4));
    goto L_08AF4D9C;
L_08AF4D9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF4DB8;
      }
      goto L_08AF4DA8;
    }
L_08AF4DA8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF4DA8;
      }
      goto L_08AF4DB8;
    }
L_08AF4DB8:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4DC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32752u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (832u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[4] = (0u - ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AF4E08;
      }
      goto L_08AF4DF0;
    }
L_08AF4DF0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4E08:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 20u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20));
      if (branch_taken) {
          goto L_08AF4E38;
      }
      goto L_08AF4E18;
    }
L_08AF4E18:
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> (ctx.gpr[4] & 31u)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4E38:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 31 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF4E58;
      }
      goto L_08AF4E48;
    }
L_08AF4E48:
    ctx.gpr[4] = (0u | 31u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] << (ctx.gpr[4] & 31u));
    goto L_08AF4E58;
L_08AF4E58:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4E6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-4));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF4E9Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08AF45C4;
L_08AF4E9C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[11] = (0u | 32u);
    ctx.gpr[4] = (ctx.gpr[11] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[5]) < 11 ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[9] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16368u << 16u);
      if (branch_taken) {
          goto L_08AF4F08;
      }
      goto L_08AF4EBC;
    }
L_08AF4EBC:
    ctx.gpr[8] = (0u | 11u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[5]);
    ctx.gpr[9] = (ctx.gpr[6] >> (ctx.gpr[8] & 31u));
    ctx.gpr[4] = (ctx.gpr[9] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF4EE0;
      }
      goto L_08AF4ED8;
    }
L_08AF4ED8:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AF4EE0;
L_08AF4EE0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21));
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] >> (ctx.gpr[8] & 31u));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4F08:
    ctx.gpr[2] = (ctx.gpr[10] | 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF4F20;
      }
      goto L_08AF4F14;
    }
L_08AF4F14:
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-4));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08AF4F20;
L_08AF4F20:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
        goto L_08AF4F7C;
    }
    goto L_08AF4F2C;
L_08AF4F2C:
    ctx.gpr[6] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[11] - ctx.gpr[5]);
    ctx.gpr[11] = (ctx.gpr[10] >> (ctx.gpr[4] & 31u));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[9] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF4F58;
      }
      goto L_08AF4F50;
    }
L_08AF4F50:
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AF4F58;
L_08AF4F58:
    ctx.gpr[5] = (ctx.gpr[10] << (ctx.gpr[5] & 31u));
    ctx.gpr[4] = (ctx.gpr[6] >> (ctx.gpr[4] & 31u));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4F7C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF4F98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF4FB8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08AF42A8;
L_08AF4FB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[10] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    ctx.gpr[3] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (ctx.gpr[3] + static_cast<std::uint32_t>(20));
    ctx.gpr[10] = (ctx.gpr[10] >> 20u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AF5004;
      }
      goto L_08AF4FF4;
    }
L_08AF4FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08AF5004;
L_08AF5004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF5074;
      }
      goto L_08AF5010;
    }
L_08AF5010:
    ctx.gpr[31] = (0x08AF5018u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_08AF4644;
L_08AF5018:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF5050;
      }
      goto L_08AF5028;
    }
L_08AF5028:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[2] = (0u | 32u);
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] << (ctx.gpr[2] & 31u));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[6] >> (ctx.gpr[5] & 31u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AF5058;
      }
      goto L_08AF5050;
    }
L_08AF5050:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AF5058;
L_08AF5058:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (0u | 2u);
        goto L_08AF506C;
    }
    goto L_08AF506C;
L_08AF506C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AF5094;
      }
      goto L_08AF5074;
    }
L_08AF5074:
    ctx.gpr[31] = (0x08AF507Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_08AF4644;
L_08AF507C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[5]);
    goto L_08AF5094;
L_08AF5094:
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1074));
        goto L_08AF50C0;
    }
    goto L_08AF509C;
L_08AF509C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1075));
    ctx.gpr[6] = (0u | 53u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF50C0:
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[11] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08AF50D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    goto L_08AF45C4;
L_08AF50D4:
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF50F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[12] = (ctx.gpr[5] | 0u);
    ctx.gpr[13] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF5108u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08AF4E6C;
L_08AF5108:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08AF511Cu);
    ctx.gpr[4] = (ctx.gpr[12] | 0u);
    goto L_08AF4E6C;
L_08AF511C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF5170;
      }
      goto L_08AF5148;
    }
L_08AF5148:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] << 20u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AF5198;
      }
      goto L_08AF5170;
    }
L_08AF5170:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] << 20u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08AF5198;
L_08AF5198:
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AF51B4u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    goto L_08AF6650;
L_08AF51B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF51C0:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[12])) && ctx.fpr[12] == ctx.fpr[12]));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AF526C;
      }
      goto L_08AF51D0;
    }
L_08AF51D0:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AF51EC;
      }
      goto L_08AF51E4;
    }
L_08AF51E4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AF51EC;
L_08AF51EC:
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1240)));
    ctx.set_fpu_condition((ctx.fpr[4] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AF5334;
      }
      goto L_08AF5200;
    }
L_08AF5200:
    ctx.fpr[12] = ctx.fpr[4] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1236)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[9] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AF5274;
      }
      goto L_08AF521C;
    }
L_08AF521C:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    ctx.gpr[8] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-1232)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[11] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-1228)));
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[10] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    ctx.gpr[6] = (2227u << 16u);
    ctx.fpr[8] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-1224)));
    ctx.fpr[9] = ctx.fpr[10] + ctx.fpr[11];
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[6] = ctx.fpr[2] + ctx.fpr[8];
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[5] + ctx.fpr[4];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    goto L_08AF5254;
L_08AF5254:
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1204)));
    ctx.fpr[12] = ctx.fpr[4] - ctx.fpr[2];
    goto L_08AF5260;
L_08AF5260:
    ctx.fpr[11] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[4] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[11])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    goto L_08AF526C;
L_08AF526C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5274:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-1220)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[2] = ctx.fpr[12] + ctx.fpr[4];
        goto L_08AF52E8;
    }
    goto L_08AF5288;
L_08AF5288:
    ctx.gpr[14] = (2227u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(-1216)));
    ctx.gpr[13] = (2227u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(-1232)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[10] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    ctx.fpr[8] = ctx.fpr[12] - ctx.fpr[0];
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[7] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-1228)));
    ctx.fpr[9] = ctx.fpr[10] + ctx.fpr[4];
    ctx.gpr[11] = (2227u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-1224)));
    ctx.gpr[10] = (2227u << 16u);
    ctx.fpr[12] = ctx.fpr[8] / ctx.fpr[9];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-1212)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[6] + ctx.fpr[7];
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[19] + ctx.fpr[3];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[4];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    goto L_08AF52E0;
L_08AF52E0:
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    goto L_08AF5254;
L_08AF52E8:
    ctx.fpr[6] = ctx.fpr[12] - ctx.fpr[4];
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1232)));
    ctx.gpr[25] = (2227u << 16u);
    ctx.fpr[11] = ctx.fpr[6] / ctx.fpr[2];
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(-1228)));
    ctx.gpr[24] = (2227u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(-1224)));
    ctx.gpr[15] = (2227u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(-1208)));
    { const float fs = ctx.fpr[11]; const float ft = ctx.fpr[11]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[19] + ctx.fpr[3];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[17];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[4];
    { const float fs = ctx.fpr[11]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    goto L_08AF52E0;
L_08AF5334:
    ctx.fpr[7] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-1236)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[7]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[10] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AF5384;
      }
      goto L_08AF5348;
    }
L_08AF5348:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[10] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-1232)));
    ctx.gpr[8] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-1228)));
    { const float fs = ctx.fpr[10]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-1224)));
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[16];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[10]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[11] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    ctx.fpr[9] = ctx.fpr[11] + ctx.fpr[13];
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[10]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[8] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[8] + ctx.fpr[4];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08AF5260;
L_08AF5384:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-1220)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[18]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[2] = ctx.fpr[12] + ctx.fpr[4];
        goto L_08AF53F8;
    }
    goto L_08AF5398;
L_08AF5398:
    ctx.gpr[15] = (2227u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(-1216)));
    ctx.gpr[14] = (2227u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(-1232)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[0];
    ctx.gpr[13] = (2227u << 16u);
    ctx.fpr[11] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(-1228)));
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[4];
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[8] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-1224)));
    ctx.gpr[11] = (2227u << 16u);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[14];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-1212)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[10] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    ctx.fpr[9] = ctx.fpr[10] + ctx.fpr[11];
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[6] = ctx.fpr[3] + ctx.fpr[8];
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[5] + ctx.fpr[4];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    goto L_08AF53F0;
L_08AF53F0:
    ctx.fpr[12] = ctx.fpr[2] + ctx.fpr[0];
    goto L_08AF5260;
L_08AF53F8:
    ctx.fpr[10] = ctx.fpr[12] - ctx.fpr[4];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[9] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1232)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[16] = ctx.fpr[10] / ctx.fpr[2];
    ctx.fpr[8] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1228)));
    ctx.gpr[25] = (2227u << 16u);
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(-1224)));
    ctx.gpr[24] = (2227u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(-1208)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[7] = ctx.fpr[3] + ctx.fpr[8];
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[5] + ctx.fpr[6];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[18] + ctx.fpr[4];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    goto L_08AF53F0;
L_08AF5444:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AF546C;
      }
      goto L_08AF5460;
    }
L_08AF5460:
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF5488;
      }
      goto L_08AF546C;
    }
L_08AF546C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AF547Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 547u, 0x08AEA64Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF547Cu) goto L_08AF547C;
    return;
L_08AF547C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5488:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x08AF54A0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08AF54CC;
L_08AF54A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF54AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF54B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF54CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF54D8;
      }
      goto L_08AF54D4;
    }
L_08AF54D4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AF54D8;
L_08AF54D8:
    // nop
    // nop
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF54E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF54F8u);
    ctx.gpr[4] = (0u | 4u);
    goto L_08AF565C;
L_08AF54F8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5504:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AF5530;
      }
      goto L_08AF5524;
    }
L_08AF5524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6400)));
    if (ctx.gpr[16] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6400)));
        goto L_08AF553C;
    }
    goto L_08AF5530;
L_08AF5530:
    ctx.gpr[31] = (0x08AF5538u);
    // nop
    goto L_08AF54E8;
L_08AF5538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6400)));
    goto L_08AF553C;
L_08AF553C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-6400), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5558:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF55E8;
      }
      goto L_08AF5568;
    }
L_08AF5568:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-1712)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5580:
    ctx.gpr[2] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-2096));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF558C:
    ctx.gpr[2] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-2076));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5598:
    ctx.gpr[2] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-2020));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF55A4:
    ctx.gpr[2] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1968));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF55B0:
    ctx.gpr[2] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1900));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF55BC:
    ctx.gpr[2] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1868));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF55C8:
    ctx.gpr[2] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1832));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF55D4:
    ctx.gpr[2] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1808));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF55E0:
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1780));
    goto L_08AF55E8;
L_08AF55E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF55F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF5624u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1724));
    goto L_08AF5558;
L_08AF5624:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF5630u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08AF5558;
L_08AF5630:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF5644u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 661u, 0x08AEADC4u>(ctx, &aot_mem) && ctx.pc == 0x08AF5644u) goto L_08AF5644;
    return;
L_08AF5644:
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
L_08AF565C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF566Cu);
    // nop
    goto L_08AF55F0;
L_08AF566C:
    ctx.gpr[31] = (0x08AF5674u);
    // nop
    goto L_08AF4280;
L_08AF5674:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5680:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF5690u);
    // nop
    goto L_08AF4280;
L_08AF5690:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF569C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF56B0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AF56B0u) goto L_08AF56B0;
    return;
L_08AF56B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF56BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-11792));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF570C;
      }
      goto L_08AF56E4;
    }
L_08AF56E4:
    ctx.gpr[4] = (1u << 16u);
    goto L_08AF56E8;
L_08AF56E8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (0u | 1u);
        goto L_08AF56FC;
    }
    goto L_08AF56F4;
L_08AF56F4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF56FC;
      }
      goto L_08AF56FC;
    }
L_08AF56FC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF56E8;
      }
      goto L_08AF570C;
    }
L_08AF570C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF57AC;
      }
      goto L_08AF5718;
    }
L_08AF5718:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AF57B0;
    }
    goto L_08AF5724;
L_08AF5724:
    ctx.gpr[9] = (0u | 0u);
    goto L_08AF5728;
L_08AF5728:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF579C;
      }
      goto L_08AF5734;
    }
L_08AF5734:
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
    goto L_08AF5740;
L_08AF5740:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08AF5788;
    }
    goto L_08AF5754;
L_08AF5754:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08AF5788;
L_08AF5788:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AF5740;
      }
      goto L_08AF579C;
    }
L_08AF579C:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF5728;
      }
      goto L_08AF57AC;
    }
L_08AF57AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AF57B0;
L_08AF57B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF57D0;
      }
      goto L_08AF57B8;
    }
L_08AF57B8:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08AF57C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF57C0u) goto L_08AF57C0;
    return;
L_08AF57C0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF57B8;
      }
      goto L_08AF57D0;
    }
L_08AF57D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF57E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AF5844;
      }
      goto L_08AF5810;
    }
L_08AF5810:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08AF5844;
      }
      goto L_08AF5824;
    }
L_08AF5824:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[16];
    ctx.gpr[31] = (0x08AF5830u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF5830u) goto L_08AF5830;
    return;
L_08AF5830:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AF5824;
      }
      goto L_08AF5844;
    }
L_08AF5844:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5868:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-21364)));
    ctx.gpr[9] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-21364), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF58AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-21384)));
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08AF58E4;
      }
      goto L_08AF58D0;
    }
L_08AF58D0:
    ctx.gpr[31] = (0x08AF58D8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 669u, 0x08AA31FCu>(ctx, &aot_mem) && ctx.pc == 0x08AF58D8u) goto L_08AF58D8;
    return;
L_08AF58D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF58E4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF5900;
      }
      goto L_08AF58EC;
    }
L_08AF58EC:
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AF58F4u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF58F4u) goto L_08AF58F4;
    return;
L_08AF58F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5900:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AF590Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF590Cu) goto L_08AF590C;
    return;
L_08AF590C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5918:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[22] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[2] = (0u < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[20]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF598C;
      }
      goto L_08AF5984;
    }
L_08AF5984:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
        goto L_08AF59FC;
    }
    goto L_08AF598C;
L_08AF598C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[23] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF59E0;
      }
      goto L_08AF599C;
    }
L_08AF599C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-21384)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_08AF59B8;
      }
      goto L_08AF59A8;
    }
L_08AF59A8:
    ctx.gpr[31] = (0x08AF59B0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 665u, 0x08AA31B4u>(ctx, &aot_mem) && ctx.pc == 0x08AF59B0u) goto L_08AF59B0;
    return;
L_08AF59B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF59C8;
      }
      goto L_08AF59B8;
    }
L_08AF59B8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AF59C4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF59C4u) goto L_08AF59C4;
    return;
L_08AF59C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AF59C8;
L_08AF59C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF59D8;
      }
      goto L_08AF59D0;
    }
L_08AF59D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-21384)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08AF59D8;
L_08AF59D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF5ACC;
      }
      goto L_08AF59E0;
    }
L_08AF59E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-21384)));
    ctx.gpr[5] = (~(ctx.gpr[19] | 0u));
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    { const bool branch_taken = 0u != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF5ACC;
      }
      goto L_08AF59F8;
    }
L_08AF59F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    goto L_08AF59FC;
L_08AF59FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AF5A34;
      }
      goto L_08AF5A04;
    }
L_08AF5A04:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x08AF5A10u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08AF5868;
L_08AF5A10:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[22]);
    goto L_08AF5A34;
L_08AF5A34:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF5AB4;
      }
      goto L_08AF5A3C;
    }
L_08AF5A3C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AF5AB4;
      }
      goto L_08AF5A48;
    }
L_08AF5A48:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08AF5A80;
      }
      goto L_08AF5A50;
    }
L_08AF5A50:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    jump_target = ctx.gpr[18];
    ctx.gpr[31] = (0x08AF5A78u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF5A78u) goto L_08AF5A78;
    return;
L_08AF5A78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF5A88;
      }
      goto L_08AF5A80;
    }
L_08AF5A80:
    jump_target = ctx.gpr[18];
    ctx.gpr[31] = (0x08AF5A88u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF5A88u) goto L_08AF5A88;
    return;
L_08AF5A88:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF5A9C;
      }
      goto L_08AF5A90;
    }
L_08AF5A90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    goto L_08AF5A9C;
L_08AF5A9C:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[17]);
        goto L_08AF5AA4;
    }
    goto L_08AF5AA4;
L_08AF5AA4:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AF5A48;
      }
      goto L_08AF5AB4;
    }
L_08AF5AB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF5ACC;
      }
      goto L_08AF5AC0;
    }
L_08AF5AC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21364)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-21364), ctx.gpr[5]);
    goto L_08AF5ACC;
L_08AF5ACC:
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5B00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF5B2Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    goto L_08AF5918;
L_08AF5B2C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5B38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[23]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[23] = (ctx.gpr[8] | 0u);
    ctx.gpr[11] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08AF5C74;
      }
      goto L_08AF5B88;
    }
L_08AF5B88:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[11]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x08AF5BA0u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08AF5868;
L_08AF5BA0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08AF5C00;
      }
      goto L_08AF5BC8;
    }
L_08AF5BC8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21384)));
    ctx.gpr[4] = (ctx.gpr[21] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (~(ctx.gpr[5] | 0u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AF5BF8;
      }
      goto L_08AF5BF0;
    }
L_08AF5BF0:
    ctx.gpr[31] = (0x08AF5BF8u);
    // nop
    goto L_08AF5CC4;
L_08AF5BF8:
    { const std::uint32_t dividend = ctx.gpr[22]; const std::uint32_t divisor = ctx.gpr[19]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[18] = (ctx.lo);
    goto L_08AF5C00;
L_08AF5C00:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AF5C4C;
      }
      goto L_08AF5C08;
    }
L_08AF5C08:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[21] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AF5C4C;
      }
      goto L_08AF5C24;
    }
L_08AF5C24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[5]);
    jump_target = ctx.gpr[20];
    ctx.gpr[31] = (0x08AF5C3Cu);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF5C3Cu) goto L_08AF5C3C;
    return;
L_08AF5C3C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF5C24;
      }
      goto L_08AF5C4C;
    }
L_08AF5C4C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21364)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-21364), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF5C74;
      }
      goto L_08AF5C60;
    }
L_08AF5C60:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AF5C74u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    goto L_08AF58AC;
L_08AF5C74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5CA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF5CB8u);
    ctx.gpr[10] = (0u | 0u);
    goto L_08AF5B38;
L_08AF5CB8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5CC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF5CD4u);
    ctx.gpr[4] = (0u | 9u);
    goto L_08AF565C;
L_08AF5CD4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5CE0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[10] = (ctx.lo);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[4]) * static_cast<std::uint64_t>(ctx.gpr[6]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.gpr[9] = (ctx.hi);
    ctx.gpr[2] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[10]);
    jump_target = ctx.gpr[31];
    ctx.gpr[3] = (ctx.gpr[4] + ctx.gpr[9]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5D08:
    ctx.gpr[3] = (31u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] | 65535u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[2]);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[8] < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[3]);
    ctx.gpr[7] = (63u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[7] | 65535u);
    ctx.gpr[20] = (ctx.gpr[4] + 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2047));
    ctx.gpr[4] = (ctx.gpr[20] & ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[21] & ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AF5E3C;
      }
      goto L_08AF5D70;
    }
L_08AF5D70:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[7];
    ctx.gpr[2] = (ctx.gpr[8] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF5E34;
      }
      goto L_08AF5D78;
    }
L_08AF5D78:
    ctx.gpr[31] = (0x08AF5D80u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 0u));
    goto L_08AF68D0;
L_08AF5D80:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-1192)));
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-1188)));
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.gpr[5] = (ctx.gpr[3] + 0u);
    ctx.gpr[6] = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08AF5DA4u);
    ctx.gpr[7] = (ctx.gpr[17] + 0u);
    goto L_08AF62D8;
L_08AF5DA4:
    ctx.gpr[5] = (ctx.gpr[3] + 0u);
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.gpr[6] = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08AF5DB8u);
    ctx.gpr[7] = (ctx.gpr[17] + 0u);
    goto L_08AF62D8;
L_08AF5DB8:
    ctx.gpr[4] = (ctx.gpr[20] + 0u);
    ctx.gpr[18] = (ctx.gpr[2] + 0u);
    ctx.gpr[31] = (0x08AF5DC8u);
    ctx.gpr[19] = (ctx.gpr[3] + 0u);
    goto L_08AF68D0;
L_08AF5DC8:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    ctx.gpr[5] = (ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08AF5E18;
      }
      goto L_08AF5DD4;
    }
L_08AF5DD4:
    ctx.gpr[6] = (ctx.gpr[2] + 0u);
    goto L_08AF5DD8;
L_08AF5DD8:
    ctx.gpr[7] = (ctx.gpr[3] + 0u);
    ctx.gpr[4] = (ctx.gpr[18] + 0u);
    ctx.gpr[31] = (0x08AF5DE8u);
    ctx.gpr[5] = (ctx.gpr[19] + 0u);
    goto L_08AF61FC;
L_08AF5DE8:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.gpr[31] = (0x08AF5DF4u);
    ctx.gpr[5] = (ctx.gpr[3] + 0u);
    goto L_08AF6AF8;
L_08AF5DF4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5E18:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-1184)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[31] = (0x08AF5E2Cu);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-1180)));
    goto L_08AF61FC;
L_08AF5E2C:
    ctx.gpr[6] = (ctx.gpr[2] + 0u);
    goto L_08AF5DD8;
L_08AF5E34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF5D78;
      }
      goto L_08AF5E3C;
    }
L_08AF5E3C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF5D78;
      }
      goto L_08AF5E44;
    }
L_08AF5E44:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-2048));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2048));
    ctx.gpr[20] = (ctx.gpr[20] & ctx.gpr[2]);
    ctx.gpr[21] = (ctx.gpr[21] & ctx.gpr[3]);
    ctx.gpr[20] = (ctx.gpr[20] | ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] | ctx.gpr[5]);
    goto L_08AF5D78;
L_08AF5E68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF5E80u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AF6B70;
L_08AF5E80:
    ctx.gpr[9] = (0u + 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[8] >> 2u);
    ctx.gpr[9] = (ctx.gpr[9] << 30u);
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[2]);
    ctx.gpr[31] = (0x08AF5EA8u);
    ctx.gpr[8] = (ctx.gpr[8] << 30u);
    goto L_08AF6AC4;
L_08AF5EA8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5EB4:
    ctx.gpr[7] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[6] + 0u);
    ctx.gpr[8] = (ctx.gpr[5] + 0u);
    ctx.gpr[2] = (ctx.gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[6] = (ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08AF5F08;
      }
      goto L_08AF5ED0;
    }
L_08AF5ED0:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AF5F08;
      }
      goto L_08AF5EE0;
    }
L_08AF5EE0:
    ctx.gpr[2] = (ctx.gpr[4] ^ 4u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
      if (branch_taken) {
          goto L_08AF5F18;
      }
      goto L_08AF5EEC;
    }
L_08AF5EEC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[6] = (ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08AF5F08;
      }
      goto L_08AF5EF4;
    }
L_08AF5EF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1632));
      if (branch_taken) {
          goto L_08AF5F10;
      }
      goto L_08AF5F08;
    }
L_08AF5F08:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF5F10:
    ctx.gpr[6] = (ctx.gpr[7] + 0u);
    goto L_08AF5F08;
L_08AF5F18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AF5F08;
      }
      goto L_08AF5F20;
    }
L_08AF5F20:
    ctx.gpr[2] = (ctx.gpr[3] ^ 2u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[4] ^ 2u);
      if (branch_taken) {
          goto L_08AF5F78;
      }
      goto L_08AF5F2C;
    }
L_08AF5F2C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[6] = (ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08AF5F08;
      }
      goto L_08AF5F34;
    }
L_08AF5F34:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[10] + 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08AF5F08;
L_08AF5F78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AF5F08;
      }
      goto L_08AF5F80;
    }
L_08AF5F80:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[11] - ctx.gpr[9]);
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.gpr[2] = (0u - ctx.gpr[2]);
        goto L_08AF5FA4;
    }
    goto L_08AF5FA4;
L_08AF5FA4:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF61D4;
      }
      goto L_08AF5FB0;
    }
L_08AF5FB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF5FF4;
      }
      goto L_08AF5FB8;
    }
L_08AF5FB8:
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[24] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[11] - ctx.gpr[9]);
    goto L_08AF5FC4;
L_08AF5FC4:
    ctx.gpr[4] = (ctx.gpr[14] >> 1u);
    ctx.gpr[6] = (ctx.gpr[15] << 31u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[15] >> 1u);
    ctx.gpr[2] = (ctx.gpr[14] & ctx.gpr[24]);
    ctx.gpr[3] = (ctx.gpr[15] & ctx.gpr[25]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[14] = (ctx.gpr[2] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[15] = (ctx.gpr[3] | ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF5FC4;
      }
      goto L_08AF5FEC;
    }
L_08AF5FEC:
    ctx.gpr[9] = (ctx.gpr[11] + 0u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    goto L_08AF5FF4;
L_08AF5FF4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_08AF6038;
    }
    goto L_08AF5FFC;
L_08AF5FFC:
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[24] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[9] - ctx.gpr[11]);
    goto L_08AF6008;
L_08AF6008:
    ctx.gpr[4] = (ctx.gpr[12] >> 1u);
    ctx.gpr[6] = (ctx.gpr[13] << 31u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[13] >> 1u);
    ctx.gpr[2] = (ctx.gpr[12] & ctx.gpr[24]);
    ctx.gpr[3] = (ctx.gpr[13] & ctx.gpr[25]);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[2] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[13] = (ctx.gpr[3] | ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF6008;
      }
      goto L_08AF6030;
    }
L_08AF6030:
    ctx.gpr[11] = (ctx.gpr[9] + 0u);
    goto L_08AF6034;
L_08AF6034:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_08AF6038;
L_08AF6038:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    ctx.gpr[5] = (ctx.gpr[15] - ctx.gpr[13]);
      if (branch_taken) {
          goto L_08AF61AC;
      }
      goto L_08AF6044;
    }
L_08AF6044:
    ctx.gpr[2] = (ctx.gpr[14] < ctx.gpr[12] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[14] - ctx.gpr[12]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF6064;
      }
      goto L_08AF6054;
    }
L_08AF6054:
    ctx.gpr[2] = (ctx.gpr[12] < ctx.gpr[14] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[13] - ctx.gpr[15]);
    ctx.gpr[4] = (ctx.gpr[12] - ctx.gpr[14]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[2]);
    goto L_08AF6064;
L_08AF6064:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF6188;
      }
      goto L_08AF606C;
    }
L_08AF606C:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), 0u);
    goto L_08AF607C;
L_08AF607C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (4095u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 65535u);
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (ctx.gpr[4] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
        goto L_08AF6114;
    }
    goto L_08AF60A8;
L_08AF60A8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[2] = (ctx.gpr[4] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF6178;
      }
      goto L_08AF60B0;
    }
L_08AF60B0:
    ctx.gpr[3] = (ctx.gpr[8] >> 31u);
    goto L_08AF60B4;
L_08AF60B4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    goto L_08AF60B8;
L_08AF60B8:
    ctx.gpr[7] = (ctx.gpr[9] << 1u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[3]);
    ctx.gpr[6] = (ctx.gpr[8] << 1u);
    ctx.gpr[11] = (4095u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (ctx.gpr[4] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[3]);
    ctx.gpr[11] = (ctx.gpr[11] | 65535u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (ctx.gpr[11] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[12] = (ctx.gpr[4] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[8] = (ctx.gpr[6] + 0u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[9] = (ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08AF6110;
      }
      goto L_08AF6100;
    }
L_08AF6100:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[11];
    ctx.gpr[3] = (ctx.gpr[8] >> 31u);
      if (branch_taken) {
          goto L_08AF60B4;
      }
      goto L_08AF6108;
    }
L_08AF6108:
    if (ctx.gpr[12] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
        goto L_08AF60B8;
    }
    goto L_08AF6110;
L_08AF6110:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    goto L_08AF6114;
L_08AF6114:
    ctx.gpr[3] = (8191u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] | 65535u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3));
    ctx.gpr[3] = (ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF6170;
      }
      goto L_08AF612C;
    }
L_08AF612C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[4] & ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[5] << 31u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[3] = (ctx.gpr[5] & ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
    ctx.gpr[3] = (ctx.gpr[3] | ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_08AF6170;
L_08AF6170:
    ctx.gpr[6] = (ctx.gpr[10] + 0u);
    goto L_08AF5F08;
L_08AF6178:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[3] = (ctx.gpr[8] >> 31u);
      if (branch_taken) {
          goto L_08AF60B4;
      }
      goto L_08AF6180;
    }
L_08AF6180:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    goto L_08AF6114;
L_08AF6188:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[3] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    goto L_08AF607C;
L_08AF61AC:
    ctx.gpr[2] = (ctx.gpr[12] + ctx.gpr[14]);
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[14] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[13] + ctx.gpr[15]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    goto L_08AF6114;
L_08AF61D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF61EC;
      }
      goto L_08AF61DC;
    }
L_08AF61DC:
    ctx.gpr[14] = (0u + 0u);
    ctx.gpr[15] = (0u + 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_08AF6038;
L_08AF61EC:
    ctx.gpr[12] = (0u + 0u);
    ctx.gpr[13] = (0u + 0u);
    ctx.gpr[11] = (ctx.gpr[9] + 0u);
    goto L_08AF6034;
L_08AF61FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    ctx.gpr[31] = (0x08AF6230u);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    goto L_08AF6F0C;
L_08AF6230:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08AF623Cu);
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    goto L_08AF6F0C;
L_08AF623C:
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08AF624Cu);
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    goto L_08AF5EB4;
L_08AF624C:
    ctx.gpr[31] = (0x08AF6254u);
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    goto L_08AF6C6C;
L_08AF6254:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6264:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[7]);
    ctx.gpr[31] = (0x08AF6298u);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    goto L_08AF6F0C;
L_08AF6298:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08AF62A4u);
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    goto L_08AF6F0C;
L_08AF62A4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
    ctx.gpr[31] = (0x08AF62C0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_08AF5EB4;
L_08AF62C0:
    ctx.gpr[31] = (0x08AF62C8u);
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    goto L_08AF6C6C;
L_08AF62C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF62D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    ctx.gpr[31] = (0x08AF631Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    goto L_08AF6F0C;
L_08AF631C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08AF6328u);
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    goto L_08AF6F0C;
L_08AF6328:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[29] + 0u);
    ctx.gpr[2] = (ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[12] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08AF6368;
      }
      goto L_08AF633C;
    }
L_08AF633C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (ctx.gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08AF63C4;
    }
    goto L_08AF634C;
L_08AF634C:
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[4] ^ 4u);
      if (branch_taken) {
          goto L_08AF63A8;
      }
      goto L_08AF6358;
    }
L_08AF6358:
    ctx.gpr[3] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[2] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1632));
      if (branch_taken) {
          goto L_08AF6380;
      }
      goto L_08AF6368;
    }
L_08AF6368:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AF636C;
L_08AF636C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    ctx.gpr[2] = (ctx.gpr[2] ^ ctx.gpr[3]);
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08AF6380;
L_08AF6380:
    ctx.gpr[31] = (0x08AF6388u);
    // nop
    goto L_08AF6C6C;
L_08AF6388:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF63A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[3] ^ 2u);
      if (branch_taken) {
          goto L_08AF63DC;
      }
      goto L_08AF63B0;
    }
L_08AF63B0:
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] ^ 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1632));
      if (branch_taken) {
          goto L_08AF6380;
      }
      goto L_08AF63C0;
    }
L_08AF63C0:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08AF63C4;
L_08AF63C4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
    ctx.gpr[2] = (ctx.gpr[2] ^ ctx.gpr[3]);
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_08AF6380;
L_08AF63DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AF636C;
      }
      goto L_08AF63E4;
    }
L_08AF63E4:
    ctx.gpr[2] = (ctx.gpr[4] ^ 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AF63C4;
      }
      goto L_08AF63F0;
    }
L_08AF63F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[7]) * static_cast<std::uint64_t>(ctx.gpr[6]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.gpr[18] = (0u + 0u);
    ctx.gpr[19] = (0u + 0u);
    ctx.gpr[3] = (ctx.hi);
    ctx.gpr[2] = (ctx.lo);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[5]) * static_cast<std::uint64_t>(ctx.gpr[8]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.gpr[11] = (ctx.hi);
    ctx.gpr[10] = (ctx.lo);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[5]) * static_cast<std::uint64_t>(ctx.gpr[6]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.gpr[14] = (ctx.gpr[10] + ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[14] < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[11] + ctx.gpr[3]);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[9]);
    ctx.gpr[21] = (ctx.hi);
    ctx.gpr[20] = (ctx.lo);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[7]) * static_cast<std::uint64_t>(ctx.gpr[8]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.gpr[4] = (ctx.gpr[15] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[7] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.lo);
      if (branch_taken) {
          goto L_08AF6640;
      }
      goto L_08AF6450;
    }
L_08AF6450:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[15];
    ctx.gpr[2] = (ctx.gpr[14] < ctx.gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF6638;
      }
      goto L_08AF6458;
    }
L_08AF6458:
    ctx.gpr[10] = (0u + 0u);
    goto L_08AF645C;
L_08AF645C:
    ctx.gpr[11] = (ctx.gpr[14] << 0u);
    ctx.gpr[24] = (ctx.gpr[6] + ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[24] < ctx.gpr[10] ? 1u : 0u);
    ctx.gpr[25] = (ctx.gpr[7] + ctx.gpr[11]);
    ctx.gpr[25] = (ctx.gpr[25] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[25] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08AF662C;
    }
    goto L_08AF647C;
L_08AF647C:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[25];
    ctx.gpr[2] = (ctx.gpr[24] < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF6620;
      }
      goto L_08AF6484;
    }
L_08AF6484:
    ctx.gpr[2] = (ctx.gpr[15] >> 0u);
    goto L_08AF6488;
L_08AF6488:
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[20]);
    ctx.gpr[3] = (0u + 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[2] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[21]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[18] + ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[10] < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (8191u << 16u);
    ctx.gpr[11] = (ctx.gpr[19] + ctx.gpr[3]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] | 65535u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[11] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[24] + 0u);
    ctx.gpr[9] = (ctx.gpr[25] + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AF654C;
      }
      goto L_08AF64EC;
    }
L_08AF64EC:
    ctx.gpr[6] = (8191u << 16u);
    ctx.gpr[15] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[14] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[25] = (32768u << 16u);
    ctx.gpr[24] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[6] = (ctx.gpr[6] | 65535u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
    goto L_08AF6508;
L_08AF6508:
    ctx.gpr[3] = (ctx.gpr[11] << 31u);
    ctx.gpr[4] = (ctx.gpr[10] & ctx.gpr[14]);
    ctx.gpr[11] = (ctx.gpr[11] >> 1u);
    ctx.gpr[10] = (ctx.gpr[10] >> 1u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[3] = (ctx.gpr[6] < ctx.gpr[11] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF6544;
      }
      goto L_08AF652C;
    }
L_08AF652C:
    ctx.gpr[2] = (ctx.gpr[9] << 31u);
    ctx.gpr[8] = (ctx.gpr[8] >> 1u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[9] >> 1u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[24]);
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[25]);
    goto L_08AF6544;
L_08AF6544:
    if (ctx.gpr[3] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
        goto L_08AF6508;
    }
    goto L_08AF654C;
L_08AF654C:
    ctx.gpr[2] = (4095u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (4095u << 16u);
      if (branch_taken) {
          goto L_08AF65A4;
      }
      goto L_08AF6560;
    }
L_08AF6560:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | 65535u);
    goto L_08AF656C;
L_08AF656C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (ctx.gpr[10] >> 31u);
    ctx.gpr[11] = (ctx.gpr[11] << 1u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (ctx.gpr[11] | ctx.gpr[3]);
    ctx.gpr[10] = (ctx.gpr[10] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) < 0;
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF6614;
      }
      goto L_08AF658C;
    }
L_08AF658C:
    ctx.gpr[3] = (ctx.gpr[8] >> 31u);
    ctx.gpr[9] = (ctx.gpr[9] << 1u);
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] << 1u);
      if (branch_taken) {
          goto L_08AF656C;
      }
      goto L_08AF65A4;
    }
L_08AF65A4:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(255));
    ctx.gpr[2] = (ctx.gpr[10] & ctx.gpr[2]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[3] = (ctx.gpr[11] & ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AF65D4;
      }
      goto L_08AF65BC;
    }
L_08AF65BC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(3));
    goto L_08AF65C0;
L_08AF65C0:
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    ctx.gpr[4] = (ctx.gpr[12] + 0u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AF6380;
L_08AF65D4:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AF65C0;
      }
      goto L_08AF65DC;
    }
L_08AF65DC:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[2] = (ctx.gpr[10] & ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[11] & ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
        goto L_08AF6608;
    }
    goto L_08AF65F8;
L_08AF65F8:
    ctx.gpr[2] = (ctx.gpr[8] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AF65C0;
      }
      goto L_08AF6604;
    }
L_08AF6604:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    goto L_08AF6608;
L_08AF6608:
    ctx.gpr[2] = (ctx.gpr[10] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    goto L_08AF65BC;
L_08AF6614:
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[6]);
    ctx.gpr[11] = (ctx.gpr[11] | ctx.gpr[7]);
    goto L_08AF658C;
L_08AF6620:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (ctx.gpr[15] >> 0u);
      if (branch_taken) {
          goto L_08AF6488;
      }
      goto L_08AF6628;
    }
L_08AF6628:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AF662C;
L_08AF662C:
    ctx.gpr[2] = (ctx.gpr[18] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[2]);
    goto L_08AF6484;
L_08AF6638:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[10] = (0u + 0u);
        goto L_08AF645C;
    }
    goto L_08AF6640;
L_08AF6640:
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[10] = (0u + 0u);
    goto L_08AF645C;
L_08AF6650:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    ctx.gpr[31] = (0x08AF6684u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08AF6F0C;
L_08AF6684:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08AF6690u);
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    goto L_08AF6F0C;
L_08AF6690:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[29] + 0u);
    ctx.gpr[2] = (ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08AF66E8;
      }
      goto L_08AF66A4;
    }
L_08AF66A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (ctx.gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08AF66E8;
      }
      goto L_08AF66B4;
    }
L_08AF66B4:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[2] = (ctx.gpr[5] ^ 4u);
    ctx.gpr[3] = (ctx.gpr[3] ^ ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AF66D8;
      }
      goto L_08AF66CC;
    }
L_08AF66CC:
    ctx.gpr[2] = (ctx.gpr[5] ^ 2u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[6] ^ 4u);
      if (branch_taken) {
          goto L_08AF6700;
      }
      goto L_08AF66D8;
    }
L_08AF66D8:
    ctx.gpr[2] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1632));
      if (branch_taken) {
          goto L_08AF66E8;
      }
      goto L_08AF66E4;
    }
L_08AF66E4:
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    goto L_08AF66E8;
L_08AF66E8:
    ctx.gpr[31] = (0x08AF66F0u);
    // nop
    goto L_08AF6C6C;
L_08AF66F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6700:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[6] ^ 2u);
      if (branch_taken) {
          goto L_08AF6724;
      }
      goto L_08AF6708;
    }
L_08AF6708:
    ctx.gpr[2] = (0u + 0u);
    ctx.gpr[3] = (0u + 0u);
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    goto L_08AF66E8;
L_08AF6724:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AF673C;
      }
      goto L_08AF672C;
    }
L_08AF672C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AF66E8;
L_08AF673C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[12] = (ctx.gpr[5] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[3] - ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AF6854;
      }
      goto L_08AF6760;
    }
L_08AF6760:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[5];
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF684C;
      }
      goto L_08AF6768;
    }
L_08AF6768:
    ctx.gpr[9] = (4096u << 16u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[14] = (0u + 0u);
    ctx.gpr[15] = (0u + 0u);
    goto L_08AF6778;
L_08AF6778:
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[2] = (ctx.gpr[9] << 31u);
      if (branch_taken) {
          goto L_08AF67A4;
      }
      goto L_08AF6780;
    }
L_08AF6780:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[5];
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF683C;
      }
      goto L_08AF6788;
    }
L_08AF6788:
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[10] ? 1u : 0u);
    goto L_08AF678C;
L_08AF678C:
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[11]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[2]);
    ctx.gpr[14] = (ctx.gpr[14] | ctx.gpr[8]);
    ctx.gpr[15] = (ctx.gpr[15] | ctx.gpr[9]);
    ctx.gpr[2] = (ctx.gpr[9] << 31u);
    goto L_08AF67A4;
L_08AF67A4:
    ctx.gpr[8] = (ctx.gpr[8] >> 1u);
    ctx.gpr[7] = (ctx.gpr[5] << 1u);
    ctx.gpr[3] = (ctx.gpr[4] >> 31u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[9] >> 1u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[3]);
    ctx.gpr[6] = (ctx.gpr[4] << 1u);
    ctx.gpr[2] = (ctx.gpr[8] | ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[6] + 0u);
    ctx.gpr[5] = (ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[12] = (ctx.gpr[7] < ctx.gpr[11] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF6778;
      }
      goto L_08AF67D4;
    }
L_08AF67D4:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(255));
    ctx.gpr[2] = (ctx.gpr[14] & ctx.gpr[2]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[3] = (ctx.gpr[15] & ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AF67FC;
      }
      goto L_08AF67EC;
    }
L_08AF67EC:
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(16), ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(20), ctx.gpr[15]);
    ctx.gpr[4] = (ctx.gpr[13] + 0u);
    goto L_08AF66E8;
L_08AF67FC:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF67EC;
      }
      goto L_08AF6804;
    }
L_08AF6804:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[2] = (ctx.gpr[14] & ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[15] & ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(128));
        goto L_08AF6830;
    }
    goto L_08AF6820;
L_08AF6820:
    ctx.gpr[2] = (ctx.gpr[6] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF67EC;
      }
      goto L_08AF682C;
    }
L_08AF682C:
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(128));
    goto L_08AF6830;
L_08AF6830:
    ctx.gpr[2] = (ctx.gpr[14] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[2]);
    goto L_08AF67EC;
L_08AF683C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[2] = (ctx.gpr[9] << 31u);
        goto L_08AF67A4;
    }
    goto L_08AF6844;
L_08AF6844:
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[10] ? 1u : 0u);
    goto L_08AF678C;
L_08AF684C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF6768;
      }
      goto L_08AF6854;
    }
L_08AF6854:
    ctx.gpr[2] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[3] = (ctx.gpr[4] >> 31u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[12] = (ctx.gpr[5] < ctx.gpr[11] ? 1u : 0u);
    goto L_08AF6768;
L_08AF6874:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    ctx.gpr[31] = (0x08AF68A8u);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    goto L_08AF6F0C;
L_08AF68A8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08AF68B4u);
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    goto L_08AF6F0C;
L_08AF68B4:
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08AF68C0u);
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    goto L_08AF7028;
L_08AF68C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF68D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[3] = (ctx.gpr[4] >> 31u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AF6908;
      }
      goto L_08AF68EC;
    }
L_08AF68EC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AF68F4;
L_08AF68F4:
    ctx.gpr[31] = (0x08AF68FCu);
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    goto L_08AF6C6C;
L_08AF68FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08AF6900;
L_08AF6900:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6908:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(60));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF69A0;
      }
      goto L_08AF6914;
    }
L_08AF6914:
    ctx.gpr[2] = (32768u << 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AF6988;
      }
      goto L_08AF6920;
    }
L_08AF6920:
    ctx.gpr[2] = (0u - ctx.gpr[4]);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    goto L_08AF6928;
L_08AF6928:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.gpr[2] = (4095u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AF68F4;
      }
      goto L_08AF6948;
    }
L_08AF6948:
    ctx.gpr[6] = (4095u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 65535u);
    goto L_08AF6950;
L_08AF6950:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[3] = (ctx.gpr[3] << 1u);
    ctx.gpr[3] = (ctx.gpr[3] | ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] << 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF6950;
      }
      goto L_08AF6980;
    }
L_08AF6980:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_08AF68F4;
L_08AF6988:
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1176)));
    ctx.gpr[3] = (2227u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1172)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08AF6900;
L_08AF69A0:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    goto L_08AF6928;
L_08AF69AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF69D0u);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    goto L_08AF6F0C;
L_08AF69D0:
    ctx.gpr[5] = (0u + 0u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] ^ 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF6A20;
      }
      goto L_08AF69E4;
    }
L_08AF69E4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
      if (branch_taken) {
          goto L_08AF6A20;
      }
      goto L_08AF69EC;
    }
L_08AF69EC:
    ctx.gpr[3] = (32767u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (32768u << 16u);
      if (branch_taken) {
          goto L_08AF6A14;
      }
      goto L_08AF69F8;
    }
L_08AF69F8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 31 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF6A20;
      }
      goto L_08AF6A08;
    }
L_08AF6A08:
    ctx.gpr[3] = (32767u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (32768u << 16u);
      if (branch_taken) {
          goto L_08AF6A30;
      }
      goto L_08AF6A14;
    }
L_08AF6A14:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (ctx.gpr[3] | 65535u);
    if (ctx.gpr[2] == 0u) ctx.gpr[5] = (ctx.gpr[3]);
    goto L_08AF6A20;
L_08AF6A20:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[2] = (ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6A30:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[4] << 26u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AF6A58;
      }
      goto L_08AF6A4C;
    }
L_08AF6A4C:
    ctx.gpr[6] = (ctx.gpr[3] >> (ctx.gpr[4] & 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF6A70;
      }
      goto L_08AF6A58;
    }
L_08AF6A58:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[2] >> (ctx.gpr[4] & 31u));
      if (branch_taken) {
          goto L_08AF6A6C;
      }
      goto L_08AF6A60;
    }
L_08AF6A60:
    ctx.gpr[8] = (0u - ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[3] << (ctx.gpr[8] & 31u));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[8]);
    goto L_08AF6A6C;
L_08AF6A6C:
    ctx.gpr[7] = (ctx.gpr[3] >> (ctx.gpr[4] & 31u));
    goto L_08AF6A70;
L_08AF6A70:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u - ctx.gpr[6]);
    if (ctx.gpr[2] == 0u) ctx.gpr[5] = (ctx.gpr[6]);
    goto L_08AF6A20;
L_08AF6A80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.gpr[31] = (0x08AF6AA4u);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    goto L_08AF6F0C;
L_08AF6AA4:
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08AF6AB8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08AF6C6C;
L_08AF6AB8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6AC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[31] = (0x08AF6AECu);
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    goto L_08AF6C6C;
L_08AF6AEC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6AF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.gpr[31] = (0x08AF6B1Cu);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    goto L_08AF6F0C;
L_08AF6B1C:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (16383u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (ctx.gpr[9] & ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[8] & ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[9] << 2u);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[6]);
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[8]);
    ctx.gpr[31] = (0x08AF6B64u);
    ctx.gpr[7] = (ctx.gpr[2] + 0u);
    goto L_08AF6C3C;
L_08AF6B64:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6B70:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (127u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] | 65535u);
    ctx.gpr[6] = (ctx.gpr[2] >> 23u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[2] & ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AF6BEC;
      }
      goto L_08AF6B94;
    }
L_08AF6B94:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF6BE4;
      }
      goto L_08AF6B9C;
    }
L_08AF6B9C:
    ctx.gpr[2] = (16383u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] << 7u);
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-126));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3));
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[7] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF6BDC;
      }
      goto L_08AF6BC0;
    }
L_08AF6BC0:
    ctx.gpr[4] = (16383u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65535u);
    goto L_08AF6BC8;
L_08AF6BC8:
    ctx.gpr[7] = (ctx.gpr[7] << 1u);
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF6BC8;
      }
      goto L_08AF6BD8;
    }
L_08AF6BD8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_08AF6BDC;
L_08AF6BDC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6BE4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6BEC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    ctx.gpr[2] = (ctx.gpr[7] << 7u);
      if (branch_taken) {
          goto L_08AF6C14;
      }
      goto L_08AF6BF8;
    }
L_08AF6BF8:
    ctx.gpr[3] = (16384u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-127));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08AF6BE4;
L_08AF6C14:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[2] = (16u << 16u);
        goto L_08AF6C24;
    }
    goto L_08AF6C1C;
L_08AF6C1C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(4));
    goto L_08AF6BE4;
L_08AF6C24:
    ctx.gpr[2] = (ctx.gpr[7] & ctx.gpr[2]);
    if (ctx.gpr[2] == 0u) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
        goto L_08AF6BDC;
    }
    goto L_08AF6C30;
L_08AF6C30:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AF6BDC;
L_08AF6C3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[31] = (0x08AF6C60u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    goto L_08AF718C;
L_08AF6C60:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6C6C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[9] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF6D00;
      }
      goto L_08AF6C8C;
    }
L_08AF6C8C:
    ctx.gpr[3] = (8u << 16u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[2]);
    ctx.gpr[11] = (ctx.gpr[11] | ctx.gpr[3]);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(2047));
    goto L_08AF6CA0;
L_08AF6CA0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AF6CA4;
L_08AF6CA4:
    ctx.gpr[6] = (15u << 16u);
    ctx.gpr[3] = (65520u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 65535u);
    ctx.gpr[6] = (ctx.gpr[11] & ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[3]);
    ctx.gpr[4] = (32783u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[9] & 2047u);
    ctx.gpr[4] = (ctx.gpr[4] | 65535u);
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 20u);
    ctx.gpr[3] = (32767u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[5]);
    ctx.gpr[3] = (ctx.gpr[3] | 65535u);
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[12] << 31u);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6D00:
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(2047));
        goto L_08AF6E6C;
    }
    goto L_08AF6D0C;
L_08AF6D0C:
    ctx.gpr[2] = (ctx.gpr[3] ^ 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF6E6C;
      }
      goto L_08AF6D18;
    }
L_08AF6D18:
    ctx.gpr[2] = (ctx.gpr[10] | ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AF6CA4;
      }
      goto L_08AF6D24;
    }
L_08AF6D24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1022 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1024 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF6E64;
      }
      goto L_08AF6D34;
    }
L_08AF6D34:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1022));
    ctx.gpr[13] = (ctx.gpr[2] - ctx.gpr[4]);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[13]) < 57 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF6DCC;
      }
      goto L_08AF6D48;
    }
L_08AF6D48:
    ctx.gpr[10] = (0u + 0u);
    ctx.gpr[11] = (0u + 0u);
    goto L_08AF6D50;
L_08AF6D50:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(255));
    ctx.gpr[2] = (ctx.gpr[10] & ctx.gpr[2]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[3] = (ctx.gpr[11] & ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AF6D9C;
      }
      goto L_08AF6D68;
    }
L_08AF6D68:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(127));
    goto L_08AF6D6C;
L_08AF6D6C:
    ctx.gpr[2] = (ctx.gpr[10] < static_cast<std::uint32_t>(127) ? 1u : 0u);
    goto L_08AF6D70;
L_08AF6D70:
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[2] = (4095u << 16u);
    goto L_08AF6D78;
L_08AF6D78:
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] >> 8u);
    ctx.gpr[4] = (ctx.gpr[11] << 24u);
    if (ctx.gpr[2] != 0u) ctx.gpr[9] = (ctx.gpr[3]);
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[4]);
    goto L_08AF6D94;
L_08AF6D94:
    ctx.gpr[11] = (ctx.gpr[11] >> 8u);
    goto L_08AF6CA0;
L_08AF6D9C:
    if (ctx.gpr[3] != 0u) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(127));
        goto L_08AF6D6C;
    }
    goto L_08AF6DA4;
L_08AF6DA4:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[2] = (ctx.gpr[10] & ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[11] & ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[2] = (4095u << 16u);
        goto L_08AF6D78;
    }
    goto L_08AF6DC0;
L_08AF6DC0:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    ctx.gpr[2] = (ctx.gpr[10] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    goto L_08AF6D70;
L_08AF6DCC:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[13] << 26u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AF6DEC;
      }
      goto L_08AF6DE0;
    }
L_08AF6DE0:
    ctx.gpr[3] = (ctx.gpr[4] << (ctx.gpr[13] & 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF6E04;
      }
      goto L_08AF6DEC;
    }
L_08AF6DEC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[3] = (ctx.gpr[5] << (ctx.gpr[13] & 31u));
      if (branch_taken) {
          goto L_08AF6E00;
      }
      goto L_08AF6DF4;
    }
L_08AF6DF4:
    ctx.gpr[6] = (0u - ctx.gpr[13]);
    ctx.gpr[6] = (ctx.gpr[4] >> (ctx.gpr[6] & 31u));
    ctx.gpr[3] = (ctx.gpr[3] | ctx.gpr[6]);
    goto L_08AF6E00;
L_08AF6E00:
    ctx.gpr[2] = (ctx.gpr[4] << (ctx.gpr[13] & 31u));
    goto L_08AF6E04;
L_08AF6E04:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[2] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    ctx.gpr[2] = (ctx.gpr[10] & ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[11] & ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    ctx.gpr[8] = (ctx.gpr[13] << 26u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AF6E38;
      }
      goto L_08AF6E2C;
    }
L_08AF6E2C:
    ctx.gpr[6] = (ctx.gpr[11] >> (ctx.gpr[13] & 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF6E50;
      }
      goto L_08AF6E38;
    }
L_08AF6E38:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[10] >> (ctx.gpr[13] & 31u));
      if (branch_taken) {
          goto L_08AF6E4C;
      }
      goto L_08AF6E40;
    }
L_08AF6E40:
    ctx.gpr[8] = (0u - ctx.gpr[13]);
    ctx.gpr[8] = (ctx.gpr[11] << (ctx.gpr[8] & 31u));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[8]);
    goto L_08AF6E4C;
L_08AF6E4C:
    ctx.gpr[7] = (ctx.gpr[11] >> (ctx.gpr[13] & 31u));
    goto L_08AF6E50;
L_08AF6E50:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (0u + 0u);
    ctx.gpr[10] = (ctx.gpr[6] | ctx.gpr[2]);
    ctx.gpr[11] = (ctx.gpr[7] | ctx.gpr[5]);
    goto L_08AF6D50;
L_08AF6E64:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(2047));
      if (branch_taken) {
          goto L_08AF6E7C;
      }
      goto L_08AF6E6C;
    }
L_08AF6E6C:
    ctx.gpr[10] = (0u + 0u);
    ctx.gpr[11] = (0u + 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AF6CA4;
L_08AF6E7C:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(255));
    ctx.gpr[6] = (ctx.gpr[10] & ctx.gpr[2]);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(128));
    ctx.gpr[7] = (ctx.gpr[11] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(1023));
      if (branch_taken) {
          goto L_08AF6EDC;
      }
      goto L_08AF6E98;
    }
L_08AF6E98:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(127));
    goto L_08AF6E9C;
L_08AF6E9C:
    ctx.gpr[2] = (ctx.gpr[10] < static_cast<std::uint32_t>(127) ? 1u : 0u);
    goto L_08AF6EA0;
L_08AF6EA0:
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[2] = (8191u << 16u);
    goto L_08AF6EA8;
L_08AF6EA8:
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[11] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[10] = (ctx.gpr[10] >> 8u);
        goto L_08AF6ED0;
    }
    goto L_08AF6EB8;
L_08AF6EB8:
    ctx.gpr[2] = (ctx.gpr[11] << 31u);
    ctx.gpr[10] = (ctx.gpr[10] >> 1u);
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[2]);
    ctx.gpr[11] = (ctx.gpr[11] >> 1u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] >> 8u);
    goto L_08AF6ED0;
L_08AF6ED0:
    ctx.gpr[2] = (ctx.gpr[11] << 24u);
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[2]);
    goto L_08AF6D94;
L_08AF6EDC:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(127));
        goto L_08AF6E9C;
    }
    goto L_08AF6EE4;
L_08AF6EE4:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[2] = (ctx.gpr[10] & ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[11] & ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[2] = (8191u << 16u);
        goto L_08AF6EA8;
    }
    goto L_08AF6F00;
L_08AF6F00:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(128));
    ctx.gpr[2] = (ctx.gpr[10] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    goto L_08AF6EA0;
L_08AF6F0C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (15u << 16u);
    ctx.gpr[10] = (ctx.gpr[5] + 0u);
    ctx.gpr[7] = (ctx.gpr[2] >> 20u);
    ctx.gpr[5] = (ctx.gpr[2] >> 31u);
    ctx.gpr[3] = (ctx.gpr[3] | 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 2047u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF6FB4;
      }
      goto L_08AF6F38;
    }
L_08AF6F38:
    ctx.gpr[2] = (ctx.gpr[8] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[8] >> 24u);
      if (branch_taken) {
          goto L_08AF6F50;
      }
      goto L_08AF6F44;
    }
L_08AF6F44:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(2));
    goto L_08AF6F48;
L_08AF6F48:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6F50:
    ctx.gpr[4] = (4095u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] << 8u);
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] | 65535u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1022));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AF6FA8;
      }
      goto L_08AF6F7C;
    }
L_08AF6F7C:
    ctx.gpr[5] = (4095u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 65535u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1022));
    goto L_08AF6F88;
L_08AF6F88:
    ctx.gpr[3] = (ctx.gpr[8] >> 31u);
    ctx.gpr[9] = (ctx.gpr[9] << 1u);
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[5] < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] << 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF6F88;
      }
      goto L_08AF6FA4;
    }
L_08AF6FA4:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08AF6FA8;
L_08AF6FA8:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF6FB4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(2047));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    ctx.gpr[6] = (ctx.gpr[8] >> 24u);
      if (branch_taken) {
          goto L_08AF6FF4;
      }
      goto L_08AF6FC0;
    }
L_08AF6FC0:
    ctx.gpr[3] = (ctx.gpr[9] << 8u);
    ctx.gpr[3] = (ctx.gpr[3] | ctx.gpr[6]);
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (ctx.gpr[8] << 8u);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
    ctx.gpr[3] = (ctx.gpr[3] | ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1023));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_08AF6F48;
L_08AF6FF4:
    ctx.gpr[2] = (ctx.gpr[8] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF6F48;
      }
      goto L_08AF7000;
    }
L_08AF7000:
    ctx.gpr[3] = (8u << 16u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[2] = (ctx.gpr[8] & ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[9] & ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[3]);
    if (ctx.gpr[2] == 0u) {
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), 0u);
        goto L_08AF6FA8;
    }
    goto L_08AF701C;
L_08AF701C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AF6FA8;
L_08AF7028:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[7] = (ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AF7048;
      }
      goto L_08AF7038;
    }
L_08AF7038:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
        goto L_08AF7054;
    }
    goto L_08AF7048;
L_08AF7048:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    goto L_08AF704C;
L_08AF704C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF7054:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
      if (branch_taken) {
          goto L_08AF7078;
      }
      goto L_08AF705C;
    }
L_08AF705C:
    ctx.gpr[2] = (ctx.gpr[6] ^ 4u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
        goto L_08AF7078;
    }
    goto L_08AF7068;
L_08AF7068:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[3] - ctx.gpr[2]);
    goto L_08AF704C;
L_08AF7078:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_08AF70CC;
    }
    goto L_08AF7080;
L_08AF7080:
    ctx.gpr[2] = (ctx.gpr[6] ^ 4u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08AF70B0;
    }
    goto L_08AF708C;
L_08AF708C:
    ctx.gpr[2] = (ctx.gpr[3] ^ 2u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[6] ^ 2u);
      if (branch_taken) {
          goto L_08AF70C0;
      }
      goto L_08AF7098;
    }
L_08AF7098:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF704C;
      }
      goto L_08AF70A0;
    }
L_08AF70A0:
    ctx.gpr[2] = (ctx.gpr[3] ^ 2u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[2] = (ctx.gpr[6] ^ 2u);
        goto L_08AF70C0;
    }
    goto L_08AF70AC;
L_08AF70AC:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08AF70B0;
L_08AF70B0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AF70B8;
L_08AF70B8:
    if (ctx.gpr[3] == 0u) ctx.gpr[4] = (ctx.gpr[2]);
    goto L_08AF704C;
L_08AF70C0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_08AF70D8;
    }
    goto L_08AF70C8;
L_08AF70C8:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_08AF70CC;
L_08AF70CC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_08AF70B8;
L_08AF70D8:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    if (ctx.gpr[6] == 0u) ctx.gpr[4] = (ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF704C;
      }
      goto L_08AF70EC;
    }
L_08AF70EC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    if (ctx.gpr[6] == 0u) ctx.gpr[4] = (ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF704C;
      }
      goto L_08AF7104;
    }
L_08AF7104:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    if (ctx.gpr[6] == 0u) ctx.gpr[4] = (ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF704C;
      }
      goto L_08AF7118;
    }
L_08AF7118:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[4] < ctx.gpr[8] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08AF7184;
    }
    goto L_08AF712C;
L_08AF712C:
    if (ctx.gpr[8] == ctx.gpr[4]) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_08AF7170;
    }
    goto L_08AF7134;
L_08AF7134:
    ctx.gpr[2] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    goto L_08AF7138;
L_08AF7138:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
        goto L_08AF7164;
    }
    goto L_08AF7140;
L_08AF7140:
    if (ctx.gpr[4] == ctx.gpr[8]) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
        goto L_08AF7150;
    }
    goto L_08AF7148;
L_08AF7148:
    ctx.gpr[4] = (0u + 0u);
    goto L_08AF704C;
L_08AF7150:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (0u + 0u);
        goto L_08AF704C;
    }
    goto L_08AF7160;
L_08AF7160:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    goto L_08AF7164;
L_08AF7164:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AF7168;
L_08AF7168:
    if (ctx.gpr[6] == 0u) ctx.gpr[4] = (ctx.gpr[2]);
    goto L_08AF704C;
L_08AF7170:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[2] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
        goto L_08AF7138;
    }
    goto L_08AF7180;
L_08AF7180:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AF7184;
L_08AF7184:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_08AF7168;
L_08AF718C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF7200;
      }
      goto L_08AF71A4;
    }
L_08AF71A4:
    ctx.gpr[2] = (16u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[2]);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(255));
    goto L_08AF71B0;
L_08AF71B0:
    ctx.gpr[3] = (127u << 16u);
    goto L_08AF71B4;
L_08AF71B4:
    ctx.gpr[2] = (65408u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] | 65535u);
    ctx.gpr[3] = (ctx.gpr[5] & ctx.gpr[3]);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[2]);
    ctx.gpr[5] = (32895u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] | 65535u);
    ctx.gpr[4] = (ctx.gpr[4] << 23u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[2] = (32767u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[3] = (ctx.gpr[8] << 31u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF7200:
    ctx.gpr[2] = (ctx.gpr[3] ^ 4u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(255));
        goto L_08AF72B0;
    }
    goto L_08AF720C;
L_08AF720C:
    ctx.gpr[2] = (ctx.gpr[3] ^ 2u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (0u + 0u);
        goto L_08AF71B0;
    }
    goto L_08AF7218;
L_08AF7218:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[3] = (127u << 16u);
      if (branch_taken) {
          goto L_08AF71B4;
      }
      goto L_08AF7220;
    }
L_08AF7220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[4]) < -126 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[4]) < 128 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF72A4;
      }
      goto L_08AF7230;
    }
L_08AF7230:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-126));
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[4]);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[4]) < 26 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7288;
      }
      goto L_08AF7244;
    }
L_08AF7244:
    ctx.gpr[5] = (0u + 0u);
    goto L_08AF7248;
L_08AF7248:
    ctx.gpr[3] = (ctx.gpr[5] & 127u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(64));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.gpr[2] = (ctx.gpr[5] & 128u);
        goto L_08AF7278;
    }
    goto L_08AF7258;
L_08AF7258:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(63));
    goto L_08AF725C;
L_08AF725C:
    ctx.gpr[2] = (16383u << 16u);
    goto L_08AF7260;
L_08AF7260:
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != 0u) ctx.gpr[7] = (ctx.gpr[3]);
    goto L_08AF7270;
L_08AF7270:
    ctx.gpr[5] = (ctx.gpr[5] >> 7u);
    goto L_08AF71B0;
L_08AF7278:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
        goto L_08AF725C;
    }
    goto L_08AF7280;
L_08AF7280:
    ctx.gpr[2] = (16383u << 16u);
    goto L_08AF7260;
L_08AF7288:
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[2] = (ctx.gpr[5] & ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[5] >> (ctx.gpr[4] & 31u));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[3] | ctx.gpr[2]);
    goto L_08AF7248;
L_08AF72A4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[3] = (ctx.gpr[5] & 127u);
        goto L_08AF72B8;
    }
    goto L_08AF72AC;
L_08AF72AC:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(255));
    goto L_08AF72B0;
L_08AF72B0:
    ctx.gpr[5] = (0u + 0u);
    goto L_08AF71B0;
L_08AF72B8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(127));
      if (branch_taken) {
          goto L_08AF72DC;
      }
      goto L_08AF72C4;
    }
L_08AF72C4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(63));
    goto L_08AF72C8;
L_08AF72C8:
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[5] >> 7u);
        goto L_08AF71B0;
    }
    goto L_08AF72D0;
L_08AF72D0:
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08AF7270;
L_08AF72DC:
    ctx.gpr[2] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
        goto L_08AF72C8;
    }
    goto L_08AF72E8;
L_08AF72E8:
    // nop
    goto L_08AF72C8;
L_08AF72F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[2] = (32836u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-6384)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[3] = (ctx.gpr[2] | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AF7400;
      }
      goto L_08AF731C;
    }
L_08AF731C:
    ctx.gpr[9] = (2232u << 16u);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[3] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6264));
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(-6376));
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-1432), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2664));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-1436), ctx.gpr[3]);
    ctx.gpr[3] = (0u + 0u);
    goto L_08AF7348;
L_08AF7348:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[3] < static_cast<std::uint32_t>(608) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7348;
      }
      goto L_08AF735C;
    }
L_08AF735C:
    ctx.gpr[11] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[11] + static_cast<std::uint32_t>(-2056));
    ctx.gpr[3] = (0u + 0u);
    goto L_08AF7368;
L_08AF7368:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[3] < static_cast<std::uint32_t>(608) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7368;
      }
      goto L_08AF737C;
    }
L_08AF737C:
    ctx.gpr[14] = (2232u << 16u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(448));
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[31] = (0x08AF7394u);
    ctx.gpr[17] = (ctx.gpr[14] + static_cast<std::uint32_t>(-1448));
    ctx.pc = 0x08B0BB14u;
    return;
L_08AF7394:
    ctx.gpr[13] = (32836u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[3] = (ctx.gpr[13] | 1u);
      if (branch_taken) {
          goto L_08AF7400;
      }
      goto L_08AF73A4;
    }
L_08AF73A4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[31] = (0x08AF73B8u);
    ctx.gpr[16] = (2232u << 16u);
    ctx.pc = 0x08B0BB14u;
    return;
L_08AF73B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-1428), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1428));
      if (branch_taken) {
          goto L_08AF7458;
      }
      goto L_08AF73C4;
    }
L_08AF73C4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[31] = (0x08AF73D4u);
    ctx.gpr[6] = (0u + 0u);
    ctx.pc = 0x08B0BB14u;
    return;
L_08AF73D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF7448;
      }
      goto L_08AF73DC;
    }
L_08AF73DC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(256));
    ctx.gpr[31] = (0x08AF73ECu);
    ctx.gpr[6] = (0u + 0u);
    ctx.pc = 0x08B0BB14u;
    return;
L_08AF73EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF7420;
      }
      goto L_08AF73F4;
    }
L_08AF73F4:
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-6384), ctx.gpr[16]);
    ctx.gpr[3] = (0u + 0u);
    goto L_08AF7400;
L_08AF7400:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF7420:
    ctx.gpr[31] = (0x08AF7428u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08B0BB1Cu;
    return;
L_08AF7428:
    ctx.gpr[31] = (0x08AF7430u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-1428)));
    ctx.pc = 0x08B0BB1Cu;
    return;
L_08AF7430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08AF7434;
L_08AF7434:
    ctx.gpr[31] = (0x08AF743Cu);
    // nop
    ctx.pc = 0x08B0BB1Cu;
    return;
L_08AF743C:
    ctx.gpr[15] = (32836u << 16u);
    ctx.gpr[3] = (ctx.gpr[15] | 1u);
    goto L_08AF7400;
L_08AF7448:
    ctx.gpr[31] = (0x08AF7450u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08B0BB1Cu;
    return;
L_08AF7450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-1428)));
    goto L_08AF7434;
L_08AF7458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08AF7434;
L_08AF7460:
    ctx.gpr[6] = (0u | 65408u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[8] = (ctx.gpr[4] + 0u);
    ctx.gpr[9] = (ctx.gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[5] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (32836u << 16u);
    ctx.gpr[2] = (ctx.gpr[6] < ctx.gpr[10] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 16u);
      if (branch_taken) {
          goto L_08AF74C0;
      }
      goto L_08AF7488;
    }
L_08AF7488:
    ctx.gpr[3] = (32836u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & 63u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[6] = (ctx.gpr[3] | 17u);
      if (branch_taken) {
          goto L_08AF74C0;
      }
      goto L_08AF7498;
    }
L_08AF7498:
    ctx.gpr[9] = (2232u << 16u);
    ctx.gpr[7] = (ctx.gpr[8] << 2u);
    ctx.gpr[2] = (32836u << 16u);
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1428));
    ctx.gpr[3] = (ctx.gpr[7] + ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[2] | 17u);
      if (branch_taken) {
          goto L_08AF74C0;
      }
      goto L_08AF74B4;
    }
L_08AF74B4:
    ctx.gpr[31] = (0x08AF74BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0BB2Cu;
    return;
L_08AF74BC:
    ctx.gpr[6] = (ctx.gpr[2] + 0u);
    goto L_08AF74C0;
L_08AF74C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[6] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF74D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[10] = (0u | 32768u);
    ctx.gpr[2] = (32836u << 16u);
    ctx.gpr[11] = (ctx.gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[8] = (ctx.gpr[2] | 16u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[9] = (ctx.gpr[10] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF7528;
      }
      goto L_08AF74F0;
    }
L_08AF74F0:
    ctx.gpr[11] = (32836u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[11] | 10u);
      if (branch_taken) {
          goto L_08AF7528;
      }
      goto L_08AF7500;
    }
L_08AF7500:
    ctx.gpr[12] = (2232u << 16u);
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[9] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1428));
    ctx.gpr[4] = (32836u << 16u);
    ctx.gpr[3] = (ctx.gpr[8] + ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[4] | 10u);
      if (branch_taken) {
          goto L_08AF7528;
      }
      goto L_08AF751C;
    }
L_08AF751C:
    ctx.gpr[31] = (0x08AF7524u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0BB0Cu;
    return;
L_08AF7524:
    ctx.gpr[8] = (ctx.gpr[2] + 0u);
    goto L_08AF7528;
L_08AF7528:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[8] + 0u);
    goto L_08AF7530;
L_08AF7530:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF7538:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[3] = (32836u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6384)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[3] | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AF75A4;
      }
      goto L_08AF7560;
    }
L_08AF7560:
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[31] = (0x08AF756Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-1444)));
    ctx.pc = 0x08B0BB1Cu;
    return;
L_08AF756C:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-1428)));
    ctx.gpr[31] = (0x08AF757Cu);
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1428));
    ctx.pc = 0x08B0BB1Cu;
    return;
L_08AF757C:
    ctx.gpr[31] = (0x08AF7584u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08B0BB1Cu;
    return;
L_08AF7584:
    ctx.gpr[31] = (0x08AF758Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B0BB1Cu;
    return;
L_08AF758C:
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-1432), 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-6384), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-1436), 0u);
    ctx.gpr[4] = (0u + 0u);
    goto L_08AF75A4;
L_08AF75A4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF7660:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    ctx.gpr[23] = (2232u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-6380)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AF7720;
      }
      goto L_08AF76A0;
    }
L_08AF76A0:
    ctx.gpr[3] = (2232u << 16u);
    ctx.gpr[30] = (ctx.gpr[3] + 0u);
    ctx.gpr[22] = (ctx.gpr[3] + static_cast<std::uint32_t>(-6248));
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
    goto L_08AF76B0;
L_08AF76B0:
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] << 8u);
    ctx.gpr[31] = (0x08AF76C0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[22]);
    goto L_08AF777C;
L_08AF76C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[20] = (ctx.gpr[30] + static_cast<std::uint32_t>(-6248));
      if (branch_taken) {
          goto L_08AF776C;
      }
      goto L_08AF76C8;
    }
L_08AF76C8:
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[16] + 0u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(14));
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(112));
    goto L_08AF76D8;
L_08AF76D8:
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08AF76E4u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08AF777C;
L_08AF76E4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08AF76D8;
      }
      goto L_08AF76EC;
    }
L_08AF76EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[20]);
    ctx.gpr[31] = (0x08AF76FCu);
    ctx.gpr[5] = (0u | 32768u);
    ctx.pc = 0x08B0BAFCu;
    return;
L_08AF76FC:
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[7] >> 31u);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[8] << 1u);
    ctx.gpr[19] = (ctx.gpr[7] - ctx.gpr[2]);
    goto L_08AF7714;
L_08AF7714:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-6380)));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
      if (branch_taken) {
          goto L_08AF76B0;
      }
      goto L_08AF7720;
    }
L_08AF7720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u + 0u);
    ctx.gpr[31] = (0x08AF7730u);
    ctx.gpr[6] = (0u + 0u);
    ctx.pc = 0x08B0BAFCu;
    return;
L_08AF7730:
    ctx.gpr[31] = (0x08AF7738u);
    ctx.gpr[4] = (0u + 0u);
    ctx.pc = 0x08B0BBB4u;
    return;
L_08AF7738:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF776C:
    ctx.gpr[31] = (0x08AF7774u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(10000));
    ctx.pc = 0x08B0BC14u;
    return;
L_08AF7774:
    // nop
    goto L_08AF7714;
L_08AF777C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[3] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (0u + 0u);
    goto L_08AF77B8;
L_08AF77B8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF77B8;
      }
      goto L_08AF77CC;
    }
L_08AF77CC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[3] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2664));
    ctx.gpr[16] = (ctx.gpr[3] + 0u);
    ctx.gpr[17] = (0u + 0u);
    ctx.gpr[30] = (ctx.gpr[3] + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (0u + 0u);
    ctx.gpr[23] = (ctx.gpr[3] + 0u);
    goto L_08AF77E8;
L_08AF77E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_08AF783C;
    }
    goto L_08AF77F4;
L_08AF77F4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AF77F8;
L_08AF77F8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(76));
      if (branch_taken) {
          goto L_08AF77E8;
      }
      goto L_08AF7808;
    }
L_08AF7808:
    ctx.gpr[2] = (ctx.gpr[20] + 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF783C:
    ctx.gpr[6] = (ctx.gpr[3] & 1024u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF78B0;
      }
      goto L_08AF7848;
    }
L_08AF7848:
    ctx.gpr[7] = (ctx.gpr[3] & 256u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AF7890;
    }
    goto L_08AF7854;
L_08AF7854:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[9] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AF787C;
      }
      goto L_08AF7860;
    }
L_08AF7860:
    ctx.gpr[3] = (2232u << 16u);
    goto L_08AF7864;
L_08AF7864:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1432)));
    ctx.gpr[4] = (ctx.gpr[17] + 0u);
    ctx.gpr[31] = (0x08AF7874u);
    ctx.gpr[5] = (ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 36u, 0x08AF82C4u>(ctx, &aot_mem) && ctx.pc == 0x08AF7874u) goto L_08AF7874;
    return;
L_08AF7874:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AF77F8;
L_08AF787C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-1432)));
    ctx.gpr[31] = (0x08AF7888u);
    ctx.gpr[4] = (ctx.gpr[17] + 0u);
    goto L_08AF7AA8;
L_08AF7888:
    ctx.gpr[3] = (2232u << 16u);
    goto L_08AF7864;
L_08AF7890:
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[3] = (2232u << 16u);
        goto L_08AF7864;
    }
    goto L_08AF7898;
L_08AF7898:
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1432)));
    ctx.gpr[31] = (0x08AF78A8u);
    ctx.gpr[4] = (ctx.gpr[17] + 0u);
    goto L_08AF7D54;
L_08AF78A8:
    ctx.gpr[3] = (2232u << 16u);
    goto L_08AF7864;
L_08AF78B0:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[3] = (2232u << 16u);
        goto L_08AF7864;
    }
    goto L_08AF78BC;
L_08AF78BC:
    ctx.gpr[12] = (2232u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-1432)));
    ctx.gpr[4] = (0u + 0u);
    goto L_08AF78C8;
L_08AF78C8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (ctx.gpr[4] < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF78C8;
      }
      goto L_08AF78DC;
    }
L_08AF78DC:
    ctx.gpr[18] = (ctx.gpr[19] + ctx.gpr[23]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[14] = (ctx.gpr[15] & 256u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[25] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AF793C;
      }
      goto L_08AF78F0;
    }
L_08AF78F0:
    ctx.gpr[22] = (2232u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-1436)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[2];
    ctx.gpr[31] = (0x08AF790Cu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF790Cu) goto L_08AF790C;
    return;
L_08AF790C:
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), 0u);
        goto L_08AF7914;
    }
    goto L_08AF7914;
L_08AF7914:
    ctx.gpr[24] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-1436)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(-1432)));
    ctx.gpr[22] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[22] + static_cast<std::uint32_t>(-2612));
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[30]);
    ctx.gpr[31] = (0x08AF7934u);
    ctx.gpr[7] = (ctx.gpr[19] + ctx.gpr[18]);
    goto L_08AF7964;
L_08AF7934:
    ctx.gpr[3] = (2232u << 16u);
    goto L_08AF7864;
L_08AF793C:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(-1432)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[22];
    ctx.gpr[31] = (0x08AF7954u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(112));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF7954u) goto L_08AF7954;
    return;
L_08AF7954:
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), 0u);
        goto L_08AF7860;
    }
    goto L_08AF795C;
L_08AF795C:
    ctx.gpr[3] = (2232u << 16u);
    goto L_08AF7864;
L_08AF7964:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[15] = (ctx.gpr[5] + 0u);
    ctx.gpr[10] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[2] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1584));
    ctx.gpr[19] = (ctx.gpr[6] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[20] = (ctx.gpr[7] + 0u);
    ctx.gpr[12] = (0u + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 4u));
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[2]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(7));
    ctx.gpr[5] = (ctx.gpr[3] & 15u);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(5))))));
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[6];
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08AF7A88;
      }
      goto L_08AF79C4;
    }
L_08AF79C4:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(14));
    ctx.gpr[16] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[4] + 0u);
    ctx.gpr[24] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(32767));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(13));
    goto L_08AF79E0;
L_08AF79E0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.gpr[15] + ctx.gpr[12]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(32767));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-32768));
    ctx.gpr[5] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[3] = (ctx.gpr[4] << 28u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[24] & 31u)));
    ctx.gpr[3] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[3] << (ctx.gpr[16] & 31u));
    ctx.gpr[10] = (ctx.lo);
    ctx.gpr[3] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 6u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[25]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) ctx.gpr[5] = (ctx.gpr[6]);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < -32768 ? 1u : 0u);
    if (ctx.gpr[10] != 0u) ctx.gpr[5] = (ctx.gpr[7]);
    ctx.gpr[3] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[9] + ctx.gpr[3]);
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 6u));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[25]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) ctx.gpr[4] = (ctx.gpr[6]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < -32768 ? 1u : 0u);
    if (ctx.gpr[9] != 0u) ctx.gpr[4] = (ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[10] = (ctx.gpr[5] + 0u);
    ctx.gpr[9] = (ctx.gpr[4] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) >= 0;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF79E0;
      }
      goto L_08AF7A7C;
    }
L_08AF7A7C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[3] = (ctx.gpr[17] + 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AF7A88;
L_08AF7A88:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF7AA8:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[7] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2664));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[5] + 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (0u + 0u);
    goto L_08AF7AE0;
L_08AF7AE0:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[3] < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7AE0;
      }
      goto L_08AF7AF4;
    }
L_08AF7AF4:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[11] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2664));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[12] + ctx.gpr[11]);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF7CB0;
      }
      goto L_08AF7B18;
    }
L_08AF7B18:
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF7C20;
      }
      goto L_08AF7B20;
    }
L_08AF7B20:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[4]) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08AF7B40;
    }
    goto L_08AF7B2C;
L_08AF7B2C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08AF7B30;
L_08AF7B30:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF7B40:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[3]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AF7B30;
      }
      goto L_08AF7B4C;
    }
L_08AF7B4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[11] != 0u) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
        goto L_08AF7C18;
    }
    goto L_08AF7B60;
L_08AF7B60:
    ctx.gpr[11] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-1436)));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[6] = (0u + 0u);
    goto L_08AF7B70;
L_08AF7B70:
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7B70;
      }
      goto L_08AF7B8C;
    }
L_08AF7B8C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AF7B90;
L_08AF7B90:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2616));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-1436)));
    ctx.gpr[2] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[10] + 0u);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[31] = (0x08AF7BB8u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[17]);
    goto L_08AF7964;
L_08AF7BB8:
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[10];
    ctx.gpr[14] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08AF7BFC;
      }
      goto L_08AF7BC4;
    }
L_08AF7BC4:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[14];
    ctx.gpr[12] = (ctx.gpr[17] + static_cast<std::uint32_t>(-48));
      if (branch_taken) {
          goto L_08AF7BE0;
      }
      goto L_08AF7BCC;
    }
L_08AF7BCC:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[12]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[11]);
    goto L_08AF7B2C;
L_08AF7BE0:
    ctx.gpr[24] = (ctx.gpr[17] + static_cast<std::uint32_t>(-48));
    ctx.gpr[15] = (ctx.gpr[16] + ctx.gpr[24]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    goto L_08AF7B2C;
L_08AF7BFC:
    ctx.gpr[3] = (ctx.gpr[17] + static_cast<std::uint32_t>(-48));
    ctx.gpr[25] = (ctx.gpr[16] + ctx.gpr[3]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    goto L_08AF7B2C;
L_08AF7C18:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    goto L_08AF7B2C;
L_08AF7C20:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AF7B30;
      }
      goto L_08AF7C28;
    }
L_08AF7C28:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[9] + static_cast<std::uint32_t>(16));
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[14] != 0u) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
        goto L_08AF7C18;
    }
    goto L_08AF7C40;
L_08AF7C40:
    ctx.gpr[11] = (2232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-1436)));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (0u + 0u);
    goto L_08AF7C50;
L_08AF7C50:
    ctx.gpr[24] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[8] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[24]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7C50;
      }
      goto L_08AF7C6C;
    }
L_08AF7C6C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2664));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-1436)));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(52));
    ctx.gpr[11] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    ctx.gpr[3] = (ctx.lo);
    ctx.gpr[25] = (ctx.gpr[3] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[3] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[10] + 0u);
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[31] = (0x08AF7CA8u);
    ctx.gpr[6] = (ctx.gpr[3] + ctx.gpr[11]);
    goto L_08AF7964;
L_08AF7CA8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08AF7B30;
L_08AF7CB0:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AF7B30;
      }
      goto L_08AF7CC0;
    }
L_08AF7CC0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[13] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(76));
      if (branch_taken) {
          goto L_08AF7D08;
      }
      goto L_08AF7CD4;
    }
L_08AF7CD4:
    ctx.gpr[11] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-1436)));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (0u + 0u);
    goto L_08AF7CE4;
L_08AF7CE4:
    ctx.gpr[15] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (ctx.gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7CE4;
      }
      goto L_08AF7D00;
    }
L_08AF7D00:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AF7B90;
L_08AF7D08:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[25] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2664));
    ctx.gpr[11] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-1436)));
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[24] = (ctx.lo);
    ctx.gpr[17] = (ctx.gpr[24] + ctx.gpr[25]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[16]);
    goto L_08AF7D30;
L_08AF7D30:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7D30;
      }
      goto L_08AF7D4C;
    }
L_08AF7D4C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AF7B90;
L_08AF7D54:
    ctx.gpr[8] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[10] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2664));
    ctx.gpr[11] = (ctx.gpr[5] + 0u);
    ctx.gpr[3] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[3] + ctx.gpr[6]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF7F34;
      }
      goto L_08AF7D84;
    }
L_08AF7D84:
    ctx.gpr[5] = (ctx.gpr[3] & 512u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AF7E70;
      }
      goto L_08AF7D90;
    }
L_08AF7D90:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[13] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[11] + 0u);
      if (branch_taken) {
          goto L_08AF7DF0;
      }
      goto L_08AF7DA8;
    }
L_08AF7DA8:
    ctx.gpr[4] = (ctx.gpr[12] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[11] + 0u);
    goto L_08AF7DB0;
L_08AF7DB0:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[6] < static_cast<std::uint32_t>(56) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7DB0;
      }
      goto L_08AF7DCC;
    }
L_08AF7DCC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AF7DD0;
L_08AF7DD0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[14] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2664));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[6] + ctx.gpr[14]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[3] = (ctx.gpr[8] + static_cast<std::uint32_t>(56));
    goto L_08AF7DE8;
L_08AF7DE8:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF7DF0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (ctx.gpr[6] < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7DF0;
      }
      goto L_08AF7E04;
    }
L_08AF7E04:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2664));
    ctx.gpr[5] = (ctx.gpr[11] + 0u);
    ctx.gpr[7] = (0u + 0u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[25] = (ctx.gpr[6] + ctx.gpr[2]);
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(32)));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[15] - ctx.gpr[24]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[12] + ctx.gpr[24]);
      if (branch_taken) {
          goto L_08AF7E50;
      }
      goto L_08AF7E34;
    }
L_08AF7E34:
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7E34;
      }
      goto L_08AF7E50;
    }
L_08AF7E50:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AF7E54;
L_08AF7E54:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[12] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2664));
    ctx.gpr[11] = (ctx.lo);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(28), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(32), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF7E70:
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[15] = (ctx.gpr[5] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[11] + 0u);
      if (branch_taken) {
          goto L_08AF7ECC;
      }
      goto L_08AF7E88;
    }
L_08AF7E88:
    ctx.gpr[4] = (ctx.gpr[12] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[11] + 0u);
    goto L_08AF7E90;
L_08AF7E90:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[6] < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7E90;
      }
      goto L_08AF7EAC;
    }
L_08AF7EAC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AF7EB0;
L_08AF7EB0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[24] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2664));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[24]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[3] = (ctx.gpr[8] + static_cast<std::uint32_t>(112));
    goto L_08AF7DE8;
L_08AF7ECC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[25] = (ctx.gpr[6] < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7ECC;
      }
      goto L_08AF7EE0;
    }
L_08AF7EE0:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2664));
    ctx.gpr[5] = (ctx.gpr[11] + 0u);
    ctx.gpr[7] = (0u + 0u);
    ctx.gpr[3] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[3] + ctx.gpr[2]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[9] - ctx.gpr[13]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[12] + ctx.gpr[13]);
      if (branch_taken) {
          goto L_08AF7E50;
      }
      goto L_08AF7F10;
    }
L_08AF7F10:
    ctx.gpr[15] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7F10;
      }
      goto L_08AF7F2C;
    }
L_08AF7F2C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AF7E54;
L_08AF7F34:
    ctx.gpr[24] = (ctx.gpr[3] & 512u);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(76));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 15u, 0x08AF8104u>(ctx, &aot_mem); return;
      }
      goto L_08AF7F40;
    }
L_08AF7F40:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[25] = (static_cast<std::int32_t>(ctx.gpr[3]) < 56 ? 1u : 0u);
    if (ctx.gpr[25] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
        (void)rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 4u, 0x08AF802Cu>(ctx, &aot_mem); return;
    }
    goto L_08AF7F50;
L_08AF7F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[13] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[3] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF7F94;
      }
      goto L_08AF7F64;
    }
L_08AF7F64:
    ctx.gpr[4] = (ctx.gpr[12] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[11] + 0u);
    ctx.gpr[6] = (0u + 0u);
    goto L_08AF7F70;
L_08AF7F70:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(56) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7F70;
      }
      goto L_08AF7F8C;
    }
L_08AF7F8C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(76));
    goto L_08AF7DD0;
L_08AF7F94:
    ctx.gpr[6] = (ctx.gpr[12] + ctx.gpr[4]);
    ctx.gpr[7] = (0u + 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[11] + 0u);
      if (branch_taken) {
          goto L_08AF7FC0;
      }
      goto L_08AF7FA4;
    }
L_08AF7FA4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[15] = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF7FA4;
      }
      goto L_08AF7FC0;
    }
L_08AF7FC0:
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2664));
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (ctx.gpr[11] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[25] - ctx.gpr[9]);
    ctx.gpr[24] = (ctx.lo);
    ctx.gpr[11] = (ctx.gpr[24] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 2u, 0x08AF800Cu>(ctx, &aot_mem); return;
      }
      goto L_08AF7FF0;
    }
L_08AF7FF0:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.pc = 0x08AF8000u; return;
}

void recomp_unit_0188(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0188_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_188(Runtime &runtime) {
    runtime.register_generated_unit(188u, 0x08AF4000u, 16384u, &recomp_unit_0188, &recomp_unit_0188_entry);
    runtime.register_function(0x08AF4000u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4014u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4034u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4048u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF406Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4090u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF409Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF40A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF40ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF40C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF40E8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF40F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4100u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4104u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4118u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4144u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4150u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF415Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4160u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4174u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF41A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF41ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF41B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF41BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF41D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF41F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4200u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF420Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4210u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4224u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4250u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF425Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4268u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF426Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4280u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4288u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4290u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4298u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF42A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF42A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF42BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF42D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF42E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF42E8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF42F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4314u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4334u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4340u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF435Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF436Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4374u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4398u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF43A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF43B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF440Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4414u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4424u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4440u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4460u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF446Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF447Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF448Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF44A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF44ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF44FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF450Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4528u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4530u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF454Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF455Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4568u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4570u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4578u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF457Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4594u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF45A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF45C4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF45D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF45DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF45ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF45F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4600u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4608u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4614u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF461Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4628u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4634u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF463Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4644u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4654u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4660u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4668u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4678u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4680u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF468Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4694u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF469Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF46A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF46B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF46BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF46C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF46D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF46DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF46E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF46F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF46F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4700u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4720u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF473Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4758u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4760u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4784u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF47A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF47D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF47D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF47E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF480Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF481Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4824u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4884u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF488Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4890u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4898u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF48A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4904u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4908u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4918u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF491Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4924u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4930u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4938u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4948u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4978u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF499Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF49A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF49ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF49BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF49C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF49D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF49DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF49E8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF49F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF49F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A00u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A14u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A24u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A30u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A38u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A5Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4A90u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4AA0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4AC0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4AE4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4AF8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B10u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B1Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B44u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B4Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B54u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B84u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4B90u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4BA4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4BC4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4BCCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4BE0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4BF8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4C00u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4C08u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4C10u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4C18u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4C38u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4C44u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4C50u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4C68u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4C70u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4C90u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4C9Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4CBCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4CF4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4D4Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4D58u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4D98u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4D9Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4DA8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4DB8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4DC8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4DF0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E08u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E18u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E38u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E48u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E58u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4E9Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4EBCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4ED8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4EE0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4F08u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4F14u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4F20u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4F2Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4F50u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4F58u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4F7Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4F98u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4FB8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF4FF4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5004u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5010u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5018u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5028u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5050u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5058u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF506Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5074u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF507Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5094u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF509Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF50C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF50D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF50F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5108u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF511Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5148u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5170u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5198u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF51B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF51C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF51D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF51E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF51ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5200u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF521Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5254u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5260u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF526Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5274u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5288u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF52E0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF52E8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5334u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5348u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5384u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5398u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF53F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF53F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5444u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5460u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF546Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF547Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5488u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF54A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF54ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF54B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF54CCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF54D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF54D8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF54E8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF54F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5504u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5524u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5530u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5538u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF553Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5558u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5568u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5580u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF558Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5598u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF55A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF55B0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF55BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF55C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF55D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF55E0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF55E8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF55F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5624u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5630u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5644u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF565Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF566Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5674u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5680u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5690u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF569Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF56B0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF56BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF56E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF56E8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF56F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF56FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF570Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5718u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5724u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5728u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5734u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5740u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5754u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5788u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF579Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF57ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF57B0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF57B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF57C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF57D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF57E0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5810u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5824u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5830u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5844u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5868u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58D8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF58F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5900u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF590Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5918u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5984u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF598Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF599Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF59A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF59B0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF59B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF59C4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF59C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF59D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF59D8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF59E0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF59F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF59FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A04u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A10u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A34u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A3Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A48u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A50u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A78u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A80u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A88u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A90u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5A9Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5AA4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5AB4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5AC0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5ACCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B00u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B2Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B38u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5B88u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5BA0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5BC8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5BF0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5BF8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5C00u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5C08u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5C24u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5C3Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5C4Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5C60u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5C74u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5CA4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5CB8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5CC4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5CD4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5CE0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D08u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D70u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D78u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5D80u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5DA4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5DB8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5DC8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5DD4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5DD8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5DE8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5DF4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E18u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E2Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E34u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E3Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E44u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E68u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5E80u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5EA8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5EB4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5ED0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5EE0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5EECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5EF4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F08u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F10u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F18u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F20u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F2Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F34u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F78u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5F80u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5FA4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5FB0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5FB8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5FC4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5FECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5FF4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF5FFCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6008u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6030u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6034u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6038u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6044u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6054u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6064u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF606Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF607Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF60A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF60B0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF60B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF60B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6100u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6108u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6110u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6114u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF612Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6170u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6178u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6180u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6188u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF61ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF61D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF61DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF61ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF61FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6230u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF623Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF624Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6254u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6264u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6298u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF62A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF62C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF62C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF62D8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF631Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6328u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF633Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF634Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6358u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6368u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF636Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6380u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6388u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF63A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF63B0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF63C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF63C4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF63DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF63E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF63F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6450u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6458u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF645Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF647Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6484u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6488u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF64ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6508u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF652Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6544u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF654Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6560u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF656Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF658Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF65A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF65BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF65C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF65D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF65DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF65F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6604u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6608u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6614u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6620u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6628u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF662Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6638u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6640u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6650u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6684u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6690u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF66A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF66B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF66CCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF66D8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF66E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF66E8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF66F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6700u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6708u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6724u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF672Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF673Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6760u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6768u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6778u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6780u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6788u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF678Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF67A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF67D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF67ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF67FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6804u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6820u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF682Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6830u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF683Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6844u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF684Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6854u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6874u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF68A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF68B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF68C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF68D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF68ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF68F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF68FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6900u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6908u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6914u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6920u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6928u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6948u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6950u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6980u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6988u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF69A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF69ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF69D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF69E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF69ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF69F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6A08u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6A14u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6A20u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6A30u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6A4Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6A58u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6A60u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6A6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6A70u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6A80u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6AA4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6AB8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6AC4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6AECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6AF8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6B1Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6B64u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6B70u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6B94u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6B9Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6BC0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6BC8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6BD8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6BDCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6BE4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6BECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6BF8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C14u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C1Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C24u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C30u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C3Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C60u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6C8Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6CA0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6CA4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D00u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D0Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D18u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D24u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D34u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D48u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D50u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D68u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D70u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D78u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D94u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6D9Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6DA4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6DC0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6DCCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6DE0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6DECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6DF4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E00u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E04u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E2Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E38u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E40u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E4Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E50u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E64u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E7Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E98u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6E9Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6EA0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6EA8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6EB8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6ED0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6EDCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6EE4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F00u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F0Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F38u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F44u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F48u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F50u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F7Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6F88u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6FA4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6FA8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6FB4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6FC0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF6FF4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7000u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF701Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7028u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7038u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7048u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF704Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7054u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF705Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7068u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7078u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7080u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF708Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7098u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF70A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF70ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF70B0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF70B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF70C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF70C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF70CCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF70D8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF70ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7104u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7118u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF712Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7134u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7138u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7140u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7148u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7150u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7160u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7164u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7168u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7170u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7180u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7184u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF718Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF71A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF71B0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF71B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7200u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF720Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7218u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7220u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7230u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7244u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7248u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7258u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF725Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7260u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7270u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7278u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7280u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7288u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF72A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF72ACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF72B0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF72B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF72C4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF72C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF72D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF72DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF72E8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF72F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF731Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7348u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF735Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7368u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF737Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7394u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF73A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF73B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF73C4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF73D4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF73DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF73ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF73F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7400u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7420u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7428u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7430u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7434u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF743Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7448u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7450u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7458u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7460u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7488u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7498u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF74B4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF74BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF74C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF74D0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF74F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7500u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF751Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7524u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7528u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7530u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7538u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7560u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF756Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF757Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7584u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF758Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF75A4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7660u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF76A0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF76B0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF76C0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF76C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF76D8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF76E4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF76ECu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF76FCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7714u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7720u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7730u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7738u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF776Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7774u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF777Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF77B8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF77CCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF77E8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF77F4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF77F8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7808u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF783Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7848u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7854u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7860u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7864u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7874u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF787Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7888u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7890u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7898u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF78A8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF78B0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF78BCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF78C8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF78DCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF78F0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF790Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7914u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7934u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF793Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7954u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF795Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7964u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF79C4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF79E0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7A7Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7A88u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7AA8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7AE0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7AF4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B18u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B20u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B2Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B30u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B40u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B4Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B60u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B70u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B8Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7B90u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7BB8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7BC4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7BCCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7BE0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7BFCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7C18u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7C20u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7C28u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7C40u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7C50u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7C6Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7CA8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7CB0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7CC0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7CD4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7CE4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D00u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D08u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D30u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D4Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D54u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D84u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7D90u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7DA8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7DB0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7DCCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7DD0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7DE8u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7DF0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7E04u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7E34u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7E50u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7E54u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7E70u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7E88u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7E90u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7EACu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7EB0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7ECCu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7EE0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F10u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F2Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F34u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F40u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F50u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F64u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F70u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F8Cu, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7F94u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7FA4u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7FC0u, &recomp_unit_0188, "recomp_unit_0188");
    runtime.register_function(0x08AF7FF0u, &recomp_unit_0188, "recomp_unit_0188");
}
} // namespace psprecomp
