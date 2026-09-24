#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0052[4096] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 10, 0,
    0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38,
    0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0,
    0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 66, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 80,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0,
    0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 110, 0, 111, 112, 0, 0, 113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119,
    0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 127, 0, 0, 128, 0, 129, 0, 130, 0, 131, 0, 0,
    0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 137, 0,
    138, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 143, 144, 0, 145, 0, 0, 0, 0, 0, 146,
    0, 0, 0, 0, 147, 0, 0, 0, 148, 149, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 153, 154, 0, 155, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 158, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 163,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 165, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 175, 0, 0, 0, 0, 176, 0, 177,
    0, 178, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 184,
    0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 187, 0, 188, 0, 0, 189, 0, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 0,
    0, 196, 0, 197, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 205, 0, 206, 0,
    0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212, 213, 0, 214, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 218, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0,
    0, 223, 224, 0, 225, 0, 0, 226, 227, 0, 228, 0, 0, 229, 230, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0,
    0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 237, 0, 238, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241,
    0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 245, 0, 246, 0, 0, 247, 248, 0, 249, 0, 0, 250, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255,
    0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0,
    0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 264, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 269, 0, 270, 0, 271, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 274, 0, 0, 275,
    0, 0, 0, 276, 0, 277, 0, 278, 279, 0, 0, 280, 0, 0, 0, 281, 0, 282, 0, 283, 0, 284, 0, 0, 0, 285, 0, 0, 286, 0, 287, 0,
    288, 289, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 295,
    0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 302, 0, 303, 0, 304,
    305, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0,
    312, 0, 313, 0, 0, 0, 314, 315, 0, 0, 0, 316, 0, 317, 0, 318, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0,
    0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 327, 0, 0, 328, 0, 329, 0, 330,
    331, 0, 332, 0, 0, 0, 333, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 338, 339, 0, 0, 0,
    0, 0, 340, 0, 0, 0, 341, 0, 342, 343, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 351, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0,
    0, 0, 0, 355, 0, 356, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 371, 0, 372, 0, 373, 0, 0, 374, 0, 0, 0,
    0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 381, 0, 382, 0, 383, 0, 0, 0, 0,
    0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0,
    0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 395,
    0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 398, 0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0,
    0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0,
    408, 0, 0, 409, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0,
    414, 0, 415, 0, 416, 0, 417, 0, 0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0,
    0, 426, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0,
    430, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 435, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442,
    0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 448, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 450, 0, 0,
    0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452,
    0, 453, 0, 454, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 463, 0, 0, 0, 464, 0, 0, 465, 0, 0, 466, 0, 0, 0, 467, 0, 0, 468,
    0, 0, 469, 0, 0, 0, 470, 0, 0, 471, 0, 0, 472, 0, 0, 0, 473, 0, 0, 474, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 476,
    0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 483, 484, 0, 485, 0, 0, 0, 0, 0, 0, 0, 486, 0, 487, 0,
    0, 0, 488, 0, 0, 0, 489, 490, 0, 491, 0, 492, 0, 0, 0, 0, 0, 493, 494, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496,
    0, 497, 498, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 501, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0,
    0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0,
    0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 514, 0, 0, 0, 515, 0, 516, 0, 517, 0,
    518, 0, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 0, 524, 0, 0, 525, 0, 526, 0, 0,
    527, 528, 0, 529, 0, 0, 530, 531, 0, 532, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 534, 535, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0,
    0, 0, 537, 538, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 543, 0, 544, 0, 545, 0,
    0, 0, 546, 0, 0, 547, 548, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 550, 0, 0, 551, 0, 552, 0, 553, 0, 0, 554, 0, 0, 555, 0,
    556, 0, 557, 0, 0, 558, 0, 0, 559, 0, 560, 0, 561, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0,
    0, 0, 0, 0, 567, 0, 0, 568, 0, 569, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 573, 0, 574, 0,
    575, 0, 576, 0, 0, 0, 577, 0, 0, 578, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0,
    0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 591, 0, 592, 0, 0, 0, 593, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 595, 596, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 597, 0, 0, 598, 599, 0, 600, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 604, 605, 0, 0, 0, 0, 606, 607, 0, 0, 0, 0, 0, 608, 0, 0, 609, 0,
    610, 0, 611, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616,
    0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 619, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0,
    0, 0, 625, 0, 0, 0, 626, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 631, 632,
    0, 633, 0, 0, 634, 0, 0, 635, 0, 636, 0, 637, 638, 0, 0, 0, 639, 0, 640, 0, 0, 0, 0, 0, 641, 0, 0, 642, 0, 0, 0, 643,
    0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 651, 0, 0, 0, 0,
    652, 0, 0, 653, 0, 654, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 657, 0, 0, 0, 0, 658, 0, 0,
    659, 0, 660, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 664, 0, 665, 0, 0, 0, 0, 666, 0, 0,
    667, 0, 668, 0, 0, 0, 669, 0, 0, 0, 0, 670, 0, 0, 671, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 674, 0, 0,
    0, 0, 675, 0, 676, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 681, 0,
    682, 0, 683, 0, 0, 0, 684, 0, 0, 685, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 687, 0, 688, 0, 689, 0, 690, 691, 0,
    0, 692, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0, 0, 702,
    0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 707, 0, 0, 708, 0, 0, 0,
    0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 711, 712, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 714,
    0, 715, 716, 0, 0, 0, 0, 0, 717, 0, 718, 0, 0, 0, 0, 0, 0, 0, 719, 0, 720, 721, 0, 722, 0, 0, 0, 723, 0, 724, 0, 725,
    0, 0, 726, 0, 727, 0, 728, 0, 729, 0, 730, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 732, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0,
    0, 0, 0, 734, 0, 735, 736, 0, 0, 0, 0, 737, 738, 0, 739, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0,
    742, 0, 0, 743, 0, 744, 0, 745, 746, 0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 748, 0, 749, 0, 750, 0, 751, 0, 752, 0, 753,
    0, 754, 0, 0, 755, 0, 756, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 758, 0, 759, 0, 0, 760, 0, 0, 761, 0, 762, 0,
    0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 764, 0, 765, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 767, 0, 768, 0, 769,
    0, 0, 770, 771, 0, 772, 0, 0, 773, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 777, 0,
    0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 780, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 782, 0, 0, 0, 783, 0, 0, 0,
    784, 785, 0, 0, 0, 0, 0, 0, 0, 786, 0, 787, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    792, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 794, 0, 0, 0, 0, 0, 795, 0, 0, 0, 796, 0, 797, 0, 798, 0, 799, 0, 0,
    0, 800, 0, 801, 0, 0, 0, 0, 802, 0, 803, 0, 804, 0, 805, 0, 0, 0, 806, 0, 807, 0, 0, 0, 0, 0, 0, 0, 808, 0, 0, 0,
    0, 0, 809, 0, 810, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 815,
};
void recomp_unit_0052_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088D4000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0052[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088D4000;
    case 2u: goto L_088D4008;
    case 3u: goto L_088D401C;
    case 4u: goto L_088D402C;
    case 5u: goto L_088D403C;
    case 6u: goto L_088D4044;
    case 7u: goto L_088D4050;
    case 8u: goto L_088D4060;
    case 9u: goto L_088D4070;
    case 10u: goto L_088D4078;
    case 11u: goto L_088D4084;
    case 12u: goto L_088D4094;
    case 13u: goto L_088D40B0;
    case 14u: goto L_088D40C4;
    case 15u: goto L_088D40CC;
    case 16u: goto L_088D40E0;
    case 17u: goto L_088D40E8;
    case 18u: goto L_088D4114;
    case 19u: goto L_088D411C;
    case 20u: goto L_088D41B0;
    case 21u: goto L_088D41D4;
    case 22u: goto L_088D4204;
    case 23u: goto L_088D4210;
    case 24u: goto L_088D4220;
    case 25u: goto L_088D424C;
    case 26u: goto L_088D4254;
    case 27u: goto L_088D4264;
    case 28u: goto L_088D4298;
    case 29u: goto L_088D42A8;
    case 30u: goto L_088D42B4;
    case 31u: goto L_088D42D4;
    case 32u: goto L_088D4300;
    case 33u: goto L_088D4310;
    case 34u: goto L_088D4334;
    case 35u: goto L_088D4340;
    case 36u: goto L_088D4348;
    case 37u: goto L_088D4370;
    case 38u: goto L_088D437C;
    case 39u: goto L_088D4394;
    case 40u: goto L_088D43B8;
    case 41u: goto L_088D43C0;
    case 42u: goto L_088D43CC;
    case 43u: goto L_088D43D4;
    case 44u: goto L_088D440C;
    case 45u: goto L_088D4424;
    case 46u: goto L_088D443C;
    case 47u: goto L_088D4468;
    case 48u: goto L_088D4484;
    case 49u: goto L_088D4490;
    case 50u: goto L_088D44AC;
    case 51u: goto L_088D44B0;
    case 52u: goto L_088D44D0;
    case 53u: goto L_088D44D8;
    case 54u: goto L_088D44E0;
    case 55u: goto L_088D450C;
    case 56u: goto L_088D4538;
    case 57u: goto L_088D4550;
    case 58u: goto L_088D4568;
    case 59u: goto L_088D4584;
    case 60u: goto L_088D45AC;
    case 61u: goto L_088D45BC;
    case 62u: goto L_088D45C4;
    case 63u: goto L_088D45CC;
    case 64u: goto L_088D45DC;
    case 65u: goto L_088D45EC;
    case 66u: goto L_088D45F0;
    case 67u: goto L_088D4600;
    case 68u: goto L_088D462C;
    case 69u: goto L_088D463C;
    case 70u: goto L_088D4648;
    case 71u: goto L_088D4650;
    case 72u: goto L_088D4658;
    case 73u: goto L_088D46A0;
    case 74u: goto L_088D46B0;
    case 75u: goto L_088D4710;
    case 76u: goto L_088D474C;
    case 77u: goto L_088D475C;
    case 78u: goto L_088D4768;
    case 79u: goto L_088D4774;
    case 80u: goto L_088D477C;
    case 81u: goto L_088D47A8;
    case 82u: goto L_088D47B4;
    case 83u: goto L_088D47D8;
    case 84u: goto L_088D47E0;
    case 85u: goto L_088D47EC;
    case 86u: goto L_088D4810;
    case 87u: goto L_088D4818;
    case 88u: goto L_088D483C;
    case 89u: goto L_088D4844;
    case 90u: goto L_088D484C;
    case 91u: goto L_088D4854;
    case 92u: goto L_088D4868;
    case 93u: goto L_088D4874;
    case 94u: goto L_088D4894;
    case 95u: goto L_088D48A4;
    case 96u: goto L_088D48AC;
    case 97u: goto L_088D48B4;
    case 98u: goto L_088D48CC;
    case 99u: goto L_088D48E0;
    case 100u: goto L_088D48EC;
    case 101u: goto L_088D492C;
    case 102u: goto L_088D4934;
    case 103u: goto L_088D493C;
    case 104u: goto L_088D494C;
    case 105u: goto L_088D495C;
    case 106u: goto L_088D4968;
    case 107u: goto L_088D4980;
    case 108u: goto L_088D499C;
    case 109u: goto L_088D49AC;
    case 110u: goto L_088D49B4;
    case 111u: goto L_088D49BC;
    case 112u: goto L_088D49C0;
    case 113u: goto L_088D49CC;
    case 114u: goto L_088D49D4;
    case 115u: goto L_088D49DC;
    case 116u: goto L_088D49E4;
    case 117u: goto L_088D49EC;
    case 118u: goto L_088D49F4;
    case 119u: goto L_088D49FC;
    case 120u: goto L_088D4A08;
    case 121u: goto L_088D4A10;
    case 122u: goto L_088D4A20;
    case 123u: goto L_088D4A2C;
    case 124u: goto L_088D4A38;
    case 125u: goto L_088D4A40;
    case 126u: goto L_088D4A48;
    case 127u: goto L_088D4A50;
    case 128u: goto L_088D4A5C;
    case 129u: goto L_088D4A64;
    case 130u: goto L_088D4A6C;
    case 131u: goto L_088D4A74;
    case 132u: goto L_088D4A84;
    case 133u: goto L_088D4AA4;
    case 134u: goto L_088D4AC4;
    case 135u: goto L_088D4AE8;
    case 136u: goto L_088D4AF0;
    case 137u: goto L_088D4AF8;
    case 138u: goto L_088D4B00;
    case 139u: goto L_088D4B0C;
    case 140u: goto L_088D4B18;
    case 141u: goto L_088D4B34;
    case 142u: goto L_088D4B48;
    case 143u: goto L_088D4B58;
    case 144u: goto L_088D4B5C;
    case 145u: goto L_088D4B64;
    case 146u: goto L_088D4B7C;
    case 147u: goto L_088D4B90;
    case 148u: goto L_088D4BA0;
    case 149u: goto L_088D4BA4;
    case 150u: goto L_088D4BAC;
    case 151u: goto L_088D4BC4;
    case 152u: goto L_088D4BD8;
    case 153u: goto L_088D4BE8;
    case 154u: goto L_088D4BEC;
    case 155u: goto L_088D4BF4;
    case 156u: goto L_088D4C10;
    case 157u: goto L_088D4C20;
    case 158u: goto L_088D4C28;
    case 159u: goto L_088D4C2C;
    case 160u: goto L_088D4C34;
    case 161u: goto L_088D4C6C;
    case 162u: goto L_088D4C74;
    case 163u: goto L_088D4C7C;
    case 164u: goto L_088D4C90;
    case 165u: goto L_088D4D0C;
    case 166u: goto L_088D4D14;
    case 167u: goto L_088D4D20;
    case 168u: goto L_088D4D3C;
    case 169u: goto L_088D4D84;
    case 170u: goto L_088D4D94;
    case 171u: goto L_088D4DA4;
    case 172u: goto L_088D4DB0;
    case 173u: goto L_088D4DD4;
    case 174u: goto L_088D4DDC;
    case 175u: goto L_088D4DE0;
    case 176u: goto L_088D4DF4;
    case 177u: goto L_088D4DFC;
    case 178u: goto L_088D4E04;
    case 179u: goto L_088D4E0C;
    case 180u: goto L_088D4E18;
    case 181u: goto L_088D4E4C;
    case 182u: goto L_088D4E68;
    case 183u: goto L_088D4E70;
    case 184u: goto L_088D4E7C;
    case 185u: goto L_088D4E94;
    case 186u: goto L_088D4EA8;
    case 187u: goto L_088D4EAC;
    case 188u: goto L_088D4EB4;
    case 189u: goto L_088D4EC0;
    case 190u: goto L_088D4ECC;
    case 191u: goto L_088D4ED4;
    case 192u: goto L_088D4EDC;
    case 193u: goto L_088D4EE4;
    case 194u: goto L_088D4EEC;
    case 195u: goto L_088D4EF4;
    case 196u: goto L_088D4F04;
    case 197u: goto L_088D4F0C;
    case 198u: goto L_088D4F14;
    case 199u: goto L_088D4F1C;
    case 200u: goto L_088D4F3C;
    case 201u: goto L_088D4F40;
    case 202u: goto L_088D4F88;
    case 203u: goto L_088D4FD8;
    case 204u: goto L_088D4FE0;
    case 205u: goto L_088D4FF0;
    case 206u: goto L_088D4FF8;
    case 207u: goto L_088D501C;
    case 208u: goto L_088D5024;
    case 209u: goto L_088D502C;
    case 210u: goto L_088D5034;
    case 211u: goto L_088D503C;
    case 212u: goto L_088D5044;
    case 213u: goto L_088D5048;
    case 214u: goto L_088D5050;
    case 215u: goto L_088D5054;
    case 216u: goto L_088D508C;
    case 217u: goto L_088D50A4;
    case 218u: goto L_088D50AC;
    case 219u: goto L_088D50B0;
    case 220u: goto L_088D50D0;
    case 221u: goto L_088D50EC;
    case 222u: goto L_088D50F8;
    case 223u: goto L_088D5104;
    case 224u: goto L_088D5108;
    case 225u: goto L_088D5110;
    case 226u: goto L_088D511C;
    case 227u: goto L_088D5120;
    case 228u: goto L_088D5128;
    case 229u: goto L_088D5134;
    case 230u: goto L_088D5138;
    case 231u: goto L_088D5140;
    case 232u: goto L_088D5158;
    case 233u: goto L_088D5168;
    case 234u: goto L_088D5178;
    case 235u: goto L_088D5198;
    case 236u: goto L_088D51A0;
    case 237u: goto L_088D51B0;
    case 238u: goto L_088D51B8;
    case 239u: goto L_088D51C4;
    case 240u: goto L_088D51D4;
    case 241u: goto L_088D51FC;
    case 242u: goto L_088D5208;
    case 243u: goto L_088D5214;
    case 244u: goto L_088D5220;
    case 245u: goto L_088D5228;
    case 246u: goto L_088D5230;
    case 247u: goto L_088D523C;
    case 248u: goto L_088D5240;
    case 249u: goto L_088D5248;
    case 250u: goto L_088D5254;
    case 251u: goto L_088D525C;
    case 252u: goto L_088D5264;
    case 253u: goto L_088D526C;
    case 254u: goto L_088D5274;
    case 255u: goto L_088D527C;
    case 256u: goto L_088D5298;
    case 257u: goto L_088D52AC;
    case 258u: goto L_088D52BC;
    case 259u: goto L_088D52D4;
    case 260u: goto L_088D52EC;
    case 261u: goto L_088D52F4;
    case 262u: goto L_088D5310;
    case 263u: goto L_088D5324;
    case 264u: goto L_088D5328;
    case 265u: goto L_088D5340;
    case 266u: goto L_088D534C;
    case 267u: goto L_088D5398;
    case 268u: goto L_088D53A8;
    case 269u: goto L_088D53B0;
    case 270u: goto L_088D53B8;
    case 271u: goto L_088D53C0;
    case 272u: goto L_088D53D4;
    case 273u: goto L_088D53E0;
    case 274u: goto L_088D53F0;
    case 275u: goto L_088D53FC;
    case 276u: goto L_088D540C;
    case 277u: goto L_088D5414;
    case 278u: goto L_088D541C;
    case 279u: goto L_088D5420;
    case 280u: goto L_088D542C;
    case 281u: goto L_088D543C;
    case 282u: goto L_088D5444;
    case 283u: goto L_088D544C;
    case 284u: goto L_088D5454;
    case 285u: goto L_088D5464;
    case 286u: goto L_088D5470;
    case 287u: goto L_088D5478;
    case 288u: goto L_088D5480;
    case 289u: goto L_088D5484;
    case 290u: goto L_088D548C;
    case 291u: goto L_088D54A8;
    case 292u: goto L_088D54C0;
    case 293u: goto L_088D54E8;
    case 294u: goto L_088D54F0;
    case 295u: goto L_088D54FC;
    case 296u: goto L_088D550C;
    case 297u: goto L_088D5520;
    case 298u: goto L_088D5530;
    case 299u: goto L_088D5538;
    case 300u: goto L_088D5554;
    case 301u: goto L_088D5564;
    case 302u: goto L_088D556C;
    case 303u: goto L_088D5574;
    case 304u: goto L_088D557C;
    case 305u: goto L_088D5580;
    case 306u: goto L_088D5588;
    case 307u: goto L_088D559C;
    case 308u: goto L_088D55B0;
    case 309u: goto L_088D55BC;
    case 310u: goto L_088D55D8;
    case 311u: goto L_088D55E4;
    case 312u: goto L_088D5600;
    case 313u: goto L_088D5608;
    case 314u: goto L_088D5618;
    case 315u: goto L_088D561C;
    case 316u: goto L_088D562C;
    case 317u: goto L_088D5634;
    case 318u: goto L_088D563C;
    case 319u: goto L_088D5644;
    case 320u: goto L_088D5650;
    case 321u: goto L_088D5678;
    case 322u: goto L_088D569C;
    case 323u: goto L_088D56A4;
    case 324u: goto L_088D56AC;
    case 325u: goto L_088D56CC;
    case 326u: goto L_088D56D4;
    case 327u: goto L_088D56E0;
    case 328u: goto L_088D56EC;
    case 329u: goto L_088D56F4;
    case 330u: goto L_088D56FC;
    case 331u: goto L_088D5700;
    case 332u: goto L_088D5708;
    case 333u: goto L_088D5718;
    case 334u: goto L_088D571C;
    case 335u: goto L_088D5738;
    case 336u: goto L_088D5748;
    case 337u: goto L_088D5754;
    case 338u: goto L_088D576C;
    case 339u: goto L_088D5770;
    case 340u: goto L_088D5788;
    case 341u: goto L_088D5798;
    case 342u: goto L_088D57A0;
    case 343u: goto L_088D57A4;
    case 344u: goto L_088D57AC;
    case 345u: goto L_088D57C4;
    case 346u: goto L_088D57D8;
    case 347u: goto L_088D5810;
    case 348u: goto L_088D5820;
    case 349u: goto L_088D582C;
    case 350u: goto L_088D5838;
    case 351u: goto L_088D5840;
    case 352u: goto L_088D5848;
    case 353u: goto L_088D585C;
    case 354u: goto L_088D5878;
    case 355u: goto L_088D588C;
    case 356u: goto L_088D5894;
    case 357u: goto L_088D589C;
    case 358u: goto L_088D58A4;
    case 359u: goto L_088D58C4;
    case 360u: goto L_088D58CC;
    case 361u: goto L_088D58EC;
    case 362u: goto L_088D5900;
    case 363u: goto L_088D591C;
    case 364u: goto L_088D5934;
    case 365u: goto L_088D5940;
    case 366u: goto L_088D594C;
    case 367u: goto L_088D5964;
    case 368u: goto L_088D59A4;
    case 369u: goto L_088D59B8;
    case 370u: goto L_088D59C4;
    case 371u: goto L_088D59D4;
    case 372u: goto L_088D59DC;
    case 373u: goto L_088D59E4;
    case 374u: goto L_088D59F0;
    case 375u: goto L_088D5A08;
    case 376u: goto L_088D5A18;
    case 377u: goto L_088D5A28;
    case 378u: goto L_088D5A30;
    case 379u: goto L_088D5A44;
    case 380u: goto L_088D5A4C;
    case 381u: goto L_088D5A5C;
    case 382u: goto L_088D5A64;
    case 383u: goto L_088D5A6C;
    case 384u: goto L_088D5A84;
    case 385u: goto L_088D5A98;
    case 386u: goto L_088D5AAC;
    case 387u: goto L_088D5AC0;
    case 388u: goto L_088D5AD0;
    case 389u: goto L_088D5AF8;
    case 390u: goto L_088D5B08;
    case 391u: goto L_088D5B20;
    case 392u: goto L_088D5B48;
    case 393u: goto L_088D5B6C;
    case 394u: goto L_088D5B74;
    case 395u: goto L_088D5B7C;
    case 396u: goto L_088D5B8C;
    case 397u: goto L_088D5BB0;
    case 398u: goto L_088D5BBC;
    case 399u: goto L_088D5BC4;
    case 400u: goto L_088D5BD0;
    case 401u: goto L_088D5BDC;
    case 402u: goto L_088D5BE8;
    case 403u: goto L_088D5BF4;
    case 404u: goto L_088D5C10;
    case 405u: goto L_088D5C4C;
    case 406u: goto L_088D5C6C;
    case 407u: goto L_088D5C74;
    case 408u: goto L_088D5C80;
    case 409u: goto L_088D5C8C;
    case 410u: goto L_088D5C98;
    case 411u: goto L_088D5CA8;
    case 412u: goto L_088D5CE8;
    case 413u: goto L_088D5CF8;
    case 414u: goto L_088D5D00;
    case 415u: goto L_088D5D08;
    case 416u: goto L_088D5D10;
    case 417u: goto L_088D5D18;
    case 418u: goto L_088D5D24;
    case 419u: goto L_088D5D2C;
    case 420u: goto L_088D5D50;
    case 421u: goto L_088D5D8C;
    case 422u: goto L_088D5DA0;
    case 423u: goto L_088D5DD4;
    case 424u: goto L_088D5DE8;
    case 425u: goto L_088D5DF4;
    case 426u: goto L_088D5E04;
    case 427u: goto L_088D5E08;
    case 428u: goto L_088D5E30;
    case 429u: goto L_088D5E6C;
    case 430u: goto L_088D5E80;
    case 431u: goto L_088D5E8C;
    case 432u: goto L_088D5EA4;
    case 433u: goto L_088D5EC4;
    case 434u: goto L_088D5ECC;
    case 435u: goto L_088D5ED0;
    case 436u: goto L_088D5EEC;
    case 437u: goto L_088D5F2C;
    case 438u: goto L_088D5F38;
    case 439u: goto L_088D5F48;
    case 440u: goto L_088D5F50;
    case 441u: goto L_088D5F70;
    case 442u: goto L_088D5F7C;
    case 443u: goto L_088D5F94;
    case 444u: goto L_088D5FA0;
    case 445u: goto L_088D5FC0;
    case 446u: goto L_088D6014;
    case 447u: goto L_088D6070;
    case 448u: goto L_088D6078;
    case 449u: goto L_088D616C;
    case 450u: goto L_088D6174;
    case 451u: goto L_088D618C;
    case 452u: goto L_088D61FC;
    case 453u: goto L_088D6204;
    case 454u: goto L_088D620C;
    case 455u: goto L_088D6210;
    case 456u: goto L_088D6260;
    case 457u: goto L_088D6274;
    case 458u: goto L_088D62C4;
    case 459u: goto L_088D62C8;
    case 460u: goto L_088D6300;
    case 461u: goto L_088D6320;
    case 462u: goto L_088D632C;
    case 463u: goto L_088D6338;
    case 464u: goto L_088D6348;
    case 465u: goto L_088D6354;
    case 466u: goto L_088D6360;
    case 467u: goto L_088D6370;
    case 468u: goto L_088D637C;
    case 469u: goto L_088D6388;
    case 470u: goto L_088D6398;
    case 471u: goto L_088D63A4;
    case 472u: goto L_088D63B0;
    case 473u: goto L_088D63C0;
    case 474u: goto L_088D63CC;
    case 475u: goto L_088D63D8;
    case 476u: goto L_088D63FC;
    case 477u: goto L_088D6404;
    case 478u: goto L_088D6418;
    case 479u: goto L_088D642C;
    case 480u: goto L_088D643C;
    case 481u: goto L_088D6494;
    case 482u: goto L_088D64BC;
    case 483u: goto L_088D64C4;
    case 484u: goto L_088D64C8;
    case 485u: goto L_088D64D0;
    case 486u: goto L_088D64F0;
    case 487u: goto L_088D64F8;
    case 488u: goto L_088D6508;
    case 489u: goto L_088D6518;
    case 490u: goto L_088D651C;
    case 491u: goto L_088D6524;
    case 492u: goto L_088D652C;
    case 493u: goto L_088D6544;
    case 494u: goto L_088D6548;
    case 495u: goto L_088D654C;
    case 496u: goto L_088D657C;
    case 497u: goto L_088D6584;
    case 498u: goto L_088D6588;
    case 499u: goto L_088D6590;
    case 500u: goto L_088D65E8;
    case 501u: goto L_088D65F0;
    case 502u: goto L_088D662C;
    case 503u: goto L_088D6664;
    case 504u: goto L_088D6674;
    case 505u: goto L_088D6688;
    case 506u: goto L_088D66A0;
    case 507u: goto L_088D66D4;
    case 508u: goto L_088D66F0;
    case 509u: goto L_088D66F8;
    case 510u: goto L_088D6704;
    case 511u: goto L_088D6720;
    case 512u: goto L_088D6740;
    case 513u: goto L_088D6750;
    case 514u: goto L_088D6758;
    case 515u: goto L_088D6768;
    case 516u: goto L_088D6770;
    case 517u: goto L_088D6778;
    case 518u: goto L_088D6780;
    case 519u: goto L_088D6790;
    case 520u: goto L_088D67A8;
    case 521u: goto L_088D67B0;
    case 522u: goto L_088D67BC;
    case 523u: goto L_088D67C4;
    case 524u: goto L_088D67E0;
    case 525u: goto L_088D67EC;
    case 526u: goto L_088D67F4;
    case 527u: goto L_088D6800;
    case 528u: goto L_088D6804;
    case 529u: goto L_088D680C;
    case 530u: goto L_088D6818;
    case 531u: goto L_088D681C;
    case 532u: goto L_088D6824;
    case 533u: goto L_088D6840;
    case 534u: goto L_088D6850;
    case 535u: goto L_088D6854;
    case 536u: goto L_088D686C;
    case 537u: goto L_088D6888;
    case 538u: goto L_088D688C;
    case 539u: goto L_088D68A4;
    case 540u: goto L_088D68BC;
    case 541u: goto L_088D68CC;
    case 542u: goto L_088D68DC;
    case 543u: goto L_088D68E8;
    case 544u: goto L_088D68F0;
    case 545u: goto L_088D68F8;
    case 546u: goto L_088D6908;
    case 547u: goto L_088D6914;
    case 548u: goto L_088D6918;
    case 549u: goto L_088D6938;
    case 550u: goto L_088D6944;
    case 551u: goto L_088D6950;
    case 552u: goto L_088D6958;
    case 553u: goto L_088D6960;
    case 554u: goto L_088D696C;
    case 555u: goto L_088D6978;
    case 556u: goto L_088D6980;
    case 557u: goto L_088D6988;
    case 558u: goto L_088D6994;
    case 559u: goto L_088D69A0;
    case 560u: goto L_088D69A8;
    case 561u: goto L_088D69B0;
    case 562u: goto L_088D69B4;
    case 563u: goto L_088D69FC;
    case 564u: goto L_088D6A60;
    case 565u: goto L_088D6A6C;
    case 566u: goto L_088D6A78;
    case 567u: goto L_088D6A90;
    case 568u: goto L_088D6A9C;
    case 569u: goto L_088D6AA4;
    case 570u: goto L_088D6AB0;
    case 571u: goto L_088D6AE0;
    case 572u: goto L_088D6AE8;
    case 573u: goto L_088D6AF0;
    case 574u: goto L_088D6AF8;
    case 575u: goto L_088D6B00;
    case 576u: goto L_088D6B08;
    case 577u: goto L_088D6B18;
    case 578u: goto L_088D6B24;
    case 579u: goto L_088D6B2C;
    case 580u: goto L_088D6BC0;
    case 581u: goto L_088D6C24;
    case 582u: goto L_088D6C2C;
    case 583u: goto L_088D6C3C;
    case 584u: goto L_088D6CA8;
    case 585u: goto L_088D6CAC;
    case 586u: goto L_088D6D20;
    case 587u: goto L_088D6D78;
    case 588u: goto L_088D6D90;
    case 589u: goto L_088D6E00;
    case 590u: goto L_088D6E58;
    case 591u: goto L_088D6E60;
    case 592u: goto L_088D6E68;
    case 593u: goto L_088D6E78;
    case 594u: goto L_088D6EDC;
    case 595u: goto L_088D6EE8;
    case 596u: goto L_088D6EEC;
    case 597u: goto L_088D6F14;
    case 598u: goto L_088D6F20;
    case 599u: goto L_088D6F24;
    case 600u: goto L_088D6F2C;
    case 601u: goto L_088D6F34;
    case 602u: goto L_088D6FC8;
    case 603u: goto L_088D7020;
    case 604u: goto L_088D7038;
    case 605u: goto L_088D703C;
    case 606u: goto L_088D7050;
    case 607u: goto L_088D7054;
    case 608u: goto L_088D706C;
    case 609u: goto L_088D7078;
    case 610u: goto L_088D7080;
    case 611u: goto L_088D7088;
    case 612u: goto L_088D708C;
    case 613u: goto L_088D70B8;
    case 614u: goto L_088D70C0;
    case 615u: goto L_088D70EC;
    case 616u: goto L_088D70FC;
    case 617u: goto L_088D710C;
    case 618u: goto L_088D713C;
    case 619u: goto L_088D7140;
    case 620u: goto L_088D7164;
    case 621u: goto L_088D7170;
    case 622u: goto L_088D7208;
    case 623u: goto L_088D7260;
    case 624u: goto L_088D7270;
    case 625u: goto L_088D7288;
    case 626u: goto L_088D7298;
    case 627u: goto L_088D72A4;
    case 628u: goto L_088D72B4;
    case 629u: goto L_088D72CC;
    case 630u: goto L_088D72E8;
    case 631u: goto L_088D72F8;
    case 632u: goto L_088D72FC;
    case 633u: goto L_088D7304;
    case 634u: goto L_088D7310;
    case 635u: goto L_088D731C;
    case 636u: goto L_088D7324;
    case 637u: goto L_088D732C;
    case 638u: goto L_088D7330;
    case 639u: goto L_088D7340;
    case 640u: goto L_088D7348;
    case 641u: goto L_088D7360;
    case 642u: goto L_088D736C;
    case 643u: goto L_088D737C;
    case 644u: goto L_088D7388;
    case 645u: goto L_088D7398;
    case 646u: goto L_088D73B8;
    case 647u: goto L_088D73C8;
    case 648u: goto L_088D73D4;
    case 649u: goto L_088D7438;
    case 650u: goto L_088D7464;
    case 651u: goto L_088D746C;
    case 652u: goto L_088D7480;
    case 653u: goto L_088D748C;
    case 654u: goto L_088D7494;
    case 655u: goto L_088D74A4;
    case 656u: goto L_088D74D8;
    case 657u: goto L_088D74E0;
    case 658u: goto L_088D74F4;
    case 659u: goto L_088D7500;
    case 660u: goto L_088D7508;
    case 661u: goto L_088D7518;
    case 662u: goto L_088D7528;
    case 663u: goto L_088D754C;
    case 664u: goto L_088D7558;
    case 665u: goto L_088D7560;
    case 666u: goto L_088D7574;
    case 667u: goto L_088D7580;
    case 668u: goto L_088D7588;
    case 669u: goto L_088D7598;
    case 670u: goto L_088D75AC;
    case 671u: goto L_088D75B8;
    case 672u: goto L_088D75BC;
    case 673u: goto L_088D75E8;
    case 674u: goto L_088D75F4;
    case 675u: goto L_088D7608;
    case 676u: goto L_088D7610;
    case 677u: goto L_088D7620;
    case 678u: goto L_088D7644;
    case 679u: goto L_088D764C;
    case 680u: goto L_088D7670;
    case 681u: goto L_088D7678;
    case 682u: goto L_088D7680;
    case 683u: goto L_088D7688;
    case 684u: goto L_088D7698;
    case 685u: goto L_088D76A4;
    case 686u: goto L_088D76C0;
    case 687u: goto L_088D76DC;
    case 688u: goto L_088D76E4;
    case 689u: goto L_088D76EC;
    case 690u: goto L_088D76F4;
    case 691u: goto L_088D76F8;
    case 692u: goto L_088D7704;
    case 693u: goto L_088D7720;
    case 694u: goto L_088D774C;
    case 695u: goto L_088D7784;
    case 696u: goto L_088D77E4;
    case 697u: goto L_088D7818;
    case 698u: goto L_088D7834;
    case 699u: goto L_088D7844;
    case 700u: goto L_088D7868;
    case 701u: goto L_088D7870;
    case 702u: goto L_088D787C;
    case 703u: goto L_088D788C;
    case 704u: goto L_088D789C;
    case 705u: goto L_088D78B8;
    case 706u: goto L_088D78DC;
    case 707u: goto L_088D78E4;
    case 708u: goto L_088D78F0;
    case 709u: goto L_088D7914;
    case 710u: goto L_088D7938;
    case 711u: goto L_088D7940;
    case 712u: goto L_088D7944;
    case 713u: goto L_088D795C;
    case 714u: goto L_088D797C;
    case 715u: goto L_088D7984;
    case 716u: goto L_088D7988;
    case 717u: goto L_088D79A0;
    case 718u: goto L_088D79A8;
    case 719u: goto L_088D79C8;
    case 720u: goto L_088D79D0;
    case 721u: goto L_088D79D4;
    case 722u: goto L_088D79DC;
    case 723u: goto L_088D79EC;
    case 724u: goto L_088D79F4;
    case 725u: goto L_088D79FC;
    case 726u: goto L_088D7A08;
    case 727u: goto L_088D7A10;
    case 728u: goto L_088D7A18;
    case 729u: goto L_088D7A20;
    case 730u: goto L_088D7A28;
    case 731u: goto L_088D7A48;
    case 732u: goto L_088D7A54;
    case 733u: goto L_088D7A6C;
    case 734u: goto L_088D7A8C;
    case 735u: goto L_088D7A94;
    case 736u: goto L_088D7A98;
    case 737u: goto L_088D7AAC;
    case 738u: goto L_088D7AB0;
    case 739u: goto L_088D7AB8;
    case 740u: goto L_088D7AD4;
    case 741u: goto L_088D7AF8;
    case 742u: goto L_088D7B00;
    case 743u: goto L_088D7B0C;
    case 744u: goto L_088D7B14;
    case 745u: goto L_088D7B1C;
    case 746u: goto L_088D7B20;
    case 747u: goto L_088D7B34;
    case 748u: goto L_088D7B54;
    case 749u: goto L_088D7B5C;
    case 750u: goto L_088D7B64;
    case 751u: goto L_088D7B6C;
    case 752u: goto L_088D7B74;
    case 753u: goto L_088D7B7C;
    case 754u: goto L_088D7B84;
    case 755u: goto L_088D7B90;
    case 756u: goto L_088D7B98;
    case 757u: goto L_088D7BB0;
    case 758u: goto L_088D7BD0;
    case 759u: goto L_088D7BD8;
    case 760u: goto L_088D7BE4;
    case 761u: goto L_088D7BF0;
    case 762u: goto L_088D7BF8;
    case 763u: goto L_088D7C10;
    case 764u: goto L_088D7C28;
    case 765u: goto L_088D7C30;
    case 766u: goto L_088D7C4C;
    case 767u: goto L_088D7C6C;
    case 768u: goto L_088D7C74;
    case 769u: goto L_088D7C7C;
    case 770u: goto L_088D7C88;
    case 771u: goto L_088D7C8C;
    case 772u: goto L_088D7C94;
    case 773u: goto L_088D7CA0;
    case 774u: goto L_088D7CA8;
    case 775u: goto L_088D7CCC;
    case 776u: goto L_088D7CE8;
    case 777u: goto L_088D7CF8;
    case 778u: goto L_088D7D08;
    case 779u: goto L_088D7D2C;
    case 780u: goto L_088D7D34;
    case 781u: goto L_088D7D48;
    case 782u: goto L_088D7D60;
    case 783u: goto L_088D7D70;
    case 784u: goto L_088D7D80;
    case 785u: goto L_088D7D84;
    case 786u: goto L_088D7DA4;
    case 787u: goto L_088D7DAC;
    case 788u: goto L_088D7DC8;
    case 789u: goto L_088D7DE4;
    case 790u: goto L_088D7E0C;
    case 791u: goto L_088D7E30;
    case 792u: goto L_088D7E80;
    case 793u: goto L_088D7EA4;
    case 794u: goto L_088D7EB4;
    case 795u: goto L_088D7ECC;
    case 796u: goto L_088D7EDC;
    case 797u: goto L_088D7EE4;
    case 798u: goto L_088D7EEC;
    case 799u: goto L_088D7EF4;
    case 800u: goto L_088D7F04;
    case 801u: goto L_088D7F0C;
    case 802u: goto L_088D7F20;
    case 803u: goto L_088D7F28;
    case 804u: goto L_088D7F30;
    case 805u: goto L_088D7F38;
    case 806u: goto L_088D7F48;
    case 807u: goto L_088D7F50;
    case 808u: goto L_088D7F70;
    case 809u: goto L_088D7F88;
    case 810u: goto L_088D7F90;
    case 811u: goto L_088D7FA4;
    case 812u: goto L_088D7FC0;
    case 813u: goto L_088D7FD0;
    case 814u: goto L_088D7FF0;
    case 815u: goto L_088D7FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088D4000:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 379u, 0x088D2E5Cu>(ctx, &aot_mem); return;
      }
      goto L_088D4008;
    }
L_088D4008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[21] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088D402C;
      }
      goto L_088D401C;
    }
L_088D401C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D402Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13596));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 360u, 0x08A01968u>(ctx, &aot_mem) && ctx.pc == 0x088D402Cu) goto L_088D402C;
    return;
L_088D402C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088D4060;
      }
      goto L_088D403C;
    }
L_088D403C:
    ctx.gpr[31] = (0x088D4044u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 109u, 0x088D1A60u>(ctx, &aot_mem) && ctx.pc == 0x088D4044u) goto L_088D4044;
    return;
L_088D4044:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4060;
      }
      goto L_088D4050;
    }
L_088D4050:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D4060u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13636));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 360u, 0x08A01968u>(ctx, &aot_mem) && ctx.pc == 0x088D4060u) goto L_088D4060;
    return;
L_088D4060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088D4094;
      }
      goto L_088D4070;
    }
L_088D4070:
    ctx.gpr[31] = (0x088D4078u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 109u, 0x088D1A60u>(ctx, &aot_mem) && ctx.pc == 0x088D4078u) goto L_088D4078;
    return;
L_088D4078:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4094;
      }
      goto L_088D4084;
    }
L_088D4084:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D4094u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13668));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 360u, 0x08A01968u>(ctx, &aot_mem) && ctx.pc == 0x088D4094u) goto L_088D4094;
    return;
L_088D4094:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
      if (branch_taken) {
          goto L_088D40CC;
      }
      goto L_088D40B0;
    }
L_088D40B0:
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_088D40C4;
    }
    goto L_088D40C4;
L_088D40C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D40E0;
      }
      goto L_088D40CC;
    }
L_088D40CC:
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_088D40E0;
    }
    goto L_088D40E0;
L_088D40E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (4u << 16u);
      if (branch_taken) {
          goto L_088D4114;
      }
      goto L_088D40E8;
    }
L_088D40E8:
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D4114;
L_088D4114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D44D8;
      }
      goto L_088D411C;
    }
L_088D411C:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] >> 6u);
    ctx.gpr[19] = (ctx.gpr[4] & 511u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[19] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D41B0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 358u, 0x088B9F94u>(ctx, &aot_mem) && ctx.pc == 0x088D41B0u) goto L_088D41B0;
    return;
L_088D41B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[20] >> 24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[22] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[21]);
    goto L_088D41D4;
L_088D41D4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088D41D4;
      }
      goto L_088D4204;
    }
L_088D4204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_088D4220;
    }
    goto L_088D4210;
L_088D4210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D424C;
      }
      goto L_088D4220;
    }
L_088D4220:
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_088D424C;
L_088D424C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D44D8;
      }
      goto L_088D4254;
    }
L_088D4254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (4u << 16u);
      if (branch_taken) {
          goto L_088D42D4;
      }
      goto L_088D4264;
    }
L_088D4264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[6] + static_cast<std::uint32_t>(13696));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088D4298u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088D4298u) goto L_088D4298;
    return;
L_088D4298:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088D42A8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 560u, 0x089171D8u>(ctx, &aot_mem) && ctx.pc == 0x088D42A8u) goto L_088D42A8;
    return;
L_088D42A8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088D42B4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 51u, 0x08928360u>(ctx, &aot_mem) && ctx.pc == 0x088D42B4u) goto L_088D42B4;
    return;
L_088D42B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (4u << 16u);
    goto L_088D42D4;
L_088D42D4:
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D44D8;
      }
      goto L_088D4300;
    }
L_088D4300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D4340;
      }
      goto L_088D4310;
    }
L_088D4310:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[20] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088D4348;
      }
      goto L_088D4334;
    }
L_088D4334:
    ctx.gpr[21] = (ctx.gpr[20] & 31u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D4370;
      }
      goto L_088D4340;
    }
L_088D4340:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D44E0;
      }
      goto L_088D4348;
    }
L_088D4348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[22]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] >> 29u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_088D4370;
L_088D4370:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    ctx.gpr[20] = (ctx.gpr[20] & ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D43B8;
      }
      goto L_088D437C;
    }
L_088D437C:
    ctx.gpr[4] = (ctx.gpr[21] << 3u);
    ctx.gpr[23] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D4394u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 80u, 0x08928534u>(ctx, &aot_mem) && ctx.pc == 0x088D4394u) goto L_088D4394;
    return;
L_088D4394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D437C;
      }
      goto L_088D43B8;
    }
L_088D43B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D44D8;
      }
      goto L_088D43C0;
    }
L_088D43C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D43CCu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 142u, 0x08878BB8u>(ctx, &aot_mem) && ctx.pc == 0x088D43CCu) goto L_088D43CC;
    return;
L_088D43CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D44D8;
      }
      goto L_088D43D4;
    }
L_088D43D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D440Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 130u, 0x08878A9Cu>(ctx, &aot_mem) && ctx.pc == 0x088D440Cu) goto L_088D440C;
    return;
L_088D440C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 6u);
      if (branch_taken) {
          goto L_088D44B0;
      }
      goto L_088D4424;
    }
L_088D4424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_088D4468;
    }
    goto L_088D443C;
L_088D443C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D4490;
      }
      goto L_088D4468;
    }
L_088D4468:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] >> 15u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[31] = (0x088D4484u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 133u, 0x08878B24u>(ctx, &aot_mem) && ctx.pc == 0x088D4484u) goto L_088D4484;
    return;
L_088D4484:
    ctx.gpr[4] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_088D4490;
L_088D4490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4424;
      }
      goto L_088D44AC;
    }
L_088D44AC:
    ctx.gpr[4] = (0u | 6u);
    goto L_088D44B0;
L_088D44B0:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D44D8;
      }
      goto L_088D44D0;
    }
L_088D44D0:
    ctx.gpr[31] = (0x088D44D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 111u, 0x0891C878u>(ctx, &aot_mem) && ctx.pc == 0x088D44D8u) goto L_088D44D8;
    return;
L_088D44D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 380u, 0x088D2E8Cu>(ctx, &aot_mem); return;
      }
      goto L_088D44E0;
    }
L_088D44E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D450C:
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
L_088D4538:
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
L_088D4550:
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
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
L_088D4568:
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
L_088D4584:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D45C4;
      }
      goto L_088D45AC;
    }
L_088D45AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D45CC;
      }
      goto L_088D45BC;
    }
L_088D45BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_088D45EC;
      }
      goto L_088D45C4;
    }
L_088D45C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
      if (branch_taken) {
          goto L_088D45F0;
      }
      goto L_088D45CC;
    }
L_088D45CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088D45DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x088D45DCu) goto L_088D45DC;
    return;
L_088D45DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_088D45EC;
L_088D45EC:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    goto L_088D45F0;
L_088D45F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4600:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D462Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13880));
    goto L_088D450C;
L_088D462C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D463Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A7DE0u>(ctx, &aot_mem) && ctx.pc == 0x088D463Cu) goto L_088D463C;
    return;
L_088D463C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4650;
      }
      goto L_088D4648;
    }
L_088D4648:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D46A0;
      }
      goto L_088D4650;
    }
L_088D4650:
    ctx.gpr[31] = (0x088D4658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 123u, 0x08A34C08u>(ctx, &aot_mem) && ctx.pc == 0x088D4658u) goto L_088D4658;
    return;
L_088D4658:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (0u | 80u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088D46A0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x088D46A0u) goto L_088D46A0;
    return;
L_088D46A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D46B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
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
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4710:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D474Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D474Cu) goto L_088D474C;
    return;
L_088D474C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
      if (branch_taken) {
          goto L_088D4768;
      }
      goto L_088D475C;
    }
L_088D475C:
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D4844;
      }
      goto L_088D4768;
    }
L_088D4768:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4844;
      }
      goto L_088D4774;
    }
L_088D4774:
    ctx.gpr[31] = (0x088D477Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D477Cu) goto L_088D477C;
    return;
L_088D477C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8107));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_088D47E0;
      }
      goto L_088D47A8;
    }
L_088D47A8:
    ctx.gpr[8] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088D47E0;
      }
      goto L_088D47B4;
    }
L_088D47B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] | 3u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 46u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x088D47D8u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088D47D8u) goto L_088D47D8;
    return;
L_088D47D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D492C;
      }
      goto L_088D47E0;
    }
L_088D47E0:
    ctx.gpr[8] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088D4818;
      }
      goto L_088D47EC;
    }
L_088D47EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] | 3u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 50u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x088D4810u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4810u) goto L_088D4810;
    return;
L_088D4810:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D492C;
      }
      goto L_088D4818;
    }
L_088D4818:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] | 3u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 51u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x088D483Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088D483Cu) goto L_088D483C;
    return;
L_088D483C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D492C;
      }
      goto L_088D4844;
    }
L_088D4844:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D492C;
      }
      goto L_088D484C;
    }
L_088D484C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D492C;
      }
      goto L_088D4854;
    }
L_088D4854:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(21154));
      if (branch_taken) {
          goto L_088D4894;
      }
      goto L_088D4868;
    }
L_088D4868:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4894;
      }
      goto L_088D4874;
    }
L_088D4874:
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-26)));
      if (branch_taken) {
          goto L_088D48E0;
      }
      goto L_088D4894;
    }
L_088D4894:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D48B4;
      }
      goto L_088D48A4;
    }
L_088D48A4:
    ctx.gpr[31] = (0x088D48ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 362u, 0x0899E2CCu>(ctx, &aot_mem) && ctx.pc == 0x088D48ACu) goto L_088D48AC;
    return;
L_088D48AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
      if (branch_taken) {
          goto L_088D48CC;
      }
      goto L_088D48B4;
    }
L_088D48B4:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088D48E0;
      }
      goto L_088D48CC;
    }
L_088D48CC:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088D48E0;
L_088D48E0:
    ctx.gpr[4] = (0u | 209u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D492C;
      }
      goto L_088D48EC;
    }
L_088D48EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] | 3u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x088D492Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088D492Cu) goto L_088D492C;
    return;
L_088D492C:
    ctx.gpr[31] = (0x088D4934u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D4934u) goto L_088D4934;
    return;
L_088D4934:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4968;
      }
      goto L_088D493C;
    }
L_088D493C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D4968;
      }
      goto L_088D494C;
    }
L_088D494C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4968;
      }
      goto L_088D495C;
    }
L_088D495C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D4968u);
    ctx.gpr[5] = (0u | 138u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x088D4968u) goto L_088D4968;
    return;
L_088D4968:
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
L_088D4980:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D49E4;
      }
      goto L_088D499C;
    }
L_088D499C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
        goto L_088D49C0;
    }
    goto L_088D49AC;
L_088D49AC:
    ctx.gpr[31] = (0x088D49B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D49B4u) goto L_088D49B4;
    return;
L_088D49B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D49E4;
      }
      goto L_088D49BC;
    }
L_088D49BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    goto L_088D49C0;
L_088D49C0:
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D49E4;
      }
      goto L_088D49CC;
    }
L_088D49CC:
    ctx.gpr[31] = (0x088D49D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088D49D4u) goto L_088D49D4;
    return;
L_088D49D4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088D49EC;
      }
      goto L_088D49DC;
    }
L_088D49DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4A10;
      }
      goto L_088D49E4;
    }
L_088D49E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4A74;
      }
      goto L_088D49EC;
    }
L_088D49EC:
    ctx.gpr[31] = (0x088D49F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 339u, 0x088EE418u>(ctx, &aot_mem) && ctx.pc == 0x088D49F4u) goto L_088D49F4;
    return;
L_088D49F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4A10;
      }
      goto L_088D49FC;
    }
L_088D49FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D4A08u);
    ctx.gpr[5] = (0u | 0u);
    goto L_088D534C;
L_088D4A08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4A74;
      }
      goto L_088D4A10;
    }
L_088D4A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4A50;
      }
      goto L_088D4A20;
    }
L_088D4A20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4A40;
      }
      goto L_088D4A2C;
    }
L_088D4A2C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088D4A38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088D534C;
L_088D4A38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4A74;
      }
      goto L_088D4A40;
    }
L_088D4A40:
    ctx.gpr[31] = (0x088D4A48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088D5678;
L_088D4A48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4A74;
      }
      goto L_088D4A50;
    }
L_088D4A50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4A6C;
      }
      goto L_088D4A5C;
    }
L_088D4A5C:
    ctx.gpr[31] = (0x088D4A64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x088D4A64u) goto L_088D4A64;
    return;
L_088D4A64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4A74;
      }
      goto L_088D4A6C;
    }
L_088D4A6C:
    ctx.gpr[31] = (0x088D4A74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x088D4A74u) goto L_088D4A74;
    return;
L_088D4A74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4A84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D4AF0;
      }
      goto L_088D4AA4;
    }
L_088D4AA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088D4AC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4AC4u) goto L_088D4AC4;
    return;
L_088D4AC4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (32u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 201u);
      if (branch_taken) {
          goto L_088D4AF8;
      }
      goto L_088D4AE8;
    }
L_088D4AE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D4B00;
      }
      goto L_088D4AF0;
    }
L_088D4AF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4C7C;
      }
      goto L_088D4AF8;
    }
L_088D4AF8:
    ctx.gpr[4] = (0u | 57u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_088D4B00;
L_088D4B00:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D4B0Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D4B0Cu) goto L_088D4B0C;
    return;
L_088D4B0C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4B5C;
      }
      goto L_088D4B18;
    }
L_088D4B18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4B5C;
      }
      goto L_088D4B34;
    }
L_088D4B34:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 202u);
        goto L_088D4B48;
    }
    goto L_088D4B48;
L_088D4B48:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D4B58u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D4B58u) goto L_088D4B58;
    return;
L_088D4B58:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D4B5C;
L_088D4B5C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4BA4;
      }
      goto L_088D4B64;
    }
L_088D4B64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] & 16384u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4BA4;
      }
      goto L_088D4B7C;
    }
L_088D4B7C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 205u);
        goto L_088D4B90;
    }
    goto L_088D4B90;
L_088D4B90:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D4BA0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D4BA0u) goto L_088D4BA0;
    return;
L_088D4BA0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D4BA4;
L_088D4BA4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4BEC;
      }
      goto L_088D4BAC;
    }
L_088D4BAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4BEC;
      }
      goto L_088D4BC4;
    }
L_088D4BC4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 202u);
        goto L_088D4BD8;
    }
    goto L_088D4BD8;
L_088D4BD8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D4BE8u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D4BE8u) goto L_088D4BE8;
    return;
L_088D4BE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D4BEC;
L_088D4BEC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4C2C;
      }
      goto L_088D4BF4;
    }
L_088D4BF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[17] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4C2C;
      }
      goto L_088D4C10;
    }
L_088D4C10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (0u | 205u);
        goto L_088D4C20;
    }
    goto L_088D4C20;
L_088D4C20:
    ctx.gpr[31] = (0x088D4C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D4C28u) goto L_088D4C28;
    return;
L_088D4C28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D4C2C;
L_088D4C2C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4C74;
      }
      goto L_088D4C34;
    }
L_088D4C34:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (2190u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1684));
    ctx.gpr[31] = (0x088D4C6Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 50u, 0x088B447Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4C6Cu) goto L_088D4C6C;
    return;
L_088D4C6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4C7C;
      }
      goto L_088D4C74;
    }
L_088D4C74:
    ctx.gpr[31] = (0x088D4C7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088D4980;
L_088D4C7C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4C90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (16268u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[6] & 255u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D4D0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 140u, 0x08850DD0u>(ctx, &aot_mem) && ctx.pc == 0x088D4D0Cu) goto L_088D4D0C;
    return;
L_088D4D0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088D4D20;
      }
      goto L_088D4D14;
    }
L_088D4D14:
    ctx.gpr[4] = (16332u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088D4D20;
L_088D4D20:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088D4F3C;
      }
      goto L_088D4D3C;
    }
L_088D4D3C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (16585u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (16262u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.gpr[30] = (0u | 55u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (0u | 45u);
    ctx.gpr[21] = (2229u << 16u);
    goto L_088D4D84;
L_088D4D84:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4DA4;
      }
      goto L_088D4D94;
    }
L_088D4D94:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
      if (branch_taken) {
          goto L_088D4DF4;
      }
      goto L_088D4DA4;
    }
L_088D4DA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(27452)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
        goto L_088D4DE0;
    }
    goto L_088D4DB0;
L_088D4DB0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1872)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D4DD4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 232u, 0x088A8FD4u>(ctx, &aot_mem) && ctx.pc == 0x088D4DD4u) goto L_088D4DD4;
    return;
L_088D4DD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4DF4;
      }
      goto L_088D4DDC;
    }
L_088D4DDC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    goto L_088D4DE0;
L_088D4DE0:
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1872)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    goto L_088D4DF4;
L_088D4DF4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4E04;
      }
      goto L_088D4DFC;
    }
L_088D4DFC:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088D4F1C;
      }
      goto L_088D4E04;
    }
L_088D4E04:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4E18;
      }
      goto L_088D4E0C;
    }
L_088D4E0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4F1C;
      }
      goto L_088D4E18;
    }
L_088D4E18:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D4F1C;
      }
      goto L_088D4E4C;
    }
L_088D4E4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x088D4E68u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x088D4E68u) goto L_088D4E68;
    return;
L_088D4E68:
    ctx.gpr[31] = (0x088D4E70u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x088D4E70u) goto L_088D4E70;
    return;
L_088D4E70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x088D4E7Cu);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x088D4E7Cu) goto L_088D4E7C;
    return;
L_088D4E7C:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088D4E94;
    }
    goto L_088D4E94;
L_088D4E94:
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[30] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D4EAC;
      }
      goto L_088D4EA8;
    }
L_088D4EA8:
    ctx.fpr[30] = ctx.fpr[26] - ctx.fpr[12];
    goto L_088D4EAC;
L_088D4EAC:
    ctx.gpr[31] = (0x088D4EB4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088D4584;
L_088D4EB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D4EF4;
      }
      goto L_088D4EC0;
    }
L_088D4EC0:
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 43u);
      if (branch_taken) {
          goto L_088D4EEC;
      }
      goto L_088D4ECC;
    }
L_088D4ECC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 54u);
      if (branch_taken) {
          goto L_088D4EEC;
      }
      goto L_088D4ED4;
    }
L_088D4ED4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D4EEC;
      }
      goto L_088D4EDC;
    }
L_088D4EDC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088D4EEC;
      }
      goto L_088D4EE4;
    }
L_088D4EE4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088D4EF4;
      }
      goto L_088D4EEC;
    }
L_088D4EEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4F3C;
      }
      goto L_088D4EF4;
    }
L_088D4EF4:
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D4F1C;
      }
      goto L_088D4F04;
    }
L_088D4F04:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088D4F14;
      }
      goto L_088D4F0C;
    }
L_088D4F0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_088D4F40;
      }
      goto L_088D4F14;
    }
L_088D4F14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088D4F40;
      }
      goto L_088D4F1C;
    }
L_088D4F1C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4D84;
      }
      goto L_088D4F3C;
    }
L_088D4F3C:
    ctx.gpr[2] = (0u | 0u);
    goto L_088D4F40;
L_088D4F40:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4F88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[7] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D4FD8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x088D4FD8u) goto L_088D4FD8;
    return;
L_088D4FD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5024;
      }
      goto L_088D4FE0;
    }
L_088D4FE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D5024;
      }
      goto L_088D4FF0;
    }
L_088D4FF0:
    ctx.gpr[31] = (0x088D4FF8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4FF8u) goto L_088D4FF8;
    return;
L_088D4FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65408u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
        goto L_088D502C;
    }
    goto L_088D501C;
L_088D501C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 30u);
      if (branch_taken) {
          goto L_088D5054;
      }
      goto L_088D5024;
    }
L_088D5024:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D50B0;
      }
      goto L_088D502C;
    }
L_088D502C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5048;
      }
      goto L_088D5034;
    }
L_088D5034:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_088D5048;
    }
    goto L_088D503C;
L_088D503C:
    ctx.gpr[31] = (0x088D5044u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x088D5044u) goto L_088D5044;
    return;
L_088D5044:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_088D5048;
L_088D5048:
    ctx.gpr[31] = (0x088D5050u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x088D5050u) goto L_088D5050;
    return;
L_088D5050:
    ctx.gpr[4] = (0u | 30u);
    goto L_088D5054;
L_088D5054:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1784), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(652), ctx.gpr[16]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1340), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088D50AC;
      }
      goto L_088D508C;
    }
L_088D508C:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088D50A4u);
    ctx.gpr[6] = (0u | 158u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D50A4u) goto L_088D50A4;
    return;
L_088D50A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D50B0;
      }
      goto L_088D50AC;
    }
L_088D50AC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1780), 0u);
    goto L_088D50B0;
L_088D50B0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D50D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D50ECu);
    ctx.gpr[5] = (0u | 149u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D50ECu) goto L_088D50EC;
    return;
L_088D50EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5108;
      }
      goto L_088D50F8;
    }
L_088D50F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D5104u);
    ctx.gpr[5] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D5104u) goto L_088D5104;
    return;
L_088D5104:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D5108;
L_088D5108:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5120;
      }
      goto L_088D5110;
    }
L_088D5110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D511Cu);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D511Cu) goto L_088D511C;
    return;
L_088D511C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D5120;
L_088D5120:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5138;
      }
      goto L_088D5128;
    }
L_088D5128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D5134u);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D5134u) goto L_088D5134;
    return;
L_088D5134:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D5138;
L_088D5138:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5158;
      }
      goto L_088D5140;
    }
L_088D5140:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_088D5158;
L_088D5158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(652)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5178;
      }
      goto L_088D5168;
    }
L_088D5168:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1784), ctx.gpr[4]);
    goto L_088D5178;
L_088D5178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65024u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(656), 0u);
    ctx.gpr[31] = (0x088D5198u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 92u, 0x089A0714u>(ctx, &aot_mem) && ctx.pc == 0x088D5198u) goto L_088D5198;
    return;
L_088D5198:
    ctx.gpr[31] = (0x088D51A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x088D51A0u) goto L_088D51A0;
    return;
L_088D51A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D51B8;
      }
      goto L_088D51B0;
    }
L_088D51B0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D51C4;
      }
      goto L_088D51B8;
    }
L_088D51B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D51C4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x088D51C4u) goto L_088D51C4;
    return;
L_088D51C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D51D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D5228;
      }
      goto L_088D51FC;
    }
L_088D51FC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), 0u);
    ctx.gpr[31] = (0x088D5208u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x088D5208u) goto L_088D5208;
    return;
L_088D5208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D5214u);
    ctx.gpr[5] = (0u | 41u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D5214u) goto L_088D5214;
    return;
L_088D5214:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5230;
      }
      goto L_088D5220;
    }
L_088D5220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5240;
      }
      goto L_088D5228;
    }
L_088D5228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5328;
      }
      goto L_088D5230;
    }
L_088D5230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D523Cu);
    ctx.gpr[5] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D523Cu) goto L_088D523C;
    return;
L_088D523C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D5240;
L_088D5240:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5254;
      }
      goto L_088D5248;
    }
L_088D5248:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_088D5254;
L_088D5254:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D526C;
      }
      goto L_088D525C;
    }
L_088D525C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_088D5324;
      }
      goto L_088D5264;
    }
L_088D5264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D52F4;
      }
      goto L_088D526C;
    }
L_088D526C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D52BC;
      }
      goto L_088D5274;
    }
L_088D5274:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5324;
      }
      goto L_088D527C;
    }
L_088D527C:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088D5298u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D5298u) goto L_088D5298;
    return;
L_088D5298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088D52ACu);
    ctx.gpr[6] = (0u | 42u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D52ACu) goto L_088D52AC;
    return;
L_088D52AC:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D5324;
      }
      goto L_088D52BC;
    }
L_088D52BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x088D52D4u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D52D4u) goto L_088D52D4;
    return;
L_088D52D4:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088D52ECu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D52ECu) goto L_088D52EC;
    return;
L_088D52EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5324;
      }
      goto L_088D52F4;
    }
L_088D52F4:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088D5310u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D5310u) goto L_088D5310;
    return;
L_088D5310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088D5324u);
    ctx.gpr[6] = (0u | 42u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D5324u) goto L_088D5324;
    return;
L_088D5324:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), 0u);
    goto L_088D5328;
L_088D5328:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5340:
    ctx.gpr[5] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(21148), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D534C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D5398u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5398u) goto L_088D5398;
    return;
L_088D5398:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D53B8;
      }
      goto L_088D53A8;
    }
L_088D53A8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[19] = (0u | 22u);
      if (branch_taken) {
          goto L_088D53C0;
      }
      goto L_088D53B0;
    }
L_088D53B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D53F0;
      }
      goto L_088D53B8;
    }
L_088D53B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5650;
      }
      goto L_088D53C0;
    }
L_088D53C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088D53D4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x088D53D4u) goto L_088D53D4;
    return;
L_088D53D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D53E0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 54u, 0x089A040Cu>(ctx, &aot_mem) && ctx.pc == 0x088D53E0u) goto L_088D53E0;
    return;
L_088D53E0:
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D53F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x088D53F0u) goto L_088D53F0;
    return;
L_088D53F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088D5444;
      }
      goto L_088D53FC;
    }
L_088D53FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
        goto L_088D5420;
    }
    goto L_088D540C;
L_088D540C:
    ctx.gpr[31] = (0x088D5414u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D5414u) goto L_088D5414;
    return;
L_088D5414:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5444;
      }
      goto L_088D541C;
    }
L_088D541C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    goto L_088D5420;
L_088D5420:
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D5444;
      }
      goto L_088D542C;
    }
L_088D542C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088D544C;
      }
      goto L_088D543C;
    }
L_088D543C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5454;
      }
      goto L_088D5444;
    }
L_088D5444:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5650;
      }
      goto L_088D544C;
    }
L_088D544C:
    ctx.gpr[31] = (0x088D5454u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5454u) goto L_088D5454;
    return;
L_088D5454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D548C;
      }
      goto L_088D5464;
    }
L_088D5464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5484;
      }
      goto L_088D5470;
    }
L_088D5470:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_088D5484;
    }
    goto L_088D5478;
L_088D5478:
    ctx.gpr[31] = (0x088D5480u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x088D5480u) goto L_088D5480;
    return;
L_088D5480:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_088D5484;
L_088D5484:
    ctx.gpr[31] = (0x088D548Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x088D548Cu) goto L_088D548C;
    return;
L_088D548C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D54A8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x088D54A8u) goto L_088D54A8;
    return;
L_088D54A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088D5520;
      }
      goto L_088D54C0;
    }
L_088D54C0:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (49520u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[29] | 0u);
    goto L_088D54E8;
L_088D54E8:
    ctx.gpr[31] = (0x088D54F0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D54F0u) goto L_088D54F0;
    return;
L_088D54F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D550C;
      }
      goto L_088D54FC;
    }
L_088D54FC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_088D550C;
L_088D550C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088D54E8;
      }
      goto L_088D5520;
    }
L_088D5520:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
      if (branch_taken) {
          goto L_088D5574;
      }
      goto L_088D5530;
    }
L_088D5530:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5574;
      }
      goto L_088D5538;
    }
L_088D5538:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5574;
      }
      goto L_088D5554;
    }
L_088D5554:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 202u);
        goto L_088D5564;
    }
    goto L_088D5564;
L_088D5564:
    ctx.gpr[31] = (0x088D556Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D556Cu) goto L_088D556C;
    return;
L_088D556C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D5580;
      }
      goto L_088D5574;
    }
L_088D5574:
    ctx.gpr[31] = (0x088D557Cu);
    ctx.gpr[5] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D557Cu) goto L_088D557C;
    return;
L_088D557C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_088D5580;
L_088D5580:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D559C;
      }
      goto L_088D5588;
    }
L_088D5588:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D562C;
      }
      goto L_088D559C;
    }
L_088D559C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_088D5608;
      }
      goto L_088D55B0;
    }
L_088D55B0:
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5608;
      }
      goto L_088D55BC;
    }
L_088D55BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    ctx.gpr[18] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5608;
      }
      goto L_088D55D8;
    }
L_088D55D8:
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[4] = (0u | 202u);
        goto L_088D55E4;
    }
    goto L_088D55E4;
L_088D55E4:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[31] = (0x088D5600u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D5600u) goto L_088D5600;
    return;
L_088D5600:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D561C;
      }
      goto L_088D5608;
    }
L_088D5608:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088D5618u);
    ctx.gpr[6] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5618u) goto L_088D5618;
    return;
L_088D5618:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_088D561C;
L_088D561C:
    ctx.gpr[4] = (16640u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D562C;
L_088D562C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5650;
      }
      goto L_088D5634;
    }
L_088D5634:
    ctx.gpr[31] = (0x088D563Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D563Cu) goto L_088D563C;
    return;
L_088D563C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5650;
      }
      goto L_088D5644;
    }
L_088D5644:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D5650u);
    ctx.gpr[5] = (0u | 138u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x088D5650u) goto L_088D5650;
    return;
L_088D5650:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
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
L_088D5678:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D56A4;
      }
      goto L_088D569C;
    }
L_088D569C:
    ctx.gpr[31] = (0x088D56A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 92u, 0x089A0714u>(ctx, &aot_mem) && ctx.pc == 0x088D56A4u) goto L_088D56A4;
    return;
L_088D56A4:
    ctx.gpr[31] = (0x088D56ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 61u, 0x089A04ACu>(ctx, &aot_mem) && ctx.pc == 0x088D56ACu) goto L_088D56AC;
    return;
L_088D56AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_088D56D4;
      }
      goto L_088D56CC;
    }
L_088D56CC:
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_088D571C;
    }
    goto L_088D56D4;
L_088D56D4:
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D5708;
      }
      goto L_088D56E0;
    }
L_088D56E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5700;
      }
      goto L_088D56EC;
    }
L_088D56EC:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_088D5700;
    }
    goto L_088D56F4;
L_088D56F4:
    ctx.gpr[31] = (0x088D56FCu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x088D56FCu) goto L_088D56FC;
    return;
L_088D56FC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_088D5700;
L_088D5700:
    ctx.gpr[31] = (0x088D5708u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x088D5708u) goto L_088D5708;
    return;
L_088D5708:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[31] = (0x088D5718u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x088D5718u) goto L_088D5718;
    return;
L_088D5718:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_088D571C;
L_088D571C:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088D5738u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5738u) goto L_088D5738;
    return;
L_088D5738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088D5748u);
    ctx.gpr[5] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D5748u) goto L_088D5748;
    return;
L_088D5748:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
        goto L_088D5770;
    }
    goto L_088D5754;
L_088D5754:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D57A4;
      }
      goto L_088D576C;
    }
L_088D576C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    goto L_088D5770;
L_088D5770:
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[17] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D57A4;
      }
      goto L_088D5788;
    }
L_088D5788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (0u | 0u);
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[16] = (0u | 202u);
        goto L_088D5798;
    }
    goto L_088D5798;
L_088D5798:
    ctx.gpr[31] = (0x088D57A0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D57A0u) goto L_088D57A0;
    return;
L_088D57A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D57A4;
L_088D57A4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D57C4;
      }
      goto L_088D57AC;
    }
L_088D57AC:
    ctx.gpr[5] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_088D57C4;
L_088D57C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D57D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D5810u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5810u) goto L_088D5810;
    return;
L_088D5810:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5840;
      }
      goto L_088D5820;
    }
L_088D5820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D582Cu);
    ctx.gpr[5] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D582Cu) goto L_088D582C;
    return;
L_088D582C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088D585C;
      }
      goto L_088D5838;
    }
L_088D5838:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088D5848;
      }
      goto L_088D5840;
    }
L_088D5840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D594C;
      }
      goto L_088D5848;
    }
L_088D5848:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D589C;
      }
      goto L_088D585C;
    }
L_088D585C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D589C;
      }
      goto L_088D5878;
    }
L_088D5878:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (0u | 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (0u | 202u);
        goto L_088D588C;
    }
    goto L_088D588C;
L_088D588C:
    ctx.gpr[31] = (0x088D5894u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D5894u) goto L_088D5894;
    return;
L_088D5894:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088D589C;
L_088D589C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (16076u << 16u);
      if (branch_taken) {
          goto L_088D594C;
      }
      goto L_088D58A4;
    }
L_088D58A4:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D594C;
      }
      goto L_088D58C4;
    }
L_088D58C4:
    ctx.gpr[31] = (0x088D58CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088D58CCu) goto L_088D58CC;
    return;
L_088D58CC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_088D5900;
    }
    goto L_088D58EC;
L_088D58EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_088D5900;
L_088D5900:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088D591Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D591Cu) goto L_088D591C;
    return;
L_088D591C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
      if (branch_taken) {
          goto L_088D5940;
      }
      goto L_088D5934;
    }
L_088D5934:
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D594C;
      }
      goto L_088D5940;
    }
L_088D5940:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    goto L_088D594C;
L_088D594C:
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
L_088D5964:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D59A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D59A4u) goto L_088D59A4;
    return;
L_088D59A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088D59DC;
      }
      goto L_088D59B8;
    }
L_088D59B8:
    ctx.gpr[6] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D59DC;
      }
      goto L_088D59C4;
    }
L_088D59C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[7] = (ctx.gpr[6] & 16u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_088D59E4;
      }
      goto L_088D59D4;
    }
L_088D59D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5AAC;
      }
      goto L_088D59DC;
    }
L_088D59DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5BF4;
      }
      goto L_088D59E4;
    }
L_088D59E4:
    ctx.gpr[6] = (ctx.gpr[6] & 8u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5AAC;
      }
      goto L_088D59F0;
    }
L_088D59F0:
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5A30;
      }
      goto L_088D5A08;
    }
L_088D5A08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 202u);
        goto L_088D5A18;
    }
    goto L_088D5A18;
L_088D5A18:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D5A28u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D5A28u) goto L_088D5A28;
    return;
L_088D5A28:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    goto L_088D5A30;
L_088D5A30:
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5BBC;
      }
      goto L_088D5A44;
    }
L_088D5A44:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D5BBC;
      }
      goto L_088D5A4C;
    }
L_088D5A4C:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 204u);
        goto L_088D5A5C;
    }
    goto L_088D5A5C;
L_088D5A5C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D5BBC;
      }
      goto L_088D5A64;
    }
L_088D5A64:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5BBC;
      }
      goto L_088D5A6C;
    }
L_088D5A6C:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088D5A84u);
    ctx.gpr[6] = (0u | 155u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D5A84u) goto L_088D5A84;
    return;
L_088D5A84:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D5A98u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088D5A98u) goto L_088D5A98;
    return;
L_088D5A98:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088D5BBC;
      }
      goto L_088D5AAC;
    }
L_088D5AAC:
    ctx.gpr[5] = (ctx.gpr[4] & 2048u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5BBC;
      }
      goto L_088D5AC0;
    }
L_088D5AC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5BBC;
      }
      goto L_088D5AD0;
    }
L_088D5AD0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (32u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (0u | 201u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (0u | 57u);
        goto L_088D5AF8;
    }
    goto L_088D5AF8;
L_088D5AF8:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D5B08u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D5B08u) goto L_088D5B08;
    return;
L_088D5B08:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2190u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D5B20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1684));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x088D5B20u) goto L_088D5B20;
    return;
L_088D5B20:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088D5B7C;
      }
      goto L_088D5B48;
    }
L_088D5B48:
    ctx.gpr[4] = (15651u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_088D5B6C;
    }
    goto L_088D5B6C;
L_088D5B6C:
    ctx.gpr[31] = (0x088D5B74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088D5B74u) goto L_088D5B74;
    return;
L_088D5B74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5BBC;
      }
      goto L_088D5B7C;
    }
L_088D5B7C:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (15651u << 16u);
      if (branch_taken) {
          goto L_088D5BBC;
      }
      goto L_088D5B8C;
    }
L_088D5B8C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088D5BB0;
    }
    goto L_088D5BB0;
L_088D5BB0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D5BBCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088D5BBCu) goto L_088D5BBC;
    return;
L_088D5BBC:
    ctx.gpr[31] = (0x088D5BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5BC4u) goto L_088D5BC4;
    return;
L_088D5BC4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088D5BF4;
      }
      goto L_088D5BD0;
    }
L_088D5BD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5BF4;
      }
      goto L_088D5BDC;
    }
L_088D5BDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[31] = (0x088D5BE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 516u, 0x0899EDBCu>(ctx, &aot_mem) && ctx.pc == 0x088D5BE8u) goto L_088D5BE8;
    return;
L_088D5BE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[31] = (0x088D5BF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088D534C;
L_088D5BF4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5C10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D5C98;
      }
      goto L_088D5C4C;
    }
L_088D5C4C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1753), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D5C6Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D5C6Cu) goto L_088D5C6C;
    return;
L_088D5C6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5C98;
      }
      goto L_088D5C74;
    }
L_088D5C74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5C98;
      }
      goto L_088D5C80;
    }
L_088D5C80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[31] = (0x088D5C8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 516u, 0x0899EDBCu>(ctx, &aot_mem) && ctx.pc == 0x088D5C8Cu) goto L_088D5C8C;
    return;
L_088D5C8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[31] = (0x088D5C98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088D534C;
L_088D5C98:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5CA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(668)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088D5D18;
      }
      goto L_088D5CE8;
    }
L_088D5CE8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29516)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5D10;
      }
      goto L_088D5CF8;
    }
L_088D5CF8:
    ctx.gpr[31] = (0x088D5D00u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x088D5D00u) goto L_088D5D00;
    return;
L_088D5D00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5D2C;
      }
      goto L_088D5D08;
    }
L_088D5D08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5DE8;
      }
      goto L_088D5D10;
    }
L_088D5D10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5E08;
      }
      goto L_088D5D18;
    }
L_088D5D18:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088D5D24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13912));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5D24u) goto L_088D5D24;
    return;
L_088D5D24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5E08;
      }
      goto L_088D5D2C;
    }
L_088D5D2C:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(784));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088D5D50u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 42u, 0x08AA83C4u>(ctx, &aot_mem) && ctx.pc == 0x088D5D50u) goto L_088D5D50;
    return;
L_088D5D50:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (15820u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (ctx.gpr[2] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (0u | 74u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088D5D8Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x088D5D8Cu) goto L_088D5D8C;
    return;
L_088D5D8C:
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_088D5DA0;
L_088D5DA0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088D5DD4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x088D5DD4u) goto L_088D5DD4;
    return;
L_088D5DD4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5DA0;
      }
      goto L_088D5DE8;
    }
L_088D5DE8:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D5E04;
      }
      goto L_088D5DF4;
    }
L_088D5DF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_088D5E04;
L_088D5E04:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1826), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_088D5E08;
L_088D5E08:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5E30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D5E6Cu);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 259u, 0x08A4D17Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5E6Cu) goto L_088D5E6C;
    return;
L_088D5E6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088D5E80u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 179u, 0x0890D00Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5E80u) goto L_088D5E80;
    return;
L_088D5E80:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088D5E8Cu);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 178u, 0x0890D004u>(ctx, &aot_mem) && ctx.pc == 0x088D5E8Cu) goto L_088D5E8C;
    return;
L_088D5E8C:
    ctx.gpr[7] = (ctx.gpr[18] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D5EA4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 645u, 0x088B7FA4u>(ctx, &aot_mem) && ctx.pc == 0x088D5EA4u) goto L_088D5EA4;
    return;
L_088D5EA4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D5ECC;
      }
      goto L_088D5EC4;
    }
L_088D5EC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088D5ED0;
      }
      goto L_088D5ECC;
    }
L_088D5ECC:
    ctx.gpr[2] = (0u | 0u);
    goto L_088D5ED0;
L_088D5ED0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
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
L_088D5EEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088D5F38;
      }
      goto L_088D5F2C;
    }
L_088D5F2C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 18 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5F48;
      }
      goto L_088D5F38;
    }
L_088D5F38:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D5FA0;
      }
      goto L_088D5F48;
    }
L_088D5F48:
    ctx.gpr[31] = (0x088D5F50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 259u, 0x08A4D17Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5F50u) goto L_088D5F50;
    return;
L_088D5F50:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(668));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088D5F70u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 179u, 0x0890D00Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5F70u) goto L_088D5F70;
    return;
L_088D5F70:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088D5F7Cu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 178u, 0x0890D004u>(ctx, &aot_mem) && ctx.pc == 0x088D5F7Cu) goto L_088D5F7C;
    return;
L_088D5F7C:
    ctx.gpr[7] = (ctx.gpr[16] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D5F94u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 645u, 0x088B7FA4u>(ctx, &aot_mem) && ctx.pc == 0x088D5F94u) goto L_088D5F94;
    return;
L_088D5F94:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[2] = (0u | 1u);
    goto L_088D5FA0;
L_088D5FA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5FC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x088D6014u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 302u, 0x0890DFD4u>(ctx, &aot_mem) && ctx.pc == 0x088D6014u) goto L_088D6014;
    return;
L_088D6014:
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[22] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x088D6070u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x088D6070u) goto L_088D6070;
    return;
L_088D6070:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D62C4;
      }
      goto L_088D6078;
    }
L_088D6078:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4528)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4528));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x088D616Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x088D616Cu) goto L_088D616C;
    return;
L_088D616C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D618C;
      }
      goto L_088D6174;
    }
L_088D6174:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16204u << 16u);
      if (branch_taken) {
          goto L_088D6210;
      }
      goto L_088D618C;
    }
L_088D618C:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x088D61FCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x088D61FCu) goto L_088D61FC;
    return;
L_088D61FC:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
        goto L_088D6260;
    }
    goto L_088D6204;
L_088D6204:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D62C4;
      }
      goto L_088D620C;
    }
L_088D620C:
    ctx.gpr[4] = (16204u << 16u);
    goto L_088D6210;
L_088D6210:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_088D62C8;
      }
      goto L_088D6260;
    }
L_088D6260:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16204u << 16u);
      if (branch_taken) {
          goto L_088D62C4;
      }
      goto L_088D6274;
    }
L_088D6274:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_088D62C8;
      }
      goto L_088D62C4;
    }
L_088D62C4:
    ctx.gpr[2] = (0u | 0u);
    goto L_088D62C8;
L_088D62C8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6300:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D6320u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6320u) goto L_088D6320;
    return;
L_088D6320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D632Cu);
    ctx.gpr[5] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D632Cu) goto L_088D632C;
    return;
L_088D632C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6348;
      }
      goto L_088D6338;
    }
L_088D6338:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_088D6348;
L_088D6348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D6354u);
    ctx.gpr[5] = (0u | 202u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D6354u) goto L_088D6354;
    return;
L_088D6354:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6370;
      }
      goto L_088D6360;
    }
L_088D6360:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_088D6370;
L_088D6370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D637Cu);
    ctx.gpr[5] = (0u | 205u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D637Cu) goto L_088D637C;
    return;
L_088D637C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6398;
      }
      goto L_088D6388;
    }
L_088D6388:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_088D6398;
L_088D6398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D63A4u);
    ctx.gpr[5] = (0u | 203u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D63A4u) goto L_088D63A4;
    return;
L_088D63A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D63C0;
      }
      goto L_088D63B0;
    }
L_088D63B0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_088D63C0;
L_088D63C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D63CCu);
    ctx.gpr[5] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D63CCu) goto L_088D63CC;
    return;
L_088D63CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6418;
      }
      goto L_088D63D8;
    }
L_088D63D8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6404;
      }
      goto L_088D63FC;
    }
L_088D63FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088D6418;
      }
      goto L_088D6404;
    }
L_088D6404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x088D6418u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088D6418u) goto L_088D6418;
    return;
L_088D6418:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D642C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D64C4;
      }
      goto L_088D643C;
    }
L_088D643C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
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
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16332u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D64C4;
      }
      goto L_088D6494;
    }
L_088D6494:
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D64C4;
      }
      goto L_088D64BC;
    }
L_088D64BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088D64C8;
      }
      goto L_088D64C4;
    }
L_088D64C4:
    ctx.gpr[2] = (0u | 0u);
    goto L_088D64C8;
L_088D64C8:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D64D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6524;
      }
      goto L_088D64F0;
    }
L_088D64F0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_088D64F8;
L_088D64F8:
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_088D6518;
    }
    goto L_088D6508;
L_088D6508:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088D651C;
      }
      goto L_088D6518;
    }
L_088D6518:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_088D651C;
L_088D651C:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_088D64F8;
    }
    goto L_088D6524;
L_088D6524:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_088D6548;
    }
    goto L_088D652C;
L_088D652C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
        goto L_088D654C;
    }
    goto L_088D6544;
L_088D6544:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_088D6548;
L_088D6548:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_088D654C;
L_088D654C:
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
          goto L_088D6584;
      }
      goto L_088D657C;
    }
L_088D657C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D6588;
      }
      goto L_088D6584;
    }
L_088D6584:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_088D6588;
L_088D6588:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6590:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-29516)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D65F0;
      }
      goto L_088D65E8;
    }
L_088D65E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D69B4;
      }
      goto L_088D65F0;
    }
L_088D65F0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (0u | 0u);
      if (branch_taken) {
          goto L_088D6938;
      }
      goto L_088D662C;
    }
L_088D662C:
    ctx.gpr[4] = (48921u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16295u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 36151u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (16134u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[20] = (0u | 55u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088D6664;
L_088D6664:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1868)));
        goto L_088D6688;
    }
    goto L_088D6674;
L_088D6674:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088D66A0;
      }
      goto L_088D6688;
    }
L_088D6688:
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1872)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    goto L_088D66A0;
L_088D66A0:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D6918;
      }
      goto L_088D66D4;
    }
L_088D66D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x088D66F0u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x088D66F0u) goto L_088D66F0;
    return;
L_088D66F0:
    ctx.gpr[31] = (0x088D66F8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x088D66F8u) goto L_088D66F8;
    return;
L_088D66F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x088D6704u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x088D6704u) goto L_088D6704;
    return;
L_088D6704:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088D6720;
    }
    goto L_088D6720;
L_088D6720:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D6750;
      }
      goto L_088D6740;
    }
L_088D6740:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    goto L_088D6750;
L_088D6750:
    ctx.gpr[31] = (0x088D6758u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088D4584;
L_088D6758:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 43u);
      if (branch_taken) {
          goto L_088D6780;
      }
      goto L_088D6768;
    }
L_088D6768:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 54u);
      if (branch_taken) {
          goto L_088D6780;
      }
      goto L_088D6770;
    }
L_088D6770:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D6780;
      }
      goto L_088D6778;
    }
L_088D6778:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088D6824;
      }
      goto L_088D6780;
    }
L_088D6780:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (16273u << 16u);
      if (branch_taken) {
          goto L_088D6918;
      }
      goto L_088D6790;
    }
L_088D6790:
    ctx.gpr[5] = (ctx.gpr[5] | 13854u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D6918;
      }
      goto L_088D67A8;
    }
L_088D67A8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088D67C4;
      }
      goto L_088D67B0;
    }
L_088D67B0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[23] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088D6918;
      }
      goto L_088D67BC;
    }
L_088D67BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088D6918;
      }
      goto L_088D67C4;
    }
L_088D67C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D67F4;
      }
      goto L_088D67E0;
    }
L_088D67E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D67ECu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_088D5E30;
L_088D67EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088D6804;
      }
      goto L_088D67F4;
    }
L_088D67F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[31] = (0x088D6800u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 131u, 0x08980960u>(ctx, &aot_mem) && ctx.pc == 0x088D6800u) goto L_088D6800;
    return;
L_088D6800:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_088D6804;
L_088D6804:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D681C;
      }
      goto L_088D680C;
    }
L_088D680C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088D681C;
      }
      goto L_088D6818;
    }
L_088D6818:
    ctx.gpr[22] = (ctx.gpr[16] | 0u);
    goto L_088D681C;
L_088D681C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6918;
      }
      goto L_088D6824;
    }
L_088D6824:
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16294u << 16u);
      if (branch_taken) {
          goto L_088D6854;
      }
      goto L_088D6840;
    }
L_088D6840:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D68DC;
      }
      goto L_088D6850;
    }
L_088D6850:
    ctx.gpr[4] = (16294u << 16u);
    goto L_088D6854;
L_088D6854:
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16345u << 16u);
      if (branch_taken) {
          goto L_088D688C;
      }
      goto L_088D686C;
    }
L_088D686C:
    ctx.gpr[4] = (16245u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 48651u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D68DC;
      }
      goto L_088D6888;
    }
L_088D6888:
    ctx.gpr[4] = (16345u << 16u);
    goto L_088D688C;
L_088D688C:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16156u << 16u);
      if (branch_taken) {
          goto L_088D68BC;
      }
      goto L_088D68A4;
    }
L_088D68A4:
    ctx.gpr[4] = (ctx.gpr[4] | 25003u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D68DC;
      }
      goto L_088D68BC;
    }
L_088D68BC:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D68F8;
      }
      goto L_088D68CC;
    }
L_088D68CC:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D68F8;
      }
      goto L_088D68DC;
    }
L_088D68DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088D68F0;
      }
      goto L_088D68E8;
    }
L_088D68E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_088D68F0;
L_088D68F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D69B4;
      }
      goto L_088D68F8;
    }
L_088D68F8:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D6918;
      }
      goto L_088D6908;
    }
L_088D6908:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088D6918;
      }
      goto L_088D6914;
    }
L_088D6914:
    ctx.gpr[30] = (ctx.gpr[16] | 0u);
    goto L_088D6918;
L_088D6918:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D6664;
      }
      goto L_088D6938;
    }
L_088D6938:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6960;
      }
      goto L_088D6944;
    }
L_088D6944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6958;
      }
      goto L_088D6950;
    }
L_088D6950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    goto L_088D6958;
L_088D6958:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_088D69B4;
      }
      goto L_088D6960;
    }
L_088D6960:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(69)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6988;
      }
      goto L_088D696C;
    }
L_088D696C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6980;
      }
      goto L_088D6978;
    }
L_088D6978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    goto L_088D6980;
L_088D6980:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_088D69B4;
      }
      goto L_088D6988;
    }
L_088D6988:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(70)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D69B0;
      }
      goto L_088D6994;
    }
L_088D6994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088D69A8;
      }
      goto L_088D69A0;
    }
L_088D69A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    goto L_088D69A8;
L_088D69A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D69B4;
      }
      goto L_088D69B0;
    }
L_088D69B0:
    ctx.gpr[2] = (0u | 0u);
    goto L_088D69B4;
L_088D69B4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D69FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-592));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[17]);
    ctx.gpr[17] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[21] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[21] + static_cast<std::uint32_t>(6), ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D6A60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x088D6A60u) goto L_088D6A60;
    return;
L_088D6A60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6B00;
      }
      goto L_088D6A6C;
    }
L_088D6A6C:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6AF8;
      }
      goto L_088D6A78;
    }
L_088D6A78:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[21] + static_cast<std::uint32_t>(5), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x088D6A90u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x088D6A90u) goto L_088D6A90;
    return;
L_088D6A90:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6AF0;
      }
      goto L_088D6A9C;
    }
L_088D6A9C:
    ctx.gpr[31] = (0x088D6AA4u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6AA4u) goto L_088D6AA4;
    return;
L_088D6AA4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6AE8;
      }
      goto L_088D6AB0;
    }
L_088D6AB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[4]);
    ctx.gpr[6] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[30] = (2227u << 16u);
      if (branch_taken) {
          goto L_088D6B08;
      }
      goto L_088D6AE0;
    }
L_088D6AE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
      if (branch_taken) {
          goto L_088D6EEC;
      }
      goto L_088D6AE8;
    }
L_088D6AE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D774C;
      }
      goto L_088D6AF0;
    }
L_088D6AF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D774C;
      }
      goto L_088D6AF8;
    }
L_088D6AF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D774C;
      }
      goto L_088D6B00;
    }
L_088D6B00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D774C;
      }
      goto L_088D6B08;
    }
L_088D6B08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[23]);
      if (branch_taken) {
          goto L_088D6EE8;
      }
      goto L_088D6B18;
    }
L_088D6B18:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[23]);
    ctx.gpr[31] = (0x088D6B24u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x088D6B24u) goto L_088D6B24;
    return;
L_088D6B24:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
        goto L_088D6EEC;
    }
    goto L_088D6B2C;
L_088D6B2C:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(25));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(29));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(33));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    ctx.gpr[19] = (ctx.gpr[21] + static_cast<std::uint32_t>(13));
    ctx.gpr[18] = (ctx.gpr[21] + static_cast<std::uint32_t>(17));
    ctx.gpr[17] = (ctx.gpr[21] + static_cast<std::uint32_t>(21));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088D6C2C;
      }
      goto L_088D6BC0;
    }
L_088D6BC0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21496)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21500)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088D6C24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6C24u) goto L_088D6C24;
    return;
L_088D6C24:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[21]);
      if (branch_taken) {
          goto L_088D6CAC;
      }
      goto L_088D6C2C;
    }
L_088D6C2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    ctx.gpr[5] = (0u | 10u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[21]);
        goto L_088D6CAC;
    }
    goto L_088D6C3C;
L_088D6C3C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21496)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21500)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088D6CA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6CA8u) goto L_088D6CA8;
    return;
L_088D6CA8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[21]);
    goto L_088D6CAC;
L_088D6CAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[23]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088D6D20u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x088D6D20u) goto L_088D6D20;
    return;
L_088D6D20:
    ctx.gpr[22] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[22]));
    ctx.gpr[22] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.gpr[30] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[30]));
    ctx.gpr[30] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.gpr[20] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[20]));
    ctx.gpr[20] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088D6D78u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x088D6D78u) goto L_088D6D78;
    return;
L_088D6D78:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
      if (branch_taken) {
          goto L_088D6E60;
      }
      goto L_088D6D90;
    }
L_088D6D90:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[30]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088D6E00u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x088D6E00u) goto L_088D6E00;
    return;
L_088D6E00:
    ctx.gpr[30] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[30]));
    ctx.gpr[30] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[30]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.gpr[23] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[23]));
    ctx.gpr[23] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[23]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[23]);
    ctx.gpr[20] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[20]));
    ctx.gpr[20] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088D6E58u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x088D6E58u) goto L_088D6E58;
    return;
L_088D6E58:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    goto L_088D6E60;
L_088D6E60:
    ctx.gpr[31] = (0x088D6E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088D6E68u) goto L_088D6E68;
    return;
L_088D6E68:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D6EDC;
      }
      goto L_088D6E78;
    }
L_088D6E78:
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[4] = (0u | 74u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088D6EDCu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x088D6EDCu) goto L_088D6EDC;
    return;
L_088D6EDC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[21]);
      if (branch_taken) {
          goto L_088D703C;
      }
      goto L_088D6EE8;
    }
L_088D6EE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    goto L_088D6EEC;
L_088D6EEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[22]);
        goto L_088D6F24;
    }
    goto L_088D6F14;
L_088D6F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[22]);
      if (branch_taken) {
          goto L_088D703C;
      }
      goto L_088D6F20;
    }
L_088D6F20:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[22]);
    goto L_088D6F24;
L_088D6F24:
    ctx.gpr[31] = (0x088D6F2Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x088D6F2Cu) goto L_088D6F2C;
    return;
L_088D6F2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D703C;
      }
      goto L_088D6F34;
    }
L_088D6F34:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(25));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(29));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(33));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(13));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(17));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(21));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    goto L_088D6FC8;
L_088D6FC8:
    ctx.gpr[18] = (rt.memory().aot_load_word_left(ctx.gpr[22] + static_cast<std::uint32_t>(3), ctx.gpr[18]));
    ctx.gpr[18] = (rt.memory().aot_load_word_right(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[18]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[17] = (rt.memory().aot_load_word_left(ctx.gpr[21] + static_cast<std::uint32_t>(3), ctx.gpr[17]));
    ctx.gpr[17] = (rt.memory().aot_load_word_right(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[17]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[16] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[16]));
    ctx.gpr[16] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[16]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088D7020u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x088D7020u) goto L_088D7020;
    return;
L_088D7020:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[4] << 16u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D6FC8;
      }
      goto L_088D7038;
    }
L_088D7038:
    ctx.gpr[30] = (2227u << 16u);
    goto L_088D703C;
L_088D703C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088D7054;
      }
      goto L_088D7050;
    }
L_088D7050:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_088D7054;
L_088D7054:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1208)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x088D706Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 322u, 0x08899450u>(ctx, &aot_mem) && ctx.pc == 0x088D706Cu) goto L_088D706C;
    return;
L_088D706C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
        goto L_088D708C;
    }
    goto L_088D7078;
L_088D7078:
    ctx.gpr[31] = (0x088D7080u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D7080u) goto L_088D7080;
    return;
L_088D7080:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
        goto L_088D70C0;
    }
    goto L_088D7088;
L_088D7088:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    goto L_088D708C;
L_088D708C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(10)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088D70B8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 678u, 0x088DAFC4u>(ctx, &aot_mem) && ctx.pc == 0x088D70B8u) goto L_088D70B8;
    return;
L_088D70B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D70EC;
      }
      goto L_088D70C0;
    }
L_088D70C0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(10)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088D70ECu);
    ctx.gpr[8] = (0u | 101u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 678u, 0x088DAFC4u>(ctx, &aot_mem) && ctx.pc == 0x088D70ECu) goto L_088D70EC;
    return;
L_088D70EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[17] = (0u | 54u);
    if (ctx.gpr[4] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
        goto L_088D7140;
    }
    goto L_088D70FC;
L_088D70FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
        goto L_088D7140;
    }
    goto L_088D710C;
L_088D710C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(7), ctx.gpr[7]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(10), ctx.gpr[7]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(10)));
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088D713Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 580u, 0x088DEE94u>(ctx, &aot_mem) && ctx.pc == 0x088D713Cu) goto L_088D713C;
    return;
L_088D713C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    goto L_088D7140;
L_088D7140:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7288;
      }
      goto L_088D7164;
    }
L_088D7164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088D7288;
      }
      goto L_088D7170;
    }
L_088D7170:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(516), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(25));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(29));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(33));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(13));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(17));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(21));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    goto L_088D7208;
L_088D7208:
    ctx.gpr[18] = (rt.memory().aot_load_word_left(ctx.gpr[22] + static_cast<std::uint32_t>(3), ctx.gpr[18]));
    ctx.gpr[18] = (rt.memory().aot_load_word_right(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[18]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[17] = (rt.memory().aot_load_word_left(ctx.gpr[21] + static_cast<std::uint32_t>(3), ctx.gpr[17]));
    ctx.gpr[17] = (rt.memory().aot_load_word_right(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[17]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[16] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[16]));
    ctx.gpr[16] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[16]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088D7260u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x088D7260u) goto L_088D7260;
    return;
L_088D7260:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7208;
      }
      goto L_088D7270;
    }
L_088D7270:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[17] = (0u | 54u);
    ctx.gpr[18] = (0u | 1u);
    goto L_088D7288;
L_088D7288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[22] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088D737C;
      }
      goto L_088D7298;
    }
L_088D7298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088D737C;
      }
      goto L_088D72A4;
    }
L_088D72A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D737C;
      }
      goto L_088D72B4;
    }
L_088D72B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D737C;
      }
      goto L_088D72CC;
    }
L_088D72CC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1208)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
        goto L_088D72FC;
    }
    goto L_088D72E8;
L_088D72E8:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D7348;
      }
      goto L_088D72F8;
    }
L_088D72F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    goto L_088D72FC;
L_088D72FC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1380)));
        goto L_088D7330;
    }
    goto L_088D7304;
L_088D7304:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1380)));
        goto L_088D7330;
    }
    goto L_088D7310;
L_088D7310:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1380)));
        goto L_088D7330;
    }
    goto L_088D731C;
L_088D731C:
    ctx.gpr[31] = (0x088D7324u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D7324u) goto L_088D7324;
    return;
L_088D7324:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7348;
      }
      goto L_088D732C;
    }
L_088D732C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1380)));
    goto L_088D7330;
L_088D7330:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7348;
      }
      goto L_088D7340;
    }
L_088D7340:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D737C;
      }
      goto L_088D7348;
    }
L_088D7348:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(10)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(25));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088D7360u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 106u, 0x089A07E8u>(ctx, &aot_mem) && ctx.pc == 0x088D7360u) goto L_088D7360;
    return;
L_088D7360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088D737C;
      }
      goto L_088D736C;
    }
L_088D736C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_088D737C;
L_088D737C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088D7398;
      }
      goto L_088D7388;
    }
L_088D7388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D75E8;
      }
      goto L_088D7398;
    }
L_088D7398:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21508)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21504)));
      if (branch_taken) {
          goto L_088D73D4;
      }
      goto L_088D73B8;
    }
L_088D73B8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[31] = (0x088D73C8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x088D73C8u) goto L_088D73C8;
    return;
L_088D73C8:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088D73D4;
L_088D73D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7494;
      }
      goto L_088D7438;
    }
L_088D7438:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.gpr[5] = (15523u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[5] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088D7464;
    }
    goto L_088D7464;
L_088D7464:
    ctx.gpr[31] = (0x088D746Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x088D746Cu) goto L_088D746C;
    return;
L_088D746C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088D7480u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x088D7480u) goto L_088D7480;
    return;
L_088D7480:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088D748Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x088D748Cu) goto L_088D748C;
    return;
L_088D748C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088D75BC;
      }
      goto L_088D7494;
    }
L_088D7494:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D7508;
      }
      goto L_088D74A4;
    }
L_088D74A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.gpr[5] = (16153u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[5] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_088D74D8;
    }
    goto L_088D74D8;
L_088D74D8:
    ctx.gpr[31] = (0x088D74E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x088D74E0u) goto L_088D74E0;
    return;
L_088D74E0:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088D74F4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x088D74F4u) goto L_088D74F4;
    return;
L_088D74F4:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088D7500u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x088D7500u) goto L_088D7500;
    return;
L_088D7500:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088D75BC;
      }
      goto L_088D7508;
    }
L_088D7508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D7588;
      }
      goto L_088D7518;
    }
L_088D7518:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7588;
      }
      goto L_088D7528;
    }
L_088D7528:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.gpr[5] = (16736u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D7558;
      }
      goto L_088D754C;
    }
L_088D754C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_088D7558;
L_088D7558:
    ctx.gpr[31] = (0x088D7560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x088D7560u) goto L_088D7560;
    return;
L_088D7560:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088D7574u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x088D7574u) goto L_088D7574;
    return;
L_088D7574:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088D7580u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x088D7580u) goto L_088D7580;
    return;
L_088D7580:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088D75BC;
      }
      goto L_088D7588;
    }
L_088D7588:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088D7598u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x088D7598u) goto L_088D7598;
    return;
L_088D7598:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088D75ACu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x088D75ACu) goto L_088D75AC;
    return;
L_088D75AC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088D75B8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x088D75B8u) goto L_088D75B8;
    return;
L_088D75B8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088D75BC;
L_088D75BC:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[31] = (0x088D75E8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x088D75E8u) goto L_088D75E8;
    return;
L_088D75E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
      if (branch_taken) {
          goto L_088D774C;
      }
      goto L_088D75F4;
    }
L_088D75F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D7678;
      }
      goto L_088D7608;
    }
L_088D7608:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7678;
      }
      goto L_088D7610;
    }
L_088D7610:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
      if (branch_taken) {
          goto L_088D764C;
      }
      goto L_088D7620;
    }
L_088D7620:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] | 3u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x088D7644u);
    ctx.gpr[6] = (0u | 50u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7644u) goto L_088D7644;
    return;
L_088D7644:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D774C;
      }
      goto L_088D764C;
    }
L_088D764C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] | 3u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x088D7670u);
    ctx.gpr[6] = (0u | 51u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7670u) goto L_088D7670;
    return;
L_088D7670:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D774C;
      }
      goto L_088D7678;
    }
L_088D7678:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 13 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D774C;
      }
      goto L_088D7680;
    }
L_088D7680:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D774C;
      }
      goto L_088D7688;
    }
L_088D7688:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21154));
      if (branch_taken) {
          goto L_088D76C0;
      }
      goto L_088D7698;
    }
L_088D7698:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D76C0;
      }
      goto L_088D76A4;
    }
L_088D76A4:
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[6] = (ctx.gpr[16] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-86)));
      if (branch_taken) {
          goto L_088D76F8;
      }
      goto L_088D76C0;
    }
L_088D76C0:
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[7] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[16] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[8] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D76EC;
      }
      goto L_088D76DC;
    }
L_088D76DC:
    ctx.gpr[31] = (0x088D76E4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 362u, 0x0899E2CCu>(ctx, &aot_mem) && ctx.pc == 0x088D76E4u) goto L_088D76E4;
    return;
L_088D76E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D76F4;
      }
      goto L_088D76EC;
    }
L_088D76EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-52)));
      if (branch_taken) {
          goto L_088D76F8;
      }
      goto L_088D76F4;
    }
L_088D76F4:
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-60)));
    goto L_088D76F8;
L_088D76F8:
    ctx.gpr[4] = (0u | 209u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D774C;
      }
      goto L_088D7704;
    }
L_088D7704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[31] = (0x088D7720u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 100u, 0x08864758u>(ctx, &aot_mem) && ctx.pc == 0x088D7720u) goto L_088D7720;
    return;
L_088D7720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] | 3u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x088D774Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088D774Cu) goto L_088D774C;
    return;
L_088D774C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D7784:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D77E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D77E4u) goto L_088D77E4;
    return;
L_088D77E4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (ctx.gpr[4] & 4u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[16] = (0u < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088D788C;
      }
      goto L_088D7818;
    }
L_088D7818:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7944;
      }
      goto L_088D7834;
    }
L_088D7834:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7944;
      }
      goto L_088D7844;
    }
L_088D7844:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[21] = (0u | 202u);
        goto L_088D7868;
    }
    goto L_088D7868;
L_088D7868:
    ctx.gpr[31] = (0x088D7870u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D7870u) goto L_088D7870;
    return;
L_088D7870:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7944;
      }
      goto L_088D787C;
    }
L_088D787C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_088D7944;
      }
      goto L_088D788C;
    }
L_088D788C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D7914;
      }
      goto L_088D789C;
    }
L_088D789C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7914;
      }
      goto L_088D78B8;
    }
L_088D78B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[21] = (0u | 205u);
        goto L_088D78DC;
    }
    goto L_088D78DC;
L_088D78DC:
    ctx.gpr[31] = (0x088D78E4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D78E4u) goto L_088D78E4;
    return;
L_088D78E4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (16059u << 16u);
      if (branch_taken) {
          goto L_088D7944;
      }
      goto L_088D78F0;
    }
L_088D78F0:
    ctx.gpr[4] = (ctx.gpr[4] | 48060u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16162u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8738u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16110u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 61167u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D7944;
      }
      goto L_088D7914;
    }
L_088D7914:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (32u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (0u | 201u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[21] = (0u | 57u);
        goto L_088D7938;
    }
    goto L_088D7938;
L_088D7938:
    ctx.gpr[31] = (0x088D7940u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D7940u) goto L_088D7940;
    return;
L_088D7940:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_088D7944;
L_088D7944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7988;
      }
      goto L_088D795C;
    }
L_088D795C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] & 32768u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[23] = (0u | 203u);
        goto L_088D797C;
    }
    goto L_088D797C;
L_088D797C:
    ctx.gpr[31] = (0x088D7984u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D7984u) goto L_088D7984;
    return;
L_088D7984:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    goto L_088D7988;
L_088D7988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D79D4;
      }
      goto L_088D79A0;
    }
L_088D79A0:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D79D4;
      }
      goto L_088D79A8;
    }
L_088D79A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] & 32768u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[23] = (0u | 204u);
        goto L_088D79C8;
    }
    goto L_088D79C8;
L_088D79C8:
    ctx.gpr[31] = (0x088D79D0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D79D0u) goto L_088D79D0;
    return;
L_088D79D0:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    goto L_088D79D4;
L_088D79D4:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7A20;
      }
      goto L_088D79DC;
    }
L_088D79DC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7A20;
      }
      goto L_088D79EC;
    }
L_088D79EC:
    ctx.gpr[31] = (0x088D79F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D79F4u) goto L_088D79F4;
    return;
L_088D79F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7A10;
      }
      goto L_088D79FC;
    }
L_088D79FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2964)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7A10;
      }
      goto L_088D7A08;
    }
L_088D7A08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 227u, 0x088D91A4u>(ctx, &aot_mem); return;
      }
      goto L_088D7A10;
    }
L_088D7A10:
    ctx.gpr[31] = (0x088D7A18u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_088D4980;
L_088D7A18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 227u, 0x088D91A4u>(ctx, &aot_mem); return;
      }
      goto L_088D7A20;
    }
L_088D7A20:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_088D7A54;
      }
      goto L_088D7A28;
    }
L_088D7A28:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088D7A54;
      }
      goto L_088D7A48;
    }
L_088D7A48:
    ctx.gpr[4] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D7A54;
L_088D7A54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7A98;
      }
      goto L_088D7A6C;
    }
L_088D7A6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] & 1024u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (0u | 203u);
        goto L_088D7A8C;
    }
    goto L_088D7A8C;
L_088D7A8C:
    ctx.gpr[31] = (0x088D7A94u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D7A94u) goto L_088D7A94;
    return;
L_088D7A94:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_088D7A98;
L_088D7A98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1792)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7AB0;
      }
      goto L_088D7AAC;
    }
L_088D7AAC:
    ctx.gpr[16] = (0u | 1u);
    goto L_088D7AB0;
L_088D7AB0:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088D7B90;
      }
      goto L_088D7AB8;
    }
L_088D7AB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (16u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7B90;
      }
      goto L_088D7AD4;
    }
L_088D7AD4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[21] = (0u | 203u);
        goto L_088D7AF8;
    }
    goto L_088D7AF8;
L_088D7AF8:
    ctx.gpr[31] = (0x088D7B00u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D7B00u) goto L_088D7B00;
    return;
L_088D7B00:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7B90;
      }
      goto L_088D7B0C;
    }
L_088D7B0C:
    ctx.gpr[31] = (0x088D7B14u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D7B14u) goto L_088D7B14;
    return;
L_088D7B14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7B20;
      }
      goto L_088D7B1C;
    }
L_088D7B1C:
    ctx.gpr[17] = (0u | 1u);
    goto L_088D7B20;
L_088D7B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (15948u << 16u);
      if (branch_taken) {
          goto L_088D7B84;
      }
      goto L_088D7B34;
    }
L_088D7B34:
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088D7B74;
      }
      goto L_088D7B54;
    }
L_088D7B54:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D7B7C;
      }
      goto L_088D7B5C;
    }
L_088D7B5C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_088D7B7C;
      }
      goto L_088D7B64;
    }
L_088D7B64:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088D7B84;
      }
      goto L_088D7B6C;
    }
L_088D7B6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7B84;
      }
      goto L_088D7B74;
    }
L_088D7B74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7B84;
      }
      goto L_088D7B7C;
    }
L_088D7B7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7B84;
      }
      goto L_088D7B84;
    }
L_088D7B84:
    ctx.gpr[4] = (17095u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088D7B90;
L_088D7B90:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7BF0;
      }
      goto L_088D7B98;
    }
L_088D7B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7BF0;
      }
      goto L_088D7BB0;
    }
L_088D7BB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[21] = (0u | 202u);
        goto L_088D7BD0;
    }
    goto L_088D7BD0;
L_088D7BD0:
    ctx.gpr[31] = (0x088D7BD8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D7BD8u) goto L_088D7BD8;
    return;
L_088D7BD8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7BF0;
      }
      goto L_088D7BE4;
    }
L_088D7BE4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    goto L_088D7BF0;
L_088D7BF0:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7CA0;
      }
      goto L_088D7BF8;
    }
L_088D7BF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] & 8192u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088D7C28;
      }
      goto L_088D7C10;
    }
L_088D7C10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_088D7C28;
L_088D7C28:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7C7C;
      }
      goto L_088D7C30;
    }
L_088D7C30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] & 8192u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (0u | 202u);
      if (branch_taken) {
          goto L_088D7C6C;
      }
      goto L_088D7C4C;
    }
L_088D7C4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[21] = (0u | 205u);
        goto L_088D7C6C;
    }
    goto L_088D7C6C;
L_088D7C6C:
    ctx.gpr[31] = (0x088D7C74u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D7C74u) goto L_088D7C74;
    return;
L_088D7C74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D7C8C;
      }
      goto L_088D7C7C;
    }
L_088D7C7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D7C88u);
    ctx.gpr[5] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088D7C88u) goto L_088D7C88;
    return;
L_088D7C88:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_088D7C8C;
L_088D7C8C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7CA0;
      }
      goto L_088D7C94;
    }
L_088D7C94:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    goto L_088D7CA0;
L_088D7CA0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (16076u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 179u, 0x088D8E5Cu>(ctx, &aot_mem); return;
      }
      goto L_088D7CA8;
    }
L_088D7CA8:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 11u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[30] = (0u | 15u);
      if (branch_taken) {
          goto L_088D7D80;
      }
      goto L_088D7CCC;
    }
L_088D7CCC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D7D84;
    }
    goto L_088D7CE8;
L_088D7CE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7D34;
      }
      goto L_088D7CF8;
    }
L_088D7CF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D7D48;
      }
      goto L_088D7D08;
    }
L_088D7D08:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[8] = (4u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (0u | 205u);
        goto L_088D7D2C;
    }
    goto L_088D7D2C;
L_088D7D2C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D7D48;
      }
      goto L_088D7D34;
    }
L_088D7D34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(828)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(828), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D7D80;
      }
      goto L_088D7D48;
    }
L_088D7D48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7D70;
      }
      goto L_088D7D60;
    }
L_088D7D60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(828)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(828), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D7D80;
      }
      goto L_088D7D70;
    }
L_088D7D70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(828)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(828), ctx.gpr[5]);
    goto L_088D7D80;
L_088D7D80:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    goto L_088D7D84;
L_088D7D84:
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D7F50;
    }
    goto L_088D7DA4;
L_088D7DA4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (16128u << 16u);
      if (branch_taken) {
          goto L_088D7DC8;
      }
      goto L_088D7DAC;
    }
L_088D7DAC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D7F50;
    }
    goto L_088D7DC8;
L_088D7DC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D7F50;
    }
    goto L_088D7DE4;
L_088D7DE4:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (0u | 202u);
    ctx.gpr[17] = (0u | 4u);
    ctx.gpr[16] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-8107));
      if (branch_taken) {
          goto L_088D7E30;
      }
      goto L_088D7E0C;
    }
L_088D7E0C:
    ctx.gpr[5] = (16179u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D7E30;
L_088D7E30:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(48);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088D7E80u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 187u, 0x08855100u>(ctx, &aot_mem) && ctx.pc == 0x088D7E80u) goto L_088D7E80;
    return;
L_088D7E80:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088D7F0C;
      }
      goto L_088D7EA4;
    }
L_088D7EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(300)));
    ctx.gpr[5] = (16448u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D7ECC;
      }
      goto L_088D7EB4;
    }
L_088D7EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(300)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_088D7ECC;
L_088D7ECC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D7EDCu);
    ctx.gpr[6] = (0u | 54u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7EDCu) goto L_088D7EDC;
    return;
L_088D7EDC:
    ctx.gpr[31] = (0x088D7EE4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D7EE4u) goto L_088D7EE4;
    return;
L_088D7EE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7F04;
      }
      goto L_088D7EEC;
    }
L_088D7EEC:
    ctx.gpr[31] = (0x088D7EF4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088D7EF4u) goto L_088D7EF4;
    return;
L_088D7EF4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 240u);
    ctx.gpr[31] = (0x088D7F04u);
    ctx.gpr[6] = (0u | 180u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 656u, 0x08A96CF8u>(ctx, &aot_mem) && ctx.pc == 0x088D7F04u) goto L_088D7F04;
    return;
L_088D7F04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7F48;
      }
      goto L_088D7F0C;
    }
L_088D7F0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D7F20u);
    ctx.gpr[6] = (0u | 53u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7F20u) goto L_088D7F20;
    return;
L_088D7F20:
    ctx.gpr[31] = (0x088D7F28u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088D7F28u) goto L_088D7F28;
    return;
L_088D7F28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7F48;
      }
      goto L_088D7F30;
    }
L_088D7F30:
    ctx.gpr[31] = (0x088D7F38u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088D7F38u) goto L_088D7F38;
    return;
L_088D7F38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 240u);
    ctx.gpr[31] = (0x088D7F48u);
    ctx.gpr[6] = (0u | 90u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 656u, 0x08A96CF8u>(ctx, &aot_mem) && ctx.pc == 0x088D7F48u) goto L_088D7F48;
    return;
L_088D7F48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 57u, 0x088D8434u>(ctx, &aot_mem); return;
      }
      goto L_088D7F50;
    }
L_088D7F50:
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D7F90;
      }
      goto L_088D7F70;
    }
L_088D7F70:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 52u);
    ctx.gpr[31] = (0x088D7F88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7F88u) goto L_088D7F88;
    return;
L_088D7F88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 57u, 0x088D8434u>(ctx, &aot_mem); return;
      }
      goto L_088D7F90;
    }
L_088D7F90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 55u, 0x088D8414u>(ctx, &aot_mem); return;
      }
      goto L_088D7FA4;
    }
L_088D7FA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 55u, 0x088D8414u>(ctx, &aot_mem); return;
      }
      goto L_088D7FC0;
    }
L_088D7FC0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 55u, 0x088D8414u>(ctx, &aot_mem); return;
      }
      goto L_088D7FD0;
    }
L_088D7FD0:
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[22] = (0u | 4u);
      if (branch_taken) {
          goto L_088D7FFC;
      }
      goto L_088D7FF0;
    }
L_088D7FF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 4u, 0x088D8060u>(ctx, &aot_mem); return;
      }
      goto L_088D7FFC;
    }
L_088D7FFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(48))))));
    ctx.pc = 0x088D8000u; return;
}

void recomp_unit_0052(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0052_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_52(Runtime &runtime) {
    runtime.register_generated_unit(52u, 0x088D4000u, 16384u, &recomp_unit_0052, &recomp_unit_0052_entry);
    runtime.register_function(0x088D4000u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4008u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D401Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D402Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D403Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4044u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4050u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4060u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4070u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4078u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4084u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4094u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D40B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D40C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D40CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D40E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D40E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4114u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D411Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D41B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D41D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4204u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4210u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4220u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D424Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4254u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4264u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4298u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D42A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D42B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D42D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4300u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4310u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4334u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4340u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4348u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4370u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D437Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4394u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D43B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D43C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D43CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D43D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D440Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4424u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D443Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4468u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4484u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4490u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D44ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D44B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D44D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D44D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D44E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D450Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4538u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4550u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4568u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4584u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D45ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D45BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D45C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D45CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D45DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D45ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D45F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4600u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D462Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D463Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4648u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4650u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4658u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D46A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D46B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4710u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D474Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D475Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4768u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4774u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D477Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D47A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D47B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D47D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D47E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D47ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4810u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4818u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D483Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4844u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D484Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4854u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4868u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4874u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4894u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D48A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D48ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D48B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D48CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D48E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D48ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D492Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4934u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D493Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D494Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D495Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4968u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4980u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D499Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A10u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A2Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A40u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A50u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A5Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A64u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A74u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AC4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B00u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B0Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B18u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B34u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B58u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B5Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B64u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B7Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BA0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BC4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BD8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BF4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C10u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C2Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C34u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C74u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C7Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D0Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D14u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D3Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D94u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DB0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DD4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DDCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DE0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DF4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DFCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E04u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E0Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E18u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E4Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E7Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E94u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EA8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EB4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EC0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4ECCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4ED4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EDCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EE4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EF4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F04u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F0Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F14u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F1Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F3Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F40u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F88u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FD8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FE0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D501Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5024u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D502Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5034u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D503Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5044u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5048u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5050u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5054u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D508Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5104u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5108u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5110u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D511Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5120u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5128u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5134u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5138u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5140u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5158u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5168u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5178u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5198u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5208u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5214u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5220u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5228u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5230u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D523Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5240u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5248u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5254u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D525Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5264u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D526Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5274u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D527Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5298u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D52ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D52BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D52D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D52ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D52F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5310u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5324u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5328u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5340u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D534Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5398u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D540Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5414u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D541Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5420u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D542Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D543Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5444u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D544Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5454u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5464u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5470u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5478u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5480u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5484u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D548Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D54A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D54C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D54E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D54F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D54FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D550Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5520u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5530u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5538u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5554u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5564u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D556Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5574u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D557Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5580u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5588u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D559Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5600u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5608u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5618u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D561Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D562Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5634u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D563Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5644u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5650u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5678u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D569Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D56A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D56ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D56CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D56D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D56E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D56ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D56F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D56FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5700u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5708u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5718u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D571Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5738u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5748u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5754u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D576Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5770u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5788u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5798u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D57A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D57A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D57ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D57C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D57D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5810u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5820u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D582Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5838u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5840u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5848u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D585Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5878u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D588Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5894u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D589Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D58A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D58C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D58CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D58ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5900u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D591Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5934u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5940u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D594Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5964u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D59A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D59B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D59C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D59D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D59DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D59E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D59F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A18u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A30u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A44u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A4Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A5Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A64u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5AACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5AC0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5AD0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5AF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B74u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B7Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B8Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5BB0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5BBCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5BC4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5BD0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5BDCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5BE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5BF4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C10u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C4Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C74u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C8Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5CA8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5CE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5CF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5D00u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5D08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5D10u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5D18u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5D24u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5D2Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5D50u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5D8Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5DA0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5DD4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5DE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5DF4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5E04u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5E08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5E30u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5E6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5E80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5E8Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5EA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5EC4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5ECCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5ED0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5EECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5F2Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5F38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5F48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5F50u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5F70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5F7Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5F94u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5FA0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5FC0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6014u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6070u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6078u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D616Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6174u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D618Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D61FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6204u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D620Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6210u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6260u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6274u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D62C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D62C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6300u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6320u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D632Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6338u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6348u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6354u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6360u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6370u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D637Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6388u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6398u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D63A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D63B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D63C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D63CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D63D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D63FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6404u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6418u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D642Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D643Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6494u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D64BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D64C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D64C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D64D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D64F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D64F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6508u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6518u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D651Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6524u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D652Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6544u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6548u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D654Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D657Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6584u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6588u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6590u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D65E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D65F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D662Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6664u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6674u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6688u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D66A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D66D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D66F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D66F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6704u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6720u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6740u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6750u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6758u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6768u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6770u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6778u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6780u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6790u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D67A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D67B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D67BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D67C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D67E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D67ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D67F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6800u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6804u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D680Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6818u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D681Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6824u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6840u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6850u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6854u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D686Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6888u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D688Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6908u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6914u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6918u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6938u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6944u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6950u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6958u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6960u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D696Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6978u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6980u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6988u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6994u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D69A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D69A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D69B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D69B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D69FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A60u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A78u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A9Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6AA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6AB0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6AE0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6AE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6AF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6AF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6B00u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6B08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6B18u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6B24u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6B2Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6BC0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6C24u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6C2Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6C3Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6CA8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6CACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6D20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6D78u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6D90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E00u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E58u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E60u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E78u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6EDCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6EE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6EECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6F14u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6F20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6F24u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6F2Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6F34u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6FC8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7020u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7038u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D703Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7050u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7054u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D706Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7078u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7080u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7088u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D708Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D70B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D70C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D70ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D70FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D710Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D713Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7140u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7164u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7170u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7208u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7260u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7270u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7288u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7298u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D72A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D72B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D72CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D72E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D72F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D72FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7304u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7310u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D731Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7324u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D732Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7330u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7340u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7348u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7360u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D736Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D737Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7388u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7398u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D73B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D73C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D73D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7438u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7464u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D746Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7480u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D748Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7494u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D74A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D74D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D74E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D74F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7500u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7508u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7518u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7528u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D754Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7558u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7560u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7574u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7580u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7588u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7598u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D75ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D75B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D75BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D75E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D75F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7608u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7610u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7620u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7644u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D764Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7670u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7678u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7680u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7688u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7698u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D76A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D76C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D76DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D76E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D76ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D76F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D76F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7704u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7720u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D774Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7784u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D77E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7818u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7834u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7844u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7868u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7870u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D787Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D788Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D789Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D78B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D78DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D78E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D78F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7914u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7938u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7940u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7944u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D795Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D797Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7984u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7988u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D79A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D79A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D79C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D79D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D79D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D79DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D79ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D79F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D79FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A10u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A18u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A54u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A8Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A94u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7AACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7AB0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7AB8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7AD4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7AF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B00u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B0Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B14u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B1Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B34u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B54u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B5Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B64u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B74u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B7Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7BB0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7BD0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7BD8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7BE4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7BF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7BF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C10u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C30u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C4Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C74u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C7Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C88u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C8Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C94u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CA0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CA8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CCCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D2Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D34u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D60u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7DA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7DACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7DC8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7DE4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E0Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E30u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7EA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7EB4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7ECCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7EDCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7EE4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7EECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7EF4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F04u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F0Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F30u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F50u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F88u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7FA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7FC0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7FD0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7FF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7FFCu, &recomp_unit_0052, "recomp_unit_0052");
}
} // namespace psprecomp
