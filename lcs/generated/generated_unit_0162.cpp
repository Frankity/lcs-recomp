#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0162[4093] = {
    1, 0, 0, 0, 2, 0, 0, 3, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 9, 0, 10,
    0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 17,
    0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 20, 21, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 26, 27, 0,
    0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 36,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 39, 0, 0, 40, 0, 0, 0, 0, 41, 0, 42, 0, 43, 0, 0, 44, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0,
    0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 64, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0,
    0, 72, 0, 0, 73, 74, 0, 0, 0, 75, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    0, 80, 0, 0, 81, 0, 82, 83, 0, 0, 84, 85, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92,
    0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 96, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 101, 0, 102, 0, 103, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    107, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 115,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 125, 0, 0,
    0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0,
    0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0,
    134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 144, 0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 148, 0, 0, 149, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 156, 0, 157, 0, 158, 0, 159,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 164, 0, 165, 0, 0,
    0, 0, 166, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 176, 0, 177, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 180,
    0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 186, 0,
    0, 0, 187, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194,
    0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201,
    0, 202, 0, 203, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209,
    0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 217, 0, 218, 0, 219, 0,
    0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 231, 0, 0, 232, 0,
    233, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0, 243, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0,
    0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 250, 0, 251, 0, 0, 252, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 255,
    0, 256, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 261, 0, 262, 0, 263, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 268, 0, 269, 0, 0, 0, 0, 0, 270,
    0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0,
    276, 0, 277, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283,
    0, 0, 284, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 287, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291,
    0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 296, 0, 297, 0, 0, 0, 298, 0, 299, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 308, 0, 309,
    0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 318,
    0, 319, 0, 0, 0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 335, 0, 0, 336, 0, 337, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 344, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0,
    0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 356, 0, 357, 0, 358, 0,
    359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0,
    0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 0, 0, 367, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 373, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 377, 0, 0, 378, 0, 379, 0, 380, 0, 381, 0, 0, 0, 382, 0, 383,
    0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 390, 0, 0, 0, 391, 0, 392, 0,
    0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 397, 0, 398, 0, 399, 0, 400, 0, 0, 0, 401, 0, 402, 0,
    0, 403, 0, 404, 0, 0, 405, 0, 406, 407, 0, 0, 408, 0, 409, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 412, 0, 0, 0, 413, 0,
    414, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418,
    0, 0, 419, 0, 0, 420, 0, 421, 422, 0, 423, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 427, 0, 428, 0, 429, 0, 430, 0,
    0, 0, 0, 0, 0, 431, 0, 432, 0, 0, 0, 433, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 440,
    0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 451,
    0, 0, 0, 0, 452, 0, 453, 0, 0, 0, 454, 0, 455, 0, 0, 456, 0, 457, 0, 0, 458, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 465,
    0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 468, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 477, 0, 0, 478, 479, 480, 0, 481, 0, 482, 0,
    0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 486, 0, 487, 0, 0, 0, 488, 0, 489, 0, 490, 0, 0, 0,
    491, 0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 497, 0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 500, 0, 501, 0, 0, 502, 0, 0, 503, 0, 504, 505, 0, 506, 0, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 510, 0,
    0, 511, 0, 512, 513, 0, 514, 0, 515, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 518, 0, 0, 519, 0, 0, 520, 0, 521, 522,
    0, 523, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 528, 0, 0, 0, 529, 0, 530, 0, 0, 0, 531,
    0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0,
    539, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 545, 0, 546, 0, 0, 547, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 550, 0, 0, 0, 0, 0, 551, 0, 552, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 554, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557,
    0, 0, 558, 0, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0, 567, 0, 0, 568, 0, 569, 570, 571, 0, 0, 572, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 578,
    0, 579, 0, 0, 580, 0, 0, 581, 0, 0, 582, 0, 583, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 587, 0, 588, 0, 0, 0, 0, 589, 0, 590, 0, 591, 0, 592, 0, 0, 0,
    593, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 596, 597, 0, 598, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    600, 0, 0, 601, 0, 0, 0, 0, 0, 0, 602, 0, 603, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 605, 0, 606, 0, 607, 0, 0,
    608, 0, 609, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 0, 612, 613, 614, 0, 615, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0,
    621, 0, 622, 0, 0, 623, 0, 624, 0, 0, 625, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0,
    0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 631, 0, 632, 0, 0, 633, 0, 0, 634, 0, 0, 0, 635, 0, 636, 0, 637,
    0, 638, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 0, 0, 641, 0, 0, 0, 0, 642, 0, 643, 0, 0, 0, 0, 0, 644, 0,
    0, 645, 0, 646, 0, 0, 0, 647, 0, 0, 648, 0, 649, 0, 650, 651, 0, 652, 0, 653, 0, 0, 0, 0, 654, 0, 0, 655, 0, 0, 656, 0,
    657, 0, 658, 659, 0, 660, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 663, 0, 0, 664, 0, 0, 665, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669,
    0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 671, 0, 672, 0, 673, 0, 674, 0, 675, 0, 0, 0, 676, 0, 0, 677, 0, 0, 678, 0, 0, 679,
    680, 0, 681, 682, 683, 0, 0, 684, 0, 0, 685, 0, 0, 0, 686, 0, 0, 687, 0, 688, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0, 0, 691,
    0, 0, 0, 692, 0, 0, 0, 693, 0, 0, 694, 0, 0, 695, 0, 696, 0, 697, 0, 698, 0, 0, 0, 699, 0, 0, 0, 0, 0, 700, 0, 0,
    0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 705,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 707, 0, 0, 708, 0, 0, 709, 710, 0, 711, 0, 0, 0, 0,
    712, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 716, 0,
    0, 717, 0, 0, 718, 719, 0, 720, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 724, 0, 0, 0, 725, 0, 726, 0, 0,
    0, 0, 727, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 730, 0, 0, 731, 0,
    0, 732, 733, 0, 734, 0, 0, 0, 0, 0, 735, 0, 0, 0, 736, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 739, 0, 0, 0, 0, 0, 740, 0, 0, 741, 0, 742, 0, 743, 0, 744, 0, 745, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0,
    747, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0,
    751, 0, 0, 0, 752, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 755, 0, 0, 0,
    0, 0, 0, 756, 0, 0, 0, 757, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 760, 0, 0,
    0, 0, 0, 0, 761, 0, 0, 0, 762, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 765, 0,
    0, 766, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 768, 0, 769, 0, 0, 0, 0, 0, 0, 770, 0, 771, 0, 0, 0, 0, 0, 0,
    772, 0, 773, 0, 0, 0, 0, 0, 0, 774, 0, 775, 0, 0, 0, 0, 0, 0, 776, 0, 777, 0, 0, 0, 0, 0, 0, 778, 0, 779, 0, 0,
    0, 0, 0, 0, 780, 0, 781, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 783, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 785, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 0,
    788, 0, 789, 790, 0, 0, 0, 791, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 794,
    0, 795, 0, 0, 796, 0, 0, 0, 0, 797, 0, 798, 0, 799, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 0, 802, 0, 0, 0, 0, 803, 0,
    804, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 806, 0, 0, 0, 807, 0, 0, 0, 808, 0, 809, 0, 810, 0, 811, 0, 812, 0, 813, 0, 814,
    0, 0, 0, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 817, 0, 818, 0, 819, 0, 820, 0,
    821, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 823, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 826, 0, 827, 0, 828,
    0, 829, 0, 0, 0, 0, 0, 0, 0, 0, 830, 0, 831, 0, 832, 0, 833, 0, 0, 834, 0, 0, 835, 0, 0, 836, 0, 0, 837,
};
void recomp_unit_0162_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A8C000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0162[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A8C000;
    case 2u: goto L_08A8C010;
    case 3u: goto L_08A8C01C;
    case 4u: goto L_08A8C020;
    case 5u: goto L_08A8C034;
    case 6u: goto L_08A8C054;
    case 7u: goto L_08A8C060;
    case 8u: goto L_08A8C06C;
    case 9u: goto L_08A8C074;
    case 10u: goto L_08A8C07C;
    case 11u: goto L_08A8C088;
    case 12u: goto L_08A8C09C;
    case 13u: goto L_08A8C0B0;
    case 14u: goto L_08A8C0C4;
    case 15u: goto L_08A8C0DC;
    case 16u: goto L_08A8C0E4;
    case 17u: goto L_08A8C0FC;
    case 18u: goto L_08A8C108;
    case 19u: goto L_08A8C120;
    case 20u: goto L_08A8C128;
    case 21u: goto L_08A8C12C;
    case 22u: goto L_08A8C144;
    case 23u: goto L_08A8C150;
    case 24u: goto L_08A8C164;
    case 25u: goto L_08A8C16C;
    case 26u: goto L_08A8C174;
    case 27u: goto L_08A8C178;
    case 28u: goto L_08A8C184;
    case 29u: goto L_08A8C194;
    case 30u: goto L_08A8C1AC;
    case 31u: goto L_08A8C1C0;
    case 32u: goto L_08A8C1C8;
    case 33u: goto L_08A8C1D0;
    case 34u: goto L_08A8C1D8;
    case 35u: goto L_08A8C1F0;
    case 36u: goto L_08A8C1FC;
    case 37u: goto L_08A8C214;
    case 38u: goto L_08A8C224;
    case 39u: goto L_08A8C22C;
    case 40u: goto L_08A8C238;
    case 41u: goto L_08A8C24C;
    case 42u: goto L_08A8C254;
    case 43u: goto L_08A8C25C;
    case 44u: goto L_08A8C268;
    case 45u: goto L_08A8C270;
    case 46u: goto L_08A8C298;
    case 47u: goto L_08A8C2A4;
    case 48u: goto L_08A8C2A8;
    case 49u: goto L_08A8C2B0;
    case 50u: goto L_08A8C2E8;
    case 51u: goto L_08A8C2F8;
    case 52u: goto L_08A8C30C;
    case 53u: goto L_08A8C31C;
    case 54u: goto L_08A8C330;
    case 55u: goto L_08A8C344;
    case 56u: goto L_08A8C35C;
    case 57u: goto L_08A8C40C;
    case 58u: goto L_08A8C424;
    case 59u: goto L_08A8C440;
    case 60u: goto L_08A8C450;
    case 61u: goto L_08A8C458;
    case 62u: goto L_08A8C4B0;
    case 63u: goto L_08A8C4DC;
    case 64u: goto L_08A8C504;
    case 65u: goto L_08A8C518;
    case 66u: goto L_08A8C520;
    case 67u: goto L_08A8C528;
    case 68u: goto L_08A8C530;
    case 69u: goto L_08A8C538;
    case 70u: goto L_08A8C548;
    case 71u: goto L_08A8C574;
    case 72u: goto L_08A8C584;
    case 73u: goto L_08A8C590;
    case 74u: goto L_08A8C594;
    case 75u: goto L_08A8C5A4;
    case 76u: goto L_08A8C5A8;
    case 77u: goto L_08A8C5B4;
    case 78u: goto L_08A8C5D0;
    case 79u: goto L_08A8C5E0;
    case 80u: goto L_08A8C604;
    case 81u: goto L_08A8C610;
    case 82u: goto L_08A8C618;
    case 83u: goto L_08A8C61C;
    case 84u: goto L_08A8C628;
    case 85u: goto L_08A8C62C;
    case 86u: goto L_08A8C638;
    case 87u: goto L_08A8C644;
    case 88u: goto L_08A8C674;
    case 89u: goto L_08A8C6BC;
    case 90u: goto L_08A8C6C4;
    case 91u: goto L_08A8C6E0;
    case 92u: goto L_08A8C6FC;
    case 93u: goto L_08A8C70C;
    case 94u: goto L_08A8C734;
    case 95u: goto L_08A8C748;
    case 96u: goto L_08A8C754;
    case 97u: goto L_08A8C758;
    case 98u: goto L_08A8C770;
    case 99u: goto L_08A8C78C;
    case 100u: goto L_08A8C798;
    case 101u: goto L_08A8C7A8;
    case 102u: goto L_08A8C7B0;
    case 103u: goto L_08A8C7B8;
    case 104u: goto L_08A8C7C0;
    case 105u: goto L_08A8C7D0;
    case 106u: goto L_08A8C7EC;
    case 107u: goto L_08A8C800;
    case 108u: goto L_08A8C808;
    case 109u: goto L_08A8C810;
    case 110u: goto L_08A8C840;
    case 111u: goto L_08A8C844;
    case 112u: goto L_08A8C850;
    case 113u: goto L_08A8C86C;
    case 114u: goto L_08A8C874;
    case 115u: goto L_08A8C87C;
    case 116u: goto L_08A8C890;
    case 117u: goto L_08A8C8A4;
    case 118u: goto L_08A8C8B4;
    case 119u: goto L_08A8C8D4;
    case 120u: goto L_08A8C8E0;
    case 121u: goto L_08A8C928;
    case 122u: goto L_08A8C938;
    case 123u: goto L_08A8C958;
    case 124u: goto L_08A8C960;
    case 125u: goto L_08A8C974;
    case 126u: goto L_08A8C98C;
    case 127u: goto L_08A8C9C8;
    case 128u: goto L_08A8C9D0;
    case 129u: goto L_08A8C9F8;
    case 130u: goto L_08A8CA04;
    case 131u: goto L_08A8CA3C;
    case 132u: goto L_08A8CA60;
    case 133u: goto L_08A8CA78;
    case 134u: goto L_08A8CA80;
    case 135u: goto L_08A8CAB4;
    case 136u: goto L_08A8CABC;
    case 137u: goto L_08A8CAD0;
    case 138u: goto L_08A8CAE8;
    case 139u: goto L_08A8CB38;
    case 140u: goto L_08A8CB3C;
    case 141u: goto L_08A8CB68;
    case 142u: goto L_08A8CB9C;
    case 143u: goto L_08A8CBAC;
    case 144u: goto L_08A8CBB4;
    case 145u: goto L_08A8CBBC;
    case 146u: goto L_08A8CBC4;
    case 147u: goto L_08A8CBD8;
    case 148u: goto L_08A8CC0C;
    case 149u: goto L_08A8CC18;
    case 150u: goto L_08A8CC20;
    case 151u: goto L_08A8CC28;
    case 152u: goto L_08A8CC30;
    case 153u: goto L_08A8CC44;
    case 154u: goto L_08A8CC4C;
    case 155u: goto L_08A8CC54;
    case 156u: goto L_08A8CC64;
    case 157u: goto L_08A8CC6C;
    case 158u: goto L_08A8CC74;
    case 159u: goto L_08A8CC7C;
    case 160u: goto L_08A8CCA8;
    case 161u: goto L_08A8CCB4;
    case 162u: goto L_08A8CCD0;
    case 163u: goto L_08A8CCE4;
    case 164u: goto L_08A8CCEC;
    case 165u: goto L_08A8CCF4;
    case 166u: goto L_08A8CD08;
    case 167u: goto L_08A8CD10;
    case 168u: goto L_08A8CD24;
    case 169u: goto L_08A8CD34;
    case 170u: goto L_08A8CD44;
    case 171u: goto L_08A8CD54;
    case 172u: goto L_08A8CD68;
    case 173u: goto L_08A8CD94;
    case 174u: goto L_08A8CDB4;
    case 175u: goto L_08A8CDC0;
    case 176u: goto L_08A8CDC8;
    case 177u: goto L_08A8CDD0;
    case 178u: goto L_08A8CDD8;
    case 179u: goto L_08A8CDE8;
    case 180u: goto L_08A8CDFC;
    case 181u: goto L_08A8CE14;
    case 182u: goto L_08A8CE2C;
    case 183u: goto L_08A8CE4C;
    case 184u: goto L_08A8CE64;
    case 185u: goto L_08A8CE70;
    case 186u: goto L_08A8CE78;
    case 187u: goto L_08A8CE88;
    case 188u: goto L_08A8CE90;
    case 189u: goto L_08A8CEA4;
    case 190u: goto L_08A8CEAC;
    case 191u: goto L_08A8CEB8;
    case 192u: goto L_08A8CECC;
    case 193u: goto L_08A8CEE8;
    case 194u: goto L_08A8CEFC;
    case 195u: goto L_08A8CF04;
    case 196u: goto L_08A8CF0C;
    case 197u: goto L_08A8CF14;
    case 198u: goto L_08A8CF40;
    case 199u: goto L_08A8CF4C;
    case 200u: goto L_08A8CF68;
    case 201u: goto L_08A8CF7C;
    case 202u: goto L_08A8CF84;
    case 203u: goto L_08A8CF8C;
    case 204u: goto L_08A8CF98;
    case 205u: goto L_08A8CFA0;
    case 206u: goto L_08A8CFB8;
    case 207u: goto L_08A8CFD4;
    case 208u: goto L_08A8CFEC;
    case 209u: goto L_08A8CFFC;
    case 210u: goto L_08A8D004;
    case 211u: goto L_08A8D014;
    case 212u: goto L_08A8D030;
    case 213u: goto L_08A8D03C;
    case 214u: goto L_08A8D044;
    case 215u: goto L_08A8D050;
    case 216u: goto L_08A8D060;
    case 217u: goto L_08A8D068;
    case 218u: goto L_08A8D070;
    case 219u: goto L_08A8D078;
    case 220u: goto L_08A8D098;
    case 221u: goto L_08A8D0A0;
    case 222u: goto L_08A8D0A8;
    case 223u: goto L_08A8D0B0;
    case 224u: goto L_08A8D0B8;
    case 225u: goto L_08A8D0C0;
    case 226u: goto L_08A8D0C8;
    case 227u: goto L_08A8D0D0;
    case 228u: goto L_08A8D0D8;
    case 229u: goto L_08A8D0E0;
    case 230u: goto L_08A8D0E8;
    case 231u: goto L_08A8D0EC;
    case 232u: goto L_08A8D0F8;
    case 233u: goto L_08A8D100;
    case 234u: goto L_08A8D114;
    case 235u: goto L_08A8D124;
    case 236u: goto L_08A8D134;
    case 237u: goto L_08A8D144;
    case 238u: goto L_08A8D158;
    case 239u: goto L_08A8D184;
    case 240u: goto L_08A8D1A4;
    case 241u: goto L_08A8D1B0;
    case 242u: goto L_08A8D1B8;
    case 243u: goto L_08A8D1C0;
    case 244u: goto L_08A8D1C8;
    case 245u: goto L_08A8D1D8;
    case 246u: goto L_08A8D1EC;
    case 247u: goto L_08A8D204;
    case 248u: goto L_08A8D21C;
    case 249u: goto L_08A8D234;
    case 250u: goto L_08A8D23C;
    case 251u: goto L_08A8D244;
    case 252u: goto L_08A8D250;
    case 253u: goto L_08A8D260;
    case 254u: goto L_08A8D268;
    case 255u: goto L_08A8D27C;
    case 256u: goto L_08A8D284;
    case 257u: goto L_08A8D290;
    case 258u: goto L_08A8D2A4;
    case 259u: goto L_08A8D2C0;
    case 260u: goto L_08A8D2D4;
    case 261u: goto L_08A8D2DC;
    case 262u: goto L_08A8D2E4;
    case 263u: goto L_08A8D2EC;
    case 264u: goto L_08A8D318;
    case 265u: goto L_08A8D324;
    case 266u: goto L_08A8D340;
    case 267u: goto L_08A8D354;
    case 268u: goto L_08A8D35C;
    case 269u: goto L_08A8D364;
    case 270u: goto L_08A8D37C;
    case 271u: goto L_08A8D38C;
    case 272u: goto L_08A8D3A0;
    case 273u: goto L_08A8D3CC;
    case 274u: goto L_08A8D3EC;
    case 275u: goto L_08A8D3F8;
    case 276u: goto L_08A8D400;
    case 277u: goto L_08A8D408;
    case 278u: goto L_08A8D410;
    case 279u: goto L_08A8D420;
    case 280u: goto L_08A8D434;
    case 281u: goto L_08A8D44C;
    case 282u: goto L_08A8D474;
    case 283u: goto L_08A8D47C;
    case 284u: goto L_08A8D488;
    case 285u: goto L_08A8D498;
    case 286u: goto L_08A8D4A0;
    case 287u: goto L_08A8D4B4;
    case 288u: goto L_08A8D4BC;
    case 289u: goto L_08A8D4C8;
    case 290u: goto L_08A8D4E8;
    case 291u: goto L_08A8D4FC;
    case 292u: goto L_08A8D504;
    case 293u: goto L_08A8D50C;
    case 294u: goto L_08A8D53C;
    case 295u: goto L_08A8D550;
    case 296u: goto L_08A8D558;
    case 297u: goto L_08A8D560;
    case 298u: goto L_08A8D570;
    case 299u: goto L_08A8D578;
    case 300u: goto L_08A8D580;
    case 301u: goto L_08A8D5A8;
    case 302u: goto L_08A8D5E4;
    case 303u: goto L_08A8D5EC;
    case 304u: goto L_08A8D63C;
    case 305u: goto L_08A8D648;
    case 306u: goto L_08A8D658;
    case 307u: goto L_08A8D660;
    case 308u: goto L_08A8D674;
    case 309u: goto L_08A8D67C;
    case 310u: goto L_08A8D684;
    case 311u: goto L_08A8D694;
    case 312u: goto L_08A8D6BC;
    case 313u: goto L_08A8D6C4;
    case 314u: goto L_08A8D6CC;
    case 315u: goto L_08A8D714;
    case 316u: goto L_08A8D75C;
    case 317u: goto L_08A8D768;
    case 318u: goto L_08A8D77C;
    case 319u: goto L_08A8D784;
    case 320u: goto L_08A8D794;
    case 321u: goto L_08A8D79C;
    case 322u: goto L_08A8D7A4;
    case 323u: goto L_08A8D7AC;
    case 324u: goto L_08A8D7B4;
    case 325u: goto L_08A8D7BC;
    case 326u: goto L_08A8D7C4;
    case 327u: goto L_08A8D7CC;
    case 328u: goto L_08A8D7D4;
    case 329u: goto L_08A8D7EC;
    case 330u: goto L_08A8D820;
    case 331u: goto L_08A8D828;
    case 332u: goto L_08A8D84C;
    case 333u: goto L_08A8D854;
    case 334u: goto L_08A8D85C;
    case 335u: goto L_08A8D864;
    case 336u: goto L_08A8D870;
    case 337u: goto L_08A8D878;
    case 338u: goto L_08A8D8A0;
    case 339u: goto L_08A8D8D4;
    case 340u: goto L_08A8D8DC;
    case 341u: goto L_08A8D8E4;
    case 342u: goto L_08A8D920;
    case 343u: goto L_08A8D930;
    case 344u: goto L_08A8D938;
    case 345u: goto L_08A8D93C;
    case 346u: goto L_08A8D964;
    case 347u: goto L_08A8D978;
    case 348u: goto L_08A8D994;
    case 349u: goto L_08A8D9A0;
    case 350u: goto L_08A8D9A8;
    case 351u: goto L_08A8D9C0;
    case 352u: goto L_08A8D9C8;
    case 353u: goto L_08A8DA10;
    case 354u: goto L_08A8DA58;
    case 355u: goto L_08A8DA60;
    case 356u: goto L_08A8DA68;
    case 357u: goto L_08A8DA70;
    case 358u: goto L_08A8DA78;
    case 359u: goto L_08A8DA80;
    case 360u: goto L_08A8DAA0;
    case 361u: goto L_08A8DAD0;
    case 362u: goto L_08A8DAE8;
    case 363u: goto L_08A8DAF0;
    case 364u: goto L_08A8DB10;
    case 365u: goto L_08A8DB1C;
    case 366u: goto L_08A8DB28;
    case 367u: goto L_08A8DB38;
    case 368u: goto L_08A8DB3C;
    case 369u: goto L_08A8DB44;
    case 370u: goto L_08A8DB98;
    case 371u: goto L_08A8DBA0;
    case 372u: goto L_08A8DBD4;
    case 373u: goto L_08A8DC0C;
    case 374u: goto L_08A8DC14;
    case 375u: goto L_08A8DC24;
    case 376u: goto L_08A8DC38;
    case 377u: goto L_08A8DC40;
    case 378u: goto L_08A8DC4C;
    case 379u: goto L_08A8DC54;
    case 380u: goto L_08A8DC5C;
    case 381u: goto L_08A8DC64;
    case 382u: goto L_08A8DC74;
    case 383u: goto L_08A8DC7C;
    case 384u: goto L_08A8DC8C;
    case 385u: goto L_08A8DC94;
    case 386u: goto L_08A8DCA8;
    case 387u: goto L_08A8DCB0;
    case 388u: goto L_08A8DCC8;
    case 389u: goto L_08A8DCD8;
    case 390u: goto L_08A8DCE0;
    case 391u: goto L_08A8DCF0;
    case 392u: goto L_08A8DCF8;
    case 393u: goto L_08A8DD08;
    case 394u: goto L_08A8DD18;
    case 395u: goto L_08A8DD28;
    case 396u: goto L_08A8DD38;
    case 397u: goto L_08A8DD48;
    case 398u: goto L_08A8DD50;
    case 399u: goto L_08A8DD58;
    case 400u: goto L_08A8DD60;
    case 401u: goto L_08A8DD70;
    case 402u: goto L_08A8DD78;
    case 403u: goto L_08A8DD84;
    case 404u: goto L_08A8DD8C;
    case 405u: goto L_08A8DD98;
    case 406u: goto L_08A8DDA0;
    case 407u: goto L_08A8DDA4;
    case 408u: goto L_08A8DDB0;
    case 409u: goto L_08A8DDB8;
    case 410u: goto L_08A8DDC0;
    case 411u: goto L_08A8DDE0;
    case 412u: goto L_08A8DDE8;
    case 413u: goto L_08A8DDF8;
    case 414u: goto L_08A8DE00;
    case 415u: goto L_08A8DE08;
    case 416u: goto L_08A8DE40;
    case 417u: goto L_08A8DE54;
    case 418u: goto L_08A8DE7C;
    case 419u: goto L_08A8DE88;
    case 420u: goto L_08A8DE94;
    case 421u: goto L_08A8DE9C;
    case 422u: goto L_08A8DEA0;
    case 423u: goto L_08A8DEA8;
    case 424u: goto L_08A8DEB4;
    case 425u: goto L_08A8DEC4;
    case 426u: goto L_08A8DED4;
    case 427u: goto L_08A8DEE0;
    case 428u: goto L_08A8DEE8;
    case 429u: goto L_08A8DEF0;
    case 430u: goto L_08A8DEF8;
    case 431u: goto L_08A8DF14;
    case 432u: goto L_08A8DF1C;
    case 433u: goto L_08A8DF2C;
    case 434u: goto L_08A8DF34;
    case 435u: goto L_08A8DF44;
    case 436u: goto L_08A8DF70;
    case 437u: goto L_08A8DF9C;
    case 438u: goto L_08A8DFA4;
    case 439u: goto L_08A8DFF0;
    case 440u: goto L_08A8DFFC;
    case 441u: goto L_08A8E018;
    case 442u: goto L_08A8E02C;
    case 443u: goto L_08A8E03C;
    case 444u: goto L_08A8E044;
    case 445u: goto L_08A8E060;
    case 446u: goto L_08A8E098;
    case 447u: goto L_08A8E0BC;
    case 448u: goto L_08A8E0D0;
    case 449u: goto L_08A8E0D8;
    case 450u: goto L_08A8E0E8;
    case 451u: goto L_08A8E0FC;
    case 452u: goto L_08A8E110;
    case 453u: goto L_08A8E118;
    case 454u: goto L_08A8E128;
    case 455u: goto L_08A8E130;
    case 456u: goto L_08A8E13C;
    case 457u: goto L_08A8E144;
    case 458u: goto L_08A8E150;
    case 459u: goto L_08A8E158;
    case 460u: goto L_08A8E160;
    case 461u: goto L_08A8E190;
    case 462u: goto L_08A8E1C4;
    case 463u: goto L_08A8E1E4;
    case 464u: goto L_08A8E2D8;
    case 465u: goto L_08A8E2FC;
    case 466u: goto L_08A8E308;
    case 467u: goto L_08A8E324;
    case 468u: goto L_08A8E32C;
    case 469u: goto L_08A8E338;
    case 470u: goto L_08A8E3D8;
    case 471u: goto L_08A8E428;
    case 472u: goto L_08A8E454;
    case 473u: goto L_08A8E498;
    case 474u: goto L_08A8E4A8;
    case 475u: goto L_08A8E4BC;
    case 476u: goto L_08A8E4C4;
    case 477u: goto L_08A8E4D4;
    case 478u: goto L_08A8E4E0;
    case 479u: goto L_08A8E4E4;
    case 480u: goto L_08A8E4E8;
    case 481u: goto L_08A8E4F0;
    case 482u: goto L_08A8E4F8;
    case 483u: goto L_08A8E504;
    case 484u: goto L_08A8E52C;
    case 485u: goto L_08A8E540;
    case 486u: goto L_08A8E548;
    case 487u: goto L_08A8E550;
    case 488u: goto L_08A8E560;
    case 489u: goto L_08A8E568;
    case 490u: goto L_08A8E570;
    case 491u: goto L_08A8E580;
    case 492u: goto L_08A8E588;
    case 493u: goto L_08A8E590;
    case 494u: goto L_08A8E598;
    case 495u: goto L_08A8E5A0;
    case 496u: goto L_08A8E5A8;
    case 497u: goto L_08A8E5B0;
    case 498u: goto L_08A8E5C8;
    case 499u: goto L_08A8E5D0;
    case 500u: goto L_08A8E604;
    case 501u: goto L_08A8E60C;
    case 502u: goto L_08A8E618;
    case 503u: goto L_08A8E624;
    case 504u: goto L_08A8E62C;
    case 505u: goto L_08A8E630;
    case 506u: goto L_08A8E638;
    case 507u: goto L_08A8E644;
    case 508u: goto L_08A8E660;
    case 509u: goto L_08A8E66C;
    case 510u: goto L_08A8E678;
    case 511u: goto L_08A8E684;
    case 512u: goto L_08A8E68C;
    case 513u: goto L_08A8E690;
    case 514u: goto L_08A8E698;
    case 515u: goto L_08A8E6A0;
    case 516u: goto L_08A8E6A8;
    case 517u: goto L_08A8E6CC;
    case 518u: goto L_08A8E6D8;
    case 519u: goto L_08A8E6E4;
    case 520u: goto L_08A8E6F0;
    case 521u: goto L_08A8E6F8;
    case 522u: goto L_08A8E6FC;
    case 523u: goto L_08A8E704;
    case 524u: goto L_08A8E70C;
    case 525u: goto L_08A8E728;
    case 526u: goto L_08A8E738;
    case 527u: goto L_08A8E748;
    case 528u: goto L_08A8E754;
    case 529u: goto L_08A8E764;
    case 530u: goto L_08A8E76C;
    case 531u: goto L_08A8E77C;
    case 532u: goto L_08A8E784;
    case 533u: goto L_08A8E7A8;
    case 534u: goto L_08A8E7B4;
    case 535u: goto L_08A8E7D0;
    case 536u: goto L_08A8E7D8;
    case 537u: goto L_08A8E810;
    case 538u: goto L_08A8E874;
    case 539u: goto L_08A8E880;
    case 540u: goto L_08A8E8A4;
    case 541u: goto L_08A8E8D0;
    case 542u: goto L_08A8E8EC;
    case 543u: goto L_08A8E914;
    case 544u: goto L_08A8E94C;
    case 545u: goto L_08A8E984;
    case 546u: goto L_08A8E98C;
    case 547u: goto L_08A8E998;
    case 548u: goto L_08A8E9A0;
    case 549u: goto L_08A8E9C8;
    case 550u: goto L_08A8E9D0;
    case 551u: goto L_08A8E9E8;
    case 552u: goto L_08A8E9F0;
    case 553u: goto L_08A8EA2C;
    case 554u: goto L_08A8EA38;
    case 555u: goto L_08A8EA3C;
    case 556u: goto L_08A8EA68;
    case 557u: goto L_08A8EA7C;
    case 558u: goto L_08A8EA88;
    case 559u: goto L_08A8EA9C;
    case 560u: goto L_08A8EAB0;
    case 561u: goto L_08A8EAC0;
    case 562u: goto L_08A8EAD0;
    case 563u: goto L_08A8EADC;
    case 564u: goto L_08A8EB10;
    case 565u: goto L_08A8EB2C;
    case 566u: goto L_08A8EB40;
    case 567u: goto L_08A8EB4C;
    case 568u: goto L_08A8EB58;
    case 569u: goto L_08A8EB60;
    case 570u: goto L_08A8EB64;
    case 571u: goto L_08A8EB68;
    case 572u: goto L_08A8EB74;
    case 573u: goto L_08A8EBA4;
    case 574u: goto L_08A8EBB8;
    case 575u: goto L_08A8EBD8;
    case 576u: goto L_08A8ECCC;
    case 577u: goto L_08A8ECE8;
    case 578u: goto L_08A8ECFC;
    case 579u: goto L_08A8ED04;
    case 580u: goto L_08A8ED10;
    case 581u: goto L_08A8ED1C;
    case 582u: goto L_08A8ED28;
    case 583u: goto L_08A8ED30;
    case 584u: goto L_08A8ED44;
    case 585u: goto L_08A8ED80;
    case 586u: goto L_08A8EDB4;
    case 587u: goto L_08A8EDBC;
    case 588u: goto L_08A8EDC4;
    case 589u: goto L_08A8EDD8;
    case 590u: goto L_08A8EDE0;
    case 591u: goto L_08A8EDE8;
    case 592u: goto L_08A8EDF0;
    case 593u: goto L_08A8EE00;
    case 594u: goto L_08A8EE0C;
    case 595u: goto L_08A8EE2C;
    case 596u: goto L_08A8EE3C;
    case 597u: goto L_08A8EE40;
    case 598u: goto L_08A8EE48;
    case 599u: goto L_08A8EE50;
    case 600u: goto L_08A8EE80;
    case 601u: goto L_08A8EE8C;
    case 602u: goto L_08A8EEA8;
    case 603u: goto L_08A8EEB0;
    case 604u: goto L_08A8EED0;
    case 605u: goto L_08A8EEE4;
    case 606u: goto L_08A8EEEC;
    case 607u: goto L_08A8EEF4;
    case 608u: goto L_08A8EF00;
    case 609u: goto L_08A8EF08;
    case 610u: goto L_08A8EF18;
    case 611u: goto L_08A8EF28;
    case 612u: goto L_08A8EF3C;
    case 613u: goto L_08A8EF40;
    case 614u: goto L_08A8EF44;
    case 615u: goto L_08A8EF4C;
    case 616u: goto L_08A8EF54;
    case 617u: goto L_08A8EFA4;
    case 618u: goto L_08A8EFD4;
    case 619u: goto L_08A8EFE0;
    case 620u: goto L_08A8EFF0;
    case 621u: goto L_08A8F000;
    case 622u: goto L_08A8F008;
    case 623u: goto L_08A8F014;
    case 624u: goto L_08A8F01C;
    case 625u: goto L_08A8F028;
    case 626u: goto L_08A8F030;
    case 627u: goto L_08A8F044;
    case 628u: goto L_08A8F074;
    case 629u: goto L_08A8F084;
    case 630u: goto L_08A8F0B4;
    case 631u: goto L_08A8F0BC;
    case 632u: goto L_08A8F0C4;
    case 633u: goto L_08A8F0D0;
    case 634u: goto L_08A8F0DC;
    case 635u: goto L_08A8F0EC;
    case 636u: goto L_08A8F0F4;
    case 637u: goto L_08A8F0FC;
    case 638u: goto L_08A8F104;
    case 639u: goto L_08A8F11C;
    case 640u: goto L_08A8F130;
    case 641u: goto L_08A8F144;
    case 642u: goto L_08A8F158;
    case 643u: goto L_08A8F160;
    case 644u: goto L_08A8F178;
    case 645u: goto L_08A8F184;
    case 646u: goto L_08A8F18C;
    case 647u: goto L_08A8F19C;
    case 648u: goto L_08A8F1A8;
    case 649u: goto L_08A8F1B0;
    case 650u: goto L_08A8F1B8;
    case 651u: goto L_08A8F1BC;
    case 652u: goto L_08A8F1C4;
    case 653u: goto L_08A8F1CC;
    case 654u: goto L_08A8F1E0;
    case 655u: goto L_08A8F1EC;
    case 656u: goto L_08A8F1F8;
    case 657u: goto L_08A8F200;
    case 658u: goto L_08A8F208;
    case 659u: goto L_08A8F20C;
    case 660u: goto L_08A8F214;
    case 661u: goto L_08A8F224;
    case 662u: goto L_08A8F244;
    case 663u: goto L_08A8F250;
    case 664u: goto L_08A8F25C;
    case 665u: goto L_08A8F268;
    case 666u: goto L_08A8F2A8;
    case 667u: goto L_08A8F2C8;
    case 668u: goto L_08A8F2D4;
    case 669u: goto L_08A8F2FC;
    case 670u: goto L_08A8F320;
    case 671u: goto L_08A8F328;
    case 672u: goto L_08A8F330;
    case 673u: goto L_08A8F338;
    case 674u: goto L_08A8F340;
    case 675u: goto L_08A8F348;
    case 676u: goto L_08A8F358;
    case 677u: goto L_08A8F364;
    case 678u: goto L_08A8F370;
    case 679u: goto L_08A8F37C;
    case 680u: goto L_08A8F380;
    case 681u: goto L_08A8F388;
    case 682u: goto L_08A8F38C;
    case 683u: goto L_08A8F390;
    case 684u: goto L_08A8F39C;
    case 685u: goto L_08A8F3A8;
    case 686u: goto L_08A8F3B8;
    case 687u: goto L_08A8F3C4;
    case 688u: goto L_08A8F3CC;
    case 689u: goto L_08A8F3DC;
    case 690u: goto L_08A8F3EC;
    case 691u: goto L_08A8F3FC;
    case 692u: goto L_08A8F40C;
    case 693u: goto L_08A8F41C;
    case 694u: goto L_08A8F428;
    case 695u: goto L_08A8F434;
    case 696u: goto L_08A8F43C;
    case 697u: goto L_08A8F444;
    case 698u: goto L_08A8F44C;
    case 699u: goto L_08A8F45C;
    case 700u: goto L_08A8F474;
    case 701u: goto L_08A8F488;
    case 702u: goto L_08A8F4A8;
    case 703u: goto L_08A8F4D0;
    case 704u: goto L_08A8F4E4;
    case 705u: goto L_08A8F4FC;
    case 706u: goto L_08A8F53C;
    case 707u: goto L_08A8F548;
    case 708u: goto L_08A8F554;
    case 709u: goto L_08A8F560;
    case 710u: goto L_08A8F564;
    case 711u: goto L_08A8F56C;
    case 712u: goto L_08A8F580;
    case 713u: goto L_08A8F5A4;
    case 714u: goto L_08A8F5B0;
    case 715u: goto L_08A8F5EC;
    case 716u: goto L_08A8F5F8;
    case 717u: goto L_08A8F604;
    case 718u: goto L_08A8F610;
    case 719u: goto L_08A8F614;
    case 720u: goto L_08A8F61C;
    case 721u: goto L_08A8F634;
    case 722u: goto L_08A8F648;
    case 723u: goto L_08A8F6D4;
    case 724u: goto L_08A8F6DC;
    case 725u: goto L_08A8F6EC;
    case 726u: goto L_08A8F6F4;
    case 727u: goto L_08A8F708;
    case 728u: goto L_08A8F724;
    case 729u: goto L_08A8F760;
    case 730u: goto L_08A8F76C;
    case 731u: goto L_08A8F778;
    case 732u: goto L_08A8F784;
    case 733u: goto L_08A8F788;
    case 734u: goto L_08A8F790;
    case 735u: goto L_08A8F7A8;
    case 736u: goto L_08A8F7B8;
    case 737u: goto L_08A8F7C4;
    case 738u: goto L_08A8F7E4;
    case 739u: goto L_08A8F80C;
    case 740u: goto L_08A8F824;
    case 741u: goto L_08A8F830;
    case 742u: goto L_08A8F838;
    case 743u: goto L_08A8F840;
    case 744u: goto L_08A8F848;
    case 745u: goto L_08A8F850;
    case 746u: goto L_08A8F86C;
    case 747u: goto L_08A8F880;
    case 748u: goto L_08A8F890;
    case 749u: goto L_08A8F8D4;
    case 750u: goto L_08A8F8E4;
    case 751u: goto L_08A8F900;
    case 752u: goto L_08A8F910;
    case 753u: goto L_08A8F91C;
    case 754u: goto L_08A8F960;
    case 755u: goto L_08A8F970;
    case 756u: goto L_08A8F98C;
    case 757u: goto L_08A8F99C;
    case 758u: goto L_08A8F9A8;
    case 759u: goto L_08A8F9E4;
    case 760u: goto L_08A8F9F4;
    case 761u: goto L_08A8FA10;
    case 762u: goto L_08A8FA20;
    case 763u: goto L_08A8FA2C;
    case 764u: goto L_08A8FA68;
    case 765u: goto L_08A8FA78;
    case 766u: goto L_08A8FA84;
    case 767u: goto L_08A8FA9C;
    case 768u: goto L_08A8FAB8;
    case 769u: goto L_08A8FAC0;
    case 770u: goto L_08A8FADC;
    case 771u: goto L_08A8FAE4;
    case 772u: goto L_08A8FB00;
    case 773u: goto L_08A8FB08;
    case 774u: goto L_08A8FB24;
    case 775u: goto L_08A8FB2C;
    case 776u: goto L_08A8FB48;
    case 777u: goto L_08A8FB50;
    case 778u: goto L_08A8FB6C;
    case 779u: goto L_08A8FB74;
    case 780u: goto L_08A8FB90;
    case 781u: goto L_08A8FB98;
    case 782u: goto L_08A8FBB4;
    case 783u: goto L_08A8FBC4;
    case 784u: goto L_08A8FBD0;
    case 785u: goto L_08A8FC0C;
    case 786u: goto L_08A8FC1C;
    case 787u: goto L_08A8FC74;
    case 788u: goto L_08A8FC80;
    case 789u: goto L_08A8FC88;
    case 790u: goto L_08A8FC8C;
    case 791u: goto L_08A8FC9C;
    case 792u: goto L_08A8FCB8;
    case 793u: goto L_08A8FCF4;
    case 794u: goto L_08A8FCFC;
    case 795u: goto L_08A8FD04;
    case 796u: goto L_08A8FD10;
    case 797u: goto L_08A8FD24;
    case 798u: goto L_08A8FD2C;
    case 799u: goto L_08A8FD34;
    case 800u: goto L_08A8FD40;
    case 801u: goto L_08A8FD50;
    case 802u: goto L_08A8FD64;
    case 803u: goto L_08A8FD78;
    case 804u: goto L_08A8FD80;
    case 805u: goto L_08A8FD9C;
    case 806u: goto L_08A8FDAC;
    case 807u: goto L_08A8FDBC;
    case 808u: goto L_08A8FDCC;
    case 809u: goto L_08A8FDD4;
    case 810u: goto L_08A8FDDC;
    case 811u: goto L_08A8FDE4;
    case 812u: goto L_08A8FDEC;
    case 813u: goto L_08A8FDF4;
    case 814u: goto L_08A8FDFC;
    case 815u: goto L_08A8FE20;
    case 816u: goto L_08A8FE58;
    case 817u: goto L_08A8FE60;
    case 818u: goto L_08A8FE68;
    case 819u: goto L_08A8FE70;
    case 820u: goto L_08A8FE78;
    case 821u: goto L_08A8FE80;
    case 822u: goto L_08A8FEA0;
    case 823u: goto L_08A8FEF8;
    case 824u: goto L_08A8FF24;
    case 825u: goto L_08A8FF50;
    case 826u: goto L_08A8FF6C;
    case 827u: goto L_08A8FF74;
    case 828u: goto L_08A8FF7C;
    case 829u: goto L_08A8FF84;
    case 830u: goto L_08A8FFA8;
    case 831u: goto L_08A8FFB0;
    case 832u: goto L_08A8FFB8;
    case 833u: goto L_08A8FFC0;
    case 834u: goto L_08A8FFCC;
    case 835u: goto L_08A8FFD8;
    case 836u: goto L_08A8FFE4;
    case 837u: goto L_08A8FFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A8C000:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8C010u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 199u, 0x08AC8FD8u>(ctx, &aot_mem) && ctx.pc == 0x08A8C010u) goto L_08A8C010;
    return;
L_08A8C010:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8C01Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 99u, 0x089C8844u>(ctx, &aot_mem) && ctx.pc == 0x08A8C01Cu) goto L_08A8C01C;
    return;
L_08A8C01C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08A8C020;
L_08A8C020:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C034:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A8C074;
      }
      goto L_08A8C054;
    }
L_08A8C054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C07C;
      }
      goto L_08A8C060;
    }
L_08A8C060:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A8C06Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21304));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 652u, 0x08A8BEACu>(ctx, &aot_mem) && ctx.pc == 0x08A8C06Cu) goto L_08A8C06C;
    return;
L_08A8C06C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C12C;
      }
      goto L_08A8C074;
    }
L_08A8C074:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C12C;
      }
      goto L_08A8C07C;
    }
L_08A8C07C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08A8C088u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 139u, 0x089C8BB0u>(ctx, &aot_mem) && ctx.pc == 0x08A8C088u) goto L_08A8C088;
    return;
L_08A8C088:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8C0C4;
      }
      goto L_08A8C09C;
    }
L_08A8C09C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08A8C0B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 117u, 0x089C89C8u>(ctx, &aot_mem) && ctx.pc == 0x08A8C0B0u) goto L_08A8C0B0;
    return;
L_08A8C0B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8C09C;
      }
      goto L_08A8C0C4;
    }
L_08A8C0C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A8C0DCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8C0DCu) goto L_08A8C0DC;
    return;
L_08A8C0DC:
    ctx.gpr[31] = (0x08A8C0E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 259u, 0x08A7D694u>(ctx, &aot_mem) && ctx.pc == 0x08A8C0E4u) goto L_08A8C0E4;
    return;
L_08A8C0E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A8C0FCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8C0FCu) goto L_08A8C0FC;
    return;
L_08A8C0FC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A8C128;
      }
      goto L_08A8C108;
    }
L_08A8C108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A8C120u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8C120u) goto L_08A8C120;
    return;
L_08A8C120:
    ctx.gpr[31] = (0x08A8C128u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 548u, 0x08A8B380u>(ctx, &aot_mem) && ctx.pc == 0x08A8C128u) goto L_08A8C128;
    return;
L_08A8C128:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    goto L_08A8C12C;
L_08A8C12C:
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
L_08A8C144:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C16C;
      }
      goto L_08A8C150;
    }
L_08A8C150:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[8] & 8u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08A8C174;
      }
      goto L_08A8C164;
    }
L_08A8C164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C178;
      }
      goto L_08A8C16C;
    }
L_08A8C16C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8C1D0;
      }
      goto L_08A8C174;
    }
L_08A8C174:
    ctx.gpr[6] = (ctx.gpr[8] & 3u);
    goto L_08A8C178;
L_08A8C178:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[9] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A8C1C0;
      }
      goto L_08A8C184;
    }
L_08A8C184:
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(224)));
    goto L_08A8C194;
L_08A8C194:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8C1C8;
      }
      goto L_08A8C1AC;
    }
L_08A8C1AC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8C194;
      }
      goto L_08A8C1C0;
    }
L_08A8C1C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8C1D0;
      }
      goto L_08A8C1C8;
    }
L_08A8C1C8:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A8C1D0;
L_08A8C1D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C1D8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(224)));
      if (branch_taken) {
          goto L_08A8C1FC;
      }
      goto L_08A8C1F0;
    }
L_08A8C1F0:
    ctx.gpr[6] = (ctx.gpr[6] & 8u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C214;
      }
      goto L_08A8C1FC;
    }
L_08A8C1FC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_08A8C224;
      }
      goto L_08A8C214;
    }
L_08A8C214:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    goto L_08A8C224;
L_08A8C224:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C22C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C254;
      }
      goto L_08A8C238;
    }
L_08A8C238:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
    ctx.gpr[7] = (ctx.gpr[8] & 3u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8C25C;
      }
      goto L_08A8C24C;
    }
L_08A8C24C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_08A8C270;
      }
      goto L_08A8C254;
    }
L_08A8C254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8C2A8;
      }
      goto L_08A8C25C;
    }
L_08A8C25C:
    ctx.gpr[8] = (ctx.gpr[8] & 8u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_08A8C270;
      }
      goto L_08A8C268;
    }
L_08A8C268:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    goto L_08A8C270;
L_08A8C270:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8C2A4;
      }
      goto L_08A8C298;
    }
L_08A8C298:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A8C2A8;
      }
      goto L_08A8C2A4;
    }
L_08A8C2A4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A8C2A8;
L_08A8C2A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C2B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08A8C2E8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A8C2E8u) goto L_08A8C2E8;
    return;
L_08A8C2E8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08A8C2F8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A8C2F8u) goto L_08A8C2F8;
    return;
L_08A8C2F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8C344;
      }
      goto L_08A8C30C;
    }
L_08A8C30C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08A8C31Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 603u, 0x0886B364u>(ctx, &aot_mem) && ctx.pc == 0x08A8C31Cu) goto L_08A8C31C;
    return;
L_08A8C31C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08A8C330u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 107u, 0x089C88F0u>(ctx, &aot_mem) && ctx.pc == 0x08A8C330u) goto L_08A8C330;
    return;
L_08A8C330:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8C30C;
      }
      goto L_08A8C344;
    }
L_08A8C344:
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
L_08A8C35C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24036)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24032)));
    ctx.gpr[7] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[16] = (ctx.gpr[7] + static_cast<std::uint32_t>(25888));
    ctx.gpr[6] = (ctx.gpr[4] | 14571u);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24060)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24040), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(24048), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(24044), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (15744u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[2] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24052), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[3] = (2229u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24056), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8C40Cu);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24064), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 239u, 0x08A7D51Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C40Cu) goto L_08A8C40C;
    return;
L_08A8C40C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13452));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A8C424u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24068));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x08A8C424u) goto L_08A8C424;
    return;
L_08A8C424:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 36u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25952));
    ctx.gpr[31] = (0x08A8C440u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21256));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 553u, 0x0886AF04u>(ctx, &aot_mem) && ctx.pc == 0x08A8C440u) goto L_08A8C440;
    return;
L_08A8C440:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C450:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C458:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(25968));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25968), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(26000));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26000), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C4B0:
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
L_08A8C4DC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6156), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6155), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7904), 0u);
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6140), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C504:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8C518u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 718u, 0x0891B398u>(ctx, &aot_mem) && ctx.pc == 0x08A8C518u) goto L_08A8C518;
    return;
L_08A8C518:
    ctx.gpr[31] = (0x08A8C520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 638u, 0x08AB3900u>(ctx, &aot_mem) && ctx.pc == 0x08A8C520u) goto L_08A8C520;
    return;
L_08A8C520:
    ctx.gpr[31] = (0x08A8C528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 568u, 0x089C66D8u>(ctx, &aot_mem) && ctx.pc == 0x08A8C528u) goto L_08A8C528;
    return;
L_08A8C528:
    ctx.gpr[31] = (0x08A8C530u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 448u, 0x089C5DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A8C530u) goto L_08A8C530;
    return;
L_08A8C530:
    ctx.gpr[31] = (0x08A8C538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 719u, 0x0891B3ACu>(ctx, &aot_mem) && ctx.pc == 0x08A8C538u) goto L_08A8C538;
    return;
L_08A8C538:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C548:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-8047)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 60 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8048)));
      if (branch_taken) {
          goto L_08A8C584;
      }
      goto L_08A8C574;
    }
L_08A8C574:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-60));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 60 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8C574;
      }
      goto L_08A8C584;
    }
L_08A8C584:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A8C5A8;
      }
      goto L_08A8C590;
    }
L_08A8C590:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7924)));
    goto L_08A8C594;
L_08A8C594:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8C594;
      }
      goto L_08A8C5A4;
    }
L_08A8C5A4:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7924), ctx.gpr[6]);
    goto L_08A8C5A8;
L_08A8C5A8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08A8C5B4u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 57u, 0x0883C3B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8C5B4u) goto L_08A8C5B4;
    return;
L_08A8C5B4:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[31] = (0x08A8C5D0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 212u, 0x08A822B8u>(ctx, &aot_mem) && ctx.pc == 0x08A8C5D0u) goto L_08A8C5D0;
    return;
L_08A8C5D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C5E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-8047)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8048)));
      if (branch_taken) {
          goto L_08A8C610;
      }
      goto L_08A8C604;
    }
L_08A8C604:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(60));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8C604;
      }
      goto L_08A8C610;
    }
L_08A8C610:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[7] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A8C62C;
      }
      goto L_08A8C618;
    }
L_08A8C618:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7924)));
    goto L_08A8C61C;
L_08A8C61C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8C61C;
      }
      goto L_08A8C628;
    }
L_08A8C628:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7924), ctx.gpr[6]);
    goto L_08A8C62C;
L_08A8C62C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08A8C638u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 57u, 0x0883C3B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8C638u) goto L_08A8C638;
    return;
L_08A8C638:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C644:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A8C674u);
    // nop
    goto L_08A8C6E0;
L_08A8C674:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6155), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26032));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6152), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26048));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 166u);
    ctx.gpr[31] = (0x08A8C6BCu);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A8C6BCu) goto L_08A8C6BC;
    return;
L_08A8C6BC:
    ctx.gpr[31] = (0x08A8C6C4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08A8C6C4u) goto L_08A8C6C4;
    return;
L_08A8C6C4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C6E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7904)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C758;
      }
      goto L_08A8C6FC;
    }
L_08A8C6FC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A8C734;
      }
      goto L_08A8C70C;
    }
L_08A8C70C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17456)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-17456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7904)));
    goto L_08A8C734;
L_08A8C734:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A8C748u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 530u, 0x08AFE33Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C748u) goto L_08A8C748;
    return;
L_08A8C748:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08A8C754u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 22u, 0x089681E4u>(ctx, &aot_mem) && ctx.pc == 0x08A8C754u) goto L_08A8C754;
    return;
L_08A8C754:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7904), 0u);
    goto L_08A8C758;
L_08A8C758:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6155), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C770:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7904)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C8A4;
      }
      goto L_08A8C78C;
    }
L_08A8C78C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C800;
      }
      goto L_08A8C798;
    }
L_08A8C798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    ctx.gpr[7] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 54u);
      if (branch_taken) {
          goto L_08A8C800;
      }
      goto L_08A8C7A8;
    }
L_08A8C7A8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 57u);
      if (branch_taken) {
          goto L_08A8C800;
      }
      goto L_08A8C7B0;
    }
L_08A8C7B0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 32u);
      if (branch_taken) {
          goto L_08A8C800;
      }
      goto L_08A8C7B8;
    }
L_08A8C7B8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A8C800;
      }
      goto L_08A8C7C0;
    }
L_08A8C7C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 38u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8C800;
      }
      goto L_08A8C7D0;
    }
L_08A8C7D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8C800;
      }
      goto L_08A8C7EC;
    }
L_08A8C7EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C8A4;
      }
      goto L_08A8C800;
    }
L_08A8C800:
    ctx.gpr[31] = (0x08A8C808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C808u) goto L_08A8C808;
    return;
L_08A8C808:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7904)));
      if (branch_taken) {
          goto L_08A8C844;
      }
      goto L_08A8C810;
    }
L_08A8C810:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A8C840u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 456u, 0x089D7110u>(ctx, &aot_mem) && ctx.pc == 0x08A8C840u) goto L_08A8C840;
    return;
L_08A8C840:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7904)));
    goto L_08A8C844;
L_08A8C844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C86C;
      }
      goto L_08A8C850;
    }
L_08A8C850:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[5] = (0u | 18u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A8C86Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7904)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 219u, 0x089ED5CCu>(ctx, &aot_mem) && ctx.pc == 0x08A8C86Cu) goto L_08A8C86C;
    return;
L_08A8C86C:
    ctx.gpr[31] = (0x08A8C874u);
    // nop
    goto L_08A8C6E0;
L_08A8C874:
    ctx.gpr[31] = (0x08A8C87Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A8C87Cu) goto L_08A8C87C;
    return;
L_08A8C87C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[31] = (0x08A8C890u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C890u) goto L_08A8C890;
    return;
L_08A8C890:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A8C8A4;
L_08A8C8A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C8B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7904)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C960;
      }
      goto L_08A8C8D4;
    }
L_08A8C8D4:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A8C8E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08A8C8E0u) goto L_08A8C8E0;
    return;
L_08A8C8E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8C960;
      }
      goto L_08A8C928;
    }
L_08A8C928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C958;
      }
      goto L_08A8C938;
    }
L_08A8C938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[5] = (0u | 18u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A8C958u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7904)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 219u, 0x089ED5CCu>(ctx, &aot_mem) && ctx.pc == 0x08A8C958u) goto L_08A8C958;
    return;
L_08A8C958:
    ctx.gpr[31] = (0x08A8C960u);
    // nop
    goto L_08A8C6E0;
L_08A8C960:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C974:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6140)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C9C8;
      }
      goto L_08A8C98C;
    }
L_08A8C98C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6140)));
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(26064));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6140)));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(26320));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6140), ctx.gpr[5]);
    goto L_08A8C9C8;
L_08A8C9C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C9D0:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6132), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C9F8:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6132), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8CA04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[22]);
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-6132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CB3C;
      }
      goto L_08A8CA3C;
    }
L_08A8CA3C:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-6140)));
    ctx.gpr[5] = (18371u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 20467u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A8CAD0;
      }
      goto L_08A8CA60;
    }
L_08A8CA60:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26064));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    goto L_08A8CA78;
L_08A8CA78:
    ctx.gpr[31] = (0x08A8CA80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08A8CA80u) goto L_08A8CA80;
    return;
L_08A8CA80:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8CABC;
      }
      goto L_08A8CAB4;
    }
L_08A8CAB4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    goto L_08A8CABC;
L_08A8CABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-6140)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A8CA78;
      }
      goto L_08A8CAD0;
    }
L_08A8CAD0:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8CB38;
      }
      goto L_08A8CAE8;
    }
L_08A8CAE8:
    ctx.gpr[4] = (ctx.gpr[21] << 4u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26064));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(26320));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26384));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[31] = (0x08A8CB38u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6136)));
    goto L_08A8C644;
L_08A8CB38:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(-6132), static_cast<std::uint8_t>(0u));
    goto L_08A8CB3C;
L_08A8CB3C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8CB68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CBB4;
      }
      goto L_08A8CB9C;
    }
L_08A8CB9C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CBBC;
      }
      goto L_08A8CBAC;
    }
L_08A8CBAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A8D50C;
      }
      goto L_08A8CBB4;
    }
L_08A8CBB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D580;
      }
      goto L_08A8CBBC;
    }
L_08A8CBBC:
    ctx.gpr[31] = (0x08A8CBC4u);
    // nop
    goto L_08A8DAA0;
L_08A8CBC4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1133)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A8D580;
      }
      goto L_08A8CBD8;
    }
L_08A8CBD8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[21] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(232)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D580;
      }
      goto L_08A8CC0C;
    }
L_08A8CC0C:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A8CC7C;
      }
      goto L_08A8CC18;
    }
L_08A8CC18:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A8CF14;
      }
      goto L_08A8CC20;
    }
L_08A8CC20:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8D2EC;
      }
      goto L_08A8CC28;
    }
L_08A8CC28:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A8D504;
      }
      goto L_08A8CC30;
    }
L_08A8CC30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (0u | 62u);
      if (branch_taken) {
          goto L_08A8CC54;
      }
      goto L_08A8CC44;
    }
L_08A8CC44:
    ctx.gpr[31] = (0x08A8CC4Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 281u, 0x0894531Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CC4Cu) goto L_08A8CC4C;
    return;
L_08A8CC4C:
    ctx.gpr[31] = (0x08A8CC54u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 423u, 0x089D6EDCu>(ctx, &aot_mem) && ctx.pc == 0x08A8CC54u) goto L_08A8CC54;
    return;
L_08A8CC54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A8CC74;
      }
      goto L_08A8CC64;
    }
L_08A8CC64:
    ctx.gpr[31] = (0x08A8CC6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 281u, 0x0894531Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CC6Cu) goto L_08A8CC6C;
    return;
L_08A8CC6C:
    ctx.gpr[31] = (0x08A8CC74u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 438u, 0x089D6FD8u>(ctx, &aot_mem) && ctx.pc == 0x08A8CC74u) goto L_08A8CC74;
    return;
L_08A8CC74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D580;
      }
      goto L_08A8CC7C;
    }
L_08A8CC7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(236)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8132)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[17] < static_cast<std::uint32_t>(4096) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] < static_cast<std::uint32_t>(4608) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8CCE4;
      }
      goto L_08A8CCA8;
    }
L_08A8CCA8:
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CCE4;
      }
      goto L_08A8CCB4;
    }
L_08A8CCB4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 200u);
    ctx.gpr[6] = (0u | 200u);
    ctx.gpr[31] = (0x08A8CCD0u);
    ctx.gpr[7] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 390u, 0x088EE848u>(ctx, &aot_mem) && ctx.pc == 0x08A8CCD0u) goto L_08A8CCD0;
    return;
L_08A8CCD0:
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A8CCE4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 401u, 0x088EE920u>(ctx, &aot_mem) && ctx.pc == 0x08A8CCE4u) goto L_08A8CCE4;
    return;
L_08A8CCE4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(4097) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8CEA4;
      }
      goto L_08A8CCEC;
    }
L_08A8CCEC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CEA4;
      }
      goto L_08A8CCF4;
    }
L_08A8CCF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(362)));
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12960));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A8CD10;
      }
      goto L_08A8CD08;
    }
L_08A8CD08:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(362), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A8CD34;
      }
      goto L_08A8CD10;
    }
L_08A8CD10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-100));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08A8CD24;
    }
    goto L_08A8CD24;
L_08A8CD24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8CD34u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 693u, 0x0899F8F8u>(ctx, &aot_mem) && ctx.pc == 0x08A8CD34u) goto L_08A8CD34;
    return;
L_08A8CD34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CDC0;
      }
      goto L_08A8CD44;
    }
L_08A8CD44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CDC0;
      }
      goto L_08A8CD54;
    }
L_08A8CD54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A8CDB4;
      }
      goto L_08A8CD68;
    }
L_08A8CD68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(504), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8CDC0;
      }
      goto L_08A8CD94;
    }
L_08A8CD94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A8CDC0;
      }
      goto L_08A8CDB4;
    }
L_08A8CDB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8CDC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 668u, 0x0889F3FCu>(ctx, &aot_mem) && ctx.pc == 0x08A8CDC0u) goto L_08A8CDC0;
    return;
L_08A8CDC0:
    ctx.gpr[31] = (0x08A8CDC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 509u, 0x08A9247Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CDC8u) goto L_08A8CDC8;
    return;
L_08A8CDC8:
    ctx.gpr[31] = (0x08A8CDD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 271u, 0x0887990Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CDD0u) goto L_08A8CDD0;
    return;
L_08A8CDD0:
    ctx.gpr[31] = (0x08A8CDD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 215u, 0x089ED574u>(ctx, &aot_mem) && ctx.pc == 0x08A8CDD8u) goto L_08A8CDD8;
    return;
L_08A8CDD8:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A8CDE8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 299u, 0x089D62A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8CDE8u) goto L_08A8CDE8;
    return;
L_08A8CDE8:
    ctx.gpr[4] = (17786u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A8CDFCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 163u, 0x088C8D04u>(ctx, &aot_mem) && ctx.pc == 0x08A8CDFCu) goto L_08A8CDFC;
    return;
L_08A8CDFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A8CE14u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 188u, 0x08A24F44u>(ctx, &aot_mem) && ctx.pc == 0x08A8CE14u) goto L_08A8CE14;
    return;
L_08A8CE14:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6222), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6221), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A8CE2Cu);
    ctx.gpr[4] = (0u | 720u);
    goto L_08A8C548;
L_08A8CE2C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7083), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17460), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A8CE4Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 129u, 0x08A88900u>(ctx, &aot_mem) && ctx.pc == 0x08A8CE4Cu) goto L_08A8CE4C;
    return;
L_08A8CE4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A8CE64u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A8D5A8;
L_08A8CE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8CE70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    goto L_08A8C504;
L_08A8CE70:
    ctx.gpr[31] = (0x08A8CE78u);
    // nop
    goto L_08A8CA04;
L_08A8CE78:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A8CE88u);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(7128));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 376u, 0x088EA098u>(ctx, &aot_mem) && ctx.pc == 0x08A8CE88u) goto L_08A8CE88;
    return;
L_08A8CE88:
    ctx.gpr[31] = (0x08A8CE90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 655u, 0x0883B6C0u>(ctx, &aot_mem) && ctx.pc == 0x08A8CE90u) goto L_08A8CE90;
    return;
L_08A8CE90:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-17408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6131), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A8CEA4;
L_08A8CEA4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CF0C;
      }
      goto L_08A8CEAC;
    }
L_08A8CEAC:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(232), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A8CEB8u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-8108)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A8CEB8u) goto L_08A8CEB8;
    return;
L_08A8CEB8:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(0u));
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-6224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CF04;
      }
      goto L_08A8CECC;
    }
L_08A8CECC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 200u);
    ctx.gpr[6] = (0u | 200u);
    ctx.gpr[31] = (0x08A8CEE8u);
    ctx.gpr[7] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 390u, 0x088EE848u>(ctx, &aot_mem) && ctx.pc == 0x08A8CEE8u) goto L_08A8CEE8;
    return;
L_08A8CEE8:
    ctx.gpr[6] = (16448u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A8CEFCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 401u, 0x088EE920u>(ctx, &aot_mem) && ctx.pc == 0x08A8CEFCu) goto L_08A8CEFC;
    return;
L_08A8CEFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CF0C;
      }
      goto L_08A8CF04;
    }
L_08A8CF04:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-6224), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A8CF0C;
L_08A8CF0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D580;
      }
      goto L_08A8CF14;
    }
L_08A8CF14:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8132)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[17] < static_cast<std::uint32_t>(4096) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[17] < static_cast<std::uint32_t>(4608) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8CF7C;
      }
      goto L_08A8CF40;
    }
L_08A8CF40:
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CF7C;
      }
      goto L_08A8CF4C;
    }
L_08A8CF4C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A8CF68u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 390u, 0x088EE848u>(ctx, &aot_mem) && ctx.pc == 0x08A8CF68u) goto L_08A8CF68;
    return;
L_08A8CF68:
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A8CF7Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 401u, 0x088EE920u>(ctx, &aot_mem) && ctx.pc == 0x08A8CF7Cu) goto L_08A8CF7C;
    return;
L_08A8CF7C:
    ctx.gpr[31] = (0x08A8CF84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 33u, 0x08958280u>(ctx, &aot_mem) && ctx.pc == 0x08A8CF84u) goto L_08A8CF84;
    return;
L_08A8CF84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D044;
      }
      goto L_08A8CF8C;
    }
L_08A8CF8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(364)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D044;
      }
      goto L_08A8CF98;
    }
L_08A8CF98:
    ctx.gpr[31] = (0x08A8CFA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A8CFA0u) goto L_08A8CFA0;
    return;
L_08A8CFA0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24172)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24168)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A8CFB8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08A8CFB8u) goto L_08A8CFB8;
    return;
L_08A8CFB8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D03C;
      }
      goto L_08A8CFD4;
    }
L_08A8CFD4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(366)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(364), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_08A8D004;
      }
      goto L_08A8CFEC;
    }
L_08A8CFEC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(366)));
    ctx.gpr[31] = (0x08A8CFFCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21200));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CFFCu) goto L_08A8CFFC;
    return;
L_08A8CFFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D014;
      }
      goto L_08A8D004;
    }
L_08A8D004:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(366)));
    ctx.gpr[31] = (0x08A8D014u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21188));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D014u) goto L_08A8D014;
    return;
L_08A8D014:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(366)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(366), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(366)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 29 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D044;
      }
      goto L_08A8D030;
    }
L_08A8D030:
    ctx.gpr[4] = (0u | 20u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(366), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A8D044;
      }
      goto L_08A8D03C;
    }
L_08A8D03C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(364), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A8D044;
L_08A8D044:
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(4001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D068;
      }
      goto L_08A8D050;
    }
L_08A8D050:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(364)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8D068;
      }
      goto L_08A8D060;
    }
L_08A8D060:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(364), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A8D068;
L_08A8D068:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(4097) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8D27C;
      }
      goto L_08A8D070;
    }
L_08A8D070:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D27C;
      }
      goto L_08A8D078;
    }
L_08A8D078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A8D0C0;
      }
      goto L_08A8D098;
    }
L_08A8D098:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8D0C8;
      }
      goto L_08A8D0A0;
    }
L_08A8D0A0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A8D0D0;
      }
      goto L_08A8D0A8;
    }
L_08A8D0A8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A8D0D8;
      }
      goto L_08A8D0B0;
    }
L_08A8D0B0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8D0E0;
      }
      goto L_08A8D0B8;
    }
L_08A8D0B8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A8D0E8;
      }
      goto L_08A8D0C0;
    }
L_08A8D0C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 100u);
      if (branch_taken) {
          goto L_08A8D0EC;
      }
      goto L_08A8D0C8;
    }
L_08A8D0C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 200u);
      if (branch_taken) {
          goto L_08A8D0EC;
      }
      goto L_08A8D0D0;
    }
L_08A8D0D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 400u);
      if (branch_taken) {
          goto L_08A8D0EC;
      }
      goto L_08A8D0D8;
    }
L_08A8D0D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 600u);
      if (branch_taken) {
          goto L_08A8D0EC;
      }
      goto L_08A8D0E0;
    }
L_08A8D0E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 900u);
      if (branch_taken) {
          goto L_08A8D0EC;
      }
      goto L_08A8D0E8;
    }
L_08A8D0E8:
    ctx.gpr[4] = (0u | 1500u);
    goto L_08A8D0EC;
L_08A8D0EC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(361)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D100;
      }
      goto L_08A8D0F8;
    }
L_08A8D0F8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(361), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A8D124;
      }
      goto L_08A8D100;
    }
L_08A8D100:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08A8D114;
    }
    goto L_08A8D114;
L_08A8D114:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8D124u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 693u, 0x0899F8F8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D124u) goto L_08A8D124;
    return;
L_08A8D124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D1B0;
      }
      goto L_08A8D134;
    }
L_08A8D134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D1B0;
      }
      goto L_08A8D144;
    }
L_08A8D144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A8D1A4;
      }
      goto L_08A8D158;
    }
L_08A8D158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(504), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8D1B0;
      }
      goto L_08A8D184;
    }
L_08A8D184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A8D1B0;
      }
      goto L_08A8D1A4;
    }
L_08A8D1A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8D1B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 668u, 0x0889F3FCu>(ctx, &aot_mem) && ctx.pc == 0x08A8D1B0u) goto L_08A8D1B0;
    return;
L_08A8D1B0:
    ctx.gpr[31] = (0x08A8D1B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 509u, 0x08A9247Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D1B8u) goto L_08A8D1B8;
    return;
L_08A8D1B8:
    ctx.gpr[31] = (0x08A8D1C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 271u, 0x0887990Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D1C0u) goto L_08A8D1C0;
    return;
L_08A8D1C0:
    ctx.gpr[31] = (0x08A8D1C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 215u, 0x089ED574u>(ctx, &aot_mem) && ctx.pc == 0x08A8D1C8u) goto L_08A8D1C8;
    return;
L_08A8D1C8:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A8D1D8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 299u, 0x089D62A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D1D8u) goto L_08A8D1D8;
    return;
L_08A8D1D8:
    ctx.gpr[4] = (17786u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A8D1ECu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 163u, 0x088C8D04u>(ctx, &aot_mem) && ctx.pc == 0x08A8D1ECu) goto L_08A8D1EC;
    return;
L_08A8D1EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A8D204u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 223u, 0x08A2531Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D204u) goto L_08A8D204;
    return;
L_08A8D204:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6222), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6221), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A8D21Cu);
    ctx.gpr[4] = (0u | 720u);
    goto L_08A8C548;
L_08A8D21C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A8D234u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A8D5A8;
L_08A8D234:
    ctx.gpr[31] = (0x08A8D23Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 693u, 0x0899F8F8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D23Cu) goto L_08A8D23C;
    return;
L_08A8D23C:
    ctx.gpr[31] = (0x08A8D244u);
    // nop
    goto L_08A8CA04;
L_08A8D244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8D250u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    goto L_08A8C504;
L_08A8D250:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A8D260u);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(7128));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 376u, 0x088EA098u>(ctx, &aot_mem) && ctx.pc == 0x08A8D260u) goto L_08A8D260;
    return;
L_08A8D260:
    ctx.gpr[31] = (0x08A8D268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 655u, 0x0883B6C0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D268u) goto L_08A8D268;
    return;
L_08A8D268:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-17408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6131), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A8D27C;
L_08A8D27C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D2E4;
      }
      goto L_08A8D284;
    }
L_08A8D284:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(232), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A8D290u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-8108)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D290u) goto L_08A8D290;
    return;
L_08A8D290:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(0u));
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-6223)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D2DC;
      }
      goto L_08A8D2A4;
    }
L_08A8D2A4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A8D2C0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 390u, 0x088EE848u>(ctx, &aot_mem) && ctx.pc == 0x08A8D2C0u) goto L_08A8D2C0;
    return;
L_08A8D2C0:
    ctx.gpr[6] = (16448u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A8D2D4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 401u, 0x088EE920u>(ctx, &aot_mem) && ctx.pc == 0x08A8D2D4u) goto L_08A8D2D4;
    return;
L_08A8D2D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D2E4;
      }
      goto L_08A8D2DC;
    }
L_08A8D2DC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-6223), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A8D2E4;
L_08A8D2E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D580;
      }
      goto L_08A8D2EC;
    }
L_08A8D2EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(236)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8132)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[19] < static_cast<std::uint32_t>(4096) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] < static_cast<std::uint32_t>(4608) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8D354;
      }
      goto L_08A8D318;
    }
L_08A8D318:
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D354;
      }
      goto L_08A8D324;
    }
L_08A8D324:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A8D340u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 390u, 0x088EE848u>(ctx, &aot_mem) && ctx.pc == 0x08A8D340u) goto L_08A8D340;
    return;
L_08A8D340:
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A8D354u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 401u, 0x088EE920u>(ctx, &aot_mem) && ctx.pc == 0x08A8D354u) goto L_08A8D354;
    return;
L_08A8D354:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(4097) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8D4B4;
      }
      goto L_08A8D35C;
    }
L_08A8D35C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D4B4;
      }
      goto L_08A8D364;
    }
L_08A8D364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12960));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A8D3F8;
      }
      goto L_08A8D37C;
    }
L_08A8D37C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D3F8;
      }
      goto L_08A8D38C;
    }
L_08A8D38C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A8D3EC;
      }
      goto L_08A8D3A0;
    }
L_08A8D3A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(504), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8D3F8;
      }
      goto L_08A8D3CC;
    }
L_08A8D3CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A8D3F8;
      }
      goto L_08A8D3EC;
    }
L_08A8D3EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8D3F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 668u, 0x0889F3FCu>(ctx, &aot_mem) && ctx.pc == 0x08A8D3F8u) goto L_08A8D3F8;
    return;
L_08A8D3F8:
    ctx.gpr[31] = (0x08A8D400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 509u, 0x08A9247Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D400u) goto L_08A8D400;
    return;
L_08A8D400:
    ctx.gpr[31] = (0x08A8D408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 271u, 0x0887990Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D408u) goto L_08A8D408;
    return;
L_08A8D408:
    ctx.gpr[31] = (0x08A8D410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 215u, 0x089ED574u>(ctx, &aot_mem) && ctx.pc == 0x08A8D410u) goto L_08A8D410;
    return;
L_08A8D410:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A8D420u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 299u, 0x089D62A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D420u) goto L_08A8D420;
    return;
L_08A8D420:
    ctx.gpr[4] = (17786u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A8D434u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 163u, 0x088C8D04u>(ctx, &aot_mem) && ctx.pc == 0x08A8D434u) goto L_08A8D434;
    return;
L_08A8D434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A8D44Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 223u, 0x08A2531Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D44Cu) goto L_08A8D44C;
    return;
L_08A8D44C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6222), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6221), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A8D474u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A8D5A8;
L_08A8D474:
    ctx.gpr[31] = (0x08A8D47Cu);
    // nop
    goto L_08A8C9F8;
L_08A8D47C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8D488u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    goto L_08A8C504;
L_08A8D488:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A8D498u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(7128));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 376u, 0x088EA098u>(ctx, &aot_mem) && ctx.pc == 0x08A8D498u) goto L_08A8D498;
    return;
L_08A8D498:
    ctx.gpr[31] = (0x08A8D4A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 655u, 0x0883B6C0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D4A0u) goto L_08A8D4A0;
    return;
L_08A8D4A0:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-17408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6131), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A8D4B4;
L_08A8D4B4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D4FC;
      }
      goto L_08A8D4BC;
    }
L_08A8D4BC:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(232), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A8D4C8u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-8108)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D4C8u) goto L_08A8D4C8;
    return;
L_08A8D4C8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A8D4E8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 390u, 0x088EE848u>(ctx, &aot_mem) && ctx.pc == 0x08A8D4E8u) goto L_08A8D4E8;
    return;
L_08A8D4E8:
    ctx.gpr[6] = (16448u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A8D4FCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 401u, 0x088EE920u>(ctx, &aot_mem) && ctx.pc == 0x08A8D4FCu) goto L_08A8D4FC;
    return;
L_08A8D4FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D580;
      }
      goto L_08A8D504;
    }
L_08A8D504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D580;
      }
      goto L_08A8D50C;
    }
L_08A8D50C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D580;
      }
      goto L_08A8D53C;
    }
L_08A8D53C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (0u | 62u);
      if (branch_taken) {
          goto L_08A8D560;
      }
      goto L_08A8D550;
    }
L_08A8D550:
    ctx.gpr[31] = (0x08A8D558u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 281u, 0x0894531Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D558u) goto L_08A8D558;
    return;
L_08A8D558:
    ctx.gpr[31] = (0x08A8D560u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 423u, 0x089D6EDCu>(ctx, &aot_mem) && ctx.pc == 0x08A8D560u) goto L_08A8D560;
    return;
L_08A8D560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A8D580;
      }
      goto L_08A8D570;
    }
L_08A8D570:
    ctx.gpr[31] = (0x08A8D578u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 281u, 0x0894531Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D578u) goto L_08A8D578;
    return;
L_08A8D578:
    ctx.gpr[31] = (0x08A8D580u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 438u, 0x089D6FD8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D580u) goto L_08A8D580;
    return;
L_08A8D580:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8D5A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8D5E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21180));
    goto L_08A8C4B0;
L_08A8D5E4:
    ctx.gpr[31] = (0x08A8D5ECu);
    // nop
    goto L_08A8C6E0;
L_08A8D5EC:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (8u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-65));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[17] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2992), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2993), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A8D63Cu);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(7128));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 375u, 0x088EA07Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D63Cu) goto L_08A8D63C;
    return;
L_08A8D63C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2994), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A8D648u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 281u, 0x0894531Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D648u) goto L_08A8D648;
    return;
L_08A8D648:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2936), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A8D660;
      }
      goto L_08A8D658;
    }
L_08A8D658:
    ctx.gpr[31] = (0x08A8D660u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 545u, 0x0884E1D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D660u) goto L_08A8D660;
    return;
L_08A8D660:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), 0u);
    ctx.gpr[31] = (0x08A8D674u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 240u, 0x08ACCF64u>(ctx, &aot_mem) && ctx.pc == 0x08A8D674u) goto L_08A8D674;
    return;
L_08A8D674:
    ctx.gpr[31] = (0x08A8D67Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 554u, 0x089A258Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D67Cu) goto L_08A8D67C;
    return;
L_08A8D67C:
    ctx.gpr[31] = (0x08A8D684u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 266u, 0x0894526Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D684u) goto L_08A8D684;
    return;
L_08A8D684:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A8D694u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 267u, 0x089D9220u>(ctx, &aot_mem) && ctx.pc == 0x08A8D694u) goto L_08A8D694;
    return;
L_08A8D694:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(359)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8D6BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 207u, 0x08944E30u>(ctx, &aot_mem) && ctx.pc == 0x08A8D6BCu) goto L_08A8D6BC;
    return;
L_08A8D6BC:
    ctx.gpr[31] = (0x08A8D6C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 505u, 0x08946430u>(ctx, &aot_mem) && ctx.pc == 0x08A8D6C4u) goto L_08A8D6C4;
    return;
L_08A8D6C4:
    ctx.gpr[31] = (0x08A8D6CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 215u, 0x089ED574u>(ctx, &aot_mem) && ctx.pc == 0x08A8D6CCu) goto L_08A8D6CC;
    return;
L_08A8D6CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A8D714u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8D714u) goto L_08A8D714;
    return;
L_08A8D714:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A8D75Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D75Cu) goto L_08A8D75C;
    return;
L_08A8D75C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A8D768u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 509u, 0x08882624u>(ctx, &aot_mem) && ctx.pc == 0x08A8D768u) goto L_08A8D768;
    return;
L_08A8D768:
    ctx.gpr[4] = (17786u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A8D77Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 163u, 0x088C8D04u>(ctx, &aot_mem) && ctx.pc == 0x08A8D77Cu) goto L_08A8D77C;
    return;
L_08A8D77C:
    ctx.gpr[31] = (0x08A8D784u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 887u, 0x089A3C28u>(ctx, &aot_mem) && ctx.pc == 0x08A8D784u) goto L_08A8D784;
    return;
L_08A8D784:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29520), 0u);
    ctx.gpr[31] = (0x08A8D794u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 913u, 0x089CBE08u>(ctx, &aot_mem) && ctx.pc == 0x08A8D794u) goto L_08A8D794;
    return;
L_08A8D794:
    ctx.gpr[31] = (0x08A8D79Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 498u, 0x088EF15Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D79Cu) goto L_08A8D79C;
    return;
L_08A8D79C:
    ctx.gpr[31] = (0x08A8D7A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 373u, 0x088EE65Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D7A4u) goto L_08A8D7A4;
    return;
L_08A8D7A4:
    ctx.gpr[31] = (0x08A8D7ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 655u, 0x0883B6C0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D7ACu) goto L_08A8D7AC;
    return;
L_08A8D7AC:
    ctx.gpr[31] = (0x08A8D7B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 65u, 0x0893C4DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8D7B4u) goto L_08A8D7B4;
    return;
L_08A8D7B4:
    ctx.gpr[31] = (0x08A8D7BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 187u, 0x08844FA4u>(ctx, &aot_mem) && ctx.pc == 0x08A8D7BCu) goto L_08A8D7BC;
    return;
L_08A8D7BC:
    ctx.gpr[31] = (0x08A8D7C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D7C4u) goto L_08A8D7C4;
    return;
L_08A8D7C4:
    ctx.gpr[31] = (0x08A8D7CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D7CCu) goto L_08A8D7CC;
    return;
L_08A8D7CC:
    ctx.gpr[31] = (0x08A8D7D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 638u, 0x08AB3900u>(ctx, &aot_mem) && ctx.pc == 0x08A8D7D4u) goto L_08A8D7D4;
    return;
L_08A8D7D4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21128));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(24156));
    ctx.gpr[31] = (0x08A8D7ECu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A8C4B0;
L_08A8D7EC:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8D820u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 257u, 0x089A5228u>(ctx, &aot_mem) && ctx.pc == 0x08A8D820u) goto L_08A8D820;
    return;
L_08A8D820:
    ctx.gpr[31] = (0x08A8D828u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 611u, 0x089C6978u>(ctx, &aot_mem) && ctx.pc == 0x08A8D828u) goto L_08A8D828;
    return;
L_08A8D828:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[31] = (0x08A8D84Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 267u, 0x089A52C4u>(ctx, &aot_mem) && ctx.pc == 0x08A8D84Cu) goto L_08A8D84C;
    return;
L_08A8D84C:
    ctx.gpr[31] = (0x08A8D854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 719u, 0x0891B3ACu>(ctx, &aot_mem) && ctx.pc == 0x08A8D854u) goto L_08A8D854;
    return;
L_08A8D854:
    ctx.gpr[31] = (0x08A8D85Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 438u, 0x08986B60u>(ctx, &aot_mem) && ctx.pc == 0x08A8D85Cu) goto L_08A8D85C;
    return;
L_08A8D85C:
    ctx.gpr[31] = (0x08A8D864u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 469u, 0x088B6B00u>(ctx, &aot_mem) && ctx.pc == 0x08A8D864u) goto L_08A8D864;
    return;
L_08A8D864:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A8D870u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3080));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 223u, 0x088BCD50u>(ctx, &aot_mem) && ctx.pc == 0x08A8D870u) goto L_08A8D870;
    return;
L_08A8D870:
    ctx.gpr[31] = (0x08A8D878u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 108u, 0x089CC768u>(ctx, &aot_mem) && ctx.pc == 0x08A8D878u) goto L_08A8D878;
    return;
L_08A8D878:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8D8A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A8D8DC;
      }
      goto L_08A8D8D4;
    }
L_08A8D8D4:
    ctx.gpr[31] = (0x08A8D8DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 707u, 0x0883B98Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D8DCu) goto L_08A8D8DC;
    return;
L_08A8D8DC:
    ctx.gpr[31] = (0x08A8D8E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 707u, 0x0883B98Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D8E4u) goto L_08A8D8E4;
    return;
L_08A8D8E4:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-65));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8D920u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 281u, 0x0894531Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D920u) goto L_08A8D920;
    return;
L_08A8D920:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2936), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A8D93C;
      }
      goto L_08A8D930;
    }
L_08A8D930:
    ctx.gpr[31] = (0x08A8D938u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 545u, 0x0884E1D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D938u) goto L_08A8D938;
    return;
L_08A8D938:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1756), 0u);
    goto L_08A8D93C;
L_08A8D93C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8D964u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 240u, 0x08ACCF64u>(ctx, &aot_mem) && ctx.pc == 0x08A8D964u) goto L_08A8D964;
    return;
L_08A8D964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8D978u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 554u, 0x089A258Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D978u) goto L_08A8D978;
    return;
L_08A8D978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65504u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8D994u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 266u, 0x0894526Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D994u) goto L_08A8D994;
    return;
L_08A8D994:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A8D9A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 267u, 0x089D9220u>(ctx, &aot_mem) && ctx.pc == 0x08A8D9A0u) goto L_08A8D9A0;
    return;
L_08A8D9A0:
    ctx.gpr[31] = (0x08A8D9A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 693u, 0x0899F8F8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D9A8u) goto L_08A8D9A8;
    return;
L_08A8D9A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8D9C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 207u, 0x08944E30u>(ctx, &aot_mem) && ctx.pc == 0x08A8D9C0u) goto L_08A8D9C0;
    return;
L_08A8D9C0:
    ctx.gpr[31] = (0x08A8D9C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 505u, 0x08946430u>(ctx, &aot_mem) && ctx.pc == 0x08A8D9C8u) goto L_08A8D9C8;
    return;
L_08A8D9C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A8DA10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8DA10u) goto L_08A8DA10;
    return;
L_08A8DA10:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A8DA58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8DA58u) goto L_08A8DA58;
    return;
L_08A8DA58:
    ctx.gpr[31] = (0x08A8DA60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 887u, 0x089A3C28u>(ctx, &aot_mem) && ctx.pc == 0x08A8DA60u) goto L_08A8DA60;
    return;
L_08A8DA60:
    ctx.gpr[31] = (0x08A8DA68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8DA68u) goto L_08A8DA68;
    return;
L_08A8DA68:
    ctx.gpr[31] = (0x08A8DA70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DA70u) goto L_08A8DA70;
    return;
L_08A8DA70:
    ctx.gpr[31] = (0x08A8DA78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 438u, 0x08986B60u>(ctx, &aot_mem) && ctx.pc == 0x08A8DA78u) goto L_08A8DA78;
    return;
L_08A8DA78:
    ctx.gpr[31] = (0x08A8DA80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 271u, 0x0887990Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DA80u) goto L_08A8DA80;
    return;
L_08A8DA80:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8DAA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-6155)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E1C4;
      }
      goto L_08A8DAD0;
    }
L_08A8DAD0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-21088)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8DAE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E1C4;
      }
      goto L_08A8DAF0;
    }
L_08A8DAF0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DC40;
      }
      goto L_08A8DB10;
    }
L_08A8DB10:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A8DB1Cu);
    ctx.gpr[4] = (0u | 1760u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x08A8DB1Cu) goto L_08A8DB1C;
    return;
L_08A8DB1C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A8DB3C;
      }
      goto L_08A8DB28;
    }
L_08A8DB28:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 166u);
    ctx.gpr[31] = (0x08A8DB38u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x08A8DB38u) goto L_08A8DB38;
    return;
L_08A8DB38:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A8DB3C;
L_08A8DB3C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A8DC54;
      }
      goto L_08A8DB44;
    }
L_08A8DB44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(26032));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26032)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6152)));
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[31] = (0x08A8DB98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8DB98u) goto L_08A8DB98;
    return;
L_08A8DB98:
    ctx.gpr[31] = (0x08A8DBA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904)));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 154u, 0x08821154u>(ctx, &aot_mem) && ctx.pc == 0x08A8DBA0u) goto L_08A8DBA0;
    return;
L_08A8DBA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 48u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[5] = (0u | 11u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A8DBD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 756u, 0x0889F9C8u>(ctx, &aot_mem) && ctx.pc == 0x08A8DBD4u) goto L_08A8DBD4;
    return;
L_08A8DBD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[18] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-17456)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-17456), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8DC0Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 509u, 0x08882624u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC0Cu) goto L_08A8DC0C;
    return;
L_08A8DC0C:
    ctx.gpr[31] = (0x08A8DC14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DC14u) goto L_08A8DC14;
    return;
L_08A8DC14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A8DC24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 530u, 0x08AFE33Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DC24u) goto L_08A8DC24;
    return;
L_08A8DC24:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A8DC38u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 13u, 0x08968140u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC38u) goto L_08A8DC38;
    return;
L_08A8DC38:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-6155), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08A8DC54;
      }
      goto L_08A8DC40;
    }
L_08A8DC40:
    ctx.gpr[4] = (0u | 166u);
    ctx.gpr[31] = (0x08A8DC4Cu);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC4Cu) goto L_08A8DC4C;
    return;
L_08A8DC4C:
    ctx.gpr[31] = (0x08A8DC54u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC54u) goto L_08A8DC54;
    return;
L_08A8DC54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E1C4;
      }
      goto L_08A8DC5C;
    }
L_08A8DC5C:
    ctx.gpr[31] = (0x08A8DC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DC64u) goto L_08A8DC64;
    return;
L_08A8DC64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8DC8C;
      }
      goto L_08A8DC74;
    }
L_08A8DC74:
    ctx.gpr[31] = (0x08A8DC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DC7Cu) goto L_08A8DC7C;
    return;
L_08A8DC7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8DD48;
      }
      goto L_08A8DC8C;
    }
L_08A8DC8C:
    ctx.gpr[31] = (0x08A8DC94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DC94u) goto L_08A8DC94;
    return;
L_08A8DC94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(604)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7904)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8DD48;
      }
      goto L_08A8DCA8;
    }
L_08A8DCA8:
    ctx.gpr[31] = (0x08A8DCB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DCB0u) goto L_08A8DCB0;
    return;
L_08A8DCB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    ctx.gpr[31] = (0x08A8DCC8u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DCC8u) goto L_08A8DCC8;
    return;
L_08A8DCC8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A8DCD8u);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08A8DCD8u) goto L_08A8DCD8;
    return;
L_08A8DCD8:
    ctx.gpr[31] = (0x08A8DCE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DCE0u) goto L_08A8DCE0;
    return;
L_08A8DCE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8DD48;
      }
      goto L_08A8DCF0;
    }
L_08A8DCF0:
    ctx.gpr[31] = (0x08A8DCF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DCF8u) goto L_08A8DCF8;
    return;
L_08A8DCF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7904)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8DD48;
      }
      goto L_08A8DD08;
    }
L_08A8DD08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DD48;
      }
      goto L_08A8DD18;
    }
L_08A8DD18:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-6155), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A8DD28u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A8DD28u) goto L_08A8DD28;
    return;
L_08A8DD28:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    ctx.gpr[31] = (0x08A8DD38u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DD38u) goto L_08A8DD38;
    return;
L_08A8DD38:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A8DD48;
L_08A8DD48:
    ctx.gpr[31] = (0x08A8DD50u);
    // nop
    goto L_08A8C770;
L_08A8DD50:
    ctx.gpr[31] = (0x08A8DD58u);
    // nop
    goto L_08A8C8B4;
L_08A8DD58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E1C4;
      }
      goto L_08A8DD60;
    }
L_08A8DD60:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[31] = (0x08A8DD70u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DD70u) goto L_08A8DD70;
    return;
L_08A8DD70:
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904)));
        goto L_08A8DDA4;
    }
    goto L_08A8DD78;
L_08A8DD78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[31] = (0x08A8DD84u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DD84u) goto L_08A8DD84;
    return;
L_08A8DD84:
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904)));
        goto L_08A8DDA4;
    }
    goto L_08A8DD8C;
L_08A8DD8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[31] = (0x08A8DD98u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DD98u) goto L_08A8DD98;
    return;
L_08A8DD98:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8DEE8;
      }
      goto L_08A8DDA0;
    }
L_08A8DDA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904)));
    goto L_08A8DDA4;
L_08A8DDA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DEE8;
      }
      goto L_08A8DDB0;
    }
L_08A8DDB0:
    ctx.gpr[31] = (0x08A8DDB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DDB8u) goto L_08A8DDB8;
    return;
L_08A8DDB8:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904)));
        goto L_08A8DE08;
    }
    goto L_08A8DDC0;
L_08A8DDC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(616)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904)));
        goto L_08A8DE08;
    }
    goto L_08A8DDE0;
L_08A8DDE0:
    ctx.gpr[31] = (0x08A8DDE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DDE8u) goto L_08A8DDE8;
    return;
L_08A8DDE8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A8DDF8u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08A8DDF8u) goto L_08A8DDF8;
    return;
L_08A8DDF8:
    ctx.gpr[31] = (0x08A8DE00u);
    // nop
    goto L_08A8C770;
L_08A8DE00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DEF0;
      }
      goto L_08A8DE08;
    }
L_08A8DE08:
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2500));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(400), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A8DE40u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 390u, 0x088EE848u>(ctx, &aot_mem) && ctx.pc == 0x08A8DE40u) goto L_08A8DE40;
    return;
L_08A8DE40:
    ctx.gpr[6] = (16416u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A8DE54u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 401u, 0x088EE920u>(ctx, &aot_mem) && ctx.pc == 0x08A8DE54u) goto L_08A8DE54;
    return;
L_08A8DE54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-6155), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6144), ctx.gpr[4]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A8DEA8;
      }
      goto L_08A8DE7C;
    }
L_08A8DE7C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A8DE88u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A8DE88u) goto L_08A8DE88;
    return;
L_08A8DE88:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DEA0;
      }
      goto L_08A8DE94;
    }
L_08A8DE94:
    ctx.gpr[31] = (0x08A8DE9Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8DE9Cu) goto L_08A8DE9C;
    return;
L_08A8DE9C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A8DEA0;
L_08A8DEA0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A8DEA8;
L_08A8DEA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A8DEB4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21096));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A8DEB4u) goto L_08A8DEB4;
    return;
L_08A8DEB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 4500u);
    ctx.gpr[31] = (0x08A8DEC4u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 286u, 0x08879A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DEC4u) goto L_08A8DEC4;
    return;
L_08A8DEC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A8DED4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 530u, 0x08AFE33Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DED4u) goto L_08A8DED4;
    return;
L_08A8DED4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08A8DEE0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 22u, 0x089681E4u>(ctx, &aot_mem) && ctx.pc == 0x08A8DEE0u) goto L_08A8DEE0;
    return;
L_08A8DEE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DEF0;
      }
      goto L_08A8DEE8;
    }
L_08A8DEE8:
    ctx.gpr[31] = (0x08A8DEF0u);
    // nop
    goto L_08A8C770;
L_08A8DEF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E1C4;
      }
      goto L_08A8DEF8;
    }
L_08A8DEF8:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6144)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E03C;
      }
      goto L_08A8DF14;
    }
L_08A8DF14:
    ctx.gpr[31] = (0x08A8DF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 754u, 0x0891B6F8u>(ctx, &aot_mem) && ctx.pc == 0x08A8DF1Cu) goto L_08A8DF1C;
    return;
L_08A8DF1C:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(26048));
    ctx.gpr[31] = (0x08A8DF2Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 348u, 0x0898616Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DF2Cu) goto L_08A8DF2C;
    return;
L_08A8DF2C:
    ctx.gpr[31] = (0x08A8DF34u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 611u, 0x089C6978u>(ctx, &aot_mem) && ctx.pc == 0x08A8DF34u) goto L_08A8DF34;
    return;
L_08A8DF34:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[31] = (0x08A8DF44u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 509u, 0x08882624u>(ctx, &aot_mem) && ctx.pc == 0x08A8DF44u) goto L_08A8DF44;
    return;
L_08A8DF44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(104));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A8DF70u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8DF70u) goto L_08A8DF70;
    return;
L_08A8DF70:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6148)));
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (17204u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[31] = (0x08A8DF9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7904)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8DF9Cu) goto L_08A8DF9C;
    return;
L_08A8DF9C:
    ctx.gpr[31] = (0x08A8DFA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7904)));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 154u, 0x08821154u>(ctx, &aot_mem) && ctx.pc == 0x08A8DFA4u) goto L_08A8DFA4;
    return;
L_08A8DFA4:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(500));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-6144), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8DFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 281u, 0x088799FCu>(ctx, &aot_mem) && ctx.pc == 0x08A8DFF0u) goto L_08A8DFF0;
    return;
L_08A8DFF0:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x08A8DFFCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 485u, 0x08986EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A8DFFCu) goto L_08A8DFFC;
    return;
L_08A8DFFC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A8E018u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 390u, 0x088EE848u>(ctx, &aot_mem) && ctx.pc == 0x08A8E018u) goto L_08A8E018;
    return;
L_08A8E018:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8E02Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 401u, 0x088EE920u>(ctx, &aot_mem) && ctx.pc == 0x08A8E02Cu) goto L_08A8E02C;
    return;
L_08A8E02C:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-6155), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A8E03Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 756u, 0x0891B71Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E03Cu) goto L_08A8E03C;
    return;
L_08A8E03C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E1C4;
      }
      goto L_08A8E044;
    }
L_08A8E044:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6144)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A8E110;
      }
      goto L_08A8E060;
    }
L_08A8E060:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(188)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 0 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (0u | 0u);
        goto L_08A8E098;
    }
    goto L_08A8E098;
L_08A8E098:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[7] = (ctx.gpr[4] << 7u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A8E0BCu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E0BCu) goto L_08A8E0BC;
    return;
L_08A8E0BC:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A8E0D0u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08A8E0D0u) goto L_08A8E0D0;
    return;
L_08A8E0D0:
    ctx.gpr[31] = (0x08A8E0D8u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7904)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E0D8u) goto L_08A8E0D8;
    return;
L_08A8E0D8:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(604), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08A8E0E8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-6155), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E0E8u) goto L_08A8E0E8;
    return;
L_08A8E0E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[31] = (0x08A8E0FCu);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E0FCu) goto L_08A8E0FC;
    return;
L_08A8E0FC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A8E110;
L_08A8E110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E1C4;
      }
      goto L_08A8E118;
    }
L_08A8E118:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[31] = (0x08A8E128u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E128u) goto L_08A8E128;
    return;
L_08A8E128:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8E1C4;
      }
      goto L_08A8E130;
    }
L_08A8E130:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[31] = (0x08A8E13Cu);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E13Cu) goto L_08A8E13C;
    return;
L_08A8E13C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8E1C4;
      }
      goto L_08A8E144;
    }
L_08A8E144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[31] = (0x08A8E150u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E150u) goto L_08A8E150;
    return;
L_08A8E150:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8E1C4;
      }
      goto L_08A8E158;
    }
L_08A8E158:
    ctx.gpr[31] = (0x08A8E160u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A8E160u) goto L_08A8E160;
    return;
L_08A8E160:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[5] = (0u | 18u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A8E190u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7904)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 219u, 0x089ED5CCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E190u) goto L_08A8E190;
    return;
L_08A8E190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17456)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-17456), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-7904), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-6155), static_cast<std::uint8_t>(0u));
    goto L_08A8E1C4;
L_08A8E1C4:
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
L_08A8E1E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24100)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24096)));
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[3] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24128)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[15] = (2229u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24124)));
    ctx.gpr[9] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(24132), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[25] = (2229u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24148)));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(24140), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    ctx.gpr[13] = (2229u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(24112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(24108), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (16281u << 16u);
    ctx.gpr[8] = (16268u << 16u);
    ctx.gpr[14] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] | 39322u);
    ctx.gpr[7] = (ctx.gpr[8] | 52429u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(24116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[11] = (15744u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[24] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(24136), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[2] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24152), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E2D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6128), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6124), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8E2FCu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8116), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 230u, 0x0898594Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E2FCu) goto L_08A8E2FC;
    return;
L_08A8E2FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E308:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8E324u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 295u, 0x08985DF4u>(ctx, &aot_mem) && ctx.pc == 0x08A8E324u) goto L_08A8E324;
    return;
L_08A8E324:
    ctx.gpr[31] = (0x08A8E32Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08A8E32Cu) goto L_08A8E32C;
    return;
L_08A8E32C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E338:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24180)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24176)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24204)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[3] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24212));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(24184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(808), 0u);
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24192), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(24188), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(24208), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E3D8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8420));
    ctx.gpr[6] = (15395u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 55050u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (15523u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (15948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31072));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E428:
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
L_08A8E454:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A8E7D8;
      }
      goto L_08A8E498;
    }
L_08A8E498:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(305)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E7D8;
      }
      goto L_08A8E4A8;
    }
L_08A8E4A8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(27012), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A8E4BCu);
    ctx.gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 525u, 0x08A964D4u>(ctx, &aot_mem) && ctx.pc == 0x08A8E4BCu) goto L_08A8E4BC;
    return;
L_08A8E4BC:
    ctx.gpr[31] = (0x08A8E4C4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A8E4C4u) goto L_08A8E4C4;
    return;
L_08A8E4C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(34))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8E4E4;
      }
      goto L_08A8E4D4;
    }
L_08A8E4D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(84))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A8E4E8;
      }
      goto L_08A8E4E0;
    }
L_08A8E4E0:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A8E4E4;
L_08A8E4E4:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08A8E4E8;
L_08A8E4E8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E540;
      }
      goto L_08A8E4F0;
    }
L_08A8E4F0:
    ctx.gpr[31] = (0x08A8E4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 216u, 0x08A4CE28u>(ctx, &aot_mem) && ctx.pc == 0x08A8E4F8u) goto L_08A8E4F8;
    return;
L_08A8E4F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[31] = (0x08A8E504u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A8E504u) goto L_08A8E504;
    return;
L_08A8E504:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25092)));
    ctx.gpr[20] = (2232u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-18744));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A8E550;
      }
      goto L_08A8E52C;
    }
L_08A8E52C:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25092), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A8E560;
      }
      goto L_08A8E540;
    }
L_08A8E540:
    ctx.gpr[31] = (0x08A8E548u);
    // nop
    goto L_08A8EA88;
L_08A8E548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E7D8;
      }
      goto L_08A8E550;
    }
L_08A8E550:
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25092), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A8E560;
L_08A8E560:
    ctx.gpr[31] = (0x08A8E568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A8E568u) goto L_08A8E568;
    return;
L_08A8E568:
    ctx.gpr[31] = (0x08A8E570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x08A8E570u) goto L_08A8E570;
    return;
L_08A8E570:
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8E580u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E580u) goto L_08A8E580;
    return;
L_08A8E580:
    ctx.gpr[31] = (0x08A8E588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E588u) goto L_08A8E588;
    return;
L_08A8E588:
    ctx.gpr[31] = (0x08A8E590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x08A8E590u) goto L_08A8E590;
    return;
L_08A8E590:
    ctx.gpr[31] = (0x08A8E598u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E598u) goto L_08A8E598;
    return;
L_08A8E598:
    ctx.gpr[31] = (0x08A8E5A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x08A8E5A0u) goto L_08A8E5A0;
    return;
L_08A8E5A0:
    ctx.gpr[31] = (0x08A8E5A8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08A8E5A8u) goto L_08A8E5A8;
    return;
L_08A8E5A8:
    ctx.gpr[31] = (0x08A8E5B0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E5B0u) goto L_08A8E5B0;
    return;
L_08A8E5B0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A8E5C8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E5C8u) goto L_08A8E5C8;
    return;
L_08A8E5C8:
    ctx.gpr[31] = (0x08A8E5D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E5D0u) goto L_08A8E5D0;
    return;
L_08A8E5D0:
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (2229u << 16u);
    ctx.gpr[4] = (16179u << 16u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(25096), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.gpr[30] = (2227u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-21056));
    goto L_08A8E604;
L_08A8E604:
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
        goto L_08A8E638;
    }
    goto L_08A8E60C;
L_08A8E60C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A8E618u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A8E618u) goto L_08A8E618;
    return;
L_08A8E618:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E630;
      }
      goto L_08A8E624;
    }
L_08A8E624:
    ctx.gpr[31] = (0x08A8E62Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E62Cu) goto L_08A8E62C;
    return;
L_08A8E62C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A8E630;
L_08A8E630:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    goto L_08A8E638;
L_08A8E638:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E764;
      }
      goto L_08A8E644;
    }
L_08A8E644:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(25096)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A8E660u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E660u) goto L_08A8E660;
    return;
L_08A8E660:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A8E698;
      }
      goto L_08A8E66C;
    }
L_08A8E66C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A8E678u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A8E678u) goto L_08A8E678;
    return;
L_08A8E678:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E690;
      }
      goto L_08A8E684;
    }
L_08A8E684:
    ctx.gpr[31] = (0x08A8E68Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E68Cu) goto L_08A8E68C;
    return;
L_08A8E68C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A8E690;
L_08A8E690:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A8E698;
L_08A8E698:
    ctx.gpr[31] = (0x08A8E6A0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 436u, 0x08913CE8u>(ctx, &aot_mem) && ctx.pc == 0x08A8E6A0u) goto L_08A8E6A0;
    return;
L_08A8E6A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E6CC;
      }
      goto L_08A8E6A8;
    }
L_08A8E6A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(25096)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(25096), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A8E6CCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E6CCu) goto L_08A8E6CC;
    return;
L_08A8E6CC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A8E704;
      }
      goto L_08A8E6D8;
    }
L_08A8E6D8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A8E6E4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A8E6E4u) goto L_08A8E6E4;
    return;
L_08A8E6E4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E6FC;
      }
      goto L_08A8E6F0;
    }
L_08A8E6F0:
    ctx.gpr[31] = (0x08A8E6F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E6F8u) goto L_08A8E6F8;
    return;
L_08A8E6F8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A8E6FC;
L_08A8E6FC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A8E704;
L_08A8E704:
    ctx.gpr[31] = (0x08A8E70Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A8E70Cu) goto L_08A8E70C;
    return;
L_08A8E70C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25092)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08A8E728u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A8E810;
L_08A8E728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
      if (branch_taken) {
          goto L_08A8E748;
      }
      goto L_08A8E738;
    }
L_08A8E738:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(14));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A8E754;
      }
      goto L_08A8E748;
    }
L_08A8E748:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08A8E754;
L_08A8E754:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8E604;
      }
      goto L_08A8E764;
    }
L_08A8E764:
    ctx.gpr[31] = (0x08A8E76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54EFCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E76Cu) goto L_08A8E76C;
    return;
L_08A8E76C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E784;
      }
      goto L_08A8E77C;
    }
L_08A8E77C:
    ctx.gpr[31] = (0x08A8E784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 189u, 0x088ED758u>(ctx, &aot_mem) && ctx.pc == 0x08A8E784u) goto L_08A8E784;
    return;
L_08A8E784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25092)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A8E7B4;
      }
      goto L_08A8E7A8;
    }
L_08A8E7A8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08A8E7B4;
L_08A8E7B4:
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (49440u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8E7D8;
      }
      goto L_08A8E7D0;
    }
L_08A8E7D0:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6120), static_cast<std::uint8_t>(0u));
    goto L_08A8E7D8;
L_08A8E7D8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E810:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27024)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (16672u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
      if (branch_taken) {
          goto L_08A8E880;
      }
      goto L_08A8E874;
    }
L_08A8E874:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[13];
    goto L_08A8E880;
L_08A8E880:
    ctx.fpr[24] = ctx.fpr[12] + ctx.fpr[24];
    ctx.gpr[4] = (49900u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08A8EA38;
      }
      goto L_08A8E8A4;
    }
L_08A8E8A4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8EA38;
      }
      goto L_08A8E8D0;
    }
L_08A8E8D0:
    ctx.gpr[4] = (49898u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17279u << 16u);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8E914;
      }
      goto L_08A8E8EC;
    }
L_08A8E8EC:
    ctx.gpr[4] = (49898u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
      if (branch_taken) {
          goto L_08A8E984;
      }
      goto L_08A8E914;
    }
L_08A8E914:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A8E984;
      }
      goto L_08A8E94C;
    }
L_08A8E94C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    goto L_08A8E984;
L_08A8E984:
    ctx.gpr[31] = (0x08A8E98Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08A8E98Cu) goto L_08A8E98C;
    return;
L_08A8E98C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A8E998u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08A8E998u) goto L_08A8E998;
    return;
L_08A8E998:
    ctx.gpr[31] = (0x08A8E9A0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E9A0u) goto L_08A8E9A0;
    return;
L_08A8E9A0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[26]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    ctx.gpr[31] = (0x08A8E9C8u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E9C8u) goto L_08A8E9C8;
    return;
L_08A8E9C8:
    ctx.gpr[31] = (0x08A8E9D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E9D0u) goto L_08A8E9D0;
    return;
L_08A8E9D0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 220u);
    ctx.gpr[6] = (0u | 220u);
    ctx.gpr[7] = (0u | 220u);
    ctx.gpr[31] = (0x08A8E9E8u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E9E8u) goto L_08A8E9E8;
    return;
L_08A8E9E8:
    ctx.gpr[31] = (0x08A8E9F0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08A8E9F0u) goto L_08A8E9F0;
    return;
L_08A8E9F0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8EA2Cu);
    ctx.fpr[13] = ctx.fpr[24] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08A8EA2Cu) goto L_08A8EA2C;
    return;
L_08A8EA2C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A8EA3C;
      }
      goto L_08A8EA38;
    }
L_08A8EA38:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A8EA3C;
L_08A8EA3C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
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
L_08A8EA68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8EA7Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(25096), ctx.gpr[4]);
    goto L_08A8EADC;
L_08A8EA7C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8EA88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8EA9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21044));
    goto L_08A8E428;
L_08A8EA9C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6120), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8EAB0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8EAC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8EAD0u);
    // nop
    goto L_08A8EA88;
L_08A8EAD0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8EADC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25096)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21024));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8EB10u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A8E428;
L_08A8EB10:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25096)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08A8EB2Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20996));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8EB2Cu) goto L_08A8EB2C;
    return;
L_08A8EB2C:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[16] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18744));
      if (branch_taken) {
          goto L_08A8EB68;
      }
      goto L_08A8EB40;
    }
L_08A8EB40:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08A8EB4Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A8EB4Cu) goto L_08A8EB4C;
    return;
L_08A8EB4C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EB64;
      }
      goto L_08A8EB58;
    }
L_08A8EB58:
    ctx.gpr[31] = (0x08A8EB60u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8EB60u) goto L_08A8EB60;
    return;
L_08A8EB60:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    goto L_08A8EB64;
L_08A8EB64:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24444), ctx.gpr[20]);
    goto L_08A8EB68;
L_08A8EB68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A8EB74u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 2u, 0x0891402Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8EB74u) goto L_08A8EB74;
    return;
L_08A8EB74:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6120), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6116), ctx.gpr[4]);
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25092), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A8EBA4;
L_08A8EBA4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 1000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8EBA4;
      }
      goto L_08A8EBB8;
    }
L_08A8EBB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8EBD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25036)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25032)));
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25040), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25060)));
    ctx.gpr[3] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(25072)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25068)));
    ctx.gpr[24] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(25076), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(25084), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2229u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(25048), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(25044), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[11] = (15744u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[11]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[14] = (2229u << 16u);
    ctx.gpr[8] = (16281u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(25052), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[15] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25056), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(25064), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[25] = (2229u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(25080), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25088), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8ECCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A8ED30;
      }
      goto L_08A8ECE8;
    }
L_08A8ECE8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13356));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8ECFCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 175u, 0x08A909D8u>(ctx, &aot_mem) && ctx.pc == 0x08A8ECFCu) goto L_08A8ECFC;
    return;
L_08A8ECFC:
    ctx.gpr[31] = (0x08A8ED04u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2108)));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 217u, 0x08841AC4u>(ctx, &aot_mem) && ctx.pc == 0x08A8ED04u) goto L_08A8ED04;
    return;
L_08A8ED04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2108)));
    ctx.gpr[31] = (0x08A8ED10u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 190u, 0x08841820u>(ctx, &aot_mem) && ctx.pc == 0x08A8ED10u) goto L_08A8ED10;
    return;
L_08A8ED10:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8ED1Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 369u, 0x089A63D4u>(ctx, &aot_mem) && ctx.pc == 0x08A8ED1Cu) goto L_08A8ED1C;
    return;
L_08A8ED1C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ED30;
      }
      goto L_08A8ED28;
    }
L_08A8ED28:
    ctx.gpr[31] = (0x08A8ED30u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 253u, 0x0899DA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8ED30u) goto L_08A8ED30;
    return;
L_08A8ED30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8ED44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2104)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A8EDE0;
      }
      goto L_08A8ED80;
    }
L_08A8ED80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2064));
      if (branch_taken) {
          goto L_08A8EEA8;
      }
      goto L_08A8EDB4;
    }
L_08A8EDB4:
    ctx.gpr[31] = (0x08A8EDBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x08A8EDBCu) goto L_08A8EDBC;
    return;
L_08A8EDBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EEA8;
      }
      goto L_08A8EDC4;
    }
L_08A8EDC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EDF0;
      }
      goto L_08A8EDD8;
    }
L_08A8EDD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EDE8;
      }
      goto L_08A8EDE0;
    }
L_08A8EDE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EEB0;
      }
      goto L_08A8EDE8;
    }
L_08A8EDE8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EEA8;
      }
      goto L_08A8EDF0;
    }
L_08A8EDF0:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A8EE3C;
      }
      goto L_08A8EE00;
    }
L_08A8EE00:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EE2C;
      }
      goto L_08A8EE0C;
    }
L_08A8EE0C:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2072), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(816), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
      if (branch_taken) {
          goto L_08A8EE40;
      }
      goto L_08A8EE2C;
    }
L_08A8EE2C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8EE00;
      }
      goto L_08A8EE3C;
    }
L_08A8EE3C:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    goto L_08A8EE40;
L_08A8EE40:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EEB0;
      }
      goto L_08A8EE48;
    }
L_08A8EE48:
    ctx.gpr[31] = (0x08A8EE50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 474u, 0x088868F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8EE50u) goto L_08A8EE50;
    return;
L_08A8EE50:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8EE80u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x08A8EE80u) goto L_08A8EE80;
    return;
L_08A8EE80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8EE8Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 533u, 0x08886B9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8EE8Cu) goto L_08A8EE8C;
    return;
L_08A8EE8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 8192u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2076), static_cast<std::uint8_t>(0u));
    goto L_08A8EEA8;
L_08A8EEA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EEB0;
      }
      goto L_08A8EEB0;
    }
L_08A8EEB0:
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
L_08A8EED0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8EEE4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A8EEE4u) goto L_08A8EEE4;
    return;
L_08A8EEE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EFD4;
      }
      goto L_08A8EEEC;
    }
L_08A8EEEC:
    ctx.gpr[31] = (0x08A8EEF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A8EEF4u) goto L_08A8EEF4;
    return;
L_08A8EEF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EFD4;
      }
      goto L_08A8EF00;
    }
L_08A8EF00:
    ctx.gpr[31] = (0x08A8EF08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A8EF08u) goto L_08A8EF08;
    return;
L_08A8EF08:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8EF40;
      }
      goto L_08A8EF18;
    }
L_08A8EF18:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    ctx.gpr[7] = (0u | 65535u);
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08A8EF44;
    }
    goto L_08A8EF28;
L_08A8EF28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 80u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A8EF44;
      }
      goto L_08A8EF3C;
    }
L_08A8EF3C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A8EF40;
L_08A8EF40:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A8EF44;
L_08A8EF44:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EFD4;
      }
      goto L_08A8EF4C;
    }
L_08A8EF4C:
    ctx.gpr[31] = (0x08A8EF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A8EF54u) goto L_08A8EF54;
    return;
L_08A8EF54:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A8EFD4;
      }
      goto L_08A8EFA4;
    }
L_08A8EFA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8EFD4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 215u, 0x08944EA0u>(ctx, &aot_mem) && ctx.pc == 0x08A8EFD4u) goto L_08A8EFD4;
    return;
L_08A8EFD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F074;
      }
      goto L_08A8EFE0;
    }
L_08A8EFE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8F000;
      }
      goto L_08A8EFF0;
    }
L_08A8EFF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8F074;
      }
      goto L_08A8F000;
    }
L_08A8F000:
    ctx.gpr[31] = (0x08A8F008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F008u) goto L_08A8F008;
    return;
L_08A8F008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F074;
      }
      goto L_08A8F014;
    }
L_08A8F014:
    ctx.gpr[31] = (0x08A8F01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F01Cu) goto L_08A8F01C;
    return;
L_08A8F01C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F074;
      }
      goto L_08A8F028;
    }
L_08A8F028:
    ctx.gpr[31] = (0x08A8F030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F030u) goto L_08A8F030;
    return;
L_08A8F030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A8F074;
      }
      goto L_08A8F044;
    }
L_08A8F044:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8F074u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 215u, 0x08944EA0u>(ctx, &aot_mem) && ctx.pc == 0x08A8F074u) goto L_08A8F074;
    return;
L_08A8F074:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F084:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8F0B4u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x08A8F0B4u) goto L_08A8F0B4;
    return;
L_08A8F0B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F0F4;
      }
      goto L_08A8F0BC;
    }
L_08A8F0BC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F0F4;
      }
      goto L_08A8F0C4;
    }
L_08A8F0C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8F0D0u);
    ctx.gpr[5] = (0u | 109u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x08A8F0D0u) goto L_08A8F0D0;
    return;
L_08A8F0D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8F0DCu);
    ctx.gpr[5] = (0u | 110u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x08A8F0DCu) goto L_08A8F0DC;
    return;
L_08A8F0DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8F104;
      }
      goto L_08A8F0EC;
    }
L_08A8F0EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 56u);
      if (branch_taken) {
          goto L_08A8F0FC;
      }
      goto L_08A8F0F4;
    }
L_08A8F0F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F2D4;
      }
      goto L_08A8F0FC;
    }
L_08A8F0FC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8F160;
      }
      goto L_08A8F104;
    }
L_08A8F104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F158;
      }
      goto L_08A8F11C;
    }
L_08A8F11C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[31] = (0x08A8F130u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F130u) goto L_08A8F130;
    return;
L_08A8F130:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2997), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2928), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(2928));
    ctx.gpr[31] = (0x08A8F144u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F144u) goto L_08A8F144;
    return;
L_08A8F144:
    ctx.gpr[19] = (0u | 11u);
    ctx.gpr[20] = (0u | 49u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-9));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(1328));
      if (branch_taken) {
          goto L_08A8F1E0;
      }
      goto L_08A8F158;
    }
L_08A8F158:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F2D4;
      }
      goto L_08A8F160;
    }
L_08A8F160:
    ctx.gpr[5] = (0u | 54u);
    ctx.gpr[19] = (0u | 11u);
    ctx.gpr[20] = (0u | 49u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-9));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(1328));
      if (branch_taken) {
          goto L_08A8F1E0;
      }
      goto L_08A8F178;
    }
L_08A8F178:
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[18] = (0u | 62u);
      if (branch_taken) {
          goto L_08A8F1E0;
      }
      goto L_08A8F184;
    }
L_08A8F184:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A8F1E0;
      }
      goto L_08A8F18C;
    }
L_08A8F18C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(848), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A8F1C4;
      }
      goto L_08A8F19C;
    }
L_08A8F19C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F1BC;
      }
      goto L_08A8F1A8;
    }
L_08A8F1A8:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_08A8F1BC;
    }
    goto L_08A8F1B0;
L_08A8F1B0:
    ctx.gpr[31] = (0x08A8F1B8u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08A8F1B8u) goto L_08A8F1B8;
    return;
L_08A8F1B8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_08A8F1BC;
L_08A8F1BC:
    ctx.gpr[31] = (0x08A8F1C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x08A8F1C4u) goto L_08A8F1C4;
    return;
L_08A8F1C4:
    ctx.gpr[31] = (0x08A8F1CCu);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F1CCu) goto L_08A8F1CC;
    return;
L_08A8F1CC:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2997), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2928), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(2928));
    ctx.gpr[31] = (0x08A8F1E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F1E0u) goto L_08A8F1E0;
    return;
L_08A8F1E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A8F214;
      }
      goto L_08A8F1EC;
    }
L_08A8F1EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F20C;
      }
      goto L_08A8F1F8;
    }
L_08A8F1F8:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_08A8F20C;
    }
    goto L_08A8F200;
L_08A8F200:
    ctx.gpr[31] = (0x08A8F208u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08A8F208u) goto L_08A8F208;
    return;
L_08A8F208:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_08A8F20C;
L_08A8F20C:
    ctx.gpr[31] = (0x08A8F214u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x08A8F214u) goto L_08A8F214;
    return;
L_08A8F214:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8F224u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x08A8F224u) goto L_08A8F224;
    return;
L_08A8F224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1328), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8F244u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F244u) goto L_08A8F244;
    return;
L_08A8F244:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8F250u);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 609u, 0x0899F378u>(ctx, &aot_mem) && ctx.pc == 0x08A8F250u) goto L_08A8F250;
    return;
L_08A8F250:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_08A8F2A8;
    }
    goto L_08A8F25C;
L_08A8F25C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_08A8F2A8;
    }
    goto L_08A8F268;
L_08A8F268:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(541), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(542), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 32u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 208u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_08A8F2A8;
L_08A8F2A8:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F2D4;
      }
      goto L_08A8F2C8;
    }
L_08A8F2C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8F2D4u);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 609u, 0x0899F378u>(ctx, &aot_mem) && ctx.pc == 0x08A8F2D4u) goto L_08A8F2D4;
    return;
L_08A8F2D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F2FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1328)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(748), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A8F338;
      }
      goto L_08A8F320;
    }
L_08A8F320:
    ctx.gpr[31] = (0x08A8F328u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 379u, 0x0899E35Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F328u) goto L_08A8F328;
    return;
L_08A8F328:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F348;
      }
      goto L_08A8F330;
    }
L_08A8F330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F390;
      }
      goto L_08A8F338;
    }
L_08A8F338:
    ctx.gpr[31] = (0x08A8F340u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 175u, 0x08A909D8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F340u) goto L_08A8F340;
    return;
L_08A8F340:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F4E4;
      }
      goto L_08A8F348;
    }
L_08A8F348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 62u);
      if (branch_taken) {
          goto L_08A8F38C;
      }
      goto L_08A8F358;
    }
L_08A8F358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F380;
      }
      goto L_08A8F364;
    }
L_08A8F364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_08A8F380;
    }
    goto L_08A8F370;
L_08A8F370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08A8F37Cu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08A8F37Cu) goto L_08A8F37C;
    return;
L_08A8F37C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_08A8F380;
L_08A8F380:
    ctx.gpr[31] = (0x08A8F388u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x08A8F388u) goto L_08A8F388;
    return;
L_08A8F388:
    ctx.gpr[4] = (0u | 62u);
    goto L_08A8F38C;
L_08A8F38C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    goto L_08A8F390;
L_08A8F390:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F3C4;
      }
      goto L_08A8F39C;
    }
L_08A8F39C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F3C4;
      }
      goto L_08A8F3A8;
    }
L_08A8F3A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8F3C4;
      }
      goto L_08A8F3B8;
    }
L_08A8F3B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8F3C4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 204u, 0x0888D084u>(ctx, &aot_mem) && ctx.pc == 0x08A8F3C4u) goto L_08A8F3C4;
    return;
L_08A8F3C4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F43C;
      }
      goto L_08A8F3CC;
    }
L_08A8F3CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8F41C;
      }
      goto L_08A8F3DC;
    }
L_08A8F3DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8F41C;
      }
      goto L_08A8F3EC;
    }
L_08A8F3EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8F41C;
      }
      goto L_08A8F3FC;
    }
L_08A8F3FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8F41C;
      }
      goto L_08A8F40C;
    }
L_08A8F40C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8F43C;
      }
      goto L_08A8F41C;
    }
L_08A8F41C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08A8F428u);
    ctx.gpr[5] = (0u | 151u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08A8F428u) goto L_08A8F428;
    return;
L_08A8F428:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A8F45C;
      }
      goto L_08A8F434;
    }
L_08A8F434:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08A8F44C;
      }
      goto L_08A8F43C;
    }
L_08A8F43C:
    ctx.gpr[31] = (0x08A8F444u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 175u, 0x08A909D8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F444u) goto L_08A8F444;
    return;
L_08A8F444:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F4E4;
      }
      goto L_08A8F44C;
    }
L_08A8F44C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8F474;
      }
      goto L_08A8F45C;
    }
L_08A8F45C:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A8F474u);
    ctx.gpr[6] = (0u | 151u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x08A8F474u) goto L_08A8F474;
    return;
L_08A8F474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(784));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A8F488u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 42u, 0x08AA83C4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F488u) goto L_08A8F488;
    return;
L_08A8F488:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x08A8F4A8u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F4A8u) goto L_08A8F4A8;
    return;
L_08A8F4A8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A8F4D0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F4D0u) goto L_08A8F4D0;
    return;
L_08A8F4D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A8F4E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A8F4E4u) goto L_08A8F4E4;
    return;
L_08A8F4E4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F4FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[17] = (0u | 11u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A8F56C;
      }
      goto L_08A8F53C;
    }
L_08A8F53C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F564;
      }
      goto L_08A8F548;
    }
L_08A8F548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_08A8F564;
    }
    goto L_08A8F554;
L_08A8F554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08A8F560u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08A8F560u) goto L_08A8F560;
    return;
L_08A8F560:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_08A8F564;
L_08A8F564:
    ctx.gpr[31] = (0x08A8F56Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x08A8F56Cu) goto L_08A8F56C;
    return;
L_08A8F56C:
    ctx.gpr[4] = (0u | 39u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A8F580u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 433u, 0x088A6DC0u>(ctx, &aot_mem) && ctx.pc == 0x08A8F580u) goto L_08A8F580;
    return;
L_08A8F580:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8F5B0;
      }
      goto L_08A8F5A4;
    }
L_08A8F5A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2092)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F648;
      }
      goto L_08A8F5B0;
    }
L_08A8F5B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A8F61C;
      }
      goto L_08A8F5EC;
    }
L_08A8F5EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F614;
      }
      goto L_08A8F5F8;
    }
L_08A8F5F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_08A8F614;
    }
    goto L_08A8F604;
L_08A8F604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08A8F610u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08A8F610u) goto L_08A8F610;
    return;
L_08A8F610:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_08A8F614;
L_08A8F614:
    ctx.gpr[31] = (0x08A8F61Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x08A8F61Cu) goto L_08A8F61C;
    return;
L_08A8F61C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2084), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8F634u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 183u, 0x089A0CF0u>(ctx, &aot_mem) && ctx.pc == 0x08A8F634u) goto L_08A8F634;
    return;
L_08A8F634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8F7C4;
      }
      goto L_08A8F648;
    }
L_08A8F648:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2080)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15172u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2080), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (48373u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A8F6D4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8F6D4u) goto L_08A8F6D4;
    return;
L_08A8F6D4:
    ctx.gpr[31] = (0x08A8F6DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 525u, 0x08A069D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8F6DCu) goto L_08A8F6DC;
    return;
L_08A8F6DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2096)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2080)));
    ctx.gpr[31] = (0x08A8F6ECu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 154u, 0x089F92B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F6ECu) goto L_08A8F6EC;
    return;
L_08A8F6EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F724;
      }
      goto L_08A8F6F4;
    }
L_08A8F6F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8F724;
      }
      goto L_08A8F708;
    }
L_08A8F708:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08A8F7B8;
      }
      goto L_08A8F724;
    }
L_08A8F724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A8F790;
      }
      goto L_08A8F760;
    }
L_08A8F760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F788;
      }
      goto L_08A8F76C;
    }
L_08A8F76C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_08A8F788;
    }
    goto L_08A8F778;
L_08A8F778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08A8F784u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08A8F784u) goto L_08A8F784;
    return;
L_08A8F784:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_08A8F788;
L_08A8F788:
    ctx.gpr[31] = (0x08A8F790u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x08A8F790u) goto L_08A8F790;
    return;
L_08A8F790:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2084), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8F7A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 183u, 0x089A0CF0u>(ctx, &aot_mem) && ctx.pc == 0x08A8F7A8u) goto L_08A8F7A8;
    return;
L_08A8F7A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_08A8F7B8;
L_08A8F7B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8F7C4u);
    ctx.gpr[5] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x08A8F7C4u) goto L_08A8F7C4;
    return;
L_08A8F7C4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F7E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8F80Cu);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 340u, 0x089A5734u>(ctx, &aot_mem) && ctx.pc == 0x08A8F80Cu) goto L_08A8F80C;
    return;
L_08A8F80C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13356));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2084), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A8FC1C;
      }
      goto L_08A8F824;
    }
L_08A8F824:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A8F970;
      }
      goto L_08A8F830;
    }
L_08A8F830:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A8F8E4;
      }
      goto L_08A8F838;
    }
L_08A8F838:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8F8E4;
      }
      goto L_08A8F840;
    }
L_08A8F840:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A8F9F4;
      }
      goto L_08A8F848;
    }
L_08A8F848:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A8FA78;
      }
      goto L_08A8F850;
    }
L_08A8F850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8F86Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8F86Cu) goto L_08A8F86C;
    return;
L_08A8F86C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (0u | 1000u);
    ctx.gpr[31] = (0x08A8F880u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F880u) goto L_08A8F880;
    return;
L_08A8F880:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[31] = (0x08A8F890u);
    ctx.gpr[6] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 645u, 0x0899F5C0u>(ctx, &aot_mem) && ctx.pc == 0x08A8F890u) goto L_08A8F890;
    return;
L_08A8F890:
    ctx.gpr[4] = (0u | 60u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1720), static_cast<std::uint8_t>(0u));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (16288u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 208u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1721), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A8F8D4;
    }
    goto L_08A8F8D4;
L_08A8F8D4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1722), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A8FC1C;
      }
      goto L_08A8F8E4;
    }
L_08A8F8E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8F900u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8F900u) goto L_08A8F900;
    return;
L_08A8F900:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 23u);
    ctx.gpr[31] = (0x08A8F910u);
    ctx.gpr[6] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 645u, 0x0899F5C0u>(ctx, &aot_mem) && ctx.pc == 0x08A8F910u) goto L_08A8F910;
    return;
L_08A8F910:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8F91Cu);
    ctx.gpr[5] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 609u, 0x0899F378u>(ctx, &aot_mem) && ctx.pc == 0x08A8F91Cu) goto L_08A8F91C;
    return;
L_08A8F91C:
    ctx.gpr[4] = (0u | 68u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 32u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17096u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1721), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A8F960;
    }
    goto L_08A8F960;
L_08A8F960:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1722), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A8FC1C;
      }
      goto L_08A8F970;
    }
L_08A8F970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8F98Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8F98Cu) goto L_08A8F98C;
    return;
L_08A8F98C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[31] = (0x08A8F99Cu);
    ctx.gpr[6] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 645u, 0x0899F5C0u>(ctx, &aot_mem) && ctx.pc == 0x08A8F99Cu) goto L_08A8F99C;
    return;
L_08A8F99C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8F9A8u);
    ctx.gpr[5] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 609u, 0x0899F378u>(ctx, &aot_mem) && ctx.pc == 0x08A8F9A8u) goto L_08A8F9A8;
    return;
L_08A8F9A8:
    ctx.gpr[4] = (0u | 76u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 176u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1721), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A8F9E4;
    }
    goto L_08A8F9E4;
L_08A8F9E4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1722), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A8FC1C;
      }
      goto L_08A8F9F4;
    }
L_08A8F9F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8FA10u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8FA10u) goto L_08A8FA10;
    return;
L_08A8FA10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[31] = (0x08A8FA20u);
    ctx.gpr[6] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 645u, 0x0899F5C0u>(ctx, &aot_mem) && ctx.pc == 0x08A8FA20u) goto L_08A8FA20;
    return;
L_08A8FA20:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8FA2Cu);
    ctx.gpr[5] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 609u, 0x0899F378u>(ctx, &aot_mem) && ctx.pc == 0x08A8FA2Cu) goto L_08A8FA2C;
    return;
L_08A8FA2C:
    ctx.gpr[4] = (0u | 84u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 32u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1721), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A8FA68;
    }
    goto L_08A8FA68;
L_08A8FA68:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1722), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A8FC1C;
      }
      goto L_08A8FA78;
    }
L_08A8FA78:
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FBB4;
      }
      goto L_08A8FA84;
    }
L_08A8FA84:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20968)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8FA9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 97u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8FAB8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8FAB8u) goto L_08A8FAB8;
    return;
L_08A8FAB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FBB4;
      }
      goto L_08A8FAC0;
    }
L_08A8FAC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8FADCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8FADCu) goto L_08A8FADC;
    return;
L_08A8FADC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FBB4;
      }
      goto L_08A8FAE4;
    }
L_08A8FAE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 99u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8FB00u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8FB00u) goto L_08A8FB00;
    return;
L_08A8FB00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FBB4;
      }
      goto L_08A8FB08;
    }
L_08A8FB08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 100u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8FB24u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8FB24u) goto L_08A8FB24;
    return;
L_08A8FB24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FBB4;
      }
      goto L_08A8FB2C;
    }
L_08A8FB2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 101u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8FB48u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8FB48u) goto L_08A8FB48;
    return;
L_08A8FB48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FBB4;
      }
      goto L_08A8FB50;
    }
L_08A8FB50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 102u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8FB6Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8FB6Cu) goto L_08A8FB6C;
    return;
L_08A8FB6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FBB4;
      }
      goto L_08A8FB74;
    }
L_08A8FB74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 103u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8FB90u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8FB90u) goto L_08A8FB90;
    return;
L_08A8FB90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FBB4;
      }
      goto L_08A8FB98;
    }
L_08A8FB98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 104u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8FBB4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8FBB4u) goto L_08A8FBB4;
    return;
L_08A8FBB4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 23u);
    ctx.gpr[31] = (0x08A8FBC4u);
    ctx.gpr[6] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 645u, 0x0899F5C0u>(ctx, &aot_mem) && ctx.pc == 0x08A8FBC4u) goto L_08A8FBC4;
    return;
L_08A8FBC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8FBD0u);
    ctx.gpr[5] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 609u, 0x0899F378u>(ctx, &aot_mem) && ctx.pc == 0x08A8FBD0u) goto L_08A8FBD0;
    return;
L_08A8FBD0:
    ctx.gpr[4] = (0u | 76u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 176u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1721), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A8FC0C;
    }
    goto L_08A8FC0C;
L_08A8FC0C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1722), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A8FC1C;
      }
      goto L_08A8FC1C;
    }
L_08A8FC1C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2072), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2074), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2073), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1788), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2075), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2076), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2077), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2078), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2116), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2064), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2088), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2092), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2080), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2100), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2104), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2112), 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A8FC74u);
    ctx.gpr[4] = (0u | 576u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A8FC74u) goto L_08A8FC74;
    return;
L_08A8FC74:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FC8C;
      }
      goto L_08A8FC80;
    }
L_08A8FC80:
    ctx.gpr[31] = (0x08A8FC88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 189u, 0x08841814u>(ctx, &aot_mem) && ctx.pc == 0x08A8FC88u) goto L_08A8FC88;
    return;
L_08A8FC88:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08A8FC8C;
L_08A8FC8C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2108), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8FC9Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 516u, 0x0899EDBCu>(ctx, &aot_mem) && ctx.pc == 0x08A8FC9Cu) goto L_08A8FC9C;
    return;
L_08A8FC9C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08A8FCB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2084)));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A8FCFC;
      }
      goto L_08A8FCF4;
    }
L_08A8FCF4:
    ctx.gpr[31] = (0x08A8FCFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A8F4FC;
L_08A8FCFC:
    ctx.gpr[31] = (0x08A8FD04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 312u, 0x089B10ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8FD04u) goto L_08A8FD04;
    return;
L_08A8FD04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2088)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FD34;
      }
      goto L_08A8FD10;
    }
L_08A8FD10:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29520)));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A8FD2C;
      }
      goto L_08A8FD24;
    }
L_08A8FD24:
    ctx.gpr[31] = (0x08A8FD2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 461u, 0x08A91EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A8FD2Cu) goto L_08A8FD2C;
    return;
L_08A8FD2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 174u, 0x08A909A8u>(ctx, &aot_mem); return;
      }
      goto L_08A8FD34;
    }
L_08A8FD34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FD80;
      }
      goto L_08A8FD40;
    }
L_08A8FD40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2108)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FD80;
      }
      goto L_08A8FD50;
    }
L_08A8FD50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2108)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(572)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8FD80;
      }
      goto L_08A8FD64;
    }
L_08A8FD64:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29520)));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A8FD80;
      }
      goto L_08A8FD78;
    }
L_08A8FD78:
    ctx.gpr[31] = (0x08A8FD80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2108)));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 243u, 0x08841C34u>(ctx, &aot_mem) && ctx.pc == 0x08A8FD80u) goto L_08A8FD80;
    return;
L_08A8FD80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FDF4;
      }
      goto L_08A8FD9C;
    }
L_08A8FD9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[17] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A8FDE4;
      }
      goto L_08A8FDAC;
    }
L_08A8FDAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[18] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A8FDDC;
      }
      goto L_08A8FDBC;
    }
L_08A8FDBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8FDFC;
      }
      goto L_08A8FDCC;
    }
L_08A8FDCC:
    ctx.gpr[31] = (0x08A8FDD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A8F2FC;
L_08A8FDD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 174u, 0x08A909A8u>(ctx, &aot_mem); return;
      }
      goto L_08A8FDDC;
    }
L_08A8FDDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 174u, 0x08A909A8u>(ctx, &aot_mem); return;
      }
      goto L_08A8FDE4;
    }
L_08A8FDE4:
    ctx.gpr[31] = (0x08A8FDECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 175u, 0x08A909D8u>(ctx, &aot_mem) && ctx.pc == 0x08A8FDECu) goto L_08A8FDEC;
    return;
L_08A8FDEC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 174u, 0x08A909A8u>(ctx, &aot_mem); return;
      }
      goto L_08A8FDF4;
    }
L_08A8FDF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 174u, 0x08A909A8u>(ctx, &aot_mem); return;
      }
      goto L_08A8FDFC;
    }
L_08A8FDFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08A8FE20u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 328u, 0x08855A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8FE20u) goto L_08A8FE20;
    return;
L_08A8FE20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1244)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[19] = (2230u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[22] = (0u | 62u);
      if (branch_taken) {
          goto L_08A8FE60;
      }
      goto L_08A8FE58;
    }
L_08A8FE58:
    ctx.gpr[31] = (0x08A8FE60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 447u, 0x0899E750u>(ctx, &aot_mem) && ctx.pc == 0x08A8FE60u) goto L_08A8FE60;
    return;
L_08A8FE60:
    ctx.gpr[31] = (0x08A8FE68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A8FE68u) goto L_08A8FE68;
    return;
L_08A8FE68:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
        goto L_08A8FE80;
    }
    goto L_08A8FE70;
L_08A8FE70:
    ctx.gpr[31] = (0x08A8FE78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A8FE78u) goto L_08A8FE78;
    return;
L_08A8FE78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A8FEA0;
      }
      goto L_08A8FE80;
    }
L_08A8FE80:
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    goto L_08A8FEA0;
L_08A8FEA0:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2068), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A8FF50;
      }
      goto L_08A8FEF8;
    }
L_08A8FEF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A8FF50;
      }
      goto L_08A8FF24;
    }
L_08A8FF24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A8FFB8;
      }
      goto L_08A8FF50;
    }
L_08A8FF50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
        goto L_08A8FF84;
    }
    goto L_08A8FF6C;
L_08A8FF6C:
    ctx.gpr[31] = (0x08A8FF74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x08A8FF74u) goto L_08A8FF74;
    return;
L_08A8FF74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FFB0;
      }
      goto L_08A8FF7C;
    }
L_08A8FF7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FFB8;
      }
      goto L_08A8FF84;
    }
L_08A8FF84:
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8FFA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A8F084;
L_08A8FFA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 174u, 0x08A909A8u>(ctx, &aot_mem); return;
      }
      goto L_08A8FFB0;
    }
L_08A8FFB0:
    ctx.gpr[31] = (0x08A8FFB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x08A8FFB8u) goto L_08A8FFB8;
    return;
L_08A8FFB8:
    ctx.gpr[31] = (0x08A8FFC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8FFC0u) goto L_08A8FFC0;
    return;
L_08A8FFC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 22u, 0x08A90144u>(ctx, &aot_mem); return;
      }
      goto L_08A8FFCC;
    }
L_08A8FFCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 22u, 0x08A90144u>(ctx, &aot_mem); return;
      }
      goto L_08A8FFD8;
    }
L_08A8FFD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 22u, 0x08A90144u>(ctx, &aot_mem); return;
      }
      goto L_08A8FFE4;
    }
L_08A8FFE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 22u, 0x08A90144u>(ctx, &aot_mem); return;
      }
      goto L_08A8FFF0;
    }
L_08A8FFF0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(2088)));
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 3u, 0x08A90014u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 1u, 0x08A90000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0162(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0162_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_162(Runtime &runtime) {
    runtime.register_generated_unit(162u, 0x08A8C000u, 16384u, &recomp_unit_0162, &recomp_unit_0162_entry);
    runtime.register_function(0x08A8C000u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C010u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C01Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C020u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C034u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C054u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C060u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C06Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C074u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C07Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C088u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C09Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C108u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C120u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C128u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C12Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C144u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C150u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C164u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C16Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C174u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C178u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C184u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C194u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C214u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C224u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C22Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C238u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C24Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C254u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C25Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C268u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C270u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C298u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C30Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C31Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C330u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C344u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C35Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C40Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C424u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C440u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C450u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C458u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C504u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C518u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C520u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C528u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C530u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C538u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C548u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C574u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C584u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C590u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C594u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C604u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C610u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C618u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C61Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C628u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C62Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C638u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C644u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C674u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C6BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C6C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C6E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C6FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C70Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C734u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C748u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C754u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C758u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C770u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C78Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C798u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C800u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C808u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C810u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C840u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C844u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C850u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C86Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C874u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C87Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C890u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C928u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C938u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C958u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C960u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C974u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C98Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CAB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CABCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CAD0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CAE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBBCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC20u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC54u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC6Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCA8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCD0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD54u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDC8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDD0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CECCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFD4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D004u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D014u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D030u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D03Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D044u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D050u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D060u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D068u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D070u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D078u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D098u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D100u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D114u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D124u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D134u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D144u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D158u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D184u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D204u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D21Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D234u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D23Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D244u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D250u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D260u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D268u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D27Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D284u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D290u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D318u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D324u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D340u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D354u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D35Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D364u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D37Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D38Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D3A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D3CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D3ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D3F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D400u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D408u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D410u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D420u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D434u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D44Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D474u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D47Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D488u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D498u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D504u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D50Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D53Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D550u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D558u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D560u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D570u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D578u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D580u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D63Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D648u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D658u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D660u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D674u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D67Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D684u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D694u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D714u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D75Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D768u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D77Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D784u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D794u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D79Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D820u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D828u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D84Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D854u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D85Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D864u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D870u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D878u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D920u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D930u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D938u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D93Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D964u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D978u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D994u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DAA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DAD0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DAE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DAF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBD4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC54u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCA8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCC8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCF8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD48u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD50u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDF8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE54u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEA8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DED4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEF8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E018u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E02Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E03Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E044u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E060u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E098u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E110u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E118u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E128u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E130u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E13Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E144u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E150u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E158u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E160u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E190u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E2D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E2FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E308u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E324u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E32Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E338u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E3D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E428u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E454u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E498u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E504u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E52Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E540u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E548u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E550u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E560u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E568u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E570u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E580u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E588u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E590u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E598u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E604u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E60Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E618u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E624u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E62Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E630u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E638u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E644u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E660u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E66Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E678u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E684u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E68Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E690u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E698u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E704u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E70Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E728u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E738u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E748u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E754u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E764u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E76Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E77Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E784u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E7A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E7B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E7D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E7D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E810u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E874u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E880u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E914u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E94Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E984u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E98Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E998u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EAB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EAC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EAD0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EADCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EBA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EBB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EBD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ECCCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ECE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ECFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDBCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE48u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE50u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EEA8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EEB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EED0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EEE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EEECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EEF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF54u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EFA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EFD4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EFE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EFF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F000u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F008u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F014u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F01Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F028u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F030u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F044u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F074u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F084u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F104u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F11Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F130u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F144u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F158u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F160u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F178u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F184u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F18Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F19Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F200u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F208u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F20Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F214u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F224u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F244u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F250u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F25Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F268u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F320u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F328u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F330u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F338u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F340u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F348u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F358u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F364u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F370u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F37Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F380u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F388u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F38Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F390u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F39Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F40Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F41Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F428u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F434u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F43Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F444u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F44Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F45Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F474u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F488u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F53Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F548u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F554u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F560u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F564u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F56Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F580u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F5A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F5B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F5ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F5F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F604u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F610u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F614u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F61Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F634u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F648u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F708u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F724u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F760u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F76Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F778u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F784u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F788u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F790u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F7A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F7B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F7C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F7E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F80Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F824u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F830u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F838u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F840u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F848u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F850u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F86Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F880u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F890u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F8D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F8E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F900u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F910u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F91Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F960u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F970u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F98Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F99Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F9A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F9E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F9F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA20u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FAB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FAC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FADCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FAE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB48u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB50u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB6Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FBB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FBC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FBD0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FCB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FCF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FCFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD50u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDBCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDCCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDD4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDDCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE20u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FEA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FEF8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF50u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF6Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFA8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFCCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFF0u, &recomp_unit_0162, "recomp_unit_0162");
}
} // namespace psprecomp
