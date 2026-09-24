#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0038[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 7, 0, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0,
    0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0,
    33, 0, 34, 35, 0, 36, 0, 0, 37, 0, 38, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 43, 0, 44, 45, 0, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0, 0,
    0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 0,
    0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 0, 62, 0, 63, 0, 64, 0,
    65, 0, 0, 0, 66, 0, 67, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 70, 71, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74,
    0, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0,
    0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 94, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0,
    0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 104, 105, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117,
    0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 124, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0,
    0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 139, 0,
    0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0,
    0, 0, 0, 147, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0,
    0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0,
    160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0,
    0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 183, 0, 184, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189,
    0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0,
    197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 0,
    0, 0, 0, 206, 0, 207, 0, 0, 0, 208, 0, 209, 0, 0, 0, 210, 0, 0, 211, 0, 212, 0, 0, 213, 0, 214, 0, 0, 215, 0, 0, 0,
    0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 221, 0, 222, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 226, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230,
    0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0,
    0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 256,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 259, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274,
    0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 281,
    0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 289, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 294, 0, 295, 0, 296, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0,
    301, 0, 0, 302, 0, 303, 0, 304, 0, 0, 0, 305, 306, 0, 0, 307, 0, 308, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 311, 0, 0,
    0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 315,
    0, 316, 0, 0, 0, 317, 0, 318, 0, 0, 0, 319, 0, 0, 0, 320, 321, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0,
    0, 325, 0, 326, 0, 327, 0, 328, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0,
    0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 336, 0, 0, 337, 0, 338, 0, 0, 0, 339, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 355, 0, 356, 0, 0, 357, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0,
    0, 362, 0, 0, 363, 0, 364, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 370, 0, 0, 0, 371,
    0, 372, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 377, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0,
    0, 380, 0, 0, 0, 0, 381, 0, 0, 382, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388,
    0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0,
    0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0,
    0, 0, 403, 0, 0, 0, 404, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0,
    409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 416, 0, 417, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0,
    425, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 431, 0, 0, 0, 432, 0, 0,
    0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 436, 0, 437, 0, 438, 0, 0, 439, 0, 0, 0, 440, 0, 441, 0, 442,
    0, 443, 0, 444, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0, 451, 0,
    0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0,
    0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0,
    0, 0, 0, 466, 0, 0, 467, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 471, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0,
    0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0,
    0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0, 0,
    486, 0, 0, 0, 0, 487, 0, 488, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 493, 0, 0,
    0, 494, 0, 495, 0, 496, 0, 497, 498, 499, 0, 0, 0, 500, 0, 0, 0, 501, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 505,
    0, 0, 506, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0, 0, 512, 0, 0, 513, 0,
    0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 519, 0, 0, 0,
    520, 0, 0, 521, 0, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0, 0,
    0, 0, 527, 0, 0, 528, 0, 529, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 533, 0, 0, 0, 0, 0,
    0, 534, 0, 0, 535, 0, 0, 536, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 540,
    0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 543, 0, 0, 544, 0, 545, 0, 546, 0, 547, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 550,
    0, 0, 0, 551, 0, 552, 0, 0, 0, 0, 553, 0, 0, 554, 0, 0, 555, 0, 0, 556, 0, 557, 0, 558, 0, 559, 0, 560, 0, 0, 561, 0,
    0, 0, 0, 562, 0, 563, 0, 564, 0, 0, 0, 565, 0, 566, 0, 567, 0, 568, 0, 569, 0, 570, 0, 571, 0, 572, 573, 0, 574, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 576, 0, 0, 577, 0, 578, 579, 0, 0, 0, 0, 580, 0, 0, 0,
    0, 0, 581, 0, 0, 0, 582, 0, 0, 583, 0, 584, 0, 0, 585, 0, 0, 0, 586, 587, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 591, 0, 0, 0, 592, 0, 593, 0, 594, 0, 595, 0, 0, 0, 596, 597, 0, 598, 0, 0,
    0, 599, 0, 600, 0, 601, 0, 602, 0, 0, 0, 0, 0, 0, 603, 0, 604, 0, 0, 0, 0, 605, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0,
    0, 607, 0, 0, 608, 0, 0, 609, 0, 0, 0, 610, 0, 611, 0, 612, 0, 613, 0, 0, 0, 0, 0, 0, 614, 0, 615, 0, 0, 0, 616, 0,
    0, 617, 0, 618, 0, 619, 0, 0, 620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0,
    0, 624, 0, 0, 0, 625, 0, 626, 0, 627, 628, 0, 629, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0,
    0, 632, 0, 0, 0, 0, 633, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 636, 0, 637, 0, 0, 0, 0, 638, 0, 0, 0, 0, 639, 0, 0,
    0, 0, 0, 640, 641, 0, 642, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 647, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0, 650, 0, 0, 0, 0, 651, 0, 652, 0, 0, 0, 0, 0, 653,
    654, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 657, 0, 658, 0, 0, 659, 0, 660, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 662, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 0, 0, 666, 667, 0, 0, 0, 0, 0, 668,
    0, 0, 0, 669, 0, 670, 0, 0, 671, 0, 0, 0, 672, 0, 673, 0, 0, 0, 0, 674, 0, 675, 0, 0, 0, 0, 676, 0, 0, 677, 0, 0,
    0, 678, 0, 679, 0, 0, 0, 0, 680, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0,
    0, 0, 683, 0, 0, 0, 684, 0, 0, 685, 0, 0, 686, 0, 0, 0, 0, 0, 687, 0, 688, 0, 0, 689, 690, 0, 0, 0, 0, 0, 691, 0,
    0, 0, 692, 0, 0, 693, 0, 694, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 697, 0, 698, 0, 0, 699, 0, 0, 0, 700, 0, 0, 0,
    701, 0, 0, 702, 0, 0, 703, 0, 704, 0, 0, 705, 0, 0, 706, 0, 0, 707, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 709, 0, 0,
    0, 710, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 712, 0, 713, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 715, 0, 0, 0, 716, 0, 717, 0, 718, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 720, 0, 721, 0, 722,
    0, 0, 0, 723, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 726, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 728, 0, 729,
    0, 730, 0, 0, 0, 0, 0, 0, 731, 0, 0, 732, 0, 0, 733, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 737, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 740, 0, 0,
    0, 741, 0, 0, 742, 0, 0, 0, 743, 0, 0, 744, 0, 0, 745, 0, 746, 747, 0, 748, 0, 749, 0, 0, 750, 0, 0, 0, 0, 0, 0, 751,
    0, 0, 0, 752, 0, 753, 0, 0, 0, 0, 754, 0, 755, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 758, 0, 0,
    0, 759, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 761, 0, 762, 0, 763, 0, 764, 0, 765, 0, 766, 0, 767, 768, 0, 769, 0, 0,
    0, 0, 0, 770, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 772, 0, 773, 0, 774, 0, 775, 0, 0, 776, 0, 0, 0, 777, 0, 778, 779, 0,
    780, 781, 0, 0, 782, 0, 0, 783, 0, 0, 0, 784, 0, 785, 786, 0, 787, 0, 788, 0, 0, 789, 0, 790, 0, 791, 792, 0, 793, 0, 0, 794,
    0, 0, 795, 0, 796, 797, 0, 798, 0, 0, 799, 0, 800, 0, 0, 801, 0, 802, 0, 0, 0, 803, 0, 804, 805, 0, 806, 0, 0, 0, 807, 0,
    808, 0, 0, 0, 809, 0, 810, 0, 811, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 815, 0, 816, 0, 817, 0, 0, 0, 818, 0, 0, 0, 819, 0, 820, 0,
    821, 0, 0, 0, 822, 0, 823, 824, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 827, 828, 0, 829, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 831, 0, 832, 833, 0, 834, 0, 0, 0, 835, 0, 0, 836, 0, 837, 0, 838, 0, 839,
    0, 840, 0, 841, 0, 0, 0, 0, 0, 842, 0, 0, 843, 0, 844, 845, 0, 846, 0, 0, 0, 847, 0, 848, 0, 849, 0, 850, 851, 0, 852, 0,
    0, 0, 0, 853, 0, 0, 854, 0, 0, 855, 0, 856, 0, 857, 858, 0, 859, 0, 0, 0, 0, 0, 0, 0, 0, 860, 0, 0, 861, 0, 862, 0,
    863, 0, 864, 0, 865, 0, 866, 0, 867, 0, 0, 868, 0, 0, 0, 869, 0, 870, 0, 871, 0, 872, 0, 873, 0, 0, 874, 0, 875, 0, 0, 876,
    0, 0, 0, 877, 0, 0, 878, 0, 879, 0, 880, 0, 0, 881, 0, 882, 883, 0, 0, 0, 0, 884, 0, 0, 885, 0, 886, 0, 887, 0, 888, 889,
};
void recomp_unit_0038_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0889C000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0038[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0889C000;
    case 2u: goto L_0889C024;
    case 3u: goto L_0889C04C;
    case 4u: goto L_0889C054;
    case 5u: goto L_0889C0AC;
    case 6u: goto L_0889C0E8;
    case 7u: goto L_0889C0EC;
    case 8u: goto L_0889C0FC;
    case 9u: goto L_0889C1A0;
    case 10u: goto L_0889C1A8;
    case 11u: goto L_0889C1EC;
    case 12u: goto L_0889C1F4;
    case 13u: goto L_0889C268;
    case 14u: goto L_0889C274;
    case 15u: goto L_0889C28C;
    case 16u: goto L_0889C2AC;
    case 17u: goto L_0889C2C4;
    case 18u: goto L_0889C2E0;
    case 19u: goto L_0889C2FC;
    case 20u: goto L_0889C318;
    case 21u: goto L_0889C324;
    case 22u: goto L_0889C32C;
    case 23u: goto L_0889C348;
    case 24u: goto L_0889C398;
    case 25u: goto L_0889C3A4;
    case 26u: goto L_0889C3AC;
    case 27u: goto L_0889C3E8;
    case 28u: goto L_0889C3F4;
    case 29u: goto L_0889C430;
    case 30u: goto L_0889C444;
    case 31u: goto L_0889C464;
    case 32u: goto L_0889C478;
    case 33u: goto L_0889C480;
    case 34u: goto L_0889C488;
    case 35u: goto L_0889C48C;
    case 36u: goto L_0889C494;
    case 37u: goto L_0889C4A0;
    case 38u: goto L_0889C4A8;
    case 39u: goto L_0889C4AC;
    case 40u: goto L_0889C4E4;
    case 41u: goto L_0889C530;
    case 42u: goto L_0889C538;
    case 43u: goto L_0889C540;
    case 44u: goto L_0889C548;
    case 45u: goto L_0889C54C;
    case 46u: goto L_0889C55C;
    case 47u: goto L_0889C564;
    case 48u: goto L_0889C574;
    case 49u: goto L_0889C594;
    case 50u: goto L_0889C59C;
    case 51u: goto L_0889C5BC;
    case 52u: goto L_0889C5C4;
    case 53u: goto L_0889C5CC;
    case 54u: goto L_0889C5E4;
    case 55u: goto L_0889C5EC;
    case 56u: goto L_0889C5F4;
    case 57u: goto L_0889C614;
    case 58u: goto L_0889C624;
    case 59u: goto L_0889C644;
    case 60u: goto L_0889C64C;
    case 61u: goto L_0889C65C;
    case 62u: goto L_0889C668;
    case 63u: goto L_0889C670;
    case 64u: goto L_0889C678;
    case 65u: goto L_0889C680;
    case 66u: goto L_0889C690;
    case 67u: goto L_0889C698;
    case 68u: goto L_0889C6A0;
    case 69u: goto L_0889C6B4;
    case 70u: goto L_0889C6C4;
    case 71u: goto L_0889C6C8;
    case 72u: goto L_0889C6D4;
    case 73u: goto L_0889C6E8;
    case 74u: goto L_0889C6FC;
    case 75u: goto L_0889C70C;
    case 76u: goto L_0889C714;
    case 77u: goto L_0889C71C;
    case 78u: goto L_0889C724;
    case 79u: goto L_0889C72C;
    case 80u: goto L_0889C73C;
    case 81u: goto L_0889C74C;
    case 82u: goto L_0889C754;
    case 83u: goto L_0889C760;
    case 84u: goto L_0889C770;
    case 85u: goto L_0889C78C;
    case 86u: goto L_0889C7C0;
    case 87u: goto L_0889C7E0;
    case 88u: goto L_0889C7E8;
    case 89u: goto L_0889C818;
    case 90u: goto L_0889C824;
    case 91u: goto L_0889C82C;
    case 92u: goto L_0889C83C;
    case 93u: goto L_0889C84C;
    case 94u: goto L_0889C854;
    case 95u: goto L_0889C85C;
    case 96u: goto L_0889C870;
    case 97u: goto L_0889C878;
    case 98u: goto L_0889C884;
    case 99u: goto L_0889C88C;
    case 100u: goto L_0889C894;
    case 101u: goto L_0889C8A8;
    case 102u: goto L_0889C8BC;
    case 103u: goto L_0889C8C8;
    case 104u: goto L_0889C8DC;
    case 105u: goto L_0889C8E0;
    case 106u: goto L_0889C8F0;
    case 107u: goto L_0889C908;
    case 108u: goto L_0889C91C;
    case 109u: goto L_0889C928;
    case 110u: goto L_0889C930;
    case 111u: goto L_0889C94C;
    case 112u: goto L_0889C994;
    case 113u: goto L_0889C9B8;
    case 114u: goto L_0889C9C4;
    case 115u: goto L_0889C9D0;
    case 116u: goto L_0889C9EC;
    case 117u: goto L_0889C9FC;
    case 118u: goto L_0889CA04;
    case 119u: goto L_0889CA0C;
    case 120u: goto L_0889CA28;
    case 121u: goto L_0889CA38;
    case 122u: goto L_0889CA48;
    case 123u: goto L_0889CA58;
    case 124u: goto L_0889CA60;
    case 125u: goto L_0889CA70;
    case 126u: goto L_0889CA88;
    case 127u: goto L_0889CA9C;
    case 128u: goto L_0889CAAC;
    case 129u: goto L_0889CAC0;
    case 130u: goto L_0889CAD0;
    case 131u: goto L_0889CAD8;
    case 132u: goto L_0889CAE8;
    case 133u: goto L_0889CAF8;
    case 134u: goto L_0889CB0C;
    case 135u: goto L_0889CB14;
    case 136u: goto L_0889CB28;
    case 137u: goto L_0889CB58;
    case 138u: goto L_0889CB6C;
    case 139u: goto L_0889CB78;
    case 140u: goto L_0889CB8C;
    case 141u: goto L_0889CB94;
    case 142u: goto L_0889CBAC;
    case 143u: goto L_0889CBB4;
    case 144u: goto L_0889CBC4;
    case 145u: goto L_0889CBD4;
    case 146u: goto L_0889CBE8;
    case 147u: goto L_0889CC0C;
    case 148u: goto L_0889CC14;
    case 149u: goto L_0889CC24;
    case 150u: goto L_0889CC4C;
    case 151u: goto L_0889CC60;
    case 152u: goto L_0889CC70;
    case 153u: goto L_0889CC84;
    case 154u: goto L_0889CC98;
    case 155u: goto L_0889CCA8;
    case 156u: goto L_0889CCB8;
    case 157u: goto L_0889CCD4;
    case 158u: goto L_0889CCE0;
    case 159u: goto L_0889CCE8;
    case 160u: goto L_0889CD00;
    case 161u: goto L_0889CD3C;
    case 162u: goto L_0889CD4C;
    case 163u: goto L_0889CD54;
    case 164u: goto L_0889CD74;
    case 165u: goto L_0889CDA4;
    case 166u: goto L_0889CDAC;
    case 167u: goto L_0889CDB8;
    case 168u: goto L_0889CDC0;
    case 169u: goto L_0889CDC8;
    case 170u: goto L_0889CDE0;
    case 171u: goto L_0889CE1C;
    case 172u: goto L_0889CE24;
    case 173u: goto L_0889CE34;
    case 174u: goto L_0889CE44;
    case 175u: goto L_0889CE68;
    case 176u: goto L_0889CE78;
    case 177u: goto L_0889CE88;
    case 178u: goto L_0889CE98;
    case 179u: goto L_0889CEA8;
    case 180u: goto L_0889CEB8;
    case 181u: goto L_0889CEC8;
    case 182u: goto L_0889CED8;
    case 183u: goto L_0889CEE0;
    case 184u: goto L_0889CEE8;
    case 185u: goto L_0889CF00;
    case 186u: goto L_0889CF40;
    case 187u: goto L_0889CF48;
    case 188u: goto L_0889CF54;
    case 189u: goto L_0889CF7C;
    case 190u: goto L_0889CF88;
    case 191u: goto L_0889CFA8;
    case 192u: goto L_0889CFB4;
    case 193u: goto L_0889CFC0;
    case 194u: goto L_0889CFE0;
    case 195u: goto L_0889CFEC;
    case 196u: goto L_0889CFF8;
    case 197u: goto L_0889D000;
    case 198u: goto L_0889D010;
    case 199u: goto L_0889D020;
    case 200u: goto L_0889D02C;
    case 201u: goto L_0889D040;
    case 202u: goto L_0889D048;
    case 203u: goto L_0889D058;
    case 204u: goto L_0889D064;
    case 205u: goto L_0889D074;
    case 206u: goto L_0889D08C;
    case 207u: goto L_0889D094;
    case 208u: goto L_0889D0A4;
    case 209u: goto L_0889D0AC;
    case 210u: goto L_0889D0BC;
    case 211u: goto L_0889D0C8;
    case 212u: goto L_0889D0D0;
    case 213u: goto L_0889D0DC;
    case 214u: goto L_0889D0E4;
    case 215u: goto L_0889D0F0;
    case 216u: goto L_0889D10C;
    case 217u: goto L_0889D11C;
    case 218u: goto L_0889D12C;
    case 219u: goto L_0889D140;
    case 220u: goto L_0889D16C;
    case 221u: goto L_0889D170;
    case 222u: goto L_0889D178;
    case 223u: goto L_0889D190;
    case 224u: goto L_0889D1B0;
    case 225u: goto L_0889D1B8;
    case 226u: goto L_0889D1C0;
    case 227u: goto L_0889D1C8;
    case 228u: goto L_0889D1D4;
    case 229u: goto L_0889D1EC;
    case 230u: goto L_0889D1FC;
    case 231u: goto L_0889D204;
    case 232u: goto L_0889D20C;
    case 233u: goto L_0889D214;
    case 234u: goto L_0889D21C;
    case 235u: goto L_0889D224;
    case 236u: goto L_0889D22C;
    case 237u: goto L_0889D23C;
    case 238u: goto L_0889D250;
    case 239u: goto L_0889D264;
    case 240u: goto L_0889D274;
    case 241u: goto L_0889D284;
    case 242u: goto L_0889D294;
    case 243u: goto L_0889D2A4;
    case 244u: goto L_0889D2AC;
    case 245u: goto L_0889D2C4;
    case 246u: goto L_0889D300;
    case 247u: goto L_0889D37C;
    case 248u: goto L_0889D408;
    case 249u: goto L_0889D410;
    case 250u: goto L_0889D444;
    case 251u: goto L_0889D468;
    case 252u: goto L_0889D470;
    case 253u: goto L_0889D4A4;
    case 254u: goto L_0889D4DC;
    case 255u: goto L_0889D4E4;
    case 256u: goto L_0889D4FC;
    case 257u: goto L_0889D538;
    case 258u: goto L_0889D544;
    case 259u: goto L_0889D54C;
    case 260u: goto L_0889D560;
    case 261u: goto L_0889D568;
    case 262u: goto L_0889D580;
    case 263u: goto L_0889D5BC;
    case 264u: goto L_0889D5C4;
    case 265u: goto L_0889D5CC;
    case 266u: goto L_0889D5E4;
    case 267u: goto L_0889D620;
    case 268u: goto L_0889D62C;
    case 269u: goto L_0889D634;
    case 270u: goto L_0889D644;
    case 271u: goto L_0889D654;
    case 272u: goto L_0889D65C;
    case 273u: goto L_0889D66C;
    case 274u: goto L_0889D67C;
    case 275u: goto L_0889D694;
    case 276u: goto L_0889D6A4;
    case 277u: goto L_0889D6AC;
    case 278u: goto L_0889D6C4;
    case 279u: goto L_0889D6DC;
    case 280u: goto L_0889D6E8;
    case 281u: goto L_0889D6FC;
    case 282u: goto L_0889D708;
    case 283u: goto L_0889D71C;
    case 284u: goto L_0889D728;
    case 285u: goto L_0889D73C;
    case 286u: goto L_0889D744;
    case 287u: goto L_0889D760;
    case 288u: goto L_0889D780;
    case 289u: goto L_0889D78C;
    case 290u: goto L_0889D790;
    case 291u: goto L_0889D7CC;
    case 292u: goto L_0889D81C;
    case 293u: goto L_0889D824;
    case 294u: goto L_0889D828;
    case 295u: goto L_0889D830;
    case 296u: goto L_0889D838;
    case 297u: goto L_0889D840;
    case 298u: goto L_0889D850;
    case 299u: goto L_0889D864;
    case 300u: goto L_0889D878;
    case 301u: goto L_0889D880;
    case 302u: goto L_0889D88C;
    case 303u: goto L_0889D894;
    case 304u: goto L_0889D89C;
    case 305u: goto L_0889D8AC;
    case 306u: goto L_0889D8B0;
    case 307u: goto L_0889D8BC;
    case 308u: goto L_0889D8C4;
    case 309u: goto L_0889D8D8;
    case 310u: goto L_0889D8E4;
    case 311u: goto L_0889D8F4;
    case 312u: goto L_0889D918;
    case 313u: goto L_0889D964;
    case 314u: goto L_0889D974;
    case 315u: goto L_0889D97C;
    case 316u: goto L_0889D984;
    case 317u: goto L_0889D994;
    case 318u: goto L_0889D99C;
    case 319u: goto L_0889D9AC;
    case 320u: goto L_0889D9BC;
    case 321u: goto L_0889D9C0;
    case 322u: goto L_0889D9CC;
    case 323u: goto L_0889D9E0;
    case 324u: goto L_0889D9F4;
    case 325u: goto L_0889DA04;
    case 326u: goto L_0889DA0C;
    case 327u: goto L_0889DA14;
    case 328u: goto L_0889DA1C;
    case 329u: goto L_0889DA2C;
    case 330u: goto L_0889DA3C;
    case 331u: goto L_0889DA48;
    case 332u: goto L_0889DA64;
    case 333u: goto L_0889DA84;
    case 334u: goto L_0889DACC;
    case 335u: goto L_0889DAD4;
    case 336u: goto L_0889DB04;
    case 337u: goto L_0889DB10;
    case 338u: goto L_0889DB18;
    case 339u: goto L_0889DB28;
    case 340u: goto L_0889DB2C;
    case 341u: goto L_0889DB40;
    case 342u: goto L_0889DB6C;
    case 343u: goto L_0889DB94;
    case 344u: goto L_0889DBBC;
    case 345u: goto L_0889DBE4;
    case 346u: goto L_0889DC0C;
    case 347u: goto L_0889DC34;
    case 348u: goto L_0889DC5C;
    case 349u: goto L_0889DC84;
    case 350u: goto L_0889DCAC;
    case 351u: goto L_0889DCD4;
    case 352u: goto L_0889DCFC;
    case 353u: goto L_0889DD40;
    case 354u: goto L_0889DD48;
    case 355u: goto L_0889DD60;
    case 356u: goto L_0889DD68;
    case 357u: goto L_0889DD74;
    case 358u: goto L_0889DDB8;
    case 359u: goto L_0889DDD0;
    case 360u: goto L_0889DDE0;
    case 361u: goto L_0889DDF4;
    case 362u: goto L_0889DE04;
    case 363u: goto L_0889DE10;
    case 364u: goto L_0889DE18;
    case 365u: goto L_0889DE20;
    case 366u: goto L_0889DE34;
    case 367u: goto L_0889DE44;
    case 368u: goto L_0889DE54;
    case 369u: goto L_0889DE64;
    case 370u: goto L_0889DE6C;
    case 371u: goto L_0889DE7C;
    case 372u: goto L_0889DE84;
    case 373u: goto L_0889DE8C;
    case 374u: goto L_0889DEA0;
    case 375u: goto L_0889DEB4;
    case 376u: goto L_0889DEC0;
    case 377u: goto L_0889DED4;
    case 378u: goto L_0889DED8;
    case 379u: goto L_0889DEE8;
    case 380u: goto L_0889DF04;
    case 381u: goto L_0889DF18;
    case 382u: goto L_0889DF24;
    case 383u: goto L_0889DF2C;
    case 384u: goto L_0889DF3C;
    case 385u: goto L_0889DF4C;
    case 386u: goto L_0889DF5C;
    case 387u: goto L_0889DF6C;
    case 388u: goto L_0889DF7C;
    case 389u: goto L_0889DF84;
    case 390u: goto L_0889DF98;
    case 391u: goto L_0889DFA8;
    case 392u: goto L_0889DFB0;
    case 393u: goto L_0889DFCC;
    case 394u: goto L_0889DFE8;
    case 395u: goto L_0889DFF4;
    case 396u: goto L_0889E008;
    case 397u: goto L_0889E014;
    case 398u: goto L_0889E030;
    case 399u: goto L_0889E038;
    case 400u: goto L_0889E048;
    case 401u: goto L_0889E060;
    case 402u: goto L_0889E074;
    case 403u: goto L_0889E088;
    case 404u: goto L_0889E098;
    case 405u: goto L_0889E0A4;
    case 406u: goto L_0889E0B0;
    case 407u: goto L_0889E0DC;
    case 408u: goto L_0889E0E8;
    case 409u: goto L_0889E100;
    case 410u: goto L_0889E11C;
    case 411u: goto L_0889E130;
    case 412u: goto L_0889E144;
    case 413u: goto L_0889E15C;
    case 414u: goto L_0889E19C;
    case 415u: goto L_0889E1A4;
    case 416u: goto L_0889E1B0;
    case 417u: goto L_0889E1B8;
    case 418u: goto L_0889E1C0;
    case 419u: goto L_0889E1D8;
    case 420u: goto L_0889E214;
    case 421u: goto L_0889E228;
    case 422u: goto L_0889E238;
    case 423u: goto L_0889E24C;
    case 424u: goto L_0889E25C;
    case 425u: goto L_0889E280;
    case 426u: goto L_0889E290;
    case 427u: goto L_0889E2A0;
    case 428u: goto L_0889E2AC;
    case 429u: goto L_0889E2D0;
    case 430u: goto L_0889E2DC;
    case 431u: goto L_0889E2E4;
    case 432u: goto L_0889E2F4;
    case 433u: goto L_0889E30C;
    case 434u: goto L_0889E32C;
    case 435u: goto L_0889E338;
    case 436u: goto L_0889E340;
    case 437u: goto L_0889E348;
    case 438u: goto L_0889E350;
    case 439u: goto L_0889E35C;
    case 440u: goto L_0889E36C;
    case 441u: goto L_0889E374;
    case 442u: goto L_0889E37C;
    case 443u: goto L_0889E384;
    case 444u: goto L_0889E38C;
    case 445u: goto L_0889E394;
    case 446u: goto L_0889E3AC;
    case 447u: goto L_0889E3BC;
    case 448u: goto L_0889E3D0;
    case 449u: goto L_0889E3E0;
    case 450u: goto L_0889E3F0;
    case 451u: goto L_0889E3F8;
    case 452u: goto L_0889E408;
    case 453u: goto L_0889E420;
    case 454u: goto L_0889E430;
    case 455u: goto L_0889E438;
    case 456u: goto L_0889E450;
    case 457u: goto L_0889E468;
    case 458u: goto L_0889E474;
    case 459u: goto L_0889E488;
    case 460u: goto L_0889E494;
    case 461u: goto L_0889E4A8;
    case 462u: goto L_0889E4B4;
    case 463u: goto L_0889E4C8;
    case 464u: goto L_0889E4D0;
    case 465u: goto L_0889E4EC;
    case 466u: goto L_0889E50C;
    case 467u: goto L_0889E518;
    case 468u: goto L_0889E51C;
    case 469u: goto L_0889E544;
    case 470u: goto L_0889E5D8;
    case 471u: goto L_0889E604;
    case 472u: goto L_0889E624;
    case 473u: goto L_0889E644;
    case 474u: goto L_0889E66C;
    case 475u: goto L_0889E688;
    case 476u: goto L_0889E69C;
    case 477u: goto L_0889E6B4;
    case 478u: goto L_0889E6D0;
    case 479u: goto L_0889E6EC;
    case 480u: goto L_0889E710;
    case 481u: goto L_0889E71C;
    case 482u: goto L_0889E738;
    case 483u: goto L_0889E74C;
    case 484u: goto L_0889E758;
    case 485u: goto L_0889E764;
    case 486u: goto L_0889E780;
    case 487u: goto L_0889E794;
    case 488u: goto L_0889E79C;
    case 489u: goto L_0889E7A4;
    case 490u: goto L_0889E7C0;
    case 491u: goto L_0889E7D8;
    case 492u: goto L_0889E7EC;
    case 493u: goto L_0889E7F4;
    case 494u: goto L_0889E804;
    case 495u: goto L_0889E80C;
    case 496u: goto L_0889E814;
    case 497u: goto L_0889E81C;
    case 498u: goto L_0889E820;
    case 499u: goto L_0889E824;
    case 500u: goto L_0889E834;
    case 501u: goto L_0889E844;
    case 502u: goto L_0889E84C;
    case 503u: goto L_0889E860;
    case 504u: goto L_0889E870;
    case 505u: goto L_0889E87C;
    case 506u: goto L_0889E888;
    case 507u: goto L_0889E894;
    case 508u: goto L_0889E8A4;
    case 509u: goto L_0889E8B4;
    case 510u: goto L_0889E8D0;
    case 511u: goto L_0889E8D8;
    case 512u: goto L_0889E8EC;
    case 513u: goto L_0889E8F8;
    case 514u: goto L_0889E910;
    case 515u: goto L_0889E91C;
    case 516u: goto L_0889E93C;
    case 517u: goto L_0889E958;
    case 518u: goto L_0889E968;
    case 519u: goto L_0889E970;
    case 520u: goto L_0889E980;
    case 521u: goto L_0889E98C;
    case 522u: goto L_0889E998;
    case 523u: goto L_0889E9B0;
    case 524u: goto L_0889E9C4;
    case 525u: goto L_0889E9D8;
    case 526u: goto L_0889E9F0;
    case 527u: goto L_0889EA08;
    case 528u: goto L_0889EA14;
    case 529u: goto L_0889EA1C;
    case 530u: goto L_0889EA28;
    case 531u: goto L_0889EA38;
    case 532u: goto L_0889EA5C;
    case 533u: goto L_0889EA68;
    case 534u: goto L_0889EA84;
    case 535u: goto L_0889EA90;
    case 536u: goto L_0889EA9C;
    case 537u: goto L_0889EAA4;
    case 538u: goto L_0889EABC;
    case 539u: goto L_0889EAD8;
    case 540u: goto L_0889EAFC;
    case 541u: goto L_0889EB14;
    case 542u: goto L_0889EB20;
    case 543u: goto L_0889EB2C;
    case 544u: goto L_0889EB38;
    case 545u: goto L_0889EB40;
    case 546u: goto L_0889EB48;
    case 547u: goto L_0889EB50;
    case 548u: goto L_0889EB5C;
    case 549u: goto L_0889EB6C;
    case 550u: goto L_0889EB7C;
    case 551u: goto L_0889EB8C;
    case 552u: goto L_0889EB94;
    case 553u: goto L_0889EBA8;
    case 554u: goto L_0889EBB4;
    case 555u: goto L_0889EBC0;
    case 556u: goto L_0889EBCC;
    case 557u: goto L_0889EBD4;
    case 558u: goto L_0889EBDC;
    case 559u: goto L_0889EBE4;
    case 560u: goto L_0889EBEC;
    case 561u: goto L_0889EBF8;
    case 562u: goto L_0889EC0C;
    case 563u: goto L_0889EC14;
    case 564u: goto L_0889EC1C;
    case 565u: goto L_0889EC2C;
    case 566u: goto L_0889EC34;
    case 567u: goto L_0889EC3C;
    case 568u: goto L_0889EC44;
    case 569u: goto L_0889EC4C;
    case 570u: goto L_0889EC54;
    case 571u: goto L_0889EC5C;
    case 572u: goto L_0889EC64;
    case 573u: goto L_0889EC68;
    case 574u: goto L_0889EC70;
    case 575u: goto L_0889ED3C;
    case 576u: goto L_0889ED44;
    case 577u: goto L_0889ED50;
    case 578u: goto L_0889ED58;
    case 579u: goto L_0889ED5C;
    case 580u: goto L_0889ED70;
    case 581u: goto L_0889ED88;
    case 582u: goto L_0889ED98;
    case 583u: goto L_0889EDA4;
    case 584u: goto L_0889EDAC;
    case 585u: goto L_0889EDB8;
    case 586u: goto L_0889EDC8;
    case 587u: goto L_0889EDCC;
    case 588u: goto L_0889EDD8;
    case 589u: goto L_0889EDE8;
    case 590u: goto L_0889EE24;
    case 591u: goto L_0889EE30;
    case 592u: goto L_0889EE40;
    case 593u: goto L_0889EE48;
    case 594u: goto L_0889EE50;
    case 595u: goto L_0889EE58;
    case 596u: goto L_0889EE68;
    case 597u: goto L_0889EE6C;
    case 598u: goto L_0889EE74;
    case 599u: goto L_0889EE84;
    case 600u: goto L_0889EE8C;
    case 601u: goto L_0889EE94;
    case 602u: goto L_0889EE9C;
    case 603u: goto L_0889EEB8;
    case 604u: goto L_0889EEC0;
    case 605u: goto L_0889EED4;
    case 606u: goto L_0889EEE8;
    case 607u: goto L_0889EF04;
    case 608u: goto L_0889EF10;
    case 609u: goto L_0889EF1C;
    case 610u: goto L_0889EF2C;
    case 611u: goto L_0889EF34;
    case 612u: goto L_0889EF3C;
    case 613u: goto L_0889EF44;
    case 614u: goto L_0889EF60;
    case 615u: goto L_0889EF68;
    case 616u: goto L_0889EF78;
    case 617u: goto L_0889EF84;
    case 618u: goto L_0889EF8C;
    case 619u: goto L_0889EF94;
    case 620u: goto L_0889EFA0;
    case 621u: goto L_0889EFB4;
    case 622u: goto L_0889EFE4;
    case 623u: goto L_0889EFF8;
    case 624u: goto L_0889F004;
    case 625u: goto L_0889F014;
    case 626u: goto L_0889F01C;
    case 627u: goto L_0889F024;
    case 628u: goto L_0889F028;
    case 629u: goto L_0889F030;
    case 630u: goto L_0889F04C;
    case 631u: goto L_0889F078;
    case 632u: goto L_0889F084;
    case 633u: goto L_0889F098;
    case 634u: goto L_0889F0A4;
    case 635u: goto L_0889F0B4;
    case 636u: goto L_0889F0C4;
    case 637u: goto L_0889F0CC;
    case 638u: goto L_0889F0E0;
    case 639u: goto L_0889F0F4;
    case 640u: goto L_0889F10C;
    case 641u: goto L_0889F110;
    case 642u: goto L_0889F118;
    case 643u: goto L_0889F134;
    case 644u: goto L_0889F144;
    case 645u: goto L_0889F168;
    case 646u: goto L_0889F1E0;
    case 647u: goto L_0889F1E8;
    case 648u: goto L_0889F228;
    case 649u: goto L_0889F23C;
    case 650u: goto L_0889F248;
    case 651u: goto L_0889F25C;
    case 652u: goto L_0889F264;
    case 653u: goto L_0889F27C;
    case 654u: goto L_0889F280;
    case 655u: goto L_0889F294;
    case 656u: goto L_0889F2C0;
    case 657u: goto L_0889F2D0;
    case 658u: goto L_0889F2D8;
    case 659u: goto L_0889F2E4;
    case 660u: goto L_0889F2EC;
    case 661u: goto L_0889F364;
    case 662u: goto L_0889F36C;
    case 663u: goto L_0889F3A8;
    case 664u: goto L_0889F3B8;
    case 665u: goto L_0889F3C8;
    case 666u: goto L_0889F3E0;
    case 667u: goto L_0889F3E4;
    case 668u: goto L_0889F3FC;
    case 669u: goto L_0889F40C;
    case 670u: goto L_0889F414;
    case 671u: goto L_0889F420;
    case 672u: goto L_0889F430;
    case 673u: goto L_0889F438;
    case 674u: goto L_0889F44C;
    case 675u: goto L_0889F454;
    case 676u: goto L_0889F468;
    case 677u: goto L_0889F474;
    case 678u: goto L_0889F484;
    case 679u: goto L_0889F48C;
    case 680u: goto L_0889F4A0;
    case 681u: goto L_0889F4A8;
    case 682u: goto L_0889F4F8;
    case 683u: goto L_0889F508;
    case 684u: goto L_0889F518;
    case 685u: goto L_0889F524;
    case 686u: goto L_0889F530;
    case 687u: goto L_0889F548;
    case 688u: goto L_0889F550;
    case 689u: goto L_0889F55C;
    case 690u: goto L_0889F560;
    case 691u: goto L_0889F578;
    case 692u: goto L_0889F588;
    case 693u: goto L_0889F594;
    case 694u: goto L_0889F59C;
    case 695u: goto L_0889F5AC;
    case 696u: goto L_0889F5BC;
    case 697u: goto L_0889F5CC;
    case 698u: goto L_0889F5D4;
    case 699u: goto L_0889F5E0;
    case 700u: goto L_0889F5F0;
    case 701u: goto L_0889F600;
    case 702u: goto L_0889F60C;
    case 703u: goto L_0889F618;
    case 704u: goto L_0889F620;
    case 705u: goto L_0889F62C;
    case 706u: goto L_0889F638;
    case 707u: goto L_0889F644;
    case 708u: goto L_0889F658;
    case 709u: goto L_0889F674;
    case 710u: goto L_0889F684;
    case 711u: goto L_0889F69C;
    case 712u: goto L_0889F6B8;
    case 713u: goto L_0889F6C0;
    case 714u: goto L_0889F6D4;
    case 715u: goto L_0889F710;
    case 716u: goto L_0889F720;
    case 717u: goto L_0889F728;
    case 718u: goto L_0889F730;
    case 719u: goto L_0889F750;
    case 720u: goto L_0889F76C;
    case 721u: goto L_0889F774;
    case 722u: goto L_0889F77C;
    case 723u: goto L_0889F78C;
    case 724u: goto L_0889F794;
    case 725u: goto L_0889F7BC;
    case 726u: goto L_0889F7C4;
    case 727u: goto L_0889F7D8;
    case 728u: goto L_0889F7F4;
    case 729u: goto L_0889F7FC;
    case 730u: goto L_0889F804;
    case 731u: goto L_0889F820;
    case 732u: goto L_0889F82C;
    case 733u: goto L_0889F838;
    case 734u: goto L_0889F848;
    case 735u: goto L_0889F878;
    case 736u: goto L_0889F8B0;
    case 737u: goto L_0889F8B8;
    case 738u: goto L_0889F8C8;
    case 739u: goto L_0889F8E4;
    case 740u: goto L_0889F8F4;
    case 741u: goto L_0889F904;
    case 742u: goto L_0889F910;
    case 743u: goto L_0889F920;
    case 744u: goto L_0889F92C;
    case 745u: goto L_0889F938;
    case 746u: goto L_0889F940;
    case 747u: goto L_0889F944;
    case 748u: goto L_0889F94C;
    case 749u: goto L_0889F954;
    case 750u: goto L_0889F960;
    case 751u: goto L_0889F97C;
    case 752u: goto L_0889F98C;
    case 753u: goto L_0889F994;
    case 754u: goto L_0889F9A8;
    case 755u: goto L_0889F9B0;
    case 756u: goto L_0889F9C8;
    case 757u: goto L_0889F9E4;
    case 758u: goto L_0889F9F4;
    case 759u: goto L_0889FA04;
    case 760u: goto L_0889FA1C;
    case 761u: goto L_0889FA38;
    case 762u: goto L_0889FA40;
    case 763u: goto L_0889FA48;
    case 764u: goto L_0889FA50;
    case 765u: goto L_0889FA58;
    case 766u: goto L_0889FA60;
    case 767u: goto L_0889FA68;
    case 768u: goto L_0889FA6C;
    case 769u: goto L_0889FA74;
    case 770u: goto L_0889FA8C;
    case 771u: goto L_0889FAA4;
    case 772u: goto L_0889FAB8;
    case 773u: goto L_0889FAC0;
    case 774u: goto L_0889FAC8;
    case 775u: goto L_0889FAD0;
    case 776u: goto L_0889FADC;
    case 777u: goto L_0889FAEC;
    case 778u: goto L_0889FAF4;
    case 779u: goto L_0889FAF8;
    case 780u: goto L_0889FB00;
    case 781u: goto L_0889FB04;
    case 782u: goto L_0889FB10;
    case 783u: goto L_0889FB1C;
    case 784u: goto L_0889FB2C;
    case 785u: goto L_0889FB34;
    case 786u: goto L_0889FB38;
    case 787u: goto L_0889FB40;
    case 788u: goto L_0889FB48;
    case 789u: goto L_0889FB54;
    case 790u: goto L_0889FB5C;
    case 791u: goto L_0889FB64;
    case 792u: goto L_0889FB68;
    case 793u: goto L_0889FB70;
    case 794u: goto L_0889FB7C;
    case 795u: goto L_0889FB88;
    case 796u: goto L_0889FB90;
    case 797u: goto L_0889FB94;
    case 798u: goto L_0889FB9C;
    case 799u: goto L_0889FBA8;
    case 800u: goto L_0889FBB0;
    case 801u: goto L_0889FBBC;
    case 802u: goto L_0889FBC4;
    case 803u: goto L_0889FBD4;
    case 804u: goto L_0889FBDC;
    case 805u: goto L_0889FBE0;
    case 806u: goto L_0889FBE8;
    case 807u: goto L_0889FBF8;
    case 808u: goto L_0889FC00;
    case 809u: goto L_0889FC10;
    case 810u: goto L_0889FC18;
    case 811u: goto L_0889FC20;
    case 812u: goto L_0889FC3C;
    case 813u: goto L_0889FC4C;
    case 814u: goto L_0889FCB0;
    case 815u: goto L_0889FCC0;
    case 816u: goto L_0889FCC8;
    case 817u: goto L_0889FCD0;
    case 818u: goto L_0889FCE0;
    case 819u: goto L_0889FCF0;
    case 820u: goto L_0889FCF8;
    case 821u: goto L_0889FD00;
    case 822u: goto L_0889FD10;
    case 823u: goto L_0889FD18;
    case 824u: goto L_0889FD1C;
    case 825u: goto L_0889FD24;
    case 826u: goto L_0889FD54;
    case 827u: goto L_0889FD5C;
    case 828u: goto L_0889FD60;
    case 829u: goto L_0889FD68;
    case 830u: goto L_0889FD98;
    case 831u: goto L_0889FDB4;
    case 832u: goto L_0889FDBC;
    case 833u: goto L_0889FDC0;
    case 834u: goto L_0889FDC8;
    case 835u: goto L_0889FDD8;
    case 836u: goto L_0889FDE4;
    case 837u: goto L_0889FDEC;
    case 838u: goto L_0889FDF4;
    case 839u: goto L_0889FDFC;
    case 840u: goto L_0889FE04;
    case 841u: goto L_0889FE0C;
    case 842u: goto L_0889FE24;
    case 843u: goto L_0889FE30;
    case 844u: goto L_0889FE38;
    case 845u: goto L_0889FE3C;
    case 846u: goto L_0889FE44;
    case 847u: goto L_0889FE54;
    case 848u: goto L_0889FE5C;
    case 849u: goto L_0889FE64;
    case 850u: goto L_0889FE6C;
    case 851u: goto L_0889FE70;
    case 852u: goto L_0889FE78;
    case 853u: goto L_0889FE8C;
    case 854u: goto L_0889FE98;
    case 855u: goto L_0889FEA4;
    case 856u: goto L_0889FEAC;
    case 857u: goto L_0889FEB4;
    case 858u: goto L_0889FEB8;
    case 859u: goto L_0889FEC0;
    case 860u: goto L_0889FEE4;
    case 861u: goto L_0889FEF0;
    case 862u: goto L_0889FEF8;
    case 863u: goto L_0889FF00;
    case 864u: goto L_0889FF08;
    case 865u: goto L_0889FF10;
    case 866u: goto L_0889FF18;
    case 867u: goto L_0889FF20;
    case 868u: goto L_0889FF2C;
    case 869u: goto L_0889FF3C;
    case 870u: goto L_0889FF44;
    case 871u: goto L_0889FF4C;
    case 872u: goto L_0889FF54;
    case 873u: goto L_0889FF5C;
    case 874u: goto L_0889FF68;
    case 875u: goto L_0889FF70;
    case 876u: goto L_0889FF7C;
    case 877u: goto L_0889FF8C;
    case 878u: goto L_0889FF98;
    case 879u: goto L_0889FFA0;
    case 880u: goto L_0889FFA8;
    case 881u: goto L_0889FFB4;
    case 882u: goto L_0889FFBC;
    case 883u: goto L_0889FFC0;
    case 884u: goto L_0889FFD4;
    case 885u: goto L_0889FFE0;
    case 886u: goto L_0889FFE8;
    case 887u: goto L_0889FFF0;
    case 888u: goto L_0889FFF8;
    case 889u: goto L_0889FFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0889C000:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0889C024u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(484));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 112u, 0x08884834u>(ctx, &aot_mem) && ctx.pc == 0x0889C024u) goto L_0889C024;
    return;
L_0889C024:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 15u);
    ctx.gpr[20] = (0u | 999u);
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C054;
      }
      goto L_0889C04C;
    }
L_0889C04C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889C4AC;
      }
      goto L_0889C054;
    }
L_0889C054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C318;
      }
      goto L_0889C0AC;
    }
L_0889C0AC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C2FC;
      }
      goto L_0889C0E8;
    }
L_0889C0E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[30]);
    goto L_0889C0EC;
L_0889C0EC:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0889C0FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 433u, 0x088A6DC0u>(ctx, &aot_mem) && ctx.pc == 0x0889C0FCu) goto L_0889C0FC;
    return;
L_0889C0FC:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (16153u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0889C1A0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C1A0u) goto L_0889C1A0;
    return;
L_0889C1A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
      if (branch_taken) {
          goto L_0889C2E0;
      }
      goto L_0889C1A8;
    }
L_0889C1A8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0889C1ECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x0889C1ECu) goto L_0889C1EC;
    return;
L_0889C1EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C2E0;
      }
      goto L_0889C1F4;
    }
L_0889C1F4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0889C268u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x0889C268u) goto L_0889C268;
    return;
L_0889C268:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C2AC;
      }
      goto L_0889C274;
    }
L_0889C274:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889C2E0;
      }
      goto L_0889C28C;
    }
L_0889C28C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0889C2E0;
      }
      goto L_0889C2AC;
    }
L_0889C2AC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889C2E0;
      }
      goto L_0889C2C4;
    }
L_0889C2C4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[18] = (0u | 1u);
    goto L_0889C2E0;
L_0889C2E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[30]);
        goto L_0889C0EC;
    }
    goto L_0889C2FC;
L_0889C2FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C0AC;
      }
      goto L_0889C318;
    }
L_0889C318:
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C3AC;
      }
      goto L_0889C324;
    }
L_0889C324:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C348;
      }
      goto L_0889C32C;
    }
L_0889C32C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_0889C398;
      }
      goto L_0889C348;
    }
L_0889C348:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0889C398;
L_0889C398:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0889C3A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(520));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 112u, 0x08884834u>(ctx, &aot_mem) && ctx.pc == 0x0889C3A4u) goto L_0889C3A4;
    return;
L_0889C3A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889C4AC;
      }
      goto L_0889C3AC;
    }
L_0889C3AC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (18804u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 9214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x0889C3E8u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 376u, 0x089757BCu>(ctx, &aot_mem) && ctx.pc == 0x0889C3E8u) goto L_0889C3E8;
    return;
L_0889C3E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0889C4A8;
      }
      goto L_0889C3F4;
    }
L_0889C3F4:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0889C430u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 433u, 0x088A6DC0u>(ctx, &aot_mem) && ctx.pc == 0x0889C430u) goto L_0889C430;
    return;
L_0889C430:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (0x0889C444u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x0889C444u) goto L_0889C444;
    return;
L_0889C444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0889C480;
      }
      goto L_0889C464;
    }
L_0889C464:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889C480;
      }
      goto L_0889C478;
    }
L_0889C478:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0889C48C;
      }
      goto L_0889C480;
    }
L_0889C480:
    ctx.gpr[31] = (0x0889C488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x0889C488u) goto L_0889C488;
    return;
L_0889C488:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0889C48C;
L_0889C48C:
    ctx.gpr[31] = (0x0889C494u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x0889C494u) goto L_0889C494;
    return;
L_0889C494:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0889C4A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(532));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 112u, 0x08884834u>(ctx, &aot_mem) && ctx.pc == 0x0889C4A0u) goto L_0889C4A0;
    return;
L_0889C4A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889C4AC;
      }
      goto L_0889C4A8;
    }
L_0889C4A8:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889C4AC;
L_0889C4AC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889C4E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[31]);
    ctx.gpr[21] = (ctx.gpr[7] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0889C530u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0889C530u) goto L_0889C530;
    return;
L_0889C530:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C54C;
      }
      goto L_0889C538;
    }
L_0889C538:
    ctx.gpr[31] = (0x0889C540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 424u, 0x08ACA960u>(ctx, &aot_mem) && ctx.pc == 0x0889C540u) goto L_0889C540;
    return;
L_0889C540:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C54C;
      }
      goto L_0889C548;
    }
L_0889C548:
    ctx.gpr[17] = (0u | 1u);
    goto L_0889C54C;
L_0889C54C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C614;
      }
      goto L_0889C55C;
    }
L_0889C55C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C614;
      }
      goto L_0889C564;
    }
L_0889C564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C5F4;
      }
      goto L_0889C574;
    }
L_0889C574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0889C594u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850DACu>(ctx, &aot_mem) && ctx.pc == 0x0889C594u) goto L_0889C594;
    return;
L_0889C594:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C5BC;
      }
      goto L_0889C59C;
    }
L_0889C59C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889C5CC;
      }
      goto L_0889C5BC;
    }
L_0889C5BC:
    ctx.gpr[31] = (0x0889C5C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 521u, 0x0889AAD8u>(ctx, &aot_mem) && ctx.pc == 0x0889C5C4u) goto L_0889C5C4;
    return;
L_0889C5C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C5EC;
      }
      goto L_0889C5CC;
    }
L_0889C5CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_0889C65C;
    }
    goto L_0889C5E4;
L_0889C5E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C668;
      }
      goto L_0889C5EC;
    }
L_0889C5EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889D790;
      }
      goto L_0889C5F4;
    }
L_0889C5F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889C5CC;
      }
      goto L_0889C614;
    }
L_0889C614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C5CC;
      }
      goto L_0889C624;
    }
L_0889C624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0889C644u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850DACu>(ctx, &aot_mem) && ctx.pc == 0x0889C644u) goto L_0889C644;
    return;
L_0889C644:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C5CC;
      }
      goto L_0889C64C;
    }
L_0889C64C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889C5CC;
      }
      goto L_0889C65C;
    }
L_0889C65C:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C680;
      }
      goto L_0889C668;
    }
L_0889C668:
    ctx.gpr[31] = (0x0889C670u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0889C670u) goto L_0889C670;
    return;
L_0889C670:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C698;
      }
      goto L_0889C678;
    }
L_0889C678:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C71C;
      }
      goto L_0889C680;
    }
L_0889C680:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889C690u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x0889C690u) goto L_0889C690;
    return;
L_0889C690:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0889D790;
      }
      goto L_0889C698;
    }
L_0889C698:
    ctx.gpr[31] = (0x0889C6A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C6A0u) goto L_0889C6A0;
    return;
L_0889C6A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[6] = (0u | 6u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2094))))));
        goto L_0889C6C8;
    }
    goto L_0889C6B4;
L_0889C6B4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2094))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C6FC;
      }
      goto L_0889C6C4;
    }
L_0889C6C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2094))))));
    goto L_0889C6C8;
L_0889C6C8:
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C6FC;
      }
      goto L_0889C6D4;
    }
L_0889C6D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C6FC;
      }
      goto L_0889C6E8;
    }
L_0889C6E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C71C;
      }
      goto L_0889C6FC;
    }
L_0889C6FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0889C714;
      }
      goto L_0889C70C;
    }
L_0889C70C:
    ctx.gpr[31] = (0x0889C714u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x0889C714u) goto L_0889C714;
    return;
L_0889C714:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0889D790;
      }
      goto L_0889C71C;
    }
L_0889C71C:
    ctx.gpr[31] = (0x0889C724u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0889C724u) goto L_0889C724;
    return;
L_0889C724:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C770;
      }
      goto L_0889C72C;
    }
L_0889C72C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C770;
      }
      goto L_0889C73C;
    }
L_0889C73C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C770;
      }
      goto L_0889C74C;
    }
L_0889C74C:
    ctx.gpr[31] = (0x0889C754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C754u) goto L_0889C754;
    return;
L_0889C754:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2088)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0889C770;
      }
      goto L_0889C760;
    }
L_0889C760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C818;
      }
      goto L_0889C770;
    }
L_0889C770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889C7E8;
      }
      goto L_0889C78C;
    }
L_0889C78C:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x0889C7C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C7C0u) goto L_0889C7C0;
    return;
L_0889C7C0:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = ctx.fpr[24] / ctx.fpr[26];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C83C;
      }
      goto L_0889C7E0;
    }
L_0889C7E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
      if (branch_taken) {
          goto L_0889C82C;
      }
      goto L_0889C7E8;
    }
L_0889C7E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889D790;
      }
      goto L_0889C818;
    }
L_0889C818:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889C824u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x0889C824u) goto L_0889C824;
    return;
L_0889C824:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889D790;
      }
      goto L_0889C82C;
    }
L_0889C82C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D178;
      }
      goto L_0889C83C;
    }
L_0889C83C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[19] = (0u | 6u);
      if (branch_taken) {
          goto L_0889C878;
      }
      goto L_0889C84C;
    }
L_0889C84C:
    ctx.gpr[31] = (0x0889C854u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x0889C854u) goto L_0889C854;
    return;
L_0889C854:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C878;
      }
      goto L_0889C85C;
    }
L_0889C85C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0889C870u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C870u) goto L_0889C870;
    return;
L_0889C870:
    ctx.gpr[31] = (0x0889C878u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 2u, 0x089A000Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C878u) goto L_0889C878;
    return;
L_0889C878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0889C930;
      }
      goto L_0889C884;
    }
L_0889C884:
    ctx.gpr[31] = (0x0889C88Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0889C88Cu) goto L_0889C88C;
    return;
L_0889C88C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C930;
      }
      goto L_0889C894;
    }
L_0889C894:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2077)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C8E0;
      }
      goto L_0889C8A8;
    }
L_0889C8A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C8C8;
      }
      goto L_0889C8BC;
    }
L_0889C8BC:
    ctx.gpr[4] = (16480u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889C8E0;
      }
      goto L_0889C8C8;
    }
L_0889C8C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C8E0;
      }
      goto L_0889C8DC;
    }
L_0889C8DC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2077), static_cast<std::uint8_t>(0u));
    goto L_0889C8E0;
L_0889C8E0:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889C930;
      }
      goto L_0889C8F0;
    }
L_0889C8F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1776)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C91C;
      }
      goto L_0889C908;
    }
L_0889C908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C930;
      }
      goto L_0889C91C;
    }
L_0889C91C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x0889C928u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 629u, 0x08A8F084u>(ctx, &aot_mem) && ctx.pc == 0x0889C928u) goto L_0889C928;
    return;
L_0889C928:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0889D790;
      }
      goto L_0889C930;
    }
L_0889C930:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889C9B8;
      }
      goto L_0889C94C;
    }
L_0889C94C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889C9B8;
      }
      goto L_0889C994;
    }
L_0889C994:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0889C9B8;
L_0889C9B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1816)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C9EC;
      }
      goto L_0889C9C4;
    }
L_0889C9C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1820)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C9EC;
      }
      goto L_0889C9D0;
    }
L_0889C9D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1820)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CA04;
      }
      goto L_0889C9EC;
    }
L_0889C9EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
        goto L_0889CA28;
    }
    goto L_0889C9FC;
L_0889C9FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CC4C;
      }
      goto L_0889CA04;
    }
L_0889CA04:
    ctx.gpr[31] = (0x0889CA0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 92u, 0x089A0714u>(ctx, &aot_mem) && ctx.pc == 0x0889CA0Cu) goto L_0889CA0C;
    return;
L_0889CA0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1816), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0889D790;
      }
      goto L_0889CA28;
    }
L_0889CA28:
    ctx.gpr[21] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CC4C;
      }
      goto L_0889CA38;
    }
L_0889CA38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889CC4C;
      }
      goto L_0889CA48;
    }
L_0889CA48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CC4C;
      }
      goto L_0889CA58;
    }
L_0889CA58:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CC4C;
      }
      goto L_0889CA60;
    }
L_0889CA60:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[22] = (0u | 58u);
      if (branch_taken) {
          goto L_0889CAE8;
      }
      goto L_0889CA70;
    }
L_0889CA70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1776)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CAE8;
      }
      goto L_0889CA88;
    }
L_0889CA88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889CAE8;
      }
      goto L_0889CA9C;
    }
L_0889CA9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0889CAC0;
      }
      goto L_0889CAAC;
    }
L_0889CAAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889CAD0;
      }
      goto L_0889CAC0;
    }
L_0889CAC0:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889CAE8;
      }
      goto L_0889CAD0;
    }
L_0889CAD0:
    ctx.gpr[31] = (0x0889CAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0889CAD8u) goto L_0889CAD8;
    return;
L_0889CAD8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CC4C;
      }
      goto L_0889CAE8;
    }
L_0889CAE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0889CB0C;
      }
      goto L_0889CAF8;
    }
L_0889CAF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889CB14;
      }
      goto L_0889CB0C;
    }
L_0889CB0C:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0889CB14;
L_0889CB14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CBB4;
      }
      goto L_0889CB28;
    }
L_0889CB28:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0889CB6C;
      }
      goto L_0889CB58;
    }
L_0889CB58:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x0889CB6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 475u, 0x08899D74u>(ctx, &aot_mem) && ctx.pc == 0x0889CB6Cu) goto L_0889CB6C;
    return;
L_0889CB6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CB94;
      }
      goto L_0889CB78;
    }
L_0889CB78:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[31] = (0x0889CB8Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 726u, 0x08977AB8u>(ctx, &aot_mem) && ctx.pc == 0x0889CB8Cu) goto L_0889CB8C;
    return;
L_0889CB8C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    goto L_0889CB94;
L_0889CB94:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[31] = (0x0889CBACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 311u, 0x089A16E4u>(ctx, &aot_mem) && ctx.pc == 0x0889CBACu) goto L_0889CBAC;
    return;
L_0889CBAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CBC4;
      }
      goto L_0889CBB4;
    }
L_0889CBB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889CBC4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 336u, 0x089A1828u>(ctx, &aot_mem) && ctx.pc == 0x0889CBC4u) goto L_0889CBC4;
    return;
L_0889CBC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_0889CC14;
      }
      goto L_0889CBD4;
    }
L_0889CBD4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889CC14;
      }
      goto L_0889CBE8;
    }
L_0889CBE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889CC0Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x0889CC0Cu) goto L_0889CC0C;
    return;
L_0889CC0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D170;
      }
      goto L_0889CC14;
    }
L_0889CC14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D170;
      }
      goto L_0889CC24;
    }
L_0889CC24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (63488u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889D170;
      }
      goto L_0889CC4C;
    }
L_0889CC4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CE24;
      }
      goto L_0889CC60;
    }
L_0889CC60:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889CE24;
      }
      goto L_0889CC70;
    }
L_0889CC70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889CE24;
      }
      goto L_0889CC84;
    }
L_0889CC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889CE24;
      }
      goto L_0889CC98;
    }
L_0889CC98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CCB8;
      }
      goto L_0889CCA8;
    }
L_0889CCA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CDAC;
      }
      goto L_0889CCB8;
    }
L_0889CCB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x0889CCD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 228u, 0x088D91E4u>(ctx, &aot_mem) && ctx.pc == 0x0889CCD4u) goto L_0889CCD4;
    return;
L_0889CCD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x0889CCE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 516u, 0x0899EDBCu>(ctx, &aot_mem) && ctx.pc == 0x0889CCE0u) goto L_0889CCE0;
    return;
L_0889CCE0:
    ctx.gpr[31] = (0x0889CCE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0889CCE8u) goto L_0889CCE8;
    return;
L_0889CCE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15636)));
    ctx.gpr[31] = (0x0889CD00u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15632)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x0889CD00u) goto L_0889CD00;
    return;
L_0889CD00:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15644)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15640)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889CD3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 262u, 0x089A12E4u>(ctx, &aot_mem) && ctx.pc == 0x0889CD3Cu) goto L_0889CD3C;
    return;
L_0889CD3C:
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889CDC0;
      }
      goto L_0889CD4C;
    }
L_0889CD4C:
    ctx.gpr[31] = (0x0889CD54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0889CD54u) goto L_0889CD54;
    return;
L_0889CD54:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15652)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15648)));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0889CD74u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x0889CD74u) goto L_0889CD74;
    return;
L_0889CD74:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889CDA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 247u, 0x089A11A4u>(ctx, &aot_mem) && ctx.pc == 0x0889CDA4u) goto L_0889CDA4;
    return;
L_0889CDA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D12C;
      }
      goto L_0889CDAC;
    }
L_0889CDAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889CDB8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 686u, 0x088877F4u>(ctx, &aot_mem) && ctx.pc == 0x0889CDB8u) goto L_0889CDB8;
    return;
L_0889CDB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0889D790;
      }
      goto L_0889CDC0;
    }
L_0889CDC0:
    ctx.gpr[31] = (0x0889CDC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0889CDC8u) goto L_0889CDC8;
    return;
L_0889CDC8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15660)));
    ctx.gpr[31] = (0x0889CDE0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15656)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x0889CDE0u) goto L_0889CDE0;
    return;
L_0889CDE0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15596)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15592)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889CE1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 247u, 0x089A11A4u>(ctx, &aot_mem) && ctx.pc == 0x0889CE1Cu) goto L_0889CE1C;
    return;
L_0889CE1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D12C;
      }
      goto L_0889CE24;
    }
L_0889CE24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CE68;
      }
      goto L_0889CE34;
    }
L_0889CE34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CE68;
      }
      goto L_0889CE44;
    }
L_0889CE44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (63488u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    goto L_0889CE68;
L_0889CE68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D12C;
      }
      goto L_0889CE78;
    }
L_0889CE78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D12C;
      }
      goto L_0889CE88;
    }
L_0889CE88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CEC8;
      }
      goto L_0889CE98;
    }
L_0889CE98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CEC8;
      }
      goto L_0889CEA8;
    }
L_0889CEA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CEC8;
      }
      goto L_0889CEB8;
    }
L_0889CEB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CEE0;
      }
      goto L_0889CEC8;
    }
L_0889CEC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CF48;
      }
      goto L_0889CED8;
    }
L_0889CED8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D000;
      }
      goto L_0889CEE0;
    }
L_0889CEE0:
    ctx.gpr[31] = (0x0889CEE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0889CEE8u) goto L_0889CEE8;
    return;
L_0889CEE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15668)));
    ctx.gpr[31] = (0x0889CF00u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15664)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x0889CF00u) goto L_0889CF00;
    return;
L_0889CF00:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15548)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15544)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889CF40u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 659u, 0x08887620u>(ctx, &aot_mem) && ctx.pc == 0x0889CF40u) goto L_0889CF40;
    return;
L_0889CF40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0889D790;
      }
      goto L_0889CF48;
    }
L_0889CF48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0889CFF8;
      }
      goto L_0889CF54;
    }
L_0889CF54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 18 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CFA8;
      }
      goto L_0889CF7C;
    }
L_0889CF7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CFB4;
      }
      goto L_0889CF88;
    }
L_0889CF88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CFB4;
      }
      goto L_0889CFA8;
    }
L_0889CFA8:
    ctx.gpr[4] = (16576u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889D000;
      }
      goto L_0889CFB4;
    }
L_0889CFB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CFEC;
      }
      goto L_0889CFC0;
    }
L_0889CFC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CFEC;
      }
      goto L_0889CFE0;
    }
L_0889CFE0:
    ctx.gpr[4] = (16512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889D000;
      }
      goto L_0889CFEC;
    }
L_0889CFEC:
    ctx.gpr[4] = (16384u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889D000;
      }
      goto L_0889CFF8;
    }
L_0889CFF8:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0889D000;
L_0889D000:
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889D0E4;
      }
      goto L_0889D010;
    }
L_0889D010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D12C;
      }
      goto L_0889D020;
    }
L_0889D020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0889D12C;
      }
      goto L_0889D02C;
    }
L_0889D02C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D12C;
      }
      goto L_0889D040;
    }
L_0889D040:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D12C;
      }
      goto L_0889D048;
    }
L_0889D048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D12C;
      }
      goto L_0889D058;
    }
L_0889D058:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D064u);
    ctx.gpr[5] = (0u | 138u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x0889D064u) goto L_0889D064;
    return;
L_0889D064:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D074u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 336u, 0x089A1828u>(ctx, &aot_mem) && ctx.pc == 0x0889D074u) goto L_0889D074;
    return;
L_0889D074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0889D12C;
      }
      goto L_0889D08C;
    }
L_0889D08C:
    ctx.gpr[31] = (0x0889D094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D094u) goto L_0889D094;
    return;
L_0889D094:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2088)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D12C;
      }
      goto L_0889D0A4;
    }
L_0889D0A4:
    ctx.gpr[31] = (0x0889D0ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0889D0ACu) goto L_0889D0AC;
    return;
L_0889D0AC:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D0D0;
      }
      goto L_0889D0BC;
    }
L_0889D0BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D0C8u);
    ctx.gpr[5] = (0u | 133u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x0889D0C8u) goto L_0889D0C8;
    return;
L_0889D0C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D12C;
      }
      goto L_0889D0D0;
    }
L_0889D0D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D0DCu);
    ctx.gpr[5] = (0u | 131u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x0889D0DCu) goto L_0889D0DC;
    return;
L_0889D0DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D12C;
      }
      goto L_0889D0E4;
    }
L_0889D0E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D0F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x0889D0F0u) goto L_0889D0F0;
    return;
L_0889D0F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D12C;
      }
      goto L_0889D10C;
    }
L_0889D10C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D12C;
      }
      goto L_0889D11C;
    }
L_0889D11C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1788), ctx.gpr[4]);
    ctx.gpr[31] = (0x0889D12Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x0889D12Cu) goto L_0889D12C;
    return;
L_0889D12C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D170;
      }
      goto L_0889D140;
    }
L_0889D140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x0889D16Cu);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x0889D16Cu) goto L_0889D16C;
    return;
L_0889D16C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0889D170;
L_0889D170:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D78C;
      }
      goto L_0889D178;
    }
L_0889D178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D204;
      }
      goto L_0889D190;
    }
L_0889D190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D204;
      }
      goto L_0889D1B0;
    }
L_0889D1B0:
    ctx.gpr[31] = (0x0889D1B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0889D1B8u) goto L_0889D1B8;
    return;
L_0889D1B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D1D4;
      }
      goto L_0889D1C0;
    }
L_0889D1C0:
    ctx.gpr[31] = (0x0889D1C8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x0889D1C8u) goto L_0889D1C8;
    return;
L_0889D1C8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D204;
      }
      goto L_0889D1D4;
    }
L_0889D1D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0889D1ECu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D1ECu) goto L_0889D1EC;
    return;
L_0889D1EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D214;
      }
      goto L_0889D1FC;
    }
L_0889D1FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D22C;
      }
      goto L_0889D204;
    }
L_0889D204:
    ctx.gpr[31] = (0x0889D20Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x0889D20Cu) goto L_0889D20C;
    return;
L_0889D20C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0889D790;
      }
      goto L_0889D214;
    }
L_0889D214:
    ctx.gpr[31] = (0x0889D21Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x0889D21Cu) goto L_0889D21C;
    return;
L_0889D21C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D22C;
      }
      goto L_0889D224;
    }
L_0889D224:
    ctx.gpr[31] = (0x0889D22Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 2u, 0x089A000Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D22Cu) goto L_0889D22C;
    return;
L_0889D22C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D78C;
      }
      goto L_0889D23C;
    }
L_0889D23C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D78C;
      }
      goto L_0889D250;
    }
L_0889D250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D634;
      }
      goto L_0889D264;
    }
L_0889D264:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889D634;
      }
      goto L_0889D274;
    }
L_0889D274:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889D634;
      }
      goto L_0889D284;
    }
L_0889D284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x0889D294u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 228u, 0x088D91E4u>(ctx, &aot_mem) && ctx.pc == 0x0889D294u) goto L_0889D294;
    return;
L_0889D294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x0889D2A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 516u, 0x0899EDBCu>(ctx, &aot_mem) && ctx.pc == 0x0889D2A4u) goto L_0889D2A4;
    return;
L_0889D2A4:
    ctx.gpr[31] = (0x0889D2ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0889D2ACu) goto L_0889D2AC;
    return;
L_0889D2AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15652)));
    ctx.gpr[31] = (0x0889D2C4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15648)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x0889D2C4u) goto L_0889D2C4;
    return;
L_0889D2C4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15556)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15552)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889D300u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 262u, 0x089A12E4u>(ctx, &aot_mem) && ctx.pc == 0x0889D300u) goto L_0889D300;
    return;
L_0889D300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889D54C;
      }
      goto L_0889D37C;
    }
L_0889D37C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889D410;
      }
      goto L_0889D408;
    }
L_0889D408:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0889D444;
      }
      goto L_0889D410;
    }
L_0889D410:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0889D444;
L_0889D444:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889D470;
      }
      goto L_0889D468;
    }
L_0889D468:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0889D4A4;
      }
      goto L_0889D470;
    }
L_0889D470:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0889D4A4;
L_0889D4A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889D544;
      }
      goto L_0889D4DC;
    }
L_0889D4DC:
    ctx.gpr[31] = (0x0889D4E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0889D4E4u) goto L_0889D4E4;
    return;
L_0889D4E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15676)));
    ctx.gpr[31] = (0x0889D4FCu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15672)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x0889D4FCu) goto L_0889D4FC;
    return;
L_0889D4FC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15588)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15584)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889D538u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 247u, 0x089A11A4u>(ctx, &aot_mem) && ctx.pc == 0x0889D538u) goto L_0889D538;
    return;
L_0889D538:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D544u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x0889D544u) goto L_0889D544;
    return;
L_0889D544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D62C;
      }
      goto L_0889D54C;
    }
L_0889D54C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1340)));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889D5C4;
      }
      goto L_0889D560;
    }
L_0889D560:
    ctx.gpr[31] = (0x0889D568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0889D568u) goto L_0889D568;
    return;
L_0889D568:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15572)));
    ctx.gpr[31] = (0x0889D580u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15568)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x0889D580u) goto L_0889D580;
    return;
L_0889D580:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15580)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15576)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889D5BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 247u, 0x089A11A4u>(ctx, &aot_mem) && ctx.pc == 0x0889D5BCu) goto L_0889D5BC;
    return;
L_0889D5BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D62C;
      }
      goto L_0889D5C4;
    }
L_0889D5C4:
    ctx.gpr[31] = (0x0889D5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0889D5CCu) goto L_0889D5CC;
    return;
L_0889D5CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15676)));
    ctx.gpr[31] = (0x0889D5E4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15672)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x0889D5E4u) goto L_0889D5E4;
    return;
L_0889D5E4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15588)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15584)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889D620u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 247u, 0x089A11A4u>(ctx, &aot_mem) && ctx.pc == 0x0889D620u) goto L_0889D620;
    return;
L_0889D620:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D62Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x0889D62Cu) goto L_0889D62C;
    return;
L_0889D62C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D78C;
      }
      goto L_0889D634;
    }
L_0889D634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D78C;
      }
      goto L_0889D644;
    }
L_0889D644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D78C;
      }
      goto L_0889D654;
    }
L_0889D654:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D78C;
      }
      goto L_0889D65C;
    }
L_0889D65C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D78C;
      }
      goto L_0889D66C;
    }
L_0889D66C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D694;
      }
      goto L_0889D67C;
    }
L_0889D67C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D6AC;
      }
      goto L_0889D694;
    }
L_0889D694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x0889D6A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 267u, 0x088854D8u>(ctx, &aot_mem) && ctx.pc == 0x0889D6A4u) goto L_0889D6A4;
    return;
L_0889D6A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D78C;
      }
      goto L_0889D6AC;
    }
L_0889D6AC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D6DC;
      }
      goto L_0889D6C4;
    }
L_0889D6C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D6E8;
      }
      goto L_0889D6DC;
    }
L_0889D6DC:
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0889D744;
      }
      goto L_0889D6E8;
    }
L_0889D6E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D708;
      }
      goto L_0889D6FC;
    }
L_0889D6FC:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0889D744;
      }
      goto L_0889D708;
    }
L_0889D708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D728;
      }
      goto L_0889D71C;
    }
L_0889D71C:
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0889D744;
      }
      goto L_0889D728;
    }
L_0889D728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D744;
      }
      goto L_0889D73C;
    }
L_0889D73C:
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0889D744;
L_0889D744:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889D760u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 472u, 0x0888E3F0u>(ctx, &aot_mem) && ctx.pc == 0x0889D760u) goto L_0889D760;
    return;
L_0889D760:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[31] = (0x0889D780u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 678u, 0x089A2D68u>(ctx, &aot_mem) && ctx.pc == 0x0889D780u) goto L_0889D780;
    return;
L_0889D780:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D78Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x0889D78Cu) goto L_0889D78C;
    return;
L_0889D78C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889D790;
L_0889D790:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D7CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x0889D81Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0889D81Cu) goto L_0889D81C;
    return;
L_0889D81C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D828;
      }
      goto L_0889D824;
    }
L_0889D824:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    goto L_0889D828;
L_0889D828:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D918;
      }
      goto L_0889D830;
    }
L_0889D830:
    ctx.gpr[31] = (0x0889D838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 424u, 0x08ACA960u>(ctx, &aot_mem) && ctx.pc == 0x0889D838u) goto L_0889D838;
    return;
L_0889D838:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D878;
      }
      goto L_0889D840;
    }
L_0889D840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D918;
      }
      goto L_0889D850;
    }
L_0889D850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_0889D918;
      }
      goto L_0889D864;
    }
L_0889D864:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889D918;
      }
      goto L_0889D878;
    }
L_0889D878:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D8BC;
      }
      goto L_0889D880;
    }
L_0889D880:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2949)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D8BC;
      }
      goto L_0889D88C;
    }
L_0889D88C:
    ctx.gpr[31] = (0x0889D894u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 845u, 0x089A38C0u>(ctx, &aot_mem) && ctx.pc == 0x0889D894u) goto L_0889D894;
    return;
L_0889D894:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
        goto L_0889D8B0;
    }
    goto L_0889D89C;
L_0889D89C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D8BC;
      }
      goto L_0889D8AC;
    }
L_0889D8AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    goto L_0889D8B0;
L_0889D8B0:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D8C4;
      }
      goto L_0889D8BC;
    }
L_0889D8BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0889D918;
      }
      goto L_0889D8C4;
    }
L_0889D8C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[6] = (0u | 1000u);
    ctx.gpr[31] = (0x0889D8D8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x0889D8D8u) goto L_0889D8D8;
    return;
L_0889D8D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D8E4u);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 609u, 0x0899F378u>(ctx, &aot_mem) && ctx.pc == 0x0889D8E4u) goto L_0889D8E4;
    return;
L_0889D8E4:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D8F4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x0889D8F4u) goto L_0889D8F4;
    return;
L_0889D8F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0889E51C;
      }
      goto L_0889D918;
    }
L_0889D918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (63488u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D974;
      }
      goto L_0889D964;
    }
L_0889D964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D984;
      }
      goto L_0889D974;
    }
L_0889D974:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D99C;
      }
      goto L_0889D97C;
    }
L_0889D97C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DA14;
      }
      goto L_0889D984;
    }
L_0889D984:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D994u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x0889D994u) goto L_0889D994;
    return;
L_0889D994:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0889E51C;
      }
      goto L_0889D99C;
    }
L_0889D99C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2094))))));
        goto L_0889D9C0;
    }
    goto L_0889D9AC;
L_0889D9AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2094))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D9F4;
      }
      goto L_0889D9BC;
    }
L_0889D9BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2094))))));
    goto L_0889D9C0;
L_0889D9C0:
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D9F4;
      }
      goto L_0889D9CC;
    }
L_0889D9CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D9F4;
      }
      goto L_0889D9E0;
    }
L_0889D9E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DA14;
      }
      goto L_0889D9F4;
    }
L_0889D9F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DA0C;
      }
      goto L_0889DA04;
    }
L_0889DA04:
    ctx.gpr[31] = (0x0889DA0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x0889DA0Cu) goto L_0889DA0C;
    return;
L_0889DA0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889E51C;
      }
      goto L_0889DA14;
    }
L_0889DA14:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DA48;
      }
      goto L_0889DA1C;
    }
L_0889DA1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DA48;
      }
      goto L_0889DA2C;
    }
L_0889DA2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DA48;
      }
      goto L_0889DA3C;
    }
L_0889DA3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2088)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0889DB04;
      }
      goto L_0889DA48;
    }
L_0889DA48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889DAD4;
      }
      goto L_0889DA64;
    }
L_0889DA64:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x0889DA84u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x0889DA84u) goto L_0889DA84;
    return;
L_0889DA84:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (16384u << 16u);
      if (branch_taken) {
          goto L_0889DB2C;
      }
      goto L_0889DACC;
    }
L_0889DACC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
      if (branch_taken) {
          goto L_0889DB18;
      }
      goto L_0889DAD4;
    }
L_0889DAD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889E51C;
      }
      goto L_0889DB04;
    }
L_0889DB04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889DB10u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x0889DB10u) goto L_0889DB10;
    return;
L_0889DB10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889E51C;
      }
      goto L_0889DB18;
    }
L_0889DB18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DB6C;
      }
      goto L_0889DB28;
    }
L_0889DB28:
    ctx.gpr[4] = (16384u << 16u);
    goto L_0889DB2C;
L_0889DB2C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889DB6C;
      }
      goto L_0889DB40;
    }
L_0889DB40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889DDD0;
      }
      goto L_0889DB6C;
    }
L_0889DB6C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DCFC;
      }
      goto L_0889DB94;
    }
L_0889DB94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DCFC;
      }
      goto L_0889DBBC;
    }
L_0889DBBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DCFC;
      }
      goto L_0889DBE4;
    }
L_0889DBE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DCFC;
      }
      goto L_0889DC0C;
    }
L_0889DC0C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DCFC;
      }
      goto L_0889DC34;
    }
L_0889DC34:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DCFC;
      }
      goto L_0889DC5C;
    }
L_0889DC5C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DCFC;
      }
      goto L_0889DC84;
    }
L_0889DC84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DCFC;
      }
      goto L_0889DCAC;
    }
L_0889DCAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DCFC;
      }
      goto L_0889DCD4;
    }
L_0889DCD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DD48;
      }
      goto L_0889DCFC;
    }
L_0889DCFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0889DD40;
    }
    goto L_0889DD40;
L_0889DD40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DDD0;
      }
      goto L_0889DD48;
    }
L_0889DD48:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889DD74;
      }
      goto L_0889DD60;
    }
L_0889DD60:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DD74;
      }
      goto L_0889DD68;
    }
L_0889DD68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2998)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DDD0;
      }
      goto L_0889DD74;
    }
L_0889DD74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0889DDB8;
    }
    goto L_0889DDB8;
L_0889DDB8:
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DDD0;
      }
      goto L_0889DDD0;
    }
L_0889DDD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DDF4;
      }
      goto L_0889DDE0;
    }
L_0889DDE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E2E4;
      }
      goto L_0889DDF4;
    }
L_0889DDF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DE10;
      }
      goto L_0889DE04;
    }
L_0889DE04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889DE6C;
      }
      goto L_0889DE10;
    }
L_0889DE10:
    ctx.gpr[31] = (0x0889DE18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x0889DE18u) goto L_0889DE18;
    return;
L_0889DE18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DE6C;
      }
      goto L_0889DE20;
    }
L_0889DE20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0889DE34u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x0889DE34u) goto L_0889DE34;
    return;
L_0889DE34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DE64;
      }
      goto L_0889DE44;
    }
L_0889DE44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DE64;
      }
      goto L_0889DE54;
    }
L_0889DE54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DE6C;
      }
      goto L_0889DE64;
    }
L_0889DE64:
    ctx.gpr[31] = (0x0889DE6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 2u, 0x089A000Cu>(ctx, &aot_mem) && ctx.pc == 0x0889DE6Cu) goto L_0889DE6C;
    return;
L_0889DE6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DF2C;
      }
      goto L_0889DE7C;
    }
L_0889DE7C:
    ctx.gpr[31] = (0x0889DE84u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0889DE84u) goto L_0889DE84;
    return;
L_0889DE84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DF2C;
      }
      goto L_0889DE8C;
    }
L_0889DE8C:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2077)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DED8;
      }
      goto L_0889DEA0;
    }
L_0889DEA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DEC0;
      }
      goto L_0889DEB4;
    }
L_0889DEB4:
    ctx.gpr[4] = (16480u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889DED8;
      }
      goto L_0889DEC0;
    }
L_0889DEC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DED8;
      }
      goto L_0889DED4;
    }
L_0889DED4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2077), static_cast<std::uint8_t>(0u));
    goto L_0889DED8;
L_0889DED8:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889DF2C;
      }
      goto L_0889DEE8;
    }
L_0889DEE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1776)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889DF18;
      }
      goto L_0889DF04;
    }
L_0889DF04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DF2C;
      }
      goto L_0889DF18;
    }
L_0889DF18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x0889DF24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 629u, 0x08A8F084u>(ctx, &aot_mem) && ctx.pc == 0x0889DF24u) goto L_0889DF24;
    return;
L_0889DF24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0889E51C;
      }
      goto L_0889DF2C;
    }
L_0889DF2C:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889E038;
      }
      goto L_0889DF3C;
    }
L_0889DF3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E038;
      }
      goto L_0889DF4C;
    }
L_0889DF4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E038;
      }
      goto L_0889DF5C;
    }
L_0889DF5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DF7C;
      }
      goto L_0889DF6C;
    }
L_0889DF6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E038;
      }
      goto L_0889DF7C;
    }
L_0889DF7C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E038;
      }
      goto L_0889DF84;
    }
L_0889DF84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889DFB0;
      }
      goto L_0889DF98;
    }
L_0889DF98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889DFA8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 336u, 0x089A1828u>(ctx, &aot_mem) && ctx.pc == 0x0889DFA8u) goto L_0889DFA8;
    return;
L_0889DFA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E030;
      }
      goto L_0889DFB0;
    }
L_0889DFB0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889DFE8;
      }
      goto L_0889DFCC;
    }
L_0889DFCC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0889DFE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 475u, 0x08899D74u>(ctx, &aot_mem) && ctx.pc == 0x0889DFE8u) goto L_0889DFE8;
    return;
L_0889DFE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E014;
      }
      goto L_0889DFF4;
    }
L_0889DFF4:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[31] = (0x0889E008u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 726u, 0x08977AB8u>(ctx, &aot_mem) && ctx.pc == 0x0889E008u) goto L_0889E008;
    return;
L_0889E008:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0889E014;
L_0889E014:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[31] = (0x0889E030u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 311u, 0x089A16E4u>(ctx, &aot_mem) && ctx.pc == 0x0889E030u) goto L_0889E030;
    return;
L_0889E030:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E518;
      }
      goto L_0889E038;
    }
L_0889E038:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889E228;
      }
      goto L_0889E048;
    }
L_0889E048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E228;
      }
      goto L_0889E060;
    }
L_0889E060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E228;
      }
      goto L_0889E074;
    }
L_0889E074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E228;
      }
      goto L_0889E088;
    }
L_0889E088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E1A4;
      }
      goto L_0889E098;
    }
L_0889E098:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889E0A4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x0889E0A4u) goto L_0889E0A4;
    return;
L_0889E0A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x0889E0B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 228u, 0x088D91E4u>(ctx, &aot_mem) && ctx.pc == 0x0889E0B0u) goto L_0889E0B0;
    return;
L_0889E0B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0889E0DCu);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x0889E0DCu) goto L_0889E0DC;
    return;
L_0889E0DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0889E0E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0889E0E8u) goto L_0889E0E8;
    return;
L_0889E0E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15556)));
    ctx.gpr[31] = (0x0889E100u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15552)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x0889E100u) goto L_0889E100;
    return;
L_0889E100:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889E11Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 262u, 0x089A12E4u>(ctx, &aot_mem) && ctx.pc == 0x0889E11Cu) goto L_0889E11C;
    return;
L_0889E11C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E1B8;
      }
      goto L_0889E130;
    }
L_0889E130:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0889E144u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0889E144u) goto L_0889E144;
    return;
L_0889E144:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15684)));
    ctx.gpr[31] = (0x0889E15Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15680)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x0889E15Cu) goto L_0889E15C;
    return;
L_0889E15C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15660)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15656)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0889E19Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 247u, 0x089A11A4u>(ctx, &aot_mem) && ctx.pc == 0x0889E19Cu) goto L_0889E19C;
    return;
L_0889E19C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E214;
      }
      goto L_0889E1A4;
    }
L_0889E1A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889E1B0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 686u, 0x088877F4u>(ctx, &aot_mem) && ctx.pc == 0x0889E1B0u) goto L_0889E1B0;
    return;
L_0889E1B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889E51C;
      }
      goto L_0889E1B8;
    }
L_0889E1B8:
    ctx.gpr[31] = (0x0889E1C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0889E1C0u) goto L_0889E1C0;
    return;
L_0889E1C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15692)));
    ctx.gpr[31] = (0x0889E1D8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15688)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x0889E1D8u) goto L_0889E1D8;
    return;
L_0889E1D8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15596)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15592)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889E214u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 247u, 0x089A11A4u>(ctx, &aot_mem) && ctx.pc == 0x0889E214u) goto L_0889E214;
    return;
L_0889E214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889E518;
      }
      goto L_0889E228;
    }
L_0889E228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E280;
      }
      goto L_0889E238;
    }
L_0889E238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E280;
      }
      goto L_0889E24C;
    }
L_0889E24C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E280;
      }
      goto L_0889E25C;
    }
L_0889E25C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (63488u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    goto L_0889E280;
L_0889E280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E518;
      }
      goto L_0889E290;
    }
L_0889E290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E518;
      }
      goto L_0889E2A0;
    }
L_0889E2A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889E2ACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x0889E2ACu) goto L_0889E2AC;
    return;
L_0889E2AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E518;
      }
      goto L_0889E2D0;
    }
L_0889E2D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889E2DCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 603u, 0x088DAB5Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E2DCu) goto L_0889E2DC;
    return;
L_0889E2DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E518;
      }
      goto L_0889E2E4;
    }
L_0889E2E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E518;
      }
      goto L_0889E2F4;
    }
L_0889E2F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E35C;
      }
      goto L_0889E30C;
    }
L_0889E30C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_0889E35C;
      }
      goto L_0889E32C;
    }
L_0889E32C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E35C;
      }
      goto L_0889E338;
    }
L_0889E338:
    ctx.gpr[31] = (0x0889E340u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0889E340u) goto L_0889E340;
    return;
L_0889E340:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E394;
      }
      goto L_0889E348;
    }
L_0889E348:
    ctx.gpr[31] = (0x0889E350u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x0889E350u) goto L_0889E350;
    return;
L_0889E350:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E394;
      }
      goto L_0889E35C;
    }
L_0889E35C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E384;
      }
      goto L_0889E36C;
    }
L_0889E36C:
    ctx.gpr[31] = (0x0889E374u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x0889E374u) goto L_0889E374;
    return;
L_0889E374:
    ctx.gpr[31] = (0x0889E37Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x0889E37Cu) goto L_0889E37C;
    return;
L_0889E37C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0889E51C;
      }
      goto L_0889E384;
    }
L_0889E384:
    ctx.gpr[31] = (0x0889E38Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x0889E38Cu) goto L_0889E38C;
    return;
L_0889E38C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0889E51C;
      }
      goto L_0889E394;
    }
L_0889E394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0889E3ACu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E3ACu) goto L_0889E3AC;
    return;
L_0889E3AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E518;
      }
      goto L_0889E3BC;
    }
L_0889E3BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E518;
      }
      goto L_0889E3D0;
    }
L_0889E3D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E518;
      }
      goto L_0889E3E0;
    }
L_0889E3E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E518;
      }
      goto L_0889E3F0;
    }
L_0889E3F0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E518;
      }
      goto L_0889E3F8;
    }
L_0889E3F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E420;
      }
      goto L_0889E408;
    }
L_0889E408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E438;
      }
      goto L_0889E420;
    }
L_0889E420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x0889E430u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 267u, 0x088854D8u>(ctx, &aot_mem) && ctx.pc == 0x0889E430u) goto L_0889E430;
    return;
L_0889E430:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E518;
      }
      goto L_0889E438;
    }
L_0889E438:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E468;
      }
      goto L_0889E450;
    }
L_0889E450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E474;
      }
      goto L_0889E468;
    }
L_0889E468:
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0889E4D0;
      }
      goto L_0889E474;
    }
L_0889E474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E494;
      }
      goto L_0889E488;
    }
L_0889E488:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0889E4D0;
      }
      goto L_0889E494;
    }
L_0889E494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E4B4;
      }
      goto L_0889E4A8;
    }
L_0889E4A8:
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0889E4D0;
      }
      goto L_0889E4B4;
    }
L_0889E4B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889E4D0;
      }
      goto L_0889E4C8;
    }
L_0889E4C8:
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0889E4D0;
L_0889E4D0:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889E4ECu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 472u, 0x0888E3F0u>(ctx, &aot_mem) && ctx.pc == 0x0889E4ECu) goto L_0889E4EC;
    return;
L_0889E4EC:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[31] = (0x0889E50Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 678u, 0x089A2D68u>(ctx, &aot_mem) && ctx.pc == 0x0889E50Cu) goto L_0889E50C;
    return;
L_0889E50C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889E518u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x0889E518u) goto L_0889E518;
    return;
L_0889E518:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889E51C;
L_0889E51C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E544:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15436)));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15440), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15432)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15444), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15460)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E5D8:
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
L_0889E604:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E624:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(32);
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
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 4u, 3u);
      ctx.read_vfpu_vector_ct<8u, 3u>(vfpu_target_raw);
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
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E644:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E66C:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E688:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E69C:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E6B4:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E6D0:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E6EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E738;
      }
      goto L_0889E710;
    }
L_0889E710:
    ctx.gpr[5] = (0u | 45u);
    ctx.gpr[31] = (0x0889E71Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 37u, 0x08918288u>(ctx, &aot_mem) && ctx.pc == 0x0889E71Cu) goto L_0889E71C;
    return;
L_0889E71C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(152));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889E738u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889E738u) goto L_0889E738;
    return;
L_0889E738:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0889E794;
      }
      goto L_0889E74C;
    }
L_0889E74C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E780;
      }
      goto L_0889E758;
    }
L_0889E758:
    ctx.gpr[5] = (0u | 45u);
    ctx.gpr[31] = (0x0889E764u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 37u, 0x08918288u>(ctx, &aot_mem) && ctx.pc == 0x0889E764u) goto L_0889E764;
    return;
L_0889E764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(152));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889E780u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889E780u) goto L_0889E780;
    return;
L_0889E780:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889E74C;
      }
      goto L_0889E794;
    }
L_0889E794:
    ctx.gpr[31] = (0x0889E79Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x0889E79Cu) goto L_0889E79C;
    return;
L_0889E79C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E7C0;
      }
      goto L_0889E7A4;
    }
L_0889E7A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0889E7C0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889E7C0u) goto L_0889E7C0;
    return;
L_0889E7C0:
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
L_0889E7D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889E7ECu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0889E834;
L_0889E7EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E80C;
      }
      goto L_0889E7F4;
    }
L_0889E7F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0889E81C;
      }
      goto L_0889E804;
    }
L_0889E804:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
      if (branch_taken) {
          goto L_0889E814;
      }
      goto L_0889E80C;
    }
L_0889E80C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889E824;
      }
      goto L_0889E814;
    }
L_0889E814:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E820;
      }
      goto L_0889E81C;
    }
L_0889E81C:
    ctx.gpr[4] = (0u | 1u);
    goto L_0889E820;
L_0889E820:
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    goto L_0889E824;
L_0889E824:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E834:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E84C;
      }
      goto L_0889E844;
    }
L_0889E844:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889E870;
      }
      goto L_0889E84C;
    }
L_0889E84C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889E860u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 531u, 0x08AFE368u>(ctx, &aot_mem) && ctx.pc == 0x0889E860u) goto L_0889E860;
    return;
L_0889E860:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 61 ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[4] & ctx.gpr[2]);
    goto L_0889E870;
L_0889E870:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E87C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E888:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E894:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E8A4:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E8B4:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E8D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E8D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889E8ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 519u, 0x08AFE224u>(ctx, &aot_mem) && ctx.pc == 0x0889E8ECu) goto L_0889E8EC;
    return;
L_0889E8EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E8F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889E910u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 527u, 0x08AFE2F8u>(ctx, &aot_mem) && ctx.pc == 0x0889E910u) goto L_0889E910;
    return;
L_0889E910:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E91C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0889EAA4;
      }
      goto L_0889E93C;
    }
L_0889E93C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20176));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(500), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0889E970;
      }
      goto L_0889E958;
    }
L_0889E958:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0889E968u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 98u, 0x08864738u>(ctx, &aot_mem) && ctx.pc == 0x0889E968u) goto L_0889E968;
    return;
L_0889E968:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    goto L_0889E970;
L_0889E970:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0889E980u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 530u, 0x08AFE33Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E980u) goto L_0889E980;
    return;
L_0889E980:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x0889E98Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 22u, 0x089681E4u>(ctx, &aot_mem) && ctx.pc == 0x0889E98Cu) goto L_0889E98C;
    return;
L_0889E98C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E9B0;
      }
      goto L_0889E998;
    }
L_0889E998:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(152));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889E9B0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889E9B0u) goto L_0889E9B0;
    return;
L_0889E9B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EA08;
      }
      goto L_0889E9C4;
    }
L_0889E9C4:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E9F0;
      }
      goto L_0889E9D8;
    }
L_0889E9D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(152));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889E9F0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889E9F0u) goto L_0889E9F0;
    return;
L_0889E9F0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E9C4;
      }
      goto L_0889EA08;
    }
L_0889EA08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(580)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EA1C;
      }
      goto L_0889EA14;
    }
L_0889EA14:
    ctx.gpr[31] = (0x0889EA1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 545u, 0x0884E1D0u>(ctx, &aot_mem) && ctx.pc == 0x0889EA1Cu) goto L_0889EA1C;
    return;
L_0889EA1C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889EA28u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 399u, 0x089EE4DCu>(ctx, &aot_mem) && ctx.pc == 0x0889EA28u) goto L_0889EA28;
    return;
L_0889EA28:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EA5C;
      }
      goto L_0889EA38;
    }
L_0889EA38:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17436)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17436), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    goto L_0889EA5C;
L_0889EA5C:
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_0889EA84;
      }
      goto L_0889EA68;
    }
L_0889EA68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17432)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17432), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0889EA84;
L_0889EA84:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889EA90u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 195u, 0x08A0D848u>(ctx, &aot_mem) && ctx.pc == 0x0889EA90u) goto L_0889EA90;
    return;
L_0889EA90:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EAA4;
      }
      goto L_0889EA9C;
    }
L_0889EA9C:
    ctx.gpr[31] = (0x0889EAA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0889E8F8;
L_0889EAA4:
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
L_0889EABC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889EAD8u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 598u, 0x08A2EC58u>(ctx, &aot_mem) && ctx.pc == 0x0889EAD8u) goto L_0889EAD8;
    return;
L_0889EAD8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15184)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1028))))));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(498), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15184)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1029))))));
    ctx.gpr[31] = (0x0889EAFCu);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(499), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 307u, 0x08876AECu>(ctx, &aot_mem) && ctx.pc == 0x0889EAFCu) goto L_0889EAFC;
    return;
L_0889EAFC:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(544), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EB14:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(541)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889EB48;
      }
      goto L_0889EB20;
    }
L_0889EB20:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(543)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889EB40;
      }
      goto L_0889EB2C;
    }
L_0889EB2C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_0889EB50;
      }
      goto L_0889EB38;
    }
L_0889EB38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EB7C;
      }
      goto L_0889EB40;
    }
L_0889EB40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889EC68;
      }
      goto L_0889EB48;
    }
L_0889EB48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889EC68;
      }
      goto L_0889EB50;
    }
L_0889EB50:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889EB8C;
      }
      goto L_0889EB5C;
    }
L_0889EB5C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(844)));
    ctx.gpr[8] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0889EB7C;
      }
      goto L_0889EB6C;
    }
L_0889EB6C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(844)));
    ctx.gpr[7] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0889EB8C;
      }
      goto L_0889EB7C;
    }
L_0889EB7C:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 50u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u | 55u);
      if (branch_taken) {
          goto L_0889EB94;
      }
      goto L_0889EB8C;
    }
L_0889EB8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889EC68;
      }
      goto L_0889EB94;
    }
L_0889EB94:
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EBCC;
      }
      goto L_0889EBA8;
    }
L_0889EBA8:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889EBDC;
      }
      goto L_0889EBB4;
    }
L_0889EBB4:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0889EBCC;
      }
      goto L_0889EBC0;
    }
L_0889EBC0:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0889EBDC;
      }
      goto L_0889EBCC;
    }
L_0889EBCC:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(844)));
        goto L_0889EBE4;
    }
    goto L_0889EBD4;
L_0889EBD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EBF8;
      }
      goto L_0889EBDC;
    }
L_0889EBDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889EC68;
      }
      goto L_0889EBE4;
    }
L_0889EBE4:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0889EBF8;
      }
      goto L_0889EBEC;
    }
L_0889EBEC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0889EC14;
      }
      goto L_0889EBF8;
    }
L_0889EBF8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889EB94;
      }
      goto L_0889EC0C;
    }
L_0889EC0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EC1C;
      }
      goto L_0889EC14;
    }
L_0889EC14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889EC68;
      }
      goto L_0889EC1C;
    }
L_0889EC1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EC64;
      }
      goto L_0889EC2C;
    }
L_0889EC2C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889EC64;
      }
      goto L_0889EC34;
    }
L_0889EC34:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0889EC54;
      }
      goto L_0889EC3C;
    }
L_0889EC3C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889EC5C;
      }
      goto L_0889EC44;
    }
L_0889EC44:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0889EC5C;
      }
      goto L_0889EC4C;
    }
L_0889EC4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889EC68;
      }
      goto L_0889EC54;
    }
L_0889EC54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889EC68;
      }
      goto L_0889EC5C;
    }
L_0889EC5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889EC68;
      }
      goto L_0889EC64;
    }
L_0889EC64:
    ctx.gpr[2] = (0u | 1u);
    goto L_0889EC68;
L_0889EC68:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EC70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x0889ED3Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 489u, 0x088C697Cu>(ctx, &aot_mem) && ctx.pc == 0x0889ED3Cu) goto L_0889ED3C;
    return;
L_0889ED3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889ED58;
      }
      goto L_0889ED44;
    }
L_0889ED44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0889ED58;
      }
      goto L_0889ED50;
    }
L_0889ED50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889ED5C;
      }
      goto L_0889ED58;
    }
L_0889ED58:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_0889ED5C;
L_0889ED5C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889ED70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889ED88u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 314u, 0x08925FC8u>(ctx, &aot_mem) && ctx.pc == 0x0889ED88u) goto L_0889ED88;
    return;
L_0889ED88:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0889EDAC;
      }
      goto L_0889ED98;
    }
L_0889ED98:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0889EDCC;
      }
      goto L_0889EDA4;
    }
L_0889EDA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0889EDCC;
      }
      goto L_0889EDAC;
    }
L_0889EDAC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EDCC;
      }
      goto L_0889EDB8;
    }
L_0889EDB8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889EDCC;
      }
      goto L_0889EDC8;
    }
L_0889EDC8:
    ctx.gpr[4] = (0u | 255u);
    goto L_0889EDCC;
L_0889EDCC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889EDD8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 313u, 0x08925FB4u>(ctx, &aot_mem) && ctx.pc == 0x0889EDD8u) goto L_0889EDD8;
    return;
L_0889EDD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EDE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0889EED4;
      }
      goto L_0889EE24;
    }
L_0889EE24:
    ctx.gpr[5] = (0u | 41u);
    ctx.gpr[31] = (0x0889EE30u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 37u, 0x08918288u>(ctx, &aot_mem) && ctx.pc == 0x0889EE30u) goto L_0889EE30;
    return;
L_0889EE30:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
      if (branch_taken) {
          goto L_0889EE6C;
      }
      goto L_0889EE40;
    }
L_0889EE40:
    ctx.gpr[31] = (0x0889EE48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0889EE48u) goto L_0889EE48;
    return;
L_0889EE48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
      if (branch_taken) {
          goto L_0889EE6C;
      }
      goto L_0889EE50;
    }
L_0889EE50:
    ctx.gpr[31] = (0x0889EE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 304u, 0x08A829B8u>(ctx, &aot_mem) && ctx.pc == 0x0889EE58u) goto L_0889EE58;
    return;
L_0889EE58:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889EE68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 122u, 0x088A8660u>(ctx, &aot_mem) && ctx.pc == 0x0889EE68u) goto L_0889EE68;
    return;
L_0889EE68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    goto L_0889EE6C;
L_0889EE6C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EED4;
      }
      goto L_0889EE74;
    }
L_0889EE74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0889EEC0;
      }
      goto L_0889EE84;
    }
L_0889EE84:
    ctx.gpr[31] = (0x0889EE8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 432u, 0x089A1E6Cu>(ctx, &aot_mem) && ctx.pc == 0x0889EE8Cu) goto L_0889EE8C;
    return;
L_0889EE8C:
    ctx.gpr[31] = (0x0889EE94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0889EE94u) goto L_0889EE94;
    return;
L_0889EE94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889EED4;
      }
      goto L_0889EE9C;
    }
L_0889EE9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(152));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889EEB8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889EEB8u) goto L_0889EEB8;
    return;
L_0889EEB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EED4;
      }
      goto L_0889EEC0;
    }
L_0889EEC0:
    ctx.gpr[6] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[31] = (0x0889EED4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 156u, 0x089B0884u>(ctx, &aot_mem) && ctx.pc == 0x0889EED4u) goto L_0889EED4;
    return;
L_0889EED4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16512u << 16u);
      if (branch_taken) {
          goto L_0889EFB4;
      }
      goto L_0889EEE8;
    }
L_0889EEE8:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[21] = (2232u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 50u);
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(5736));
    ctx.gpr[22] = (2229u << 16u);
    goto L_0889EF04;
L_0889EF04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EFA0;
      }
      goto L_0889EF10;
    }
L_0889EF10:
    ctx.gpr[5] = (0u | 41u);
    ctx.gpr[31] = (0x0889EF1Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 37u, 0x08918288u>(ctx, &aot_mem) && ctx.pc == 0x0889EF1Cu) goto L_0889EF1C;
    return;
L_0889EF1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0889EF68;
      }
      goto L_0889EF2C;
    }
L_0889EF2C:
    ctx.gpr[31] = (0x0889EF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 432u, 0x089A1E6Cu>(ctx, &aot_mem) && ctx.pc == 0x0889EF34u) goto L_0889EF34;
    return;
L_0889EF34:
    ctx.gpr[31] = (0x0889EF3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0889EF3Cu) goto L_0889EF3C;
    return;
L_0889EF3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889EF78;
      }
      goto L_0889EF44;
    }
L_0889EF44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(152));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889EF60u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889EF60u) goto L_0889EF60;
    return;
L_0889EF60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EF78;
      }
      goto L_0889EF68;
    }
L_0889EF68:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[31] = (0x0889EF78u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 156u, 0x089B0884u>(ctx, &aot_mem) && ctx.pc == 0x0889EF78u) goto L_0889EF78;
    return;
L_0889EF78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EFA0;
      }
      goto L_0889EF84;
    }
L_0889EF84:
    ctx.gpr[31] = (0x0889EF8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0889EF8Cu) goto L_0889EF8C;
    return;
L_0889EF8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EFA0;
      }
      goto L_0889EF94;
    }
L_0889EF94:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0889EFA0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 122u, 0x088A8660u>(ctx, &aot_mem) && ctx.pc == 0x0889EFA0u) goto L_0889EFA0;
    return;
L_0889EFA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889EF04;
      }
      goto L_0889EFB4;
    }
L_0889EFB4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EFE4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(544)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F024;
      }
      goto L_0889EFF8;
    }
L_0889EFF8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F01C;
      }
      goto L_0889F004;
    }
L_0889F004:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889EFF8;
      }
      goto L_0889F014;
    }
L_0889F014:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F024;
      }
      goto L_0889F01C;
    }
L_0889F01C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889F028;
      }
      goto L_0889F024;
    }
L_0889F024:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889F028;
L_0889F028:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F030:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(646)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0889F134;
      }
      goto L_0889F04C;
    }
L_0889F04C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (16773u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 21845u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0889F084;
      }
      goto L_0889F078;
    }
L_0889F078:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0889F098;
      }
      goto L_0889F084;
    }
L_0889F084:
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_0889F098;
L_0889F098:
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F0B4;
      }
      goto L_0889F0A4;
    }
L_0889F0A4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(646), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(646)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
      if (branch_taken) {
          goto L_0889F0C4;
      }
      goto L_0889F0B4;
    }
L_0889F0B4:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(646), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(646)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    goto L_0889F0C4;
L_0889F0C4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F110;
      }
      goto L_0889F0CC;
    }
L_0889F0CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0889F110;
      }
      goto L_0889F0E0;
    }
L_0889F0E0:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-512));
    ctx.gpr[7] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889F110;
      }
      goto L_0889F0F4;
    }
L_0889F0F4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 29u);
    ctx.gpr[31] = (0x0889F10Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x0889F10Cu) goto L_0889F10C;
    return;
L_0889F10C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(646)));
    goto L_0889F110;
L_0889F110:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0889F134;
      }
      goto L_0889F118;
    }
L_0889F118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(648)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(280));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0889F134u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889F134u) goto L_0889F134;
    return;
L_0889F134:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F144:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 5u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0889F1E8;
      }
      goto L_0889F168;
    }
L_0889F168:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (48291u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x0889F1E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 288u, 0x08A0E2E0u>(ctx, &aot_mem) && ctx.pc == 0x0889F1E0u) goto L_0889F1E0;
    return;
L_0889F1E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F228;
      }
      goto L_0889F1E8;
    }
L_0889F1E8:
    ctx.gpr[4] = (48716u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[18];
    ctx.gpr[31] = (0x0889F228u);
    ctx.fpr[16] = ctx.fpr[19] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 288u, 0x08A0E2E0u>(ctx, &aot_mem) && ctx.pc == 0x0889F228u) goto L_0889F228;
    return;
L_0889F228:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0889F27C;
      }
      goto L_0889F23C;
    }
L_0889F23C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F264;
      }
      goto L_0889F248;
    }
L_0889F248:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889F23C;
      }
      goto L_0889F25C;
    }
L_0889F25C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F27C;
      }
      goto L_0889F264;
    }
L_0889F264:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(540)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(540), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889F280;
      }
      goto L_0889F27C;
    }
L_0889F27C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889F280;
L_0889F280:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F294:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[7] & 2u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0889F2D8;
      }
      goto L_0889F2C0;
    }
L_0889F2C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889F2EC;
      }
      goto L_0889F2D0;
    }
L_0889F2D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (48716u << 16u);
      if (branch_taken) {
          goto L_0889F36C;
      }
      goto L_0889F2D8;
    }
L_0889F2D8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889F2E4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0889F144;
L_0889F2E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F3E4;
      }
      goto L_0889F2EC;
    }
L_0889F2EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (48291u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x0889F364u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 288u, 0x08A0E2E0u>(ctx, &aot_mem) && ctx.pc == 0x0889F364u) goto L_0889F364;
    return;
L_0889F364:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F3A8;
      }
      goto L_0889F36C;
    }
L_0889F36C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[18];
    ctx.gpr[31] = (0x0889F3A8u);
    ctx.fpr[16] = ctx.fpr[19] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 288u, 0x08A0E2E0u>(ctx, &aot_mem) && ctx.pc == 0x0889F3A8u) goto L_0889F3A8;
    return;
L_0889F3A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_0889F3E0;
      }
      goto L_0889F3B8;
    }
L_0889F3B8:
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F3E0;
      }
      goto L_0889F3C8;
    }
L_0889F3C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(540)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(508), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(540), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889F3E4;
      }
      goto L_0889F3E0;
    }
L_0889F3E0:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889F3E4;
L_0889F3E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F3FC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[7] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0889F454;
      }
      goto L_0889F40C;
    }
L_0889F40C:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_0889F414;
L_0889F414:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889F438;
      }
      goto L_0889F420;
    }
L_0889F420:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889F414;
      }
      goto L_0889F430;
    }
L_0889F430:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F44C;
      }
      goto L_0889F438;
    }
L_0889F438:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(508), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(540), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0889F4A0;
      }
      goto L_0889F44C;
    }
L_0889F44C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F4A0;
      }
      goto L_0889F454;
    }
L_0889F454:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(544)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0889F4A0;
      }
      goto L_0889F468;
    }
L_0889F468:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889F48C;
      }
      goto L_0889F474;
    }
L_0889F474:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889F468;
      }
      goto L_0889F484;
    }
L_0889F484:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F4A0;
      }
      goto L_0889F48C;
    }
L_0889F48C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(508), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(540), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0889F4A0;
      }
      goto L_0889F4A0;
    }
L_0889F4A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F4A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[30]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889F4F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0889F4F8u) goto L_0889F4F8;
    return;
L_0889F4F8:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[10] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0889F530;
      }
      goto L_0889F508;
    }
L_0889F508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889F530;
      }
      goto L_0889F518;
    }
L_0889F518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0889F530;
      }
      goto L_0889F524;
    }
L_0889F524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0889F550;
      }
      goto L_0889F530;
    }
L_0889F530:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[9]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[7];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(544)));
      if (branch_taken) {
          goto L_0889F55C;
      }
      goto L_0889F548;
    }
L_0889F548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F560;
      }
      goto L_0889F550;
    }
L_0889F550:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
      if (branch_taken) {
          goto L_0889F848;
      }
      goto L_0889F55C;
    }
L_0889F55C:
    ctx.gpr[4] = (0u | 1u);
    goto L_0889F560;
L_0889F560:
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[6]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_0889F5F0;
      }
      goto L_0889F578;
    }
L_0889F578:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[29] | 0u);
    ctx.gpr[10] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (256u << 16u);
    goto L_0889F588;
L_0889F588:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F5E0;
      }
      goto L_0889F594;
    }
L_0889F594:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0889F5E0;
      }
      goto L_0889F59C;
    }
L_0889F59C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(412)));
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F5E0;
      }
      goto L_0889F5AC;
    }
L_0889F5AC:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) <= 0;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889F5CC;
      }
      goto L_0889F5BC;
    }
L_0889F5BC:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889F5E0;
      }
      goto L_0889F5CC;
    }
L_0889F5CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F5E0;
      }
      goto L_0889F5D4;
    }
L_0889F5D4:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    goto L_0889F5E0;
L_0889F5E0:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889F588;
      }
      goto L_0889F5F0;
    }
L_0889F5F0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0889F674;
      }
      goto L_0889F600;
    }
L_0889F600:
    ctx.gpr[22] = (0u | 6u);
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
    goto L_0889F60C;
L_0889F60C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0889F618u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0889F618u) goto L_0889F618;
    return;
L_0889F618:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F658;
      }
      goto L_0889F620;
    }
L_0889F620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0889F658;
      }
      goto L_0889F62C;
    }
L_0889F62C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0889F658;
      }
      goto L_0889F638;
    }
L_0889F638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0889F658;
      }
      goto L_0889F644;
    }
L_0889F644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
      if (branch_taken) {
          goto L_0889F848;
      }
      goto L_0889F658;
    }
L_0889F658:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889F60C;
      }
      goto L_0889F674;
    }
L_0889F674:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 1800u);
      if (branch_taken) {
          goto L_0889F710;
      }
      goto L_0889F684;
    }
L_0889F684:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15948)));
    ctx.gpr[21] = (ctx.gpr[29] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15944)));
    ctx.gpr[19] = (2230u << 16u);
    goto L_0889F69C;
L_0889F69C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1772), ctx.gpr[6]);
    ctx.gpr[31] = (0x0889F6B8u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x0889F6B8u) goto L_0889F6B8;
    return;
L_0889F6B8:
    ctx.gpr[31] = (0x0889F6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0889F6C0u) goto L_0889F6C0;
    return;
L_0889F6C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889F6D4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x0889F6D4u) goto L_0889F6D4;
    return;
L_0889F6D4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889F69C;
      }
      goto L_0889F710;
    }
L_0889F710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F848;
      }
      goto L_0889F720;
    }
L_0889F720:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0889F848;
      }
      goto L_0889F728;
    }
L_0889F728:
    ctx.gpr[31] = (0x0889F730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0889F730u) goto L_0889F730;
    return;
L_0889F730:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15940)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15936)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0889F750u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x0889F750u) goto L_0889F750;
    return;
L_0889F750:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0889F774;
      }
      goto L_0889F76C;
    }
L_0889F76C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0889F774;
      }
      goto L_0889F774;
    }
L_0889F774:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F848;
      }
      goto L_0889F77C;
    }
L_0889F77C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_0889F848;
      }
      goto L_0889F78C;
    }
L_0889F78C:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[22] = (8u << 16u);
    goto L_0889F794;
L_0889F794:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (ctx.gpr[4] ^ 20u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 5u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F804;
      }
      goto L_0889F7BC;
    }
L_0889F7BC:
    ctx.gpr[31] = (0x0889F7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0889F7C4u) goto L_0889F7C4;
    return;
L_0889F7C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0889F7D8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x0889F7D8u) goto L_0889F7D8;
    return;
L_0889F7D8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0889F7FC;
      }
      goto L_0889F7F4;
    }
L_0889F7F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0889F7FC;
      }
      goto L_0889F7FC;
    }
L_0889F7FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F838;
      }
      goto L_0889F804;
    }
L_0889F804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(420)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1772), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F82C;
      }
      goto L_0889F820;
    }
L_0889F820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_0889F82C;
L_0889F82C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_0889F838;
L_0889F838:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889F794;
      }
      goto L_0889F848;
    }
L_0889F848:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F878:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(601), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889F8B0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0889F8B0u) goto L_0889F8B0;
    return;
L_0889F8B0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0889F9B0;
      }
      goto L_0889F8B8;
    }
L_0889F8B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 157u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_0889F954;
      }
      goto L_0889F8C8;
    }
L_0889F8C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5552)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F954;
      }
      goto L_0889F8E4;
    }
L_0889F8E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F944;
      }
      goto L_0889F8F4;
    }
L_0889F8F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[31] = (0x0889F904u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 35u, 0x08944274u>(ctx, &aot_mem) && ctx.pc == 0x0889F904u) goto L_0889F904;
    return;
L_0889F904:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-129));
      if (branch_taken) {
          goto L_0889F92C;
      }
      goto L_0889F910;
    }
L_0889F910:
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0889F920u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x0889F920u) goto L_0889F920;
    return;
L_0889F920:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[4] & ctx.gpr[17]);
      if (branch_taken) {
          goto L_0889F940;
      }
      goto L_0889F92C;
    }
L_0889F92C:
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[31] = (0x0889F938u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 665u, 0x0899F71Cu>(ctx, &aot_mem) && ctx.pc == 0x0889F938u) goto L_0889F938;
    return;
L_0889F938:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[17] = (ctx.gpr[4] & ctx.gpr[17]);
    goto L_0889F940;
L_0889F940:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_0889F944;
L_0889F944:
    ctx.gpr[31] = (0x0889F94Cu);
    ctx.gpr[4] = (0u | 277u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x0889F94Cu) goto L_0889F94C;
    return;
L_0889F94C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F9B0;
      }
      goto L_0889F954;
    }
L_0889F954:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-999));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_0889F9B0;
      }
      goto L_0889F960;
    }
L_0889F960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5232)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F9B0;
      }
      goto L_0889F97C;
    }
L_0889F97C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x0889F98Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 35u, 0x08944274u>(ctx, &aot_mem) && ctx.pc == 0x0889F98Cu) goto L_0889F98C;
    return;
L_0889F98C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F9A8;
      }
      goto L_0889F994;
    }
L_0889F994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0889F9A8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x0889F9A8u) goto L_0889F9A8;
    return;
L_0889F9A8:
    ctx.gpr[31] = (0x0889F9B0u);
    ctx.gpr[4] = (0u | 261u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x0889F9B0u) goto L_0889F9B0;
    return;
L_0889F9B0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(504), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F9C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0889FA48;
      }
      goto L_0889F9E4;
    }
L_0889F9E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FA40;
      }
      goto L_0889F9F4;
    }
L_0889F9F4:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889FA04u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 48u, 0x08AA02A0u>(ctx, &aot_mem) && ctx.pc == 0x0889FA04u) goto L_0889FA04;
    return;
L_0889FA04:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(504), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1332), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889FA1Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1332));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0889FA1Cu) goto L_0889FA1C;
    return;
L_0889FA1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    if (ctx.gpr[5] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
        goto L_0889FA50;
    }
    goto L_0889FA38;
L_0889FA38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FA74;
      }
      goto L_0889FA40;
    }
L_0889FA40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FAA4;
      }
      goto L_0889FA48;
    }
L_0889FA48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FAA4;
      }
      goto L_0889FA50;
    }
L_0889FA50:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FA6C;
      }
      goto L_0889FA58;
    }
L_0889FA58:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_0889FA6C;
    }
    goto L_0889FA60;
L_0889FA60:
    ctx.gpr[31] = (0x0889FA68u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0889FA68u) goto L_0889FA68;
    return;
L_0889FA68:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_0889FA6C;
L_0889FA6C:
    ctx.gpr[31] = (0x0889FA74u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x0889FA74u) goto L_0889FA74;
    return;
L_0889FA74:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
      if (branch_taken) {
          goto L_0889FAA4;
      }
      goto L_0889FA8C;
    }
L_0889FA8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    goto L_0889FAA4;
L_0889FAA4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FAB8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FAC8;
      }
      goto L_0889FAC0;
    }
L_0889FAC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FAD0;
      }
      goto L_0889FAC8;
    }
L_0889FAC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FAF8;
      }
      goto L_0889FAD0;
    }
L_0889FAD0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FAF4;
      }
      goto L_0889FADC;
    }
L_0889FADC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889FAD0;
      }
      goto L_0889FAEC;
    }
L_0889FAEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FAF8;
      }
      goto L_0889FAF4;
    }
L_0889FAF4:
    ctx.gpr[2] = (0u | 1u);
    goto L_0889FAF8;
L_0889FAF8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FB00:
    ctx.gpr[6] = (0u | 0u);
    goto L_0889FB04;
L_0889FB04:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FB1C;
      }
      goto L_0889FB10;
    }
L_0889FB10:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FB34;
      }
      goto L_0889FB1C;
    }
L_0889FB1C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889FB04;
      }
      goto L_0889FB2C;
    }
L_0889FB2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FB38;
      }
      goto L_0889FB34;
    }
L_0889FB34:
    ctx.gpr[2] = (0u | 1u);
    goto L_0889FB38;
L_0889FB38:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FB40:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FB5C;
      }
      goto L_0889FB48;
    }
L_0889FB48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889FB64;
      }
      goto L_0889FB54;
    }
L_0889FB54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889FB68;
      }
      goto L_0889FB5C;
    }
L_0889FB5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FB68;
      }
      goto L_0889FB64;
    }
L_0889FB64:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889FB68;
L_0889FB68:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FB70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FB90;
      }
      goto L_0889FB7C;
    }
L_0889FB7C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FB90;
      }
      goto L_0889FB88;
    }
L_0889FB88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889FB94;
      }
      goto L_0889FB90;
    }
L_0889FB90:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889FB94;
L_0889FB94:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FB9C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FBD4;
      }
      goto L_0889FBA8;
    }
L_0889FBA8:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_0889FBB0;
L_0889FBB0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FBC4;
      }
      goto L_0889FBBC;
    }
L_0889FBBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_0889FBD4;
      }
      goto L_0889FBC4;
    }
L_0889FBC4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889FBB0;
      }
      goto L_0889FBD4;
    }
L_0889FBD4:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FBE0;
      }
      goto L_0889FBDC;
    }
L_0889FBDC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(540), static_cast<std::uint8_t>(0u));
    goto L_0889FBE0;
L_0889FBE0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FBE8:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_0889FC10;
      }
      goto L_0889FBF8;
    }
L_0889FBF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0889FC20;
      }
      goto L_0889FC00;
    }
L_0889FC00:
    ctx.gpr[4] = (49036u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889FC3C;
      }
      goto L_0889FC10;
    }
L_0889FC10:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FC20;
      }
      goto L_0889FC18;
    }
L_0889FC18:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0889FC3C;
      }
      goto L_0889FC20;
    }
L_0889FC20:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    goto L_0889FC3C;
L_0889FC3C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    jump_target = ctx.gpr[31];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FC4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FCD0;
      }
      goto L_0889FCB0;
    }
L_0889FCB0:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889FCC8;
      }
      goto L_0889FCC0;
    }
L_0889FCC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FD1C;
      }
      goto L_0889FCC8;
    }
L_0889FCC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0889FD1C;
      }
      goto L_0889FCD0;
    }
L_0889FCD0:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889FD00;
      }
      goto L_0889FCE0;
    }
L_0889FCE0:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889FCF8;
      }
      goto L_0889FCF0;
    }
L_0889FCF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889FD1C;
      }
      goto L_0889FCF8;
    }
L_0889FCF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FD1C;
      }
      goto L_0889FD00;
    }
L_0889FD00:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889FD18;
      }
      goto L_0889FD10;
    }
L_0889FD10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_0889FD1C;
      }
      goto L_0889FD18;
    }
L_0889FD18:
    ctx.gpr[2] = (0u | 2u);
    goto L_0889FD1C;
L_0889FD1C:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FD24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48998u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889FD5C;
      }
      goto L_0889FD54;
    }
L_0889FD54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889FD60;
      }
      goto L_0889FD5C;
    }
L_0889FD5C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889FD60;
L_0889FD60:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FD68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (48972u << 16u);
      if (branch_taken) {
          goto L_0889FDB4;
      }
      goto L_0889FD98;
    }
L_0889FD98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889FDBC;
      }
      goto L_0889FDB4;
    }
L_0889FDB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889FDC0;
      }
      goto L_0889FDBC;
    }
L_0889FDBC:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889FDC0;
L_0889FDC0:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FDC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 147 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 196 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889FDFC;
      }
      goto L_0889FDD8;
    }
L_0889FDD8:
    ctx.gpr[5] = (0u | 138u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-954));
      if (branch_taken) {
          goto L_0889FDF4;
      }
      goto L_0889FDE4;
    }
L_0889FDE4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-982));
      if (branch_taken) {
          goto L_0889FE38;
      }
      goto L_0889FDEC;
    }
L_0889FDEC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FE30;
      }
      goto L_0889FDF4;
    }
L_0889FDF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889FE3C;
      }
      goto L_0889FDFC;
    }
L_0889FDFC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 159 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889FE24;
      }
      goto L_0889FE04;
    }
L_0889FE04:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-147));
      if (branch_taken) {
          goto L_0889FE30;
      }
      goto L_0889FE0C;
    }
L_0889FE0C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(3280)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FE24:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 197 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FDF4;
      }
      goto L_0889FE30;
    }
L_0889FE30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FE3C;
      }
      goto L_0889FE38;
    }
L_0889FE38:
    ctx.gpr[2] = (0u | 1u);
    goto L_0889FE3C;
L_0889FE3C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FE44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 166u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 151u);
      if (branch_taken) {
          goto L_0889FE64;
      }
      goto L_0889FE54;
    }
L_0889FE54:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 147u);
      if (branch_taken) {
          goto L_0889FE64;
      }
      goto L_0889FE5C;
    }
L_0889FE5C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FE6C;
      }
      goto L_0889FE64;
    }
L_0889FE64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FE70;
      }
      goto L_0889FE6C;
    }
L_0889FE6C:
    ctx.gpr[2] = (0u | 1u);
    goto L_0889FE70;
L_0889FE70:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FE78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[5] & 8192u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FEB4;
      }
      goto L_0889FE8C;
    }
L_0889FE8C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(498))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FEA4;
      }
      goto L_0889FE98;
    }
L_0889FE98:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(499))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FEAC;
      }
      goto L_0889FEA4;
    }
L_0889FEA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889FEB8;
      }
      goto L_0889FEAC;
    }
L_0889FEAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FEB8;
      }
      goto L_0889FEB4;
    }
L_0889FEB4:
    ctx.gpr[2] = (0u | 1u);
    goto L_0889FEB8;
L_0889FEB8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FEC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(660)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0889FF18;
      }
      goto L_0889FEE4;
    }
L_0889FEE4:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_0889FF18;
      }
      goto L_0889FEF0;
    }
L_0889FEF0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_0889FF18;
      }
      goto L_0889FEF8;
    }
L_0889FEF8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FF18;
      }
      goto L_0889FF00;
    }
L_0889FF00:
    ctx.gpr[31] = (0x0889FF08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0889FF08u) goto L_0889FF08;
    return;
L_0889FF08:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(660)));
        goto L_0889FF20;
    }
    goto L_0889FF10;
L_0889FF10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FF2C;
      }
      goto L_0889FF18;
    }
L_0889FF18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FFC0;
      }
      goto L_0889FF20;
    }
L_0889FF20:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FF44;
      }
      goto L_0889FF2C;
    }
L_0889FF2C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FF4C;
      }
      goto L_0889FF3C;
    }
L_0889FF3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FFBC;
      }
      goto L_0889FF44;
    }
L_0889FF44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FFC0;
      }
      goto L_0889FF4C;
    }
L_0889FF4C:
    ctx.gpr[31] = (0x0889FF54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0889FF54u) goto L_0889FF54;
    return;
L_0889FF54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FFBC;
      }
      goto L_0889FF5C;
    }
L_0889FF5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FFBC;
      }
      goto L_0889FF68;
    }
L_0889FF68:
    ctx.gpr[31] = (0x0889FF70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 272u, 0x089A5338u>(ctx, &aot_mem) && ctx.pc == 0x0889FF70u) goto L_0889FF70;
    return;
L_0889FF70:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FF8C;
      }
      goto L_0889FF7C;
    }
L_0889FF7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(660)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FFA0;
      }
      goto L_0889FF8C;
    }
L_0889FF8C:
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[16] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(660)));
        goto L_0889FFA8;
    }
    goto L_0889FF98;
L_0889FF98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FFBC;
      }
      goto L_0889FFA0;
    }
L_0889FFA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FFC0;
      }
      goto L_0889FFA8;
    }
L_0889FFA8:
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FFBC;
      }
      goto L_0889FFB4;
    }
L_0889FFB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889FFC0;
      }
      goto L_0889FFBC;
    }
L_0889FFBC:
    ctx.gpr[2] = (0u | 1u);
    goto L_0889FFC0;
L_0889FFC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FFD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(660)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0889FFF0;
      }
      goto L_0889FFE0;
    }
L_0889FFE0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_0889FFF0;
      }
      goto L_0889FFE8;
    }
L_0889FFE8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FFF8;
      }
      goto L_0889FFF0;
    }
L_0889FFF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889FFFC;
      }
      goto L_0889FFF8;
    }
L_0889FFF8:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889FFFC;
L_0889FFFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0038(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0038_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_38(Runtime &runtime) {
    runtime.register_generated_unit(38u, 0x0889C000u, 16384u, &recomp_unit_0038, &recomp_unit_0038_entry);
    runtime.register_function(0x0889C000u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C024u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C04Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C054u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C0ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C0E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C0ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C0FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C1A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C1A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C1ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C1F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C268u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C274u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C28Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C2ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C2C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C2E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C2FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C318u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C324u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C32Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C348u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C398u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C3A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C3ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C3E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C3F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C430u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C444u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C464u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C478u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C480u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C488u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C48Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C494u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C4A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C4A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C4ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C4E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C530u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C538u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C540u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C548u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C54Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C55Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C564u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C574u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C594u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C59Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C614u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C624u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C644u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C64Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C65Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C668u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C670u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C678u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C680u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C690u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C698u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C70Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C714u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C71Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C724u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C72Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C73Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C74Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C754u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C760u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C770u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C78Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C818u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C824u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C82Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C83Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C84Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C854u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C85Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C870u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C878u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C884u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C88Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C894u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C908u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C91Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C928u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C930u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C94Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C994u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C9B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C9C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C9D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C9ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C9FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA0Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA88u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAD0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAD8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB0Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB14u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB6Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB78u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CBACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CBB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CBC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CBD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CBE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC0Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC14u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCA8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD74u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CDA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CDACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CDB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CDC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CDC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CDE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE78u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE88u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEA8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CED8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF88u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFA8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D000u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D010u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D020u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D02Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D040u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D048u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D058u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D064u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D074u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D08Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D094u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D10Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D11Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D12Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D140u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D16Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D170u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D178u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D190u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D204u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D20Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D214u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D21Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D224u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D22Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D23Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D250u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D264u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D274u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D284u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D294u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D300u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D37Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D408u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D410u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D444u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D468u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D470u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D4A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D4DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D4E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D4FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D538u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D544u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D54Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D560u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D568u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D580u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D620u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D62Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D634u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D644u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D654u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D65Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D66Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D67Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D694u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D708u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D71Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D728u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D73Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D744u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D760u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D780u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D78Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D790u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D7CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D81Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D824u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D828u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D830u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D838u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D840u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D850u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D864u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D878u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D880u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D88Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D894u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D89Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D918u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D964u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D974u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D97Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D984u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D994u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D99Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA0Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA14u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA64u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DACCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DAD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB6Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBBCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC0Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DCACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DCD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DCFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD74u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDD0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDF4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE64u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE6Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DEA0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DEB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DEC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DED4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DED8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DEE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF6Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFA8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFCCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFF4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E008u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E014u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E030u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E038u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E048u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E060u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E074u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E088u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E098u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E0A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E0B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E0DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E0E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E100u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E11Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E130u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E144u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E15Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E19Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E1A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E1B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E1B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E1C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E1D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E214u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E228u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E238u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E24Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E25Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E280u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E290u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E2A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E2ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E2D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E2DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E2E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E2F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E30Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E32Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E338u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E340u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E348u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E350u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E35Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E36Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E374u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E37Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E384u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E38Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E394u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E3ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E3BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E3D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E3E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E3F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E3F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E408u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E420u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E430u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E438u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E450u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E468u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E474u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E488u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E494u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E4A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E4B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E4C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E4D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E4ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E50Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E518u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E51Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E544u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E5D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E604u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E624u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E644u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E66Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E688u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E69Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E6B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E6D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E6ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E710u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E71Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E738u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E74Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E758u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E764u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E780u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E794u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E79Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E804u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E80Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E814u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E81Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E820u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E824u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E834u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E844u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E84Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E860u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E870u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E87Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E888u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E894u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E8A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E8B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E8D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E8D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E8ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E8F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E910u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E91Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E93Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E958u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E968u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E970u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E980u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E98Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E998u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA14u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EAA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EABCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EAD8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EAFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB14u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB6Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBA8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBCCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC0Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC14u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC64u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED88u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDCCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDD8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE6Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE74u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EEB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EEC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EED4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EEE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF78u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EFA0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EFB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EFE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EFF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F004u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F014u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F01Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F024u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F028u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F030u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F04Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F078u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F084u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F098u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F0A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F0B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F0C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F0CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F0E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F0F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F10Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F110u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F118u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F134u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F144u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F168u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F1E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F1E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F228u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F23Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F248u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F25Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F264u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F27Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F280u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F294u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F2C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F2D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F2D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F2E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F2ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F364u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F36Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F40Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F414u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F420u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F430u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F438u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F44Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F454u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F468u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F474u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F484u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F48Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F4A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F4A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F4F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F508u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F518u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F524u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F530u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F548u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F550u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F55Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F560u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F578u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F588u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F594u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F59Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F600u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F60Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F618u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F620u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F62Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F638u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F644u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F658u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F674u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F684u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F69Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F6B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F6C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F6D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F710u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F720u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F728u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F730u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F750u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F76Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F774u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F77Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F78Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F794u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F804u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F820u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F82Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F838u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F848u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F878u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F904u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F910u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F920u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F92Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F938u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F940u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F944u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F94Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F954u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F960u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F97Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F98Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F994u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F9A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F9B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F9C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F9E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F9F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA6Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA74u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAD0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FADCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAF4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB64u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB88u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBA8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBBCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCD0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDBCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDD8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDF4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE0Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE64u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE6Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE78u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FEA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FEACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FEB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FEB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FEC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FEE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FEF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FEF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFA0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFA8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFBCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFFCu, &recomp_unit_0038, "recomp_unit_0038");
}
} // namespace psprecomp
