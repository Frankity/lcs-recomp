#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0054[4094] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5,
    0, 0, 0, 6, 0, 7, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 14, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 23, 0, 24, 0, 0, 25, 0, 0, 26, 0, 27, 0, 0, 28, 0, 29, 0, 0,
    30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 36, 37, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 42, 0, 0, 0, 43, 0, 0, 0,
    0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0,
    59, 0, 60, 0, 61, 0, 62, 0, 0, 0, 63, 0, 64, 0, 65, 0, 66, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 78, 0,
    0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 83, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0,
    0, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 91, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0,
    0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 0, 103, 0,
    104, 0, 105, 0, 0, 0, 0, 106, 0, 107, 0, 0, 108, 0, 109, 0, 0, 110, 0, 111, 0, 0, 112, 0, 113, 0, 0, 114, 0, 115, 116, 0,
    0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 122, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 127, 0, 128, 0, 0, 0, 129, 0, 130, 0, 0, 131, 0, 0, 132, 133, 0, 0, 134, 0, 0, 0, 0, 135, 0, 136, 0, 0, 137,
    0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 144, 145, 0, 146, 147, 0, 148,
    149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 154,
    0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0,
    0, 158, 0, 159, 160, 0, 161, 162, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 167, 0, 0, 0,
    168, 0, 169, 0, 170, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 175, 0, 176, 177, 0, 178, 0, 0, 179,
    0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 182, 0, 0, 183, 184, 0, 185, 0, 186, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0,
    0, 0, 190, 0, 191, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0,
    0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0,
    212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217,
    0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 221, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 225, 0, 226,
    0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236,
    0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 246, 0, 0, 247, 0, 248,
    249, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 253, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 257, 258,
    0, 0, 259, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0,
    0, 275, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 280, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283,
    0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0,
    0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 302, 0, 0, 303, 0, 304, 305, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0,
    308, 0, 309, 0, 0, 310, 0, 0, 311, 312, 0, 313, 0, 314, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 317, 0, 318, 0, 319, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 324, 0, 325, 0, 0, 326, 0, 0, 0, 327,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 334,
    0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 340, 0, 0, 341, 0, 342,
    0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 350, 0, 0, 0, 351, 0,
    352, 0, 353, 0, 354, 0, 355, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0,
    0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    365, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0,
    370, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0,
    378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 383, 384, 385, 386, 0, 0, 0, 0, 0,
    387, 0, 388, 0, 389, 0, 0, 390, 0, 391, 0, 392, 0, 393, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0,
    0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    402, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 411, 412, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 0,
    0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 424, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0,
    0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 433, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0,
    437, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 441, 0, 442, 0, 0, 0, 443, 444, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 448, 0, 0, 0, 449, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0,
    0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 455, 0, 456, 0, 457, 0, 0, 458, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0,
    0, 461, 0, 462, 0, 463, 0, 464, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 469, 0, 470, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 474, 475,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 479, 0, 480, 0, 481, 0,
    0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 484, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    486, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 489, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0,
    0, 492, 0, 0, 0, 493, 0, 494, 0, 0, 0, 495, 0, 0, 0, 496, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498,
    0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 502, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 506, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 512, 0, 513, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 518, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 521, 0, 522, 0, 523, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 527, 0, 528,
    0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 535,
    0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 538, 0, 539, 540, 0, 0, 0, 541, 0, 0, 542, 0,
    0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 549, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 553, 0, 0, 0, 554, 0, 555, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 556, 0, 557, 0, 558, 0, 559, 0, 0, 0, 0, 0, 560, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    562, 563, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 0, 569, 0, 570, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 0,
    573, 0, 0, 0, 0, 0, 574, 0, 575, 0, 0, 0, 0, 0, 576, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 583, 0, 584, 0, 0, 585, 0, 0, 586, 0, 0, 0, 0, 587, 0, 588, 0,
    589, 0, 590, 0, 591, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 595, 0, 596, 0, 597, 0, 0,
    598, 0, 599, 0, 600, 0, 601, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 604, 0, 605, 0, 606, 0, 607, 608, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 609, 0, 610, 0, 0, 611, 0, 612, 0, 613, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 616, 0, 617, 0, 618,
    0, 0, 0, 619, 0, 0, 0, 0, 0, 620, 0, 621, 0, 622, 0, 0, 623, 0, 0, 0, 624, 0, 625, 0, 0, 0, 0, 626, 0, 627, 0, 628,
    0, 629, 0, 630, 0, 631, 0, 632, 0, 633, 0, 634, 0, 635, 0, 636, 0, 0, 0, 0, 637, 0, 638, 0, 0, 639, 0, 0, 640, 0, 641, 0,
    642, 0, 0, 643, 0, 644, 0, 645, 0, 646, 0, 0, 647, 0, 0, 648, 0, 649, 0, 0, 650, 0, 651, 0, 0, 652, 0, 0, 0, 0, 0, 0,
    653, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0,
    0, 657, 658, 659, 0, 660, 0, 661, 0, 662, 0, 663, 0, 664, 0, 665, 0, 666, 0, 667, 0, 668, 0, 0, 0, 669, 0, 0, 0, 0, 670, 0,
    671, 0, 0, 672, 0, 0, 0, 673, 0, 674, 675, 0, 0, 0, 676, 0, 0, 0, 677, 0, 0, 678, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0,
    0, 0, 0, 0, 681, 0, 682, 683, 0, 0, 684, 0, 685, 0, 0, 0, 0, 686, 0, 687, 688, 689, 0, 690, 0, 0, 691, 0, 0, 0, 0, 0,
    692, 0, 0, 0, 0, 693, 0, 0, 0, 694, 0, 695, 0, 696, 0, 0, 0, 0, 697, 0, 698, 0, 0, 699, 0, 0, 700, 0, 701, 702, 0, 0,
    0, 703, 0, 704, 0, 0, 705, 0, 706, 0, 707, 0, 708, 0, 709, 0, 710, 0, 711, 0, 712, 0, 713, 714, 0, 715, 0, 0, 0, 0, 716, 0,
    0, 717, 0, 718, 0, 719, 0, 720, 0, 721, 0, 722, 0, 0, 0, 723, 0, 724, 0, 0, 0, 725, 0, 726, 0, 0, 727, 0, 728, 0, 0, 0,
    729, 0, 730, 0, 0, 731, 0, 0, 0, 0, 0, 732, 0, 0, 733, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 736, 0, 0, 737, 0, 0, 738,
    0, 739, 740, 0, 0, 0, 741, 0, 742, 0, 743, 0, 744, 0, 745, 0, 0, 746, 0, 747, 0, 748, 0, 749, 0, 750, 0, 0, 0, 751, 0, 752,
    0, 0, 753, 0, 754, 0, 755, 0, 756, 0, 757, 0, 758, 0, 759, 0, 760, 0, 761, 762, 0, 763, 0, 0, 0, 0, 764, 0, 765, 0, 766, 0,
    767, 0, 768, 0, 0, 769, 770, 0, 771, 0, 772, 0, 0, 773, 0, 774, 0, 775, 0, 776, 0, 777, 0, 778, 0, 0, 779, 0, 780, 0, 0, 781,
    0, 782, 0, 783, 0, 784, 0, 0, 785, 0, 0, 786, 0, 787, 0, 788, 0, 789, 0, 790, 0, 791, 0, 792, 0, 793, 0, 794, 795, 0, 796, 0,
    0, 797, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 799, 0, 0, 800, 0, 0, 801, 0, 0, 802, 0, 0, 803, 0, 0, 0, 0, 0, 804,
    805, 0, 806, 0, 0, 807, 0, 0, 0, 0, 0, 808, 809, 0, 810, 0, 0, 811, 0, 0, 0, 0, 0, 812, 813, 0, 814, 0, 0, 815, 0, 0,
    0, 0, 0, 816, 817, 0, 818, 0, 0, 0, 0, 819, 0, 820, 0, 821, 0, 0, 0, 0, 822, 0, 0, 0, 823, 0, 824, 0, 825, 0, 826, 0,
    827, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 830, 0, 0, 0, 831, 0, 0, 0, 0, 832, 0, 0, 833, 0, 0, 0, 0,
    834, 0, 0, 835, 0, 0, 0, 0, 836, 0, 0, 837, 0, 0, 0, 0, 838, 0, 0, 839, 0, 0, 0, 0, 840, 0, 0, 0, 0, 841, 842, 0,
    0, 0, 0, 843, 0, 0, 844, 0, 845, 0, 846, 0, 847, 0, 848, 0, 849, 0, 850, 0, 851, 0, 852, 0, 853, 0, 854, 855, 0, 856, 0, 857,
    0, 0, 0, 0, 0, 858, 0, 0, 0, 859, 0, 860, 0, 861, 0, 862, 0, 863, 0, 864, 0, 865, 0, 0, 866, 0, 867, 0, 0, 868, 0, 0,
    869, 870, 0, 871, 0, 872, 0, 873, 0, 0, 874, 0, 875, 0, 876, 0, 877, 0, 878, 879, 0, 880, 0, 0, 0, 881, 0, 882, 883, 0, 884, 0,
    0, 885, 0, 0, 886, 887, 0, 888, 0, 889, 0, 890, 0, 0, 891, 0, 892, 0, 893, 0, 894, 0, 895, 896, 0, 897, 0, 0, 0, 898, 0, 899,
    900, 0, 901, 0, 902, 0, 0, 903, 0, 0, 0, 0, 0, 0, 0, 0, 0, 904, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 905, 0, 0, 0, 0, 0, 906, 0, 0, 907, 908, 0, 0, 0, 909, 910, 0, 911, 0, 912, 0, 0, 0, 0, 913, 0, 0, 914, 0,
    915, 0, 916, 0, 917, 0, 918, 0, 919, 0, 920, 0, 921, 0, 922, 0, 923, 0, 924, 925, 0, 926, 0, 0, 0, 0, 0, 0, 927, 0, 0, 928,
    0, 929, 0, 930, 0, 931, 0, 932, 0, 933, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 934, 0, 0, 0, 0, 935, 0, 0, 0, 936, 0,
    0, 0, 937, 0, 0, 0, 938, 0, 939, 0, 940, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 941, 0, 942, 0, 943, 0, 0, 944, 0, 945,
    0, 0, 0, 0, 946, 0, 0, 0, 0, 0, 0, 0, 947, 0, 0, 0, 0, 948, 0, 0, 0, 949, 0, 950, 0, 951, 0, 952, 0, 953,
};
void recomp_unit_0054_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088DC000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0054[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088DC000;
    case 2u: goto L_088DC020;
    case 3u: goto L_088DC02C;
    case 4u: goto L_088DC04C;
    case 5u: goto L_088DC07C;
    case 6u: goto L_088DC08C;
    case 7u: goto L_088DC094;
    case 8u: goto L_088DC09C;
    case 9u: goto L_088DC0AC;
    case 10u: goto L_088DC0BC;
    case 11u: goto L_088DC0C4;
    case 12u: goto L_088DC0CC;
    case 13u: goto L_088DC0D8;
    case 14u: goto L_088DC108;
    case 15u: goto L_088DC114;
    case 16u: goto L_088DC11C;
    case 17u: goto L_088DC148;
    case 18u: goto L_088DC154;
    case 19u: goto L_088DC15C;
    case 20u: goto L_088DC17C;
    case 21u: goto L_088DC1A4;
    case 22u: goto L_088DC1AC;
    case 23u: goto L_088DC1B8;
    case 24u: goto L_088DC1C0;
    case 25u: goto L_088DC1CC;
    case 26u: goto L_088DC1D8;
    case 27u: goto L_088DC1E0;
    case 28u: goto L_088DC1EC;
    case 29u: goto L_088DC1F4;
    case 30u: goto L_088DC200;
    case 31u: goto L_088DC20C;
    case 32u: goto L_088DC234;
    case 33u: goto L_088DC240;
    case 34u: goto L_088DC24C;
    case 35u: goto L_088DC268;
    case 36u: goto L_088DC298;
    case 37u: goto L_088DC29C;
    case 38u: goto L_088DC2B0;
    case 39u: goto L_088DC2C0;
    case 40u: goto L_088DC2CC;
    case 41u: goto L_088DC2D8;
    case 42u: goto L_088DC2E0;
    case 43u: goto L_088DC2F0;
    case 44u: goto L_088DC304;
    case 45u: goto L_088DC310;
    case 46u: goto L_088DC318;
    case 47u: goto L_088DC32C;
    case 48u: goto L_088DC334;
    case 49u: goto L_088DC344;
    case 50u: goto L_088DC350;
    case 51u: goto L_088DC374;
    case 52u: goto L_088DC3BC;
    case 53u: goto L_088DC3C4;
    case 54u: goto L_088DC3E8;
    case 55u: goto L_088DC410;
    case 56u: goto L_088DC41C;
    case 57u: goto L_088DC424;
    case 58u: goto L_088DC478;
    case 59u: goto L_088DC480;
    case 60u: goto L_088DC488;
    case 61u: goto L_088DC490;
    case 62u: goto L_088DC498;
    case 63u: goto L_088DC4A8;
    case 64u: goto L_088DC4B0;
    case 65u: goto L_088DC4B8;
    case 66u: goto L_088DC4C0;
    case 67u: goto L_088DC4CC;
    case 68u: goto L_088DC4DC;
    case 69u: goto L_088DC4F0;
    case 70u: goto L_088DC504;
    case 71u: goto L_088DC518;
    case 72u: goto L_088DC528;
    case 73u: goto L_088DC53C;
    case 74u: goto L_088DC544;
    case 75u: goto L_088DC54C;
    case 76u: goto L_088DC560;
    case 77u: goto L_088DC570;
    case 78u: goto L_088DC578;
    case 79u: goto L_088DC590;
    case 80u: goto L_088DC598;
    case 81u: goto L_088DC5B4;
    case 82u: goto L_088DC5BC;
    case 83u: goto L_088DC5C4;
    case 84u: goto L_088DC5CC;
    case 85u: goto L_088DC5E4;
    case 86u: goto L_088DC5F4;
    case 87u: goto L_088DC60C;
    case 88u: goto L_088DC614;
    case 89u: goto L_088DC624;
    case 90u: goto L_088DC63C;
    case 91u: goto L_088DC644;
    case 92u: goto L_088DC64C;
    case 93u: goto L_088DC654;
    case 94u: goto L_088DC664;
    case 95u: goto L_088DC678;
    case 96u: goto L_088DC68C;
    case 97u: goto L_088DC6A0;
    case 98u: goto L_088DC6B8;
    case 99u: goto L_088DC6C0;
    case 100u: goto L_088DC6D0;
    case 101u: goto L_088DC6D8;
    case 102u: goto L_088DC6E0;
    case 103u: goto L_088DC6F8;
    case 104u: goto L_088DC700;
    case 105u: goto L_088DC708;
    case 106u: goto L_088DC71C;
    case 107u: goto L_088DC724;
    case 108u: goto L_088DC730;
    case 109u: goto L_088DC738;
    case 110u: goto L_088DC744;
    case 111u: goto L_088DC74C;
    case 112u: goto L_088DC758;
    case 113u: goto L_088DC760;
    case 114u: goto L_088DC76C;
    case 115u: goto L_088DC774;
    case 116u: goto L_088DC778;
    case 117u: goto L_088DC798;
    case 118u: goto L_088DC804;
    case 119u: goto L_088DC81C;
    case 120u: goto L_088DC82C;
    case 121u: goto L_088DC858;
    case 122u: goto L_088DC85C;
    case 123u: goto L_088DC860;
    case 124u: goto L_088DC8A0;
    case 125u: goto L_088DC8A4;
    case 126u: goto L_088DC8B0;
    case 127u: goto L_088DC90C;
    case 128u: goto L_088DC914;
    case 129u: goto L_088DC924;
    case 130u: goto L_088DC92C;
    case 131u: goto L_088DC938;
    case 132u: goto L_088DC944;
    case 133u: goto L_088DC948;
    case 134u: goto L_088DC954;
    case 135u: goto L_088DC968;
    case 136u: goto L_088DC970;
    case 137u: goto L_088DC97C;
    case 138u: goto L_088DC984;
    case 139u: goto L_088DC994;
    case 140u: goto L_088DC9A8;
    case 141u: goto L_088DC9CC;
    case 142u: goto L_088DC9D4;
    case 143u: goto L_088DC9DC;
    case 144u: goto L_088DC9E4;
    case 145u: goto L_088DC9E8;
    case 146u: goto L_088DC9F0;
    case 147u: goto L_088DC9F4;
    case 148u: goto L_088DC9FC;
    case 149u: goto L_088DCA00;
    case 150u: goto L_088DCA08;
    case 151u: goto L_088DCA2C;
    case 152u: goto L_088DCA58;
    case 153u: goto L_088DCA68;
    case 154u: goto L_088DCA7C;
    case 155u: goto L_088DCA94;
    case 156u: goto L_088DCAD8;
    case 157u: goto L_088DCAF4;
    case 158u: goto L_088DCB04;
    case 159u: goto L_088DCB0C;
    case 160u: goto L_088DCB10;
    case 161u: goto L_088DCB18;
    case 162u: goto L_088DCB1C;
    case 163u: goto L_088DCB24;
    case 164u: goto L_088DCB30;
    case 165u: goto L_088DCB58;
    case 166u: goto L_088DCB68;
    case 167u: goto L_088DCB70;
    case 168u: goto L_088DCB80;
    case 169u: goto L_088DCB88;
    case 170u: goto L_088DCB90;
    case 171u: goto L_088DCB98;
    case 172u: goto L_088DCBA8;
    case 173u: goto L_088DCBBC;
    case 174u: goto L_088DCBD4;
    case 175u: goto L_088DCBDC;
    case 176u: goto L_088DCBE4;
    case 177u: goto L_088DCBE8;
    case 178u: goto L_088DCBF0;
    case 179u: goto L_088DCBFC;
    case 180u: goto L_088DCC18;
    case 181u: goto L_088DCC24;
    case 182u: goto L_088DCC2C;
    case 183u: goto L_088DCC38;
    case 184u: goto L_088DCC3C;
    case 185u: goto L_088DCC44;
    case 186u: goto L_088DCC4C;
    case 187u: goto L_088DCC54;
    case 188u: goto L_088DCC64;
    case 189u: goto L_088DCC78;
    case 190u: goto L_088DCC88;
    case 191u: goto L_088DCC90;
    case 192u: goto L_088DCC98;
    case 193u: goto L_088DCCA0;
    case 194u: goto L_088DCCBC;
    case 195u: goto L_088DCCCC;
    case 196u: goto L_088DCCD4;
    case 197u: goto L_088DCCE4;
    case 198u: goto L_088DCD00;
    case 199u: goto L_088DCD1C;
    case 200u: goto L_088DCD30;
    case 201u: goto L_088DCD48;
    case 202u: goto L_088DCD54;
    case 203u: goto L_088DCD5C;
    case 204u: goto L_088DCD6C;
    case 205u: goto L_088DCD74;
    case 206u: goto L_088DCD94;
    case 207u: goto L_088DCD9C;
    case 208u: goto L_088DCDA4;
    case 209u: goto L_088DCDAC;
    case 210u: goto L_088DCDD4;
    case 211u: goto L_088DCDF8;
    case 212u: goto L_088DCE00;
    case 213u: goto L_088DCE08;
    case 214u: goto L_088DCE2C;
    case 215u: goto L_088DCE54;
    case 216u: goto L_088DCE64;
    case 217u: goto L_088DCE7C;
    case 218u: goto L_088DCE84;
    case 219u: goto L_088DCE94;
    case 220u: goto L_088DCEAC;
    case 221u: goto L_088DCEB4;
    case 222u: goto L_088DCEBC;
    case 223u: goto L_088DCED4;
    case 224u: goto L_088DCEEC;
    case 225u: goto L_088DCEF4;
    case 226u: goto L_088DCEFC;
    case 227u: goto L_088DCF0C;
    case 228u: goto L_088DCF1C;
    case 229u: goto L_088DCF28;
    case 230u: goto L_088DCF58;
    case 231u: goto L_088DCF84;
    case 232u: goto L_088DCF98;
    case 233u: goto L_088DCFAC;
    case 234u: goto L_088DCFBC;
    case 235u: goto L_088DCFCC;
    case 236u: goto L_088DCFFC;
    case 237u: goto L_088DD004;
    case 238u: goto L_088DD034;
    case 239u: goto L_088DD048;
    case 240u: goto L_088DD05C;
    case 241u: goto L_088DD068;
    case 242u: goto L_088DD070;
    case 243u: goto L_088DD0A0;
    case 244u: goto L_088DD0CC;
    case 245u: goto L_088DD0E0;
    case 246u: goto L_088DD0E8;
    case 247u: goto L_088DD0F4;
    case 248u: goto L_088DD0FC;
    case 249u: goto L_088DD100;
    case 250u: goto L_088DD110;
    case 251u: goto L_088DD124;
    case 252u: goto L_088DD12C;
    case 253u: goto L_088DD144;
    case 254u: goto L_088DD14C;
    case 255u: goto L_088DD154;
    case 256u: goto L_088DD170;
    case 257u: goto L_088DD178;
    case 258u: goto L_088DD17C;
    case 259u: goto L_088DD188;
    case 260u: goto L_088DD198;
    case 261u: goto L_088DD1A4;
    case 262u: goto L_088DD1B4;
    case 263u: goto L_088DD1C8;
    case 264u: goto L_088DD1D0;
    case 265u: goto L_088DD1E4;
    case 266u: goto L_088DD1F0;
    case 267u: goto L_088DD1F8;
    case 268u: goto L_088DD200;
    case 269u: goto L_088DD228;
    case 270u: goto L_088DD234;
    case 271u: goto L_088DD23C;
    case 272u: goto L_088DD244;
    case 273u: goto L_088DD26C;
    case 274u: goto L_088DD274;
    case 275u: goto L_088DD284;
    case 276u: goto L_088DD29C;
    case 277u: goto L_088DD2A4;
    case 278u: goto L_088DD2B4;
    case 279u: goto L_088DD2CC;
    case 280u: goto L_088DD2D4;
    case 281u: goto L_088DD2DC;
    case 282u: goto L_088DD2EC;
    case 283u: goto L_088DD2FC;
    case 284u: goto L_088DD304;
    case 285u: goto L_088DD334;
    case 286u: goto L_088DD360;
    case 287u: goto L_088DD374;
    case 288u: goto L_088DD388;
    case 289u: goto L_088DD398;
    case 290u: goto L_088DD3A8;
    case 291u: goto L_088DD3AC;
    case 292u: goto L_088DD3D8;
    case 293u: goto L_088DD3E0;
    case 294u: goto L_088DD410;
    case 295u: goto L_088DD424;
    case 296u: goto L_088DD438;
    case 297u: goto L_088DD444;
    case 298u: goto L_088DD44C;
    case 299u: goto L_088DD47C;
    case 300u: goto L_088DD4A8;
    case 301u: goto L_088DD4BC;
    case 302u: goto L_088DD4C4;
    case 303u: goto L_088DD4D0;
    case 304u: goto L_088DD4D8;
    case 305u: goto L_088DD4DC;
    case 306u: goto L_088DD528;
    case 307u: goto L_088DD574;
    case 308u: goto L_088DD580;
    case 309u: goto L_088DD588;
    case 310u: goto L_088DD594;
    case 311u: goto L_088DD5A0;
    case 312u: goto L_088DD5A4;
    case 313u: goto L_088DD5AC;
    case 314u: goto L_088DD5B4;
    case 315u: goto L_088DD5C4;
    case 316u: goto L_088DD5D0;
    case 317u: goto L_088DD5E0;
    case 318u: goto L_088DD5E8;
    case 319u: goto L_088DD5F0;
    case 320u: goto L_088DD620;
    case 321u: goto L_088DD62C;
    case 322u: goto L_088DD63C;
    case 323u: goto L_088DD648;
    case 324u: goto L_088DD658;
    case 325u: goto L_088DD660;
    case 326u: goto L_088DD66C;
    case 327u: goto L_088DD67C;
    case 328u: goto L_088DD6A4;
    case 329u: goto L_088DD6AC;
    case 330u: goto L_088DD6B8;
    case 331u: goto L_088DD6D0;
    case 332u: goto L_088DD6D8;
    case 333u: goto L_088DD6F0;
    case 334u: goto L_088DD6FC;
    case 335u: goto L_088DD714;
    case 336u: goto L_088DD728;
    case 337u: goto L_088DD734;
    case 338u: goto L_088DD74C;
    case 339u: goto L_088DD760;
    case 340u: goto L_088DD768;
    case 341u: goto L_088DD774;
    case 342u: goto L_088DD77C;
    case 343u: goto L_088DD784;
    case 344u: goto L_088DD798;
    case 345u: goto L_088DD7AC;
    case 346u: goto L_088DD7B0;
    case 347u: goto L_088DD7DC;
    case 348u: goto L_088DD83C;
    case 349u: goto L_088DD864;
    case 350u: goto L_088DD868;
    case 351u: goto L_088DD878;
    case 352u: goto L_088DD880;
    case 353u: goto L_088DD888;
    case 354u: goto L_088DD890;
    case 355u: goto L_088DD898;
    case 356u: goto L_088DD8A0;
    case 357u: goto L_088DD8C4;
    case 358u: goto L_088DD8D8;
    case 359u: goto L_088DD8F4;
    case 360u: goto L_088DD904;
    case 361u: goto L_088DD920;
    case 362u: goto L_088DD92C;
    case 363u: goto L_088DD934;
    case 364u: goto L_088DD958;
    case 365u: goto L_088DD980;
    case 366u: goto L_088DD984;
    case 367u: goto L_088DD9A8;
    case 368u: goto L_088DD9D8;
    case 369u: goto L_088DD9F4;
    case 370u: goto L_088DDA00;
    case 371u: goto L_088DDA08;
    case 372u: goto L_088DDA18;
    case 373u: goto L_088DDA2C;
    case 374u: goto L_088DDA40;
    case 375u: goto L_088DDA4C;
    case 376u: goto L_088DDA64;
    case 377u: goto L_088DDA74;
    case 378u: goto L_088DDA80;
    case 379u: goto L_088DDA98;
    case 380u: goto L_088DDAAC;
    case 381u: goto L_088DDAB8;
    case 382u: goto L_088DDAD0;
    case 383u: goto L_088DDADC;
    case 384u: goto L_088DDAE0;
    case 385u: goto L_088DDAE4;
    case 386u: goto L_088DDAE8;
    case 387u: goto L_088DDB00;
    case 388u: goto L_088DDB08;
    case 389u: goto L_088DDB10;
    case 390u: goto L_088DDB1C;
    case 391u: goto L_088DDB24;
    case 392u: goto L_088DDB2C;
    case 393u: goto L_088DDB34;
    case 394u: goto L_088DDB3C;
    case 395u: goto L_088DDB54;
    case 396u: goto L_088DDB68;
    case 397u: goto L_088DDB74;
    case 398u: goto L_088DDB88;
    case 399u: goto L_088DDBC0;
    case 400u: goto L_088DDBD4;
    case 401u: goto L_088DDC50;
    case 402u: goto L_088DDC80;
    case 403u: goto L_088DDC88;
    case 404u: goto L_088DDCA0;
    case 405u: goto L_088DDCAC;
    case 406u: goto L_088DDD0C;
    case 407u: goto L_088DDD1C;
    case 408u: goto L_088DDD64;
    case 409u: goto L_088DDD6C;
    case 410u: goto L_088DDDA4;
    case 411u: goto L_088DDDB0;
    case 412u: goto L_088DDDB4;
    case 413u: goto L_088DDDC0;
    case 414u: goto L_088DDDCC;
    case 415u: goto L_088DDE08;
    case 416u: goto L_088DDE1C;
    case 417u: goto L_088DDEBC;
    case 418u: goto L_088DDEEC;
    case 419u: goto L_088DDEF4;
    case 420u: goto L_088DDF0C;
    case 421u: goto L_088DDF2C;
    case 422u: goto L_088DDF38;
    case 423u: goto L_088DDF40;
    case 424u: goto L_088DDF84;
    case 425u: goto L_088DDF90;
    case 426u: goto L_088DDF9C;
    case 427u: goto L_088DDFD8;
    case 428u: goto L_088DDFF0;
    case 429u: goto L_088DE008;
    case 430u: goto L_088DE010;
    case 431u: goto L_088DE028;
    case 432u: goto L_088DE040;
    case 433u: goto L_088DE04C;
    case 434u: goto L_088DE050;
    case 435u: goto L_088DE088;
    case 436u: goto L_088DE0F8;
    case 437u: goto L_088DE100;
    case 438u: goto L_088DE104;
    case 439u: goto L_088DE124;
    case 440u: goto L_088DE12C;
    case 441u: goto L_088DE134;
    case 442u: goto L_088DE13C;
    case 443u: goto L_088DE14C;
    case 444u: goto L_088DE150;
    case 445u: goto L_088DE170;
    case 446u: goto L_088DE1A8;
    case 447u: goto L_088DE1B0;
    case 448u: goto L_088DE1B8;
    case 449u: goto L_088DE1C8;
    case 450u: goto L_088DE1D4;
    case 451u: goto L_088DE1DC;
    case 452u: goto L_088DE1F4;
    case 453u: goto L_088DE204;
    case 454u: goto L_088DE22C;
    case 455u: goto L_088DE238;
    case 456u: goto L_088DE240;
    case 457u: goto L_088DE248;
    case 458u: goto L_088DE254;
    case 459u: goto L_088DE25C;
    case 460u: goto L_088DE264;
    case 461u: goto L_088DE284;
    case 462u: goto L_088DE28C;
    case 463u: goto L_088DE294;
    case 464u: goto L_088DE29C;
    case 465u: goto L_088DE2AC;
    case 466u: goto L_088DE2BC;
    case 467u: goto L_088DE2C8;
    case 468u: goto L_088DE32C;
    case 469u: goto L_088DE338;
    case 470u: goto L_088DE340;
    case 471u: goto L_088DE34C;
    case 472u: goto L_088DE35C;
    case 473u: goto L_088DE36C;
    case 474u: goto L_088DE378;
    case 475u: goto L_088DE37C;
    case 476u: goto L_088DE3AC;
    case 477u: goto L_088DE3D4;
    case 478u: goto L_088DE3DC;
    case 479u: goto L_088DE3E8;
    case 480u: goto L_088DE3F0;
    case 481u: goto L_088DE3F8;
    case 482u: goto L_088DE41C;
    case 483u: goto L_088DE444;
    case 484u: goto L_088DE44C;
    case 485u: goto L_088DE450;
    case 486u: goto L_088DE480;
    case 487u: goto L_088DE488;
    case 488u: goto L_088DE4B8;
    case 489u: goto L_088DE4C4;
    case 490u: goto L_088DE4C8;
    case 491u: goto L_088DE4F8;
    case 492u: goto L_088DE504;
    case 493u: goto L_088DE514;
    case 494u: goto L_088DE51C;
    case 495u: goto L_088DE52C;
    case 496u: goto L_088DE53C;
    case 497u: goto L_088DE544;
    case 498u: goto L_088DE57C;
    case 499u: goto L_088DE584;
    case 500u: goto L_088DE5B0;
    case 501u: goto L_088DE5C0;
    case 502u: goto L_088DE5D0;
    case 503u: goto L_088DE5D8;
    case 504u: goto L_088DE5E0;
    case 505u: goto L_088DE628;
    case 506u: goto L_088DE68C;
    case 507u: goto L_088DE694;
    case 508u: goto L_088DE6A4;
    case 509u: goto L_088DE710;
    case 510u: goto L_088DE740;
    case 511u: goto L_088DE768;
    case 512u: goto L_088DE770;
    case 513u: goto L_088DE778;
    case 514u: goto L_088DE7A8;
    case 515u: goto L_088DE7D0;
    case 516u: goto L_088DE7D8;
    case 517u: goto L_088DE7E8;
    case 518u: goto L_088DE81C;
    case 519u: goto L_088DE824;
    case 520u: goto L_088DE84C;
    case 521u: goto L_088DE854;
    case 522u: goto L_088DE85C;
    case 523u: goto L_088DE864;
    case 524u: goto L_088DE8AC;
    case 525u: goto L_088DE8D4;
    case 526u: goto L_088DE8EC;
    case 527u: goto L_088DE8F4;
    case 528u: goto L_088DE8FC;
    case 529u: goto L_088DE90C;
    case 530u: goto L_088DE91C;
    case 531u: goto L_088DE92C;
    case 532u: goto L_088DE944;
    case 533u: goto L_088DE960;
    case 534u: goto L_088DE974;
    case 535u: goto L_088DE97C;
    case 536u: goto L_088DE9A0;
    case 537u: goto L_088DE9C8;
    case 538u: goto L_088DE9D0;
    case 539u: goto L_088DE9D8;
    case 540u: goto L_088DE9DC;
    case 541u: goto L_088DE9EC;
    case 542u: goto L_088DE9F8;
    case 543u: goto L_088DEA0C;
    case 544u: goto L_088DEA1C;
    case 545u: goto L_088DEA38;
    case 546u: goto L_088DEA48;
    case 547u: goto L_088DEA58;
    case 548u: goto L_088DEAD4;
    case 549u: goto L_088DEB04;
    case 550u: goto L_088DEB0C;
    case 551u: goto L_088DEB1C;
    case 552u: goto L_088DEB4C;
    case 553u: goto L_088DEB54;
    case 554u: goto L_088DEB64;
    case 555u: goto L_088DEB6C;
    case 556u: goto L_088DEB98;
    case 557u: goto L_088DEBA0;
    case 558u: goto L_088DEBA8;
    case 559u: goto L_088DEBB0;
    case 560u: goto L_088DEBC8;
    case 561u: goto L_088DEBD4;
    case 562u: goto L_088DEC00;
    case 563u: goto L_088DEC04;
    case 564u: goto L_088DEC28;
    case 565u: goto L_088DEC50;
    case 566u: goto L_088DEC78;
    case 567u: goto L_088DECA0;
    case 568u: goto L_088DECB0;
    case 569u: goto L_088DECC8;
    case 570u: goto L_088DECD0;
    case 571u: goto L_088DECE8;
    case 572u: goto L_088DECF0;
    case 573u: goto L_088DED00;
    case 574u: goto L_088DED18;
    case 575u: goto L_088DED20;
    case 576u: goto L_088DED38;
    case 577u: goto L_088DED40;
    case 578u: goto L_088DED98;
    case 579u: goto L_088DEE5C;
    case 580u: goto L_088DEE94;
    case 581u: goto L_088DEF20;
    case 582u: goto L_088DEF30;
    case 583u: goto L_088DEF3C;
    case 584u: goto L_088DEF44;
    case 585u: goto L_088DEF50;
    case 586u: goto L_088DEF5C;
    case 587u: goto L_088DEF70;
    case 588u: goto L_088DEF78;
    case 589u: goto L_088DEF80;
    case 590u: goto L_088DEF88;
    case 591u: goto L_088DEF90;
    case 592u: goto L_088DEF98;
    case 593u: goto L_088DEFAC;
    case 594u: goto L_088DEFDC;
    case 595u: goto L_088DEFE4;
    case 596u: goto L_088DEFEC;
    case 597u: goto L_088DEFF4;
    case 598u: goto L_088DF000;
    case 599u: goto L_088DF008;
    case 600u: goto L_088DF010;
    case 601u: goto L_088DF018;
    case 602u: goto L_088DF034;
    case 603u: goto L_088DF044;
    case 604u: goto L_088DF050;
    case 605u: goto L_088DF058;
    case 606u: goto L_088DF060;
    case 607u: goto L_088DF068;
    case 608u: goto L_088DF06C;
    case 609u: goto L_088DF09C;
    case 610u: goto L_088DF0A4;
    case 611u: goto L_088DF0B0;
    case 612u: goto L_088DF0B8;
    case 613u: goto L_088DF0C0;
    case 614u: goto L_088DF0D0;
    case 615u: goto L_088DF0E0;
    case 616u: goto L_088DF0EC;
    case 617u: goto L_088DF0F4;
    case 618u: goto L_088DF0FC;
    case 619u: goto L_088DF10C;
    case 620u: goto L_088DF124;
    case 621u: goto L_088DF12C;
    case 622u: goto L_088DF134;
    case 623u: goto L_088DF140;
    case 624u: goto L_088DF150;
    case 625u: goto L_088DF158;
    case 626u: goto L_088DF16C;
    case 627u: goto L_088DF174;
    case 628u: goto L_088DF17C;
    case 629u: goto L_088DF184;
    case 630u: goto L_088DF18C;
    case 631u: goto L_088DF194;
    case 632u: goto L_088DF19C;
    case 633u: goto L_088DF1A4;
    case 634u: goto L_088DF1AC;
    case 635u: goto L_088DF1B4;
    case 636u: goto L_088DF1BC;
    case 637u: goto L_088DF1D0;
    case 638u: goto L_088DF1D8;
    case 639u: goto L_088DF1E4;
    case 640u: goto L_088DF1F0;
    case 641u: goto L_088DF1F8;
    case 642u: goto L_088DF200;
    case 643u: goto L_088DF20C;
    case 644u: goto L_088DF214;
    case 645u: goto L_088DF21C;
    case 646u: goto L_088DF224;
    case 647u: goto L_088DF230;
    case 648u: goto L_088DF23C;
    case 649u: goto L_088DF244;
    case 650u: goto L_088DF250;
    case 651u: goto L_088DF258;
    case 652u: goto L_088DF264;
    case 653u: goto L_088DF280;
    case 654u: goto L_088DF298;
    case 655u: goto L_088DF2C4;
    case 656u: goto L_088DF2E8;
    case 657u: goto L_088DF304;
    case 658u: goto L_088DF308;
    case 659u: goto L_088DF30C;
    case 660u: goto L_088DF314;
    case 661u: goto L_088DF31C;
    case 662u: goto L_088DF324;
    case 663u: goto L_088DF32C;
    case 664u: goto L_088DF334;
    case 665u: goto L_088DF33C;
    case 666u: goto L_088DF344;
    case 667u: goto L_088DF34C;
    case 668u: goto L_088DF354;
    case 669u: goto L_088DF364;
    case 670u: goto L_088DF378;
    case 671u: goto L_088DF380;
    case 672u: goto L_088DF38C;
    case 673u: goto L_088DF39C;
    case 674u: goto L_088DF3A4;
    case 675u: goto L_088DF3A8;
    case 676u: goto L_088DF3B8;
    case 677u: goto L_088DF3C8;
    case 678u: goto L_088DF3D4;
    case 679u: goto L_088DF3E0;
    case 680u: goto L_088DF3F0;
    case 681u: goto L_088DF410;
    case 682u: goto L_088DF418;
    case 683u: goto L_088DF41C;
    case 684u: goto L_088DF428;
    case 685u: goto L_088DF430;
    case 686u: goto L_088DF444;
    case 687u: goto L_088DF44C;
    case 688u: goto L_088DF450;
    case 689u: goto L_088DF454;
    case 690u: goto L_088DF45C;
    case 691u: goto L_088DF468;
    case 692u: goto L_088DF480;
    case 693u: goto L_088DF494;
    case 694u: goto L_088DF4A4;
    case 695u: goto L_088DF4AC;
    case 696u: goto L_088DF4B4;
    case 697u: goto L_088DF4C8;
    case 698u: goto L_088DF4D0;
    case 699u: goto L_088DF4DC;
    case 700u: goto L_088DF4E8;
    case 701u: goto L_088DF4F0;
    case 702u: goto L_088DF4F4;
    case 703u: goto L_088DF504;
    case 704u: goto L_088DF50C;
    case 705u: goto L_088DF518;
    case 706u: goto L_088DF520;
    case 707u: goto L_088DF528;
    case 708u: goto L_088DF530;
    case 709u: goto L_088DF538;
    case 710u: goto L_088DF540;
    case 711u: goto L_088DF548;
    case 712u: goto L_088DF550;
    case 713u: goto L_088DF558;
    case 714u: goto L_088DF55C;
    case 715u: goto L_088DF564;
    case 716u: goto L_088DF578;
    case 717u: goto L_088DF584;
    case 718u: goto L_088DF58C;
    case 719u: goto L_088DF594;
    case 720u: goto L_088DF59C;
    case 721u: goto L_088DF5A4;
    case 722u: goto L_088DF5AC;
    case 723u: goto L_088DF5BC;
    case 724u: goto L_088DF5C4;
    case 725u: goto L_088DF5D4;
    case 726u: goto L_088DF5DC;
    case 727u: goto L_088DF5E8;
    case 728u: goto L_088DF5F0;
    case 729u: goto L_088DF600;
    case 730u: goto L_088DF608;
    case 731u: goto L_088DF614;
    case 732u: goto L_088DF62C;
    case 733u: goto L_088DF638;
    case 734u: goto L_088DF648;
    case 735u: goto L_088DF65C;
    case 736u: goto L_088DF664;
    case 737u: goto L_088DF670;
    case 738u: goto L_088DF67C;
    case 739u: goto L_088DF684;
    case 740u: goto L_088DF688;
    case 741u: goto L_088DF698;
    case 742u: goto L_088DF6A0;
    case 743u: goto L_088DF6A8;
    case 744u: goto L_088DF6B0;
    case 745u: goto L_088DF6B8;
    case 746u: goto L_088DF6C4;
    case 747u: goto L_088DF6CC;
    case 748u: goto L_088DF6D4;
    case 749u: goto L_088DF6DC;
    case 750u: goto L_088DF6E4;
    case 751u: goto L_088DF6F4;
    case 752u: goto L_088DF6FC;
    case 753u: goto L_088DF708;
    case 754u: goto L_088DF710;
    case 755u: goto L_088DF718;
    case 756u: goto L_088DF720;
    case 757u: goto L_088DF728;
    case 758u: goto L_088DF730;
    case 759u: goto L_088DF738;
    case 760u: goto L_088DF740;
    case 761u: goto L_088DF748;
    case 762u: goto L_088DF74C;
    case 763u: goto L_088DF754;
    case 764u: goto L_088DF768;
    case 765u: goto L_088DF770;
    case 766u: goto L_088DF778;
    case 767u: goto L_088DF780;
    case 768u: goto L_088DF788;
    case 769u: goto L_088DF794;
    case 770u: goto L_088DF798;
    case 771u: goto L_088DF7A0;
    case 772u: goto L_088DF7A8;
    case 773u: goto L_088DF7B4;
    case 774u: goto L_088DF7BC;
    case 775u: goto L_088DF7C4;
    case 776u: goto L_088DF7CC;
    case 777u: goto L_088DF7D4;
    case 778u: goto L_088DF7DC;
    case 779u: goto L_088DF7E8;
    case 780u: goto L_088DF7F0;
    case 781u: goto L_088DF7FC;
    case 782u: goto L_088DF804;
    case 783u: goto L_088DF80C;
    case 784u: goto L_088DF814;
    case 785u: goto L_088DF820;
    case 786u: goto L_088DF82C;
    case 787u: goto L_088DF834;
    case 788u: goto L_088DF83C;
    case 789u: goto L_088DF844;
    case 790u: goto L_088DF84C;
    case 791u: goto L_088DF854;
    case 792u: goto L_088DF85C;
    case 793u: goto L_088DF864;
    case 794u: goto L_088DF86C;
    case 795u: goto L_088DF870;
    case 796u: goto L_088DF878;
    case 797u: goto L_088DF884;
    case 798u: goto L_088DF89C;
    case 799u: goto L_088DF8B4;
    case 800u: goto L_088DF8C0;
    case 801u: goto L_088DF8CC;
    case 802u: goto L_088DF8D8;
    case 803u: goto L_088DF8E4;
    case 804u: goto L_088DF8FC;
    case 805u: goto L_088DF900;
    case 806u: goto L_088DF908;
    case 807u: goto L_088DF914;
    case 808u: goto L_088DF92C;
    case 809u: goto L_088DF930;
    case 810u: goto L_088DF938;
    case 811u: goto L_088DF944;
    case 812u: goto L_088DF95C;
    case 813u: goto L_088DF960;
    case 814u: goto L_088DF968;
    case 815u: goto L_088DF974;
    case 816u: goto L_088DF98C;
    case 817u: goto L_088DF990;
    case 818u: goto L_088DF998;
    case 819u: goto L_088DF9AC;
    case 820u: goto L_088DF9B4;
    case 821u: goto L_088DF9BC;
    case 822u: goto L_088DF9D0;
    case 823u: goto L_088DF9E0;
    case 824u: goto L_088DF9E8;
    case 825u: goto L_088DF9F0;
    case 826u: goto L_088DF9F8;
    case 827u: goto L_088DFA00;
    case 828u: goto L_088DFA0C;
    case 829u: goto L_088DFA34;
    case 830u: goto L_088DFA3C;
    case 831u: goto L_088DFA4C;
    case 832u: goto L_088DFA60;
    case 833u: goto L_088DFA6C;
    case 834u: goto L_088DFA80;
    case 835u: goto L_088DFA8C;
    case 836u: goto L_088DFAA0;
    case 837u: goto L_088DFAAC;
    case 838u: goto L_088DFAC0;
    case 839u: goto L_088DFACC;
    case 840u: goto L_088DFAE0;
    case 841u: goto L_088DFAF4;
    case 842u: goto L_088DFAF8;
    case 843u: goto L_088DFB0C;
    case 844u: goto L_088DFB18;
    case 845u: goto L_088DFB20;
    case 846u: goto L_088DFB28;
    case 847u: goto L_088DFB30;
    case 848u: goto L_088DFB38;
    case 849u: goto L_088DFB40;
    case 850u: goto L_088DFB48;
    case 851u: goto L_088DFB50;
    case 852u: goto L_088DFB58;
    case 853u: goto L_088DFB60;
    case 854u: goto L_088DFB68;
    case 855u: goto L_088DFB6C;
    case 856u: goto L_088DFB74;
    case 857u: goto L_088DFB7C;
    case 858u: goto L_088DFB94;
    case 859u: goto L_088DFBA4;
    case 860u: goto L_088DFBAC;
    case 861u: goto L_088DFBB4;
    case 862u: goto L_088DFBBC;
    case 863u: goto L_088DFBC4;
    case 864u: goto L_088DFBCC;
    case 865u: goto L_088DFBD4;
    case 866u: goto L_088DFBE0;
    case 867u: goto L_088DFBE8;
    case 868u: goto L_088DFBF4;
    case 869u: goto L_088DFC00;
    case 870u: goto L_088DFC04;
    case 871u: goto L_088DFC0C;
    case 872u: goto L_088DFC14;
    case 873u: goto L_088DFC1C;
    case 874u: goto L_088DFC28;
    case 875u: goto L_088DFC30;
    case 876u: goto L_088DFC38;
    case 877u: goto L_088DFC40;
    case 878u: goto L_088DFC48;
    case 879u: goto L_088DFC4C;
    case 880u: goto L_088DFC54;
    case 881u: goto L_088DFC64;
    case 882u: goto L_088DFC6C;
    case 883u: goto L_088DFC70;
    case 884u: goto L_088DFC78;
    case 885u: goto L_088DFC84;
    case 886u: goto L_088DFC90;
    case 887u: goto L_088DFC94;
    case 888u: goto L_088DFC9C;
    case 889u: goto L_088DFCA4;
    case 890u: goto L_088DFCAC;
    case 891u: goto L_088DFCB8;
    case 892u: goto L_088DFCC0;
    case 893u: goto L_088DFCC8;
    case 894u: goto L_088DFCD0;
    case 895u: goto L_088DFCD8;
    case 896u: goto L_088DFCDC;
    case 897u: goto L_088DFCE4;
    case 898u: goto L_088DFCF4;
    case 899u: goto L_088DFCFC;
    case 900u: goto L_088DFD00;
    case 901u: goto L_088DFD08;
    case 902u: goto L_088DFD10;
    case 903u: goto L_088DFD1C;
    case 904u: goto L_088DFD44;
    case 905u: goto L_088DFD8C;
    case 906u: goto L_088DFDA4;
    case 907u: goto L_088DFDB0;
    case 908u: goto L_088DFDB4;
    case 909u: goto L_088DFDC4;
    case 910u: goto L_088DFDC8;
    case 911u: goto L_088DFDD0;
    case 912u: goto L_088DFDD8;
    case 913u: goto L_088DFDEC;
    case 914u: goto L_088DFDF8;
    case 915u: goto L_088DFE00;
    case 916u: goto L_088DFE08;
    case 917u: goto L_088DFE10;
    case 918u: goto L_088DFE18;
    case 919u: goto L_088DFE20;
    case 920u: goto L_088DFE28;
    case 921u: goto L_088DFE30;
    case 922u: goto L_088DFE38;
    case 923u: goto L_088DFE40;
    case 924u: goto L_088DFE48;
    case 925u: goto L_088DFE4C;
    case 926u: goto L_088DFE54;
    case 927u: goto L_088DFE70;
    case 928u: goto L_088DFE7C;
    case 929u: goto L_088DFE84;
    case 930u: goto L_088DFE8C;
    case 931u: goto L_088DFE94;
    case 932u: goto L_088DFE9C;
    case 933u: goto L_088DFEA4;
    case 934u: goto L_088DFED4;
    case 935u: goto L_088DFEE8;
    case 936u: goto L_088DFEF8;
    case 937u: goto L_088DFF08;
    case 938u: goto L_088DFF18;
    case 939u: goto L_088DFF20;
    case 940u: goto L_088DFF28;
    case 941u: goto L_088DFF58;
    case 942u: goto L_088DFF60;
    case 943u: goto L_088DFF68;
    case 944u: goto L_088DFF74;
    case 945u: goto L_088DFF7C;
    case 946u: goto L_088DFF90;
    case 947u: goto L_088DFFB0;
    case 948u: goto L_088DFFC4;
    case 949u: goto L_088DFFD4;
    case 950u: goto L_088DFFDC;
    case 951u: goto L_088DFFE4;
    case 952u: goto L_088DFFEC;
    case 953u: goto L_088DFFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088DC000:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DC020u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_088DD7DC;
L_088DC020:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1752), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC350;
      }
      goto L_088DC02C;
    }
L_088DC02C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
        goto L_088DC11C;
    }
    goto L_088DC04C;
L_088DC04C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DC350;
      }
      goto L_088DC07C;
    }
L_088DC07C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC350;
      }
      goto L_088DC08C;
    }
L_088DC08C:
    ctx.gpr[31] = (0x088DC094u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DC094u) goto L_088DC094;
    return;
L_088DC094:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC0AC;
      }
      goto L_088DC09C;
    }
L_088DC09C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088DC0BC;
      }
      goto L_088DC0AC;
    }
L_088DC0AC:
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088DC0BC;
L_088DC0BC:
    ctx.gpr[31] = (0x088DC0C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DC0C4u) goto L_088DC0C4;
    return;
L_088DC0C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC350;
      }
      goto L_088DC0CC;
    }
L_088DC0CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1752)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC350;
      }
      goto L_088DC0D8;
    }
L_088DC0D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DC350;
      }
      goto L_088DC108;
    }
L_088DC108:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DC114u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_088DD528;
L_088DC114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC350;
      }
      goto L_088DC11C;
    }
L_088DC11C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DC350;
      }
      goto L_088DC148;
    }
L_088DC148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088DC350;
      }
      goto L_088DC154;
    }
L_088DC154:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC350;
      }
      goto L_088DC15C;
    }
L_088DC15C:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC1C0;
      }
      goto L_088DC17C;
    }
L_088DC17C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC1C0;
      }
      goto L_088DC1A4;
    }
L_088DC1A4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC1C0;
      }
      goto L_088DC1AC;
    }
L_088DC1AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DC1B8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 240u, 0x088D51D4u>(ctx, &aot_mem) && ctx.pc == 0x088DC1B8u) goto L_088DC1B8;
    return;
L_088DC1B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC350;
      }
      goto L_088DC1C0;
    }
L_088DC1C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1752)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC1E0;
      }
      goto L_088DC1CC;
    }
L_088DC1CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DC1D8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_088DD528;
L_088DC1D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC350;
      }
      goto L_088DC1E0;
    }
L_088DC1E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1754))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088DC2C0;
      }
      goto L_088DC1EC;
    }
L_088DC1EC:
    ctx.gpr[31] = (0x088DC1F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 499u, 0x088D6590u>(ctx, &aot_mem) && ctx.pc == 0x088DC1F4u) goto L_088DC1F4;
    return;
L_088DC1F4:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DC2C0;
      }
      goto L_088DC200;
    }
L_088DC200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088DC2C0;
      }
      goto L_088DC20C;
    }
L_088DC20C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1748), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088DC234u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088DC234u) goto L_088DC234;
    return;
L_088DC234:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
        goto L_088DC268;
    }
    goto L_088DC240;
L_088DC240:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088DC24Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088DC24Cu) goto L_088DC24C;
    return;
L_088DC24C:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088DC29C;
      }
      goto L_088DC268;
    }
L_088DC268:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16896u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DC298u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DC298u) goto L_088DC298;
    return;
L_088DC298:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_088DC29C;
L_088DC29C:
    ctx.gpr[5] = (2189u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DC2B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23568));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x088DC2B0u) goto L_088DC2B0;
    return;
L_088DC2B0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1753), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1752), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1754), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088DC350;
      }
      goto L_088DC2C0;
    }
L_088DC2C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1754))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC2E0;
      }
      goto L_088DC2CC;
    }
L_088DC2CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DC2D8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 240u, 0x088D51D4u>(ctx, &aot_mem) && ctx.pc == 0x088DC2D8u) goto L_088DC2D8;
    return;
L_088DC2D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC350;
      }
      goto L_088DC2E0;
    }
L_088DC2E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_088DC318;
      }
      goto L_088DC2F0;
    }
L_088DC2F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC350;
      }
      goto L_088DC304;
    }
L_088DC304:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DC310u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 240u, 0x088D51D4u>(ctx, &aot_mem) && ctx.pc == 0x088DC310u) goto L_088DC310;
    return;
L_088DC310:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC350;
      }
      goto L_088DC318;
    }
L_088DC318:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1748), ctx.gpr[5]);
    ctx.gpr[31] = (0x088DC32Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DC32Cu) goto L_088DC32C;
    return;
L_088DC32C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC344;
      }
      goto L_088DC334;
    }
L_088DC334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(500));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DC350;
      }
      goto L_088DC344;
    }
L_088DC344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    goto L_088DC350;
L_088DC350:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC374:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DC3BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088DC3BCu) goto L_088DC3BC;
    return;
L_088DC3BC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DC410;
      }
      goto L_088DC3C4;
    }
L_088DC3C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC410;
      }
      goto L_088DC3E8;
    }
L_088DC3E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC490;
      }
      goto L_088DC410;
    }
L_088DC410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC488;
      }
      goto L_088DC41C;
    }
L_088DC41C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC480;
      }
      goto L_088DC424;
    }
L_088DC424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[12])) && ctx.fpr[14] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[19] = (0u | 42u);
      if (branch_taken) {
          goto L_088DC498;
      }
      goto L_088DC478;
    }
L_088DC478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC4A8;
      }
      goto L_088DC480;
    }
L_088DC480:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088DC778;
      }
      goto L_088DC488;
    }
L_088DC488:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088DC778;
      }
      goto L_088DC490;
    }
L_088DC490:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_088DC778;
      }
      goto L_088DC498;
    }
L_088DC498:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DC4B8;
      }
      goto L_088DC4A8;
    }
L_088DC4A8:
    ctx.gpr[31] = (0x088DC4B0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x088DC4B0u) goto L_088DC4B0;
    return;
L_088DC4B0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088DC4B8;
      }
      goto L_088DC4B8;
    }
L_088DC4B8:
    ctx.gpr[31] = (0x088DC4C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x088DC4C0u) goto L_088DC4C0;
    return;
L_088DC4C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088DC654;
      }
      goto L_088DC4CC;
    }
L_088DC4CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088DC518;
      }
      goto L_088DC4DC;
    }
L_088DC4DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (0u | 43u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC518;
      }
      goto L_088DC4F0;
    }
L_088DC4F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (0u | 54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC518;
      }
      goto L_088DC504;
    }
L_088DC504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC5CC;
      }
      goto L_088DC518;
    }
L_088DC518:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29516)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088DC5C4;
      }
      goto L_088DC528;
    }
L_088DC528:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21132)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DC5C4;
      }
      goto L_088DC53C;
    }
L_088DC53C:
    ctx.gpr[31] = (0x088DC544u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DC544u) goto L_088DC544;
    return;
L_088DC544:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC5C4;
      }
      goto L_088DC54C;
    }
L_088DC54C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (48793u << 16u);
      if (branch_taken) {
          goto L_088DC578;
      }
      goto L_088DC560;
    }
L_088DC560:
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x088DC570u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 428u, 0x088D5E30u>(ctx, &aot_mem) && ctx.pc == 0x088DC570u) goto L_088DC570;
    return;
L_088DC570:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC5C4;
      }
      goto L_088DC578;
    }
L_088DC578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC598;
      }
      goto L_088DC590;
    }
L_088DC590:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_088DC778;
      }
      goto L_088DC598;
    }
L_088DC598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC5BC;
      }
      goto L_088DC5B4;
    }
L_088DC5B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 11u);
      if (branch_taken) {
          goto L_088DC778;
      }
      goto L_088DC5BC;
    }
L_088DC5BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 12u);
      if (branch_taken) {
          goto L_088DC778;
      }
      goto L_088DC5C4;
    }
L_088DC5C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088DC778;
      }
      goto L_088DC5CC;
    }
L_088DC5CC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21136)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DC64C;
      }
      goto L_088DC5E4;
    }
L_088DC5E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC614;
      }
      goto L_088DC5F4;
    }
L_088DC5F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC614;
      }
      goto L_088DC60C;
    }
L_088DC60C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_088DC778;
      }
      goto L_088DC614;
    }
L_088DC614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC644;
      }
      goto L_088DC624;
    }
L_088DC624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC644;
      }
      goto L_088DC63C;
    }
L_088DC63C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 11u);
      if (branch_taken) {
          goto L_088DC778;
      }
      goto L_088DC644;
    }
L_088DC644:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_088DC778;
      }
      goto L_088DC64C;
    }
L_088DC64C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_088DC778;
      }
      goto L_088DC654;
    }
L_088DC654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088DC6A0;
      }
      goto L_088DC664;
    }
L_088DC664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (0u | 43u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC6A0;
      }
      goto L_088DC678;
    }
L_088DC678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (0u | 54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC6A0;
      }
      goto L_088DC68C;
    }
L_088DC68C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC6E0;
      }
      goto L_088DC6A0;
    }
L_088DC6A0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21132)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DC6C0;
      }
      goto L_088DC6B8;
    }
L_088DC6B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_088DC778;
      }
      goto L_088DC6C0;
    }
L_088DC6C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29516)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC6D8;
      }
      goto L_088DC6D0;
    }
L_088DC6D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 12u);
      if (branch_taken) {
          goto L_088DC778;
      }
      goto L_088DC6D8;
    }
L_088DC6D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088DC778;
      }
      goto L_088DC6E0;
    }
L_088DC6E0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21136)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DC700;
      }
      goto L_088DC6F8;
    }
L_088DC6F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_088DC778;
      }
      goto L_088DC700;
    }
L_088DC700:
    ctx.gpr[31] = (0x088DC708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DC708u) goto L_088DC708;
    return;
L_088DC708:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC724;
      }
      goto L_088DC71C;
    }
L_088DC71C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 8u);
      if (branch_taken) {
          goto L_088DC778;
      }
      goto L_088DC724;
    }
L_088DC724:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC738;
      }
      goto L_088DC730;
    }
L_088DC730:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_088DC778;
      }
      goto L_088DC738;
    }
L_088DC738:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC74C;
      }
      goto L_088DC744;
    }
L_088DC744:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 7u);
      if (branch_taken) {
          goto L_088DC778;
      }
      goto L_088DC74C;
    }
L_088DC74C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC760;
      }
      goto L_088DC758;
    }
L_088DC758:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_088DC778;
      }
      goto L_088DC760;
    }
L_088DC760:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC774;
      }
      goto L_088DC76C;
    }
L_088DC76C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 6u);
      if (branch_taken) {
          goto L_088DC778;
      }
      goto L_088DC774;
    }
L_088DC774:
    ctx.gpr[2] = (0u | 3u);
    goto L_088DC778;
L_088DC778:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
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
L_088DC798:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DC804u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088DC804u) goto L_088DC804;
    return;
L_088DC804:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DC85C;
      }
      goto L_088DC81C;
    }
L_088DC81C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088DC860;
      }
      goto L_088DC82C;
    }
L_088DC82C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[31] = (0x088DC858u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088DC858u) goto L_088DC858;
    return;
L_088DC858:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    goto L_088DC85C;
L_088DC85C:
    ctx.gpr[4] = (0u | 0u);
    goto L_088DC860;
L_088DC860:
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21140)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21136)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088DC8A4;
      }
      goto L_088DC8A0;
    }
L_088DC8A0:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    goto L_088DC8A4;
L_088DC8A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCA08;
      }
      goto L_088DC8B0;
    }
L_088DC8B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCA00;
      }
      goto L_088DC90C;
    }
L_088DC90C:
    ctx.gpr[31] = (0x088DC914u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 59u, 0x088D4584u>(ctx, &aot_mem) && ctx.pc == 0x088DC914u) goto L_088DC914;
    return;
L_088DC914:
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DC92C;
      }
      goto L_088DC924;
    }
L_088DC924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088DCA00;
      }
      goto L_088DC92C;
    }
L_088DC92C:
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088DC948;
      }
      goto L_088DC938;
    }
L_088DC938:
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC970;
      }
      goto L_088DC944;
    }
L_088DC944:
    ctx.gpr[5] = (2230u << 16u);
    goto L_088DC948;
L_088DC948:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-29516)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_088DC970;
      }
      goto L_088DC954;
    }
L_088DC954:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21132)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DC970;
      }
      goto L_088DC968;
    }
L_088DC968:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088DCA00;
      }
      goto L_088DC970;
    }
L_088DC970:
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 43u);
      if (branch_taken) {
          goto L_088DC984;
      }
      goto L_088DC97C;
    }
L_088DC97C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC9FC;
      }
      goto L_088DC984;
    }
L_088DC984:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29516)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088DC9FC;
      }
      goto L_088DC994;
    }
L_088DC994:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21132)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DC9FC;
      }
      goto L_088DC9A8;
    }
L_088DC9A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088DC9DC;
      }
      goto L_088DC9CC;
    }
L_088DC9CC:
    ctx.gpr[31] = (0x088DC9D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 428u, 0x088D5E30u>(ctx, &aot_mem) && ctx.pc == 0x088DC9D4u) goto L_088DC9D4;
    return;
L_088DC9D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088DC9E8;
      }
      goto L_088DC9DC;
    }
L_088DC9DC:
    ctx.gpr[31] = (0x088DC9E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 131u, 0x08980960u>(ctx, &aot_mem) && ctx.pc == 0x088DC9E4u) goto L_088DC9E4;
    return;
L_088DC9E4:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_088DC9E8;
L_088DC9E8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC9F4;
      }
      goto L_088DC9F0;
    }
L_088DC9F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    goto L_088DC9F4;
L_088DC9F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCA00;
      }
      goto L_088DC9FC;
    }
L_088DC9FC:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    goto L_088DCA00;
L_088DCA00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCD9C;
      }
      goto L_088DCA08;
    }
L_088DCA08:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088DCD94;
      }
      goto L_088DCA2C;
    }
L_088DCA2C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (16134u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (0u | 54u);
    ctx.gpr[22] = (0u | 55u);
    goto L_088DCA58;
L_088DCA58:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1868)));
        goto L_088DCA7C;
    }
    goto L_088DCA68;
L_088DCA68:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088DCA94;
      }
      goto L_088DCA7C;
    }
L_088DCA7C:
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1872)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    goto L_088DCA94;
L_088DCA94:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCD74;
      }
      goto L_088DCAD8;
    }
L_088DCAD8:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[24]) || std::isnan(ctx.fpr[13])) && ctx.fpr[24] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088DCB0C;
      }
      goto L_088DCAF4;
    }
L_088DCAF4:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088DCB10;
    }
    goto L_088DCB04;
L_088DCB04:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088DCB1C;
      }
      goto L_088DCB0C;
    }
L_088DCB0C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088DCB10;
L_088DCB10:
    ctx.gpr[31] = (0x088DCB18u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x088DCB18u) goto L_088DCB18;
    return;
L_088DCB18:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088DCB1C;
L_088DCB1C:
    ctx.gpr[31] = (0x088DCB24u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x088DCB24u) goto L_088DCB24;
    return;
L_088DCB24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x088DCB30u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x088DCB30u) goto L_088DCB30;
    return;
L_088DCB30:
    ctx.fpr[20] = ctx.fpr[24] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCB68;
      }
      goto L_088DCB58;
    }
L_088DCB58:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
    goto L_088DCB68;
L_088DCB68:
    ctx.gpr[31] = (0x088DCB70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 59u, 0x088D4584u>(ctx, &aot_mem) && ctx.pc == 0x088DCB70u) goto L_088DCB70;
    return;
L_088DCB70:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 43u);
      if (branch_taken) {
          goto L_088DCB98;
      }
      goto L_088DCB80;
    }
L_088DCB80:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DCB98;
      }
      goto L_088DCB88;
    }
L_088DCB88:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088DCB98;
      }
      goto L_088DCB90;
    }
L_088DCB90:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088DCCA0;
      }
      goto L_088DCB98;
    }
L_088DCB98:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-29516)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_088DCC54;
      }
      goto L_088DCBA8;
    }
L_088DCBA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21132)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (16245u << 16u);
      if (branch_taken) {
          goto L_088DCC54;
      }
      goto L_088DCBBC;
    }
L_088DCBBC:
    ctx.gpr[5] = (ctx.gpr[5] | 48651u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCC54;
      }
      goto L_088DCBD4;
    }
L_088DCBD4:
    if (ctx.gpr[4] == ctx.gpr[22]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
        goto L_088DCBE8;
    }
    goto L_088DCBDC;
L_088DCBDC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088DCBFC;
      }
      goto L_088DCBE4;
    }
L_088DCBE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    goto L_088DCBE8;
L_088DCBE8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DCBFC;
      }
      goto L_088DCBF0;
    }
L_088DCBF0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_088DCC4C;
      }
      goto L_088DCBFC;
    }
L_088DCBFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCC2C;
      }
      goto L_088DCC18;
    }
L_088DCC18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DCC24u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 428u, 0x088D5E30u>(ctx, &aot_mem) && ctx.pc == 0x088DCC24u) goto L_088DCC24;
    return;
L_088DCC24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088DCC3C;
      }
      goto L_088DCC2C;
    }
L_088DCC2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[31] = (0x088DCC38u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 131u, 0x08980960u>(ctx, &aot_mem) && ctx.pc == 0x088DCC38u) goto L_088DCC38;
    return;
L_088DCC38:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_088DCC3C;
L_088DCC3C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DCC4C;
      }
      goto L_088DCC44;
    }
L_088DCC44:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_088DCC4C;
L_088DCC4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCD74;
      }
      goto L_088DCC54;
    }
L_088DCC54:
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCD74;
      }
      goto L_088DCC64;
    }
L_088DCC64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCD74;
      }
      goto L_088DCC78;
    }
L_088DCC78:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCD74;
      }
      goto L_088DCC88;
    }
L_088DCC88:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DCC98;
      }
      goto L_088DCC90;
    }
L_088DCC90:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_088DCC98;
L_088DCC98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCD74;
      }
      goto L_088DCCA0;
    }
L_088DCCA0:
    ctx.gpr[4] = (16201u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCD74;
      }
      goto L_088DCCBC;
    }
L_088DCCBC:
    ctx.set_fpu_condition((ctx.fpr[30] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCD5C;
      }
      goto L_088DCCCC;
    }
L_088DCCCC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DCCE4;
      }
      goto L_088DCCD4;
    }
L_088DCCD4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_088DCD54;
      }
      goto L_088DCCE4;
    }
L_088DCCE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCD48;
      }
      goto L_088DCD00;
    }
L_088DCD00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCD48;
      }
      goto L_088DCD1C;
    }
L_088DCD1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088DCD54;
      }
      goto L_088DCD30;
    }
L_088DCD30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-100));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCD54;
      }
      goto L_088DCD48;
    }
L_088DCD48:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088DCD54;
L_088DCD54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCD74;
      }
      goto L_088DCD5C;
    }
L_088DCD5C:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCD74;
      }
      goto L_088DCD6C;
    }
L_088DCD6C:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_088DCD74;
L_088DCD74:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DCA58;
      }
      goto L_088DCD94;
    }
L_088DCD94:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    goto L_088DCD9C;
L_088DCD9C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088DD110;
      }
      goto L_088DCDA4;
    }
L_088DCDA4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCEFC;
      }
      goto L_088DCDAC;
    }
L_088DCDAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16217u << 16u);
      if (branch_taken) {
          goto L_088DCE08;
      }
      goto L_088DCDD4;
    }
L_088DCDD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCE00;
      }
      goto L_088DCDF8;
    }
L_088DCDF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 9u);
      if (branch_taken) {
          goto L_088DD100;
      }
      goto L_088DCE00;
    }
L_088DCE00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_088DD100;
      }
      goto L_088DCE08;
    }
L_088DCE08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCEBC;
      }
      goto L_088DCE2C;
    }
L_088DCE2C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DCEBC;
      }
      goto L_088DCE54;
    }
L_088DCE54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1748)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DCE84;
      }
      goto L_088DCE64;
    }
L_088DCE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCE84;
      }
      goto L_088DCE7C;
    }
L_088DCE7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 10u);
      if (branch_taken) {
          goto L_088DD100;
      }
      goto L_088DCE84;
    }
L_088DCE84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1748)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DCEB4;
      }
      goto L_088DCE94;
    }
L_088DCE94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCEB4;
      }
      goto L_088DCEAC;
    }
L_088DCEAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 11u);
      if (branch_taken) {
          goto L_088DD100;
      }
      goto L_088DCEB4;
    }
L_088DCEB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 9u);
      if (branch_taken) {
          goto L_088DD100;
      }
      goto L_088DCEBC;
    }
L_088DCEBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCEF4;
      }
      goto L_088DCED4;
    }
L_088DCED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCEF4;
      }
      goto L_088DCEEC;
    }
L_088DCEEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 11u);
      if (branch_taken) {
          goto L_088DD100;
      }
      goto L_088DCEF4;
    }
L_088DCEF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_088DD100;
      }
      goto L_088DCEFC;
    }
L_088DCEFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DCF1C;
      }
      goto L_088DCF0C;
    }
L_088DCF0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DCFAC;
      }
      goto L_088DCF1C;
    }
L_088DCF1C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088DCF58;
      }
      goto L_088DCF28;
    }
L_088DCF28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCF98;
      }
      goto L_088DCF58;
    }
L_088DCF58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCF98;
      }
      goto L_088DCF84;
    }
L_088DCF84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_088DD100;
      }
      goto L_088DCF98;
    }
L_088DCF98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_088DD100;
      }
      goto L_088DCFAC;
    }
L_088DCFAC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
      if (branch_taken) {
          goto L_088DCFCC;
      }
      goto L_088DCFBC;
    }
L_088DCFBC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[8] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088DD05C;
      }
      goto L_088DCFCC;
    }
L_088DCFCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DD048;
      }
      goto L_088DCFFC;
    }
L_088DCFFC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD048;
      }
      goto L_088DD004;
    }
L_088DD004:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DD048;
      }
      goto L_088DD034;
    }
L_088DD034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_088DD100;
      }
      goto L_088DD048;
    }
L_088DD048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_088DD100;
      }
      goto L_088DD05C;
    }
L_088DD05C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DD0E8;
      }
      goto L_088DD068;
    }
L_088DD068:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088DD0A0;
      }
      goto L_088DD070;
    }
L_088DD070:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DD0E0;
      }
      goto L_088DD0A0;
    }
L_088DD0A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DD0E0;
      }
      goto L_088DD0CC;
    }
L_088DD0CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_088DD100;
      }
      goto L_088DD0E0;
    }
L_088DD0E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088DD100;
      }
      goto L_088DD0E8;
    }
L_088DD0E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DD0FC;
      }
      goto L_088DD0F4;
    }
L_088DD0F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088DD100;
      }
      goto L_088DD0FC;
    }
L_088DD0FC:
    ctx.gpr[16] = (0u | 3u);
    goto L_088DD100;
L_088DD100:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088DD4DC;
      }
      goto L_088DD110;
    }
L_088DD110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
      if (branch_taken) {
          goto L_088DD1F8;
      }
      goto L_088DD124;
    }
L_088DD124:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD14C;
      }
      goto L_088DD12C;
    }
L_088DD12C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] & 8192u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD14C;
      }
      goto L_088DD144;
    }
L_088DD144:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 10u);
      if (branch_taken) {
          goto L_088DD17C;
      }
      goto L_088DD14C;
    }
L_088DD14C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD178;
      }
      goto L_088DD154;
    }
L_088DD154:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD178;
      }
      goto L_088DD170;
    }
L_088DD170:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 11u);
      if (branch_taken) {
          goto L_088DD17C;
      }
      goto L_088DD178;
    }
L_088DD178:
    ctx.gpr[16] = (0u | 12u);
    goto L_088DD17C;
L_088DD17C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD198;
      }
      goto L_088DD188;
    }
L_088DD188:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088DD1A4;
      }
      goto L_088DD198;
    }
L_088DD198:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088DD1A4;
L_088DD1A4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1780), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD1D0;
      }
      goto L_088DD1B4;
    }
L_088DD1B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088DD1C8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD1C8u) goto L_088DD1C8;
    return;
L_088DD1C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD1E4;
      }
      goto L_088DD1D0;
    }
L_088DD1D0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088DD1E4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD1E4u) goto L_088DD1E4;
    return;
L_088DD1E4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DD1F0u);
    ctx.gpr[5] = (0u | 1500u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD1F0u) goto L_088DD1F0;
    return;
L_088DD1F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD4DC;
      }
      goto L_088DD1F8;
    }
L_088DD1F8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD23C;
      }
      goto L_088DD200;
    }
L_088DD200:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[16] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1780), 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088DD228u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 85u, 0x089A064Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD228u) goto L_088DD228;
    return;
L_088DD228:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DD234u);
    ctx.gpr[5] = (0u | 1500u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 798u, 0x0899FF9Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD234u) goto L_088DD234;
    return;
L_088DD234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD4DC;
      }
      goto L_088DD23C;
    }
L_088DD23C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD2DC;
      }
      goto L_088DD244;
    }
L_088DD244:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DD274;
      }
      goto L_088DD26C;
    }
L_088DD26C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 11u);
      if (branch_taken) {
          goto L_088DD4DC;
      }
      goto L_088DD274;
    }
L_088DD274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1748)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DD2A4;
      }
      goto L_088DD284;
    }
L_088DD284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD2A4;
      }
      goto L_088DD29C;
    }
L_088DD29C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 10u);
      if (branch_taken) {
          goto L_088DD4DC;
      }
      goto L_088DD2A4;
    }
L_088DD2A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1748)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DD2D4;
      }
      goto L_088DD2B4;
    }
L_088DD2B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD2D4;
      }
      goto L_088DD2CC;
    }
L_088DD2CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 11u);
      if (branch_taken) {
          goto L_088DD4DC;
      }
      goto L_088DD2D4;
    }
L_088DD2D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 9u);
      if (branch_taken) {
          goto L_088DD4DC;
      }
      goto L_088DD2DC;
    }
L_088DD2DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DD2FC;
      }
      goto L_088DD2EC;
    }
L_088DD2EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088DD388;
      }
      goto L_088DD2FC;
    }
L_088DD2FC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088DD334;
      }
      goto L_088DD304;
    }
L_088DD304:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DD374;
      }
      goto L_088DD334;
    }
L_088DD334:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DD374;
      }
      goto L_088DD360;
    }
L_088DD360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_088DD4DC;
      }
      goto L_088DD374;
    }
L_088DD374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_088DD4DC;
      }
      goto L_088DD388;
    }
L_088DD388:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 6u);
    if (ctx.gpr[7] == ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
        goto L_088DD3AC;
    }
    goto L_088DD398;
L_088DD398:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[8] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088DD438;
      }
      goto L_088DD3A8;
    }
L_088DD3A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    goto L_088DD3AC;
L_088DD3AC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DD424;
      }
      goto L_088DD3D8;
    }
L_088DD3D8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD424;
      }
      goto L_088DD3E0;
    }
L_088DD3E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DD424;
      }
      goto L_088DD410;
    }
L_088DD410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_088DD4DC;
      }
      goto L_088DD424;
    }
L_088DD424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_088DD4DC;
      }
      goto L_088DD438;
    }
L_088DD438:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DD4C4;
      }
      goto L_088DD444;
    }
L_088DD444:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088DD47C;
      }
      goto L_088DD44C;
    }
L_088DD44C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DD4BC;
      }
      goto L_088DD47C;
    }
L_088DD47C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DD4BC;
      }
      goto L_088DD4A8;
    }
L_088DD4A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_088DD4DC;
      }
      goto L_088DD4BC;
    }
L_088DD4BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088DD4DC;
      }
      goto L_088DD4C4;
    }
L_088DD4C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DD4D8;
      }
      goto L_088DD4D0;
    }
L_088DD4D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088DD4DC;
      }
      goto L_088DD4D8;
    }
L_088DD4D8:
    ctx.gpr[16] = (0u | 4u);
    goto L_088DD4DC;
L_088DD4DC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD528:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DD574u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD574u) goto L_088DD574;
    return;
L_088DD574:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088DD580u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DD580u) goto L_088DD580;
    return;
L_088DD580:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_088DD594;
      }
      goto L_088DD588;
    }
L_088DD588:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DD594u);
    ctx.gpr[5] = (0u | 138u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x088DD594u) goto L_088DD594;
    return;
L_088DD594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088DD5A4;
      }
      goto L_088DD5A0;
    }
L_088DD5A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1748), ctx.gpr[4]);
    goto L_088DD5A4;
L_088DD5A4:
    ctx.gpr[31] = (0x088DD5ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DD5ACu) goto L_088DD5AC;
    return;
L_088DD5AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1752)));
      if (branch_taken) {
          goto L_088DD5D0;
      }
      goto L_088DD5B4;
    }
L_088DD5B4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DD5C4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_088DC798;
L_088DD5C4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DD5E8;
      }
      goto L_088DD5D0;
    }
L_088DD5D0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DD5E0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_088DC374;
L_088DD5E0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[2]);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088DD5E8;
L_088DD5E8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088DD7B0;
      }
      goto L_088DD5F0;
    }
L_088DD5F0:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088DD648;
      }
      goto L_088DD620;
    }
L_088DD620:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD648;
      }
      goto L_088DD62C;
    }
L_088DD62C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x088DD63Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DD63Cu) goto L_088DD63C;
    return;
L_088DD63C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_088DD660;
      }
      goto L_088DD648;
    }
L_088DD648:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DD658u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x088DD658u) goto L_088DD658;
    return;
L_088DD658:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    goto L_088DD660;
L_088DD660:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DD714;
      }
      goto L_088DD66C;
    }
L_088DD66C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DD714;
      }
      goto L_088DD67C;
    }
L_088DD67C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DD6F0;
      }
      goto L_088DD6A4;
    }
L_088DD6A4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_088DD6D0;
      }
      goto L_088DD6AC;
    }
L_088DD6AC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD6D8;
      }
      goto L_088DD6B8;
    }
L_088DD6B8:
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1753))))));
      if (branch_taken) {
          goto L_088DD728;
      }
      goto L_088DD6D0;
    }
L_088DD6D0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DD6B8;
      }
      goto L_088DD6D8;
    }
L_088DD6D8:
    ctx.gpr[4] = (16262u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1753))))));
      if (branch_taken) {
          goto L_088DD728;
      }
      goto L_088DD6F0;
    }
L_088DD6F0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD6B8;
      }
      goto L_088DD6FC;
    }
L_088DD6FC:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1753))))));
      if (branch_taken) {
          goto L_088DD728;
      }
      goto L_088DD714;
    }
L_088DD714:
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1753))))));
    goto L_088DD728;
L_088DD728:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DD774;
      }
      goto L_088DD734;
    }
L_088DD734:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DD774;
      }
      goto L_088DD74C;
    }
L_088DD74C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    ctx.gpr[31] = (0x088DD760u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DD760u) goto L_088DD760;
    return;
L_088DD760:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DD774;
      }
      goto L_088DD768;
    }
L_088DD768:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DD774u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088DD774u) goto L_088DD774;
    return;
L_088DD774:
    ctx.gpr[31] = (0x088DD77Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DD77Cu) goto L_088DD77C;
    return;
L_088DD77C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD798;
      }
      goto L_088DD784;
    }
L_088DD784:
    ctx.gpr[5] = (15779u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DD798u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088DD798u) goto L_088DD798;
    return;
L_088DD798:
    ctx.gpr[5] = (2189u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DD7ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23568));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x088DD7ACu) goto L_088DD7AC;
    return;
L_088DD7AC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1752), static_cast<std::uint8_t>(0u));
    goto L_088DD7B0;
L_088DD7B0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1753), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_088DD7DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-448));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[30] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DD83Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD83Cu) goto L_088DD83C;
    return;
L_088DD83C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088DD868;
      }
      goto L_088DD864;
    }
L_088DD864:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    goto L_088DD868;
L_088DD868:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1753))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DD890;
      }
      goto L_088DD878;
    }
L_088DD878:
    ctx.gpr[31] = (0x088DD880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD880u) goto L_088DD880;
    return;
L_088DD880:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088DD898;
      }
      goto L_088DD888;
    }
L_088DD888:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD8D8;
      }
      goto L_088DD890;
    }
L_088DD890:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088DE050;
      }
      goto L_088DD898;
    }
L_088DD898:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD8D8;
      }
      goto L_088DD8A0;
    }
L_088DD8A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD8D8;
      }
      goto L_088DD8C4;
    }
L_088DD8C4:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088DD8D8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 189u, 0x08809F14u>(ctx, &aot_mem) && ctx.pc == 0x088DD8D8u) goto L_088DD8D8;
    return;
L_088DD8D8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDF2C;
      }
      goto L_088DD8F4;
    }
L_088DD8F4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_088DD920;
      }
      goto L_088DD904;
    }
L_088DD904:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[4] = (ctx.gpr[21] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1872)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_088DD92C;
      }
      goto L_088DD920;
    }
L_088DD920:
    ctx.gpr[4] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    goto L_088DD92C;
L_088DD92C:
    if (ctx.gpr[30] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
        goto L_088DD984;
    }
    goto L_088DD934;
L_088DD934:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
        goto L_088DD984;
    }
    goto L_088DD958;
L_088DD958:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
        goto L_088DD9A8;
    }
    goto L_088DD980;
L_088DD980:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    goto L_088DD984;
L_088DD984:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[22];
      if (branch_taken) {
          goto L_088DD9D8;
      }
      goto L_088DD9A8;
    }
L_088DD9A8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[13];
    goto L_088DD9D8;
L_088DD9D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDA18;
      }
      goto L_088DD9F4;
    }
L_088DD9F4:
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
      if (branch_taken) {
          goto L_088DDAE8;
      }
      goto L_088DDA00;
    }
L_088DDA00:
    ctx.gpr[31] = (0x088DDA08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x088DDA08u) goto L_088DDA08;
    return;
L_088DDA08:
    ctx.gpr[4] = (ctx.gpr[2] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(388), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088DDAE8;
      }
      goto L_088DDA18;
    }
L_088DDA18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DDA4C;
      }
      goto L_088DDA2C;
    }
L_088DDA2C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[31] = (0x088DDA40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x088DDA40u) goto L_088DDA40;
    return;
L_088DDA40:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088DDA4C;
L_088DDA4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088DDA80;
      }
      goto L_088DDA64;
    }
L_088DDA64:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(257));
    ctx.gpr[31] = (0x088DDA74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x088DDA74u) goto L_088DDA74;
    return;
L_088DDA74:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(257)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088DDA80;
L_088DDA80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[16] = (ctx.gpr[4] ^ 65535u);
    ctx.gpr[16] = (0u < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDAE4;
      }
      goto L_088DDA98;
    }
L_088DDA98:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x088DDAACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x088DDAACu) goto L_088DDAAC;
    return;
L_088DDAAC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDADC;
      }
      goto L_088DDAB8;
    }
L_088DDAB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088DDAD0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DDAD0u) goto L_088DDAD0;
    return;
L_088DDAD0:
    ctx.gpr[4] = (ctx.gpr[2] ^ 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_088DDAE0;
      }
      goto L_088DDADC;
    }
L_088DDADC:
    ctx.gpr[4] = (0u | 0u);
    goto L_088DDAE0;
L_088DDAE0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(388), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088DDAE4;
L_088DDAE4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    goto L_088DDAE8;
L_088DDAE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 55u);
      if (branch_taken) {
          goto L_088DDB1C;
      }
      goto L_088DDB00;
    }
L_088DDB00:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DDB1C;
      }
      goto L_088DDB08;
    }
L_088DDB08:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDF0C;
      }
      goto L_088DDB10;
    }
L_088DDB10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDF0C;
      }
      goto L_088DDB1C;
    }
L_088DDB1C:
    ctx.gpr[31] = (0x088DDB24u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088DDB24u) goto L_088DDB24;
    return;
L_088DDB24:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088DDB3C;
      }
      goto L_088DDB2C;
    }
L_088DDB2C:
    ctx.gpr[31] = (0x088DDB34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088DDB34u) goto L_088DDB34;
    return;
L_088DDB34:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088DDF0C;
      }
      goto L_088DDB3C;
    }
L_088DDB3C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088DDB68;
      }
      goto L_088DDB54;
    }
L_088DDB54:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088DDB68;
L_088DDB68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DDB74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 95u, 0x0899CC34u>(ctx, &aot_mem) && ctx.pc == 0x088DDB74u) goto L_088DDB74;
    return;
L_088DDB74:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DDB88u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 74u, 0x088D46B0u>(ctx, &aot_mem) && ctx.pc == 0x088DDB88u) goto L_088DDB88;
    return;
L_088DDB88:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DDCA0;
      }
      goto L_088DDBC0;
    }
L_088DDBC0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDCA0;
      }
      goto L_088DDBD4;
    }
L_088DDBD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[20];
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DDC88;
      }
      goto L_088DDC50;
    }
L_088DDC50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DDC80u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_088DE088;
L_088DDC80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_088DDCA0;
      }
      goto L_088DDC88;
    }
L_088DDC88:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DDBD4;
      }
      goto L_088DDCA0;
    }
L_088DDCA0:
    ctx.gpr[4] = (ctx.gpr[22] | ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DDDB4;
      }
      goto L_088DDCAC;
    }
L_088DDCAC:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
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
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DDDB4;
      }
      goto L_088DDD0C;
    }
L_088DDD0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 12u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
        goto L_088DDD6C;
    }
    goto L_088DDD1C;
L_088DDD1C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088DDD64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x088DDD64u) goto L_088DDD64;
    return;
L_088DDD64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDDA4;
      }
      goto L_088DDD6C;
    }
L_088DDD6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088DDDA4;
L_088DDDA4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x088DDDB0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x088DDDB0u) goto L_088DDDB0;
    return;
L_088DDDB0:
    ctx.gpr[22] = (0u | 255u);
    goto L_088DDDB4;
L_088DDDB4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_088DDF0C;
      }
      goto L_088DDDC0;
    }
L_088DDDC0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DDDCCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 74u, 0x088D46B0u>(ctx, &aot_mem) && ctx.pc == 0x088DDDCCu) goto L_088DDDCC;
    return;
L_088DDDCC:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DDF0C;
      }
      goto L_088DDE08;
    }
L_088DDE08:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDF0C;
      }
      goto L_088DDE1C;
    }
L_088DDE1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DDEF4;
      }
      goto L_088DDEBC;
    }
L_088DDEBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] << 16u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DDEECu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_088DE088;
L_088DDEEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDF0C;
      }
      goto L_088DDEF4;
    }
L_088DDEF4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DDE1C;
      }
      goto L_088DDF0C;
    }
L_088DDF0C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DD8F4;
      }
      goto L_088DDF2C;
    }
L_088DDF2C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1753))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DDF40;
      }
      goto L_088DDF38;
    }
L_088DDF38:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1753), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088DDF40;
L_088DDF40:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1728));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x088DDF84u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x088DDF84u) goto L_088DDF84;
    return;
L_088DDF84:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE04C;
      }
      goto L_088DDF90;
    }
L_088DDF90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE04C;
      }
      goto L_088DDF9C;
    }
L_088DDF9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 45u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x088DDFD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088DDFD8u) goto L_088DDFD8;
    return;
L_088DDFD8:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4528));
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(31)));
    ctx.gpr[31] = (0x088DDFF0u);
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 296u, 0x08A89F44u>(ctx, &aot_mem) && ctx.pc == 0x088DDFF0u) goto L_088DDFF0;
    return;
L_088DDFF0:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088DE010;
      }
      goto L_088DE008;
    }
L_088DE008:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088DE028;
      }
      goto L_088DE010;
    }
L_088DE010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_088DE028;
    }
    goto L_088DE028;
L_088DE028:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088DE040u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 170u, 0x088214F4u>(ctx, &aot_mem) && ctx.pc == 0x088DE040u) goto L_088DE040;
    return;
L_088DE040:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088DE04Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 196u, 0x088A5790u>(ctx, &aot_mem) && ctx.pc == 0x088DE04Cu) goto L_088DE04C;
    return;
L_088DE04C:
    ctx.gpr[2] = (0u | 0u);
    goto L_088DE050;
L_088DE050:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE088:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-544));
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(470), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[9] & 14u);
    ctx.gpr[8] = (ctx.gpr[8] ^ 12u);
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[30]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088DE100;
      }
      goto L_088DE0F8;
    }
L_088DE0F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
      if (branch_taken) {
          goto L_088DE104;
      }
      goto L_088DE100;
    }
L_088DE100:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_088DE104;
L_088DE104:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088DE124u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088DE124u) goto L_088DE124;
    return;
L_088DE124:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DE14C;
      }
      goto L_088DE12C;
    }
L_088DE12C:
    ctx.gpr[31] = (0x088DE134u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DE134u) goto L_088DE134;
    return;
L_088DE134:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
        goto L_088DE150;
    }
    goto L_088DE13C;
L_088DE13C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DE1B0;
      }
      goto L_088DE14C;
    }
L_088DE14C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    goto L_088DE150;
L_088DE150:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088DE170u);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DE170u) goto L_088DE170;
    return;
L_088DE170:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
      if (branch_taken) {
          goto L_088DE1B8;
      }
      goto L_088DE1A8;
    }
L_088DE1A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE238;
      }
      goto L_088DE1B0;
    }
L_088DE1B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEE5C;
      }
      goto L_088DE1B8;
    }
L_088DE1B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_088DE238;
      }
      goto L_088DE1C8;
    }
L_088DE1C8:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE1DC;
      }
      goto L_088DE1D4;
    }
L_088DE1D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088DE1F4;
      }
      goto L_088DE1DC;
    }
L_088DE1DC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
        goto L_088DE1F4;
    }
    goto L_088DE1F4;
L_088DE1F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
      if (branch_taken) {
          goto L_088DE238;
      }
      goto L_088DE204;
    }
L_088DE204:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DE238;
      }
      goto L_088DE22C;
    }
L_088DE22C:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    goto L_088DE238;
L_088DE238:
    ctx.gpr[31] = (0x088DE240u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DE240u) goto L_088DE240;
    return;
L_088DE240:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE25C;
      }
      goto L_088DE248;
    }
L_088DE248:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2995)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE284;
      }
      goto L_088DE254;
    }
L_088DE254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 20u);
      if (branch_taken) {
          goto L_088DE284;
      }
      goto L_088DE25C;
    }
L_088DE25C:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE284;
      }
      goto L_088DE264;
    }
L_088DE264:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1380)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    goto L_088DE284;
L_088DE284:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_088DE294;
    }
    goto L_088DE28C;
L_088DE28C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1208)));
      if (branch_taken) {
          goto L_088DE2C8;
      }
      goto L_088DE294;
    }
L_088DE294:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_088DE2BC;
    }
    goto L_088DE29C;
L_088DE29C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(285));
    ctx.gpr[31] = (0x088DE2ACu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x088DE2ACu) goto L_088DE2AC;
    return;
L_088DE2AC:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(285)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_088DE2BC;
L_088DE2BC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(178)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    goto L_088DE2C8;
L_088DE2C8:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE340;
      }
      goto L_088DE32C;
    }
L_088DE32C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x088DE338u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 349u, 0x0899E234u>(ctx, &aot_mem) && ctx.pc == 0x088DE338u) goto L_088DE338;
    return;
L_088DE338:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_088DE37C;
      }
      goto L_088DE340;
    }
L_088DE340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_088DE36C;
    }
    goto L_088DE34C;
L_088DE34C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[31] = (0x088DE35Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x088DE35Cu) goto L_088DE35C;
    return;
L_088DE35C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_088DE36C;
L_088DE36C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x088DE378u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(184)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 337u, 0x0899E154u>(ctx, &aot_mem) && ctx.pc == 0x088DE378u) goto L_088DE378;
    return;
L_088DE378:
    ctx.gpr[30] = (ctx.gpr[2] & 255u);
    goto L_088DE37C;
L_088DE37C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(468), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DE3D4;
      }
      goto L_088DE3AC;
    }
L_088DE3AC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(468), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    goto L_088DE3D4;
L_088DE3D4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088DE4C8;
      }
      goto L_088DE3DC;
    }
L_088DE3DC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DE3E8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 322u, 0x08899450u>(ctx, &aot_mem) && ctx.pc == 0x088DE3E8u) goto L_088DE3E8;
    return;
L_088DE3E8:
    ctx.gpr[31] = (0x088DE3F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DE3F0u) goto L_088DE3F0;
    return;
L_088DE3F0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
        goto L_088DE450;
    }
    goto L_088DE3F8;
L_088DE3F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
        goto L_088DE450;
    }
    goto L_088DE41C;
L_088DE41C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
        goto L_088DE450;
    }
    goto L_088DE444;
L_088DE444:
    if (ctx.gpr[22] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
        goto L_088DE488;
    }
    goto L_088DE44C;
L_088DE44C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    goto L_088DE450;
L_088DE450:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088DE480u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 678u, 0x088DAFC4u>(ctx, &aot_mem) && ctx.pc == 0x088DE480u) goto L_088DE480;
    return;
L_088DE480:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE4B8;
      }
      goto L_088DE488;
    }
L_088DE488:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088DE4B8u);
    ctx.gpr[8] = (0u | 101u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 678u, 0x088DAFC4u>(ctx, &aot_mem) && ctx.pc == 0x088DE4B8u) goto L_088DE4B8;
    return;
L_088DE4B8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DE4C4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 75u, 0x088D4710u>(ctx, &aot_mem) && ctx.pc == 0x088DE4C4u) goto L_088DE4C4;
    return;
L_088DE4C4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088DE4C8;
L_088DE4C8:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1753), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[31] = (0x088DE4F8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088DE4F8u) goto L_088DE4F8;
    return;
L_088DE4F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE514;
      }
      goto L_088DE504;
    }
L_088DE504:
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088DE514;
L_088DE514:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE5B0;
      }
      goto L_088DE51C;
    }
L_088DE51C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DE5B0;
      }
      goto L_088DE52C;
    }
L_088DE52C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DE5B0;
      }
      goto L_088DE53C;
    }
L_088DE53C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE584;
      }
      goto L_088DE544;
    }
L_088DE544:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DE57Cu);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(470))))));
    goto L_088DEE94;
L_088DE57C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE5B0;
      }
      goto L_088DE584;
    }
L_088DE584:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(470))))));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088DE5B0u);
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    goto L_088DEE94;
L_088DE5B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 9u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
        goto L_088DE824;
    }
    goto L_088DE5C0;
L_088DE5C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
        goto L_088DE824;
    }
    goto L_088DE5D0;
L_088DE5D0:
    ctx.gpr[31] = (0x088DE5D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x088DE5D8u) goto L_088DE5D8;
    return;
L_088DE5D8:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
        goto L_088DE824;
    }
    goto L_088DE5E0;
L_088DE5E0:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DE694;
      }
      goto L_088DE628;
    }
L_088DE628:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21556)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21560)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088DE68Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x088DE68Cu) goto L_088DE68C;
    return;
L_088DE68C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE710;
      }
      goto L_088DE694;
    }
L_088DE694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DE710;
      }
      goto L_088DE6A4;
    }
L_088DE6A4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21556)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21560)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088DE710u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x088DE710u) goto L_088DE710;
    return;
L_088DE710:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088DE740u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x088DE740u) goto L_088DE740;
    return;
L_088DE740:
    ctx.gpr[4] = (0u | 8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088DE768u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x088DE768u) goto L_088DE768;
    return;
L_088DE768:
    ctx.gpr[31] = (0x088DE770u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DE770u) goto L_088DE770;
    return;
L_088DE770:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE7D0;
      }
      goto L_088DE778;
    }
L_088DE778:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088DE7A8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x088DE7A8u) goto L_088DE7A8;
    return;
L_088DE7A8:
    ctx.gpr[4] = (0u | 8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088DE7D0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x088DE7D0u) goto L_088DE7D0;
    return;
L_088DE7D0:
    ctx.gpr[31] = (0x088DE7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DE7D8u) goto L_088DE7D8;
    return;
L_088DE7D8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE81C;
      }
      goto L_088DE7E8;
    }
L_088DE7E8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (0u | 74u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088DE81Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x088DE81Cu) goto L_088DE81C;
    return;
L_088DE81C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE8EC;
      }
      goto L_088DE824;
    }
L_088DE824:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE854;
      }
      goto L_088DE84C;
    }
L_088DE84C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE8EC;
      }
      goto L_088DE854;
    }
L_088DE854:
    ctx.gpr[31] = (0x088DE85Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F7ACu>(ctx, &aot_mem) && ctx.pc == 0x088DE85Cu) goto L_088DE85C;
    return;
L_088DE85C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE8EC;
      }
      goto L_088DE864;
    }
L_088DE864:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE8EC;
      }
      goto L_088DE8AC;
    }
L_088DE8AC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088DE8D4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x088DE8D4u) goto L_088DE8D4;
    return;
L_088DE8D4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE8AC;
      }
      goto L_088DE8EC;
    }
L_088DE8EC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DED38;
      }
      goto L_088DE8F4;
    }
L_088DE8F4:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DEA38;
      }
      goto L_088DE8FC;
    }
L_088DE8FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DEA38;
      }
      goto L_088DE90C;
    }
L_088DE90C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DEA38;
      }
      goto L_088DE91C;
    }
L_088DE91C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DEA38;
      }
      goto L_088DE92C;
    }
L_088DE92C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DEA38;
      }
      goto L_088DE944;
    }
L_088DE944:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1208)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16880u << 16u);
      if (branch_taken) {
          goto L_088DE974;
      }
      goto L_088DE960;
    }
L_088DE960:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DE9F8;
      }
      goto L_088DE974;
    }
L_088DE974:
    if (ctx.gpr[22] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1380)));
        goto L_088DE9DC;
    }
    goto L_088DE97C;
L_088DE97C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1380)));
        goto L_088DE9DC;
    }
    goto L_088DE9A0;
L_088DE9A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1380)));
        goto L_088DE9DC;
    }
    goto L_088DE9C8;
L_088DE9C8:
    ctx.gpr[31] = (0x088DE9D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DE9D0u) goto L_088DE9D0;
    return;
L_088DE9D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE9F8;
      }
      goto L_088DE9D8;
    }
L_088DE9D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1380)));
    goto L_088DE9DC;
L_088DE9DC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE9F8;
      }
      goto L_088DE9EC;
    }
L_088DE9EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEA38;
      }
      goto L_088DE9F8;
    }
L_088DE9F8:
    ctx.gpr[6] = (ctx.gpr[30] + static_cast<std::uint32_t>(25));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DEA0Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 106u, 0x089A07E8u>(ctx, &aot_mem) && ctx.pc == 0x088DEA0Cu) goto L_088DEA0C;
    return;
L_088DEA0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DEA38;
      }
      goto L_088DEA1C;
    }
L_088DEA1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_088DEA38;
L_088DEA38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DEA58;
      }
      goto L_088DEA48;
    }
L_088DEA48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
        goto L_088DEC04;
    }
    goto L_088DEA58;
L_088DEA58:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEB0C;
      }
      goto L_088DEAD4;
    }
L_088DEAD4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.gpr[4] = (15523u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_088DEB04;
    }
    goto L_088DEB04;
L_088DEB04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEBA8;
      }
      goto L_088DEB0C;
    }
L_088DEB0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DEB54;
      }
      goto L_088DEB1C;
    }
L_088DEB1C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.gpr[4] = (16153u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_088DEB4C;
    }
    goto L_088DEB4C;
L_088DEB4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEBA8;
      }
      goto L_088DEB54;
    }
L_088DEB54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 20 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DEBA0;
      }
      goto L_088DEB64;
    }
L_088DEB64:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEBA0;
      }
      goto L_088DEB6C;
    }
L_088DEB6C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16736u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_088DEB98;
    }
    goto L_088DEB98;
L_088DEB98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEBA8;
      }
      goto L_088DEBA0;
    }
L_088DEBA0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_088DEBA8;
L_088DEBA8:
    ctx.gpr[31] = (0x088DEBB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x088DEBB0u) goto L_088DEBB0;
    return;
L_088DEBB0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21508)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21504)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088DEBC8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x088DEBC8u) goto L_088DEBC8;
    return;
L_088DEBC8:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088DEBD4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x088DEBD4u) goto L_088DEBD4;
    return;
L_088DEBD4:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[31] = (0x088DEC00u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x088DEC00u) goto L_088DEC00;
    return;
L_088DEC00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    goto L_088DEC04;
L_088DEC04:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DECA0;
      }
      goto L_088DEC28;
    }
L_088DEC28:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DECA0;
      }
      goto L_088DEC50;
    }
L_088DEC50:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DECA0;
      }
      goto L_088DEC78;
    }
L_088DEC78:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DECF0;
      }
      goto L_088DECA0;
    }
L_088DECA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DECD0;
      }
      goto L_088DECB0;
    }
L_088DECB0:
    ctx.gpr[4] = (0u | 18u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DECC8u);
    ctx.gpr[8] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 556u, 0x08A927F0u>(ctx, &aot_mem) && ctx.pc == 0x088DECC8u) goto L_088DECC8;
    return;
L_088DECC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DED38;
      }
      goto L_088DECD0;
    }
L_088DECD0:
    ctx.gpr[4] = (0u | 17u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DECE8u);
    ctx.gpr[8] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 556u, 0x08A927F0u>(ctx, &aot_mem) && ctx.pc == 0x088DECE8u) goto L_088DECE8;
    return;
L_088DECE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DED38;
      }
      goto L_088DECF0;
    }
L_088DECF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DED20;
      }
      goto L_088DED00;
    }
L_088DED00:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DED18u);
    ctx.gpr[8] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 556u, 0x08A927F0u>(ctx, &aot_mem) && ctx.pc == 0x088DED18u) goto L_088DED18;
    return;
L_088DED18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DED38;
      }
      goto L_088DED20;
    }
L_088DED20:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DED38u);
    ctx.gpr[8] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 556u, 0x08A927F0u>(ctx, &aot_mem) && ctx.pc == 0x088DED38u) goto L_088DED38;
    return;
L_088DED38:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEE5C;
      }
      goto L_088DED40;
    }
L_088DED40:
    ctx.gpr[4] = (0u | 37u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(248), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7216)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(250), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(261));
    ctx.gpr[22] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(273));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(257), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(251), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(252), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DED98u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 485u, 0x088D64D0u>(ctx, &aot_mem) && ctx.pc == 0x088DED98u) goto L_088DED98;
    return;
L_088DED98:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(470))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(253), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(254), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(255), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(256), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(258), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(259), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_left(ctx.gpr[22] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(273));
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[23] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DEE5Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(248));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x088DEE5Cu) goto L_088DEE5C;
    return;
L_088DEE5C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DEE94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[8] & 255u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[4] = (16512u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[17] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[20] = (0u | 13u);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088DEF70;
      }
      goto L_088DEF20;
    }
L_088DEF20:
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5736));
    ctx.gpr[31] = (0x088DEF30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 86u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x088DEF30u) goto L_088DEF30;
    return;
L_088DEF30:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 43u);
      if (branch_taken) {
          goto L_088DEF70;
      }
      goto L_088DEF3C;
    }
L_088DEF3C:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DEF70;
      }
      goto L_088DEF44;
    }
L_088DEF44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEF70;
      }
      goto L_088DEF50;
    }
L_088DEF50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEF70;
      }
      goto L_088DEF5C;
    }
L_088DEF5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DEF88;
      }
      goto L_088DEF70;
    }
L_088DEF70:
    ctx.gpr[31] = (0x088DEF78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088DEF78u) goto L_088DEF78;
    return;
L_088DEF78:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088DEF90;
      }
      goto L_088DEF80;
    }
L_088DEF80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEFDC;
      }
      goto L_088DEF88;
    }
L_088DEF88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 116u, 0x088E064Cu>(ctx, &aot_mem); return;
      }
      goto L_088DEF90;
    }
L_088DEF90:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[19];
    ctx.gpr[4] = (16448u << 16u);
      if (branch_taken) {
          goto L_088DEFDC;
      }
      goto L_088DEF98;
    }
L_088DEF98:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088DEFDC;
      }
      goto L_088DEFAC;
    }
L_088DEFAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(340), ctx.gpr[5]);
    goto L_088DEFDC;
L_088DEFDC:
    ctx.gpr[31] = (0x088DEFE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088DEFE4u) goto L_088DEFE4;
    return;
L_088DEFE4:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088DF0C0;
      }
      goto L_088DEFEC;
    }
L_088DEFEC:
    ctx.gpr[31] = (0x088DEFF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088DEFF4u) goto L_088DEFF4;
    return;
L_088DEFF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2997)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF010;
      }
      goto L_088DF000;
    }
L_088DF000:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF018;
      }
      goto L_088DF008;
    }
L_088DF008:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF044;
      }
      goto L_088DF010;
    }
L_088DF010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 116u, 0x088E064Cu>(ctx, &aot_mem); return;
      }
      goto L_088DF018;
    }
L_088DF018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF044;
      }
      goto L_088DF034;
    }
L_088DF034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DF058;
      }
      goto L_088DF044;
    }
L_088DF044:
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088DF06C;
      }
      goto L_088DF050;
    }
L_088DF050:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 31u);
      if (branch_taken) {
          goto L_088DF060;
      }
      goto L_088DF058;
    }
L_088DF058:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 116u, 0x088E064Cu>(ctx, &aot_mem); return;
      }
      goto L_088DF060;
    }
L_088DF060:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DF09C;
      }
      goto L_088DF068;
    }
L_088DF068:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088DF06C;
L_088DF06C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(358)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF0B8;
      }
      goto L_088DF09C;
    }
L_088DF09C:
    ctx.gpr[31] = (0x088DF0A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF0A4u) goto L_088DF0A4;
    return;
L_088DF0A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088DF0B0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 273u, 0x089452C4u>(ctx, &aot_mem) && ctx.pc == 0x088DF0B0u) goto L_088DF0B0;
    return;
L_088DF0B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF0C0;
      }
      goto L_088DF0B8;
    }
L_088DF0B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 116u, 0x088E064Cu>(ctx, &aot_mem); return;
      }
      goto L_088DF0C0;
    }
L_088DF0C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DF0F4;
      }
      goto L_088DF0D0;
    }
L_088DF0D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DF0F4;
      }
      goto L_088DF0E0;
    }
L_088DF0E0:
    ctx.gpr[16] = (0u | 43u);
    if (ctx.gpr[23] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(412)));
        goto L_088DF0FC;
    }
    goto L_088DF0EC;
L_088DF0EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF10C;
      }
      goto L_088DF0F4;
    }
L_088DF0F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 116u, 0x088E064Cu>(ctx, &aot_mem); return;
      }
      goto L_088DF0FC;
    }
L_088DF0FC:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF12C;
      }
      goto L_088DF10C;
    }
L_088DF10C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF134;
      }
      goto L_088DF124;
    }
L_088DF124:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF158;
      }
      goto L_088DF12C;
    }
L_088DF12C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 116u, 0x088E064Cu>(ctx, &aot_mem); return;
      }
      goto L_088DF134;
    }
L_088DF134:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF150;
      }
      goto L_088DF140;
    }
L_088DF140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DF158;
      }
      goto L_088DF150;
    }
L_088DF150:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088DF174;
      }
      goto L_088DF158;
    }
L_088DF158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF17C;
      }
      goto L_088DF16C;
    }
L_088DF16C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF1AC;
      }
      goto L_088DF174;
    }
L_088DF174:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 116u, 0x088E064Cu>(ctx, &aot_mem); return;
      }
      goto L_088DF17C;
    }
L_088DF17C:
    ctx.gpr[31] = (0x088DF184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF184u) goto L_088DF184;
    return;
L_088DF184:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088DF1AC;
      }
      goto L_088DF18C;
    }
L_088DF18C:
    ctx.gpr[31] = (0x088DF194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x088DF194u) goto L_088DF194;
    return;
L_088DF194:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088DF1AC;
      }
      goto L_088DF19C;
    }
L_088DF19C:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[16];
    ctx.gpr[4] = (0u | 41u);
      if (branch_taken) {
          goto L_088DF1AC;
      }
      goto L_088DF1A4;
    }
L_088DF1A4:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DF1D0;
      }
      goto L_088DF1AC;
    }
L_088DF1AC:
    ctx.gpr[31] = (0x088DF1B4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DF1B4u) goto L_088DF1B4;
    return;
L_088DF1B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF1D8;
      }
      goto L_088DF1BC;
    }
L_088DF1BC:
    ctx.gpr[4] = (16040u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_088DF1E4;
      }
      goto L_088DF1D0;
    }
L_088DF1D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 116u, 0x088E064Cu>(ctx, &aot_mem); return;
      }
      goto L_088DF1D8;
    }
L_088DF1D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1380)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_088DF1E4;
L_088DF1E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 28u);
      if (branch_taken) {
          goto L_088DF200;
      }
      goto L_088DF1F0;
    }
L_088DF1F0:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DF200;
      }
      goto L_088DF1F8;
    }
L_088DF1F8:
    ctx.gpr[4] = (17098u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088DF200;
L_088DF200:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF30C;
      }
      goto L_088DF20C;
    }
L_088DF20C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF30C;
      }
      goto L_088DF214;
    }
L_088DF214:
    ctx.gpr[31] = (0x088DF21Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DF21Cu) goto L_088DF21C;
    return;
L_088DF21C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF30C;
      }
      goto L_088DF224;
    }
L_088DF224:
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088DF230u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF230u) goto L_088DF230;
    return;
L_088DF230:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088DF23Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 751u, 0x08A2F85Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF23Cu) goto L_088DF23C;
    return;
L_088DF23C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF264;
      }
      goto L_088DF244;
    }
L_088DF244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 17u);
      if (branch_taken) {
          goto L_088DF258;
      }
      goto L_088DF250;
    }
L_088DF250:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DF264;
      }
      goto L_088DF258;
    }
L_088DF258:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_088DF264;
L_088DF264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF308;
      }
      goto L_088DF280;
    }
L_088DF280:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF304;
      }
      goto L_088DF298;
    }
L_088DF298:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7206)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5736));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DF2C4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 485u, 0x088D64D0u>(ctx, &aot_mem) && ctx.pc == 0x088DF2C4u) goto L_088DF2C4;
    return;
L_088DF2C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3))))));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088DF2E8;
    }
    goto L_088DF2E8;
L_088DF2E8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x088DF304u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x088DF304u) goto L_088DF304;
    return;
L_088DF304:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_088DF308;
L_088DF308:
    ctx.gpr[17] = (2229u << 16u);
    goto L_088DF30C;
L_088DF30C:
    ctx.gpr[31] = (0x088DF314u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DF314u) goto L_088DF314;
    return;
L_088DF314:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088DF354;
      }
      goto L_088DF31C;
    }
L_088DF31C:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_088DF34C;
      }
      goto L_088DF324;
    }
L_088DF324:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 8u);
      if (branch_taken) {
          goto L_088DF34C;
      }
      goto L_088DF32C;
    }
L_088DF32C:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 9u);
      if (branch_taken) {
          goto L_088DF34C;
      }
      goto L_088DF334;
    }
L_088DF334:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_088DF34C;
      }
      goto L_088DF33C;
    }
L_088DF33C:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 11u);
      if (branch_taken) {
          goto L_088DF34C;
      }
      goto L_088DF344;
    }
L_088DF344:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DF354;
      }
      goto L_088DF34C;
    }
L_088DF34C:
    ctx.gpr[4] = (0u | 200u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1755), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088DF354;
L_088DF354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088DF3B8;
      }
      goto L_088DF364;
    }
L_088DF364:
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088DF378u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 428u, 0x088D5E30u>(ctx, &aot_mem) && ctx.pc == 0x088DF378u) goto L_088DF378;
    return;
L_088DF378:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF454;
      }
      goto L_088DF380;
    }
L_088DF380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DF38Cu);
    ctx.gpr[5] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 337u, 0x08865864u>(ctx, &aot_mem) && ctx.pc == 0x088DF38Cu) goto L_088DF38C;
    return;
L_088DF38C:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_088DF3A4;
      }
      goto L_088DF39C;
    }
L_088DF39C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 39u);
      if (branch_taken) {
          goto L_088DF3A8;
      }
      goto L_088DF3A4;
    }
L_088DF3A4:
    ctx.gpr[20] = (0u | 37u);
    goto L_088DF3A8;
L_088DF3A8:
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DF454;
      }
      goto L_088DF3B8;
    }
L_088DF3B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DF454;
      }
      goto L_088DF3C8;
    }
L_088DF3C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DF3D4u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 337u, 0x08865864u>(ctx, &aot_mem) && ctx.pc == 0x088DF3D4u) goto L_088DF3D4;
    return;
L_088DF3D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF428;
      }
      goto L_088DF3E0;
    }
L_088DF3E0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF428;
      }
      goto L_088DF3F0;
    }
L_088DF3F0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_088DF418;
      }
      goto L_088DF410;
    }
L_088DF410:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 39u);
      if (branch_taken) {
          goto L_088DF41C;
      }
      goto L_088DF418;
    }
L_088DF418:
    ctx.gpr[20] = (0u | 37u);
    goto L_088DF41C;
L_088DF41C:
    ctx.gpr[4] = (16128u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DF450;
      }
      goto L_088DF428;
    }
L_088DF428:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF44C;
      }
      goto L_088DF430;
    }
L_088DF430:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DF44C;
      }
      goto L_088DF444;
    }
L_088DF444:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 169u);
      if (branch_taken) {
          goto L_088DF450;
      }
      goto L_088DF44C;
    }
L_088DF44C:
    ctx.gpr[20] = (0u | 13u);
    goto L_088DF450;
L_088DF450:
    ctx.gpr[16] = (0u | 0u);
    goto L_088DF454;
L_088DF454:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFE54;
      }
      goto L_088DF45C;
    }
L_088DF45C:
    ctx.gpr[4] = (ctx.gpr[23] < static_cast<std::uint32_t>(45) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFE54;
      }
      goto L_088DF468;
    }
L_088DF468:
    ctx.gpr[23] = (ctx.gpr[23] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[23]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(14120)));
    jump_target = ctx.gpr[1];
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF4AC;
      }
      goto L_088DF494;
    }
L_088DF494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DF4B4;
      }
      goto L_088DF4A4;
    }
L_088DF4A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF50C;
      }
      goto L_088DF4AC;
    }
L_088DF4AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 116u, 0x088E064Cu>(ctx, &aot_mem); return;
      }
      goto L_088DF4B4;
    }
L_088DF4B4:
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088DF4C8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 428u, 0x088D5E30u>(ctx, &aot_mem) && ctx.pc == 0x088DF4C8u) goto L_088DF4C8;
    return;
L_088DF4C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF504;
      }
      goto L_088DF4D0;
    }
L_088DF4D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DF4DCu);
    ctx.gpr[5] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 337u, 0x08865864u>(ctx, &aot_mem) && ctx.pc == 0x088DF4DCu) goto L_088DF4DC;
    return;
L_088DF4DC:
    ctx.gpr[4] = (16384u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DF4F0;
      }
      goto L_088DF4E8;
    }
L_088DF4E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 39u);
      if (branch_taken) {
          goto L_088DF4F4;
      }
      goto L_088DF4F0;
    }
L_088DF4F0:
    ctx.gpr[20] = (0u | 37u);
    goto L_088DF4F4;
L_088DF4F4:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DF55C;
      }
      goto L_088DF504;
    }
L_088DF504:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 169u);
      if (branch_taken) {
          goto L_088DF55C;
      }
      goto L_088DF50C;
    }
L_088DF50C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DF530;
      }
      goto L_088DF518;
    }
L_088DF518:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    // nop
      if (branch_taken) {
          goto L_088DF55C;
      }
      goto L_088DF520;
    }
L_088DF520:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_088DF548;
      }
      goto L_088DF528;
    }
L_088DF528:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 25u);
      if (branch_taken) {
          goto L_088DF55C;
      }
      goto L_088DF530;
    }
L_088DF530:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DF550;
      }
      goto L_088DF538;
    }
L_088DF538:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF558;
      }
      goto L_088DF540;
    }
L_088DF540:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF55C;
      }
      goto L_088DF548;
    }
L_088DF548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 26u);
      if (branch_taken) {
          goto L_088DF55C;
      }
      goto L_088DF550;
    }
L_088DF550:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 27u);
      if (branch_taken) {
          goto L_088DF55C;
      }
      goto L_088DF558;
    }
L_088DF558:
    ctx.gpr[20] = (0u | 28u);
    goto L_088DF55C;
L_088DF55C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFE54;
      }
      goto L_088DF564;
    }
L_088DF564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF58C;
      }
      goto L_088DF578;
    }
L_088DF578:
    ctx.gpr[16] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088DF594;
      }
      goto L_088DF584;
    }
L_088DF584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF638;
      }
      goto L_088DF58C;
    }
L_088DF58C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 116u, 0x088E064Cu>(ctx, &aot_mem); return;
      }
      goto L_088DF594;
    }
L_088DF594:
    ctx.gpr[31] = (0x088DF59Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF59Cu) goto L_088DF59C;
    return;
L_088DF59C:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088DF638;
      }
      goto L_088DF5A4;
    }
L_088DF5A4:
    ctx.gpr[31] = (0x088DF5ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF5ACu) goto L_088DF5AC;
    return;
L_088DF5AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DF638;
      }
      goto L_088DF5BC;
    }
L_088DF5BC:
    ctx.gpr[31] = (0x088DF5C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF5C4u) goto L_088DF5C4;
    return;
L_088DF5C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DF5E8;
      }
      goto L_088DF5D4;
    }
L_088DF5D4:
    ctx.gpr[31] = (0x088DF5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF5DCu) goto L_088DF5DC;
    return;
L_088DF5DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088DF638;
      }
      goto L_088DF5E8;
    }
L_088DF5E8:
    ctx.gpr[31] = (0x088DF5F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DF5F0u) goto L_088DF5F0;
    return;
L_088DF5F0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF614;
      }
      goto L_088DF600;
    }
L_088DF600:
    ctx.gpr[31] = (0x088DF608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF608u) goto L_088DF608;
    return;
L_088DF608:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2999)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF638;
      }
      goto L_088DF614;
    }
L_088DF614:
    ctx.gpr[6] = (ctx.gpr[21] << 24u);
    ctx.gpr[20] = (0u | 17u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DF62Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 411u, 0x088D5CA8u>(ctx, &aot_mem) && ctx.pc == 0x088DF62Cu) goto L_088DF62C;
    return;
L_088DF62C:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_088DF74C;
      }
      goto L_088DF638;
    }
L_088DF638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DF6A0;
      }
      goto L_088DF648;
    }
L_088DF648:
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088DF65Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 428u, 0x088D5E30u>(ctx, &aot_mem) && ctx.pc == 0x088DF65Cu) goto L_088DF65C;
    return;
L_088DF65C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF698;
      }
      goto L_088DF664;
    }
L_088DF664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DF670u);
    ctx.gpr[5] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 337u, 0x08865864u>(ctx, &aot_mem) && ctx.pc == 0x088DF670u) goto L_088DF670;
    return;
L_088DF670:
    ctx.gpr[4] = (16384u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DF684;
      }
      goto L_088DF67C;
    }
L_088DF67C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 39u);
      if (branch_taken) {
          goto L_088DF688;
      }
      goto L_088DF684;
    }
L_088DF684:
    ctx.gpr[20] = (0u | 37u);
    goto L_088DF688;
L_088DF688:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DF74C;
      }
      goto L_088DF698;
    }
L_088DF698:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 169u);
      if (branch_taken) {
          goto L_088DF74C;
      }
      goto L_088DF6A0;
    }
L_088DF6A0:
    ctx.gpr[31] = (0x088DF6A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF6A8u) goto L_088DF6A8;
    return;
L_088DF6A8:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088DF6CC;
      }
      goto L_088DF6B0;
    }
L_088DF6B0:
    ctx.gpr[31] = (0x088DF6B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF6B8u) goto L_088DF6B8;
    return;
L_088DF6B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088DF6CC;
      }
      goto L_088DF6C4;
    }
L_088DF6C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 17u);
      if (branch_taken) {
          goto L_088DF74C;
      }
      goto L_088DF6CC;
    }
L_088DF6CC:
    ctx.gpr[31] = (0x088DF6D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF6D4u) goto L_088DF6D4;
    return;
L_088DF6D4:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088DF6FC;
      }
      goto L_088DF6DC;
    }
L_088DF6DC:
    ctx.gpr[31] = (0x088DF6E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF6E4u) goto L_088DF6E4;
    return;
L_088DF6E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DF6FC;
      }
      goto L_088DF6F4;
    }
L_088DF6F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 18u);
      if (branch_taken) {
          goto L_088DF74C;
      }
      goto L_088DF6FC;
    }
L_088DF6FC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DF720;
      }
      goto L_088DF708;
    }
L_088DF708:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    // nop
      if (branch_taken) {
          goto L_088DF74C;
      }
      goto L_088DF710;
    }
L_088DF710:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_088DF738;
      }
      goto L_088DF718;
    }
L_088DF718:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 25u);
      if (branch_taken) {
          goto L_088DF74C;
      }
      goto L_088DF720;
    }
L_088DF720:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DF740;
      }
      goto L_088DF728;
    }
L_088DF728:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF748;
      }
      goto L_088DF730;
    }
L_088DF730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF74C;
      }
      goto L_088DF738;
    }
L_088DF738:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 26u);
      if (branch_taken) {
          goto L_088DF74C;
      }
      goto L_088DF740;
    }
L_088DF740:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 27u);
      if (branch_taken) {
          goto L_088DF74C;
      }
      goto L_088DF748;
    }
L_088DF748:
    ctx.gpr[20] = (0u | 28u);
    goto L_088DF74C;
L_088DF74C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFE54;
      }
      goto L_088DF754;
    }
L_088DF754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF780;
      }
      goto L_088DF768;
    }
L_088DF768:
    ctx.gpr[31] = (0x088DF770u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DF770u) goto L_088DF770;
    return;
L_088DF770:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
        goto L_088DF798;
    }
    goto L_088DF778;
L_088DF778:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(412)));
      if (branch_taken) {
          goto L_088DF788;
      }
      goto L_088DF780;
    }
L_088DF780:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 116u, 0x088E064Cu>(ctx, &aot_mem); return;
      }
      goto L_088DF788;
    }
L_088DF788:
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF7A8;
      }
      goto L_088DF794;
    }
L_088DF794:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
    goto L_088DF798;
L_088DF798:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF7A8;
      }
      goto L_088DF7A0;
    }
L_088DF7A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088DF80C;
      }
      goto L_088DF7A8;
    }
L_088DF7A8:
    ctx.gpr[4] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 29u);
      if (branch_taken) {
          goto L_088DF7D4;
      }
      goto L_088DF7B4;
    }
L_088DF7B4:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 27u);
      if (branch_taken) {
          goto L_088DF7D4;
      }
      goto L_088DF7BC;
    }
L_088DF7BC:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 26u);
      if (branch_taken) {
          goto L_088DF7D4;
      }
      goto L_088DF7C4;
    }
L_088DF7C4:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_088DF7D4;
      }
      goto L_088DF7CC;
    }
L_088DF7CC:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DF7DC;
      }
      goto L_088DF7D4;
    }
L_088DF7D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088DF80C;
      }
      goto L_088DF7DC;
    }
L_088DF7DC:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DF7FC;
      }
      goto L_088DF7E8;
    }
L_088DF7E8:
    ctx.gpr[31] = (0x088DF7F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DF7F0u) goto L_088DF7F0;
    return;
L_088DF7F0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
      if (branch_taken) {
          goto L_088DF80C;
      }
      goto L_088DF7FC;
    }
L_088DF7FC:
    ctx.gpr[31] = (0x088DF804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DF804u) goto L_088DF804;
    return;
L_088DF804:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    goto L_088DF80C;
L_088DF80C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF878;
      }
      goto L_088DF814;
    }
L_088DF814:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DF86C;
      }
      goto L_088DF820;
    }
L_088DF820:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DF844;
      }
      goto L_088DF82C;
    }
L_088DF82C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    // nop
      if (branch_taken) {
          goto L_088DF870;
      }
      goto L_088DF834;
    }
L_088DF834:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_088DF85C;
      }
      goto L_088DF83C;
    }
L_088DF83C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 25u);
      if (branch_taken) {
          goto L_088DF870;
      }
      goto L_088DF844;
    }
L_088DF844:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DF864;
      }
      goto L_088DF84C;
    }
L_088DF84C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF870;
      }
      goto L_088DF854;
    }
L_088DF854:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 28u);
      if (branch_taken) {
          goto L_088DF870;
      }
      goto L_088DF85C;
    }
L_088DF85C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 26u);
      if (branch_taken) {
          goto L_088DF870;
      }
      goto L_088DF864;
    }
L_088DF864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 27u);
      if (branch_taken) {
          goto L_088DF870;
      }
      goto L_088DF86C;
    }
L_088DF86C:
    ctx.gpr[20] = (0u | 13u);
    goto L_088DF870;
L_088DF870:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088DF990;
      }
      goto L_088DF878;
    }
L_088DF878:
    ctx.gpr[4] = (ctx.gpr[30] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF990;
      }
      goto L_088DF884;
    }
L_088DF884:
    ctx.gpr[30] = (ctx.gpr[30] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[30]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(14304)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF89C:
    ctx.gpr[6] = (ctx.gpr[21] << 24u);
    ctx.gpr[20] = (0u | 17u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DF8B4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 411u, 0x088D5CA8u>(ctx, &aot_mem) && ctx.pc == 0x088DF8B4u) goto L_088DF8B4;
    return;
L_088DF8B4:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_088DF990;
      }
      goto L_088DF8C0;
    }
L_088DF8C0:
    ctx.gpr[20] = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088DF990;
      }
      goto L_088DF8CC;
    }
L_088DF8CC:
    ctx.gpr[20] = (0u | 18u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088DF990;
      }
      goto L_088DF8D8;
    }
L_088DF8D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF900;
      }
      goto L_088DF8E4;
    }
L_088DF8E4:
    ctx.gpr[6] = (ctx.gpr[21] << 24u);
    ctx.gpr[20] = (0u | 19u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DF8FCu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 411u, 0x088D5CA8u>(ctx, &aot_mem) && ctx.pc == 0x088DF8FCu) goto L_088DF8FC;
    return;
L_088DF8FC:
    ctx.gpr[18] = (0u | 1u);
    goto L_088DF900;
L_088DF900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF990;
      }
      goto L_088DF908;
    }
L_088DF908:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF930;
      }
      goto L_088DF914;
    }
L_088DF914:
    ctx.gpr[6] = (ctx.gpr[21] << 24u);
    ctx.gpr[20] = (0u | 20u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DF92Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 411u, 0x088D5CA8u>(ctx, &aot_mem) && ctx.pc == 0x088DF92Cu) goto L_088DF92C;
    return;
L_088DF92C:
    ctx.gpr[18] = (0u | 1u);
    goto L_088DF930;
L_088DF930:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF990;
      }
      goto L_088DF938;
    }
L_088DF938:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF960;
      }
      goto L_088DF944;
    }
L_088DF944:
    ctx.gpr[6] = (ctx.gpr[21] << 24u);
    ctx.gpr[20] = (0u | 21u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DF95Cu);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 411u, 0x088D5CA8u>(ctx, &aot_mem) && ctx.pc == 0x088DF95Cu) goto L_088DF95C;
    return;
L_088DF95C:
    ctx.gpr[18] = (0u | 1u);
    goto L_088DF960;
L_088DF960:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF990;
      }
      goto L_088DF968;
    }
L_088DF968:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF990;
      }
      goto L_088DF974;
    }
L_088DF974:
    ctx.gpr[6] = (ctx.gpr[21] << 24u);
    ctx.gpr[20] = (0u | 22u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DF98Cu);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 411u, 0x088D5CA8u>(ctx, &aot_mem) && ctx.pc == 0x088DF98Cu) goto L_088DF98C;
    return;
L_088DF98C:
    ctx.gpr[18] = (0u | 1u);
    goto L_088DF990;
L_088DF990:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFE54;
      }
      goto L_088DF998;
    }
L_088DF998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF9B4;
      }
      goto L_088DF9AC;
    }
L_088DF9AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 13u);
      if (branch_taken) {
          goto L_088DFE54;
      }
      goto L_088DF9B4;
    }
L_088DF9B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 116u, 0x088E064Cu>(ctx, &aot_mem); return;
      }
      goto L_088DF9BC;
    }
L_088DF9BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF9E8;
      }
      goto L_088DF9D0;
    }
L_088DF9D0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29516)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF9F0;
      }
      goto L_088DF9E0;
    }
L_088DF9E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFAF8;
      }
      goto L_088DF9E8;
    }
L_088DF9E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 116u, 0x088E064Cu>(ctx, &aot_mem); return;
      }
      goto L_088DF9F0;
    }
L_088DF9F0:
    ctx.gpr[31] = (0x088DF9F8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088DF9F8u) goto L_088DF9F8;
    return;
L_088DF9F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFAF8;
      }
      goto L_088DFA00;
    }
L_088DFA00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFAF8;
      }
      goto L_088DFA0C;
    }
L_088DFA0C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1212)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DFAF8;
      }
      goto L_088DFA34;
    }
L_088DFA34:
    ctx.gpr[31] = (0x088DFA3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DFA3Cu) goto L_088DFA3C;
    return;
L_088DFA3C:
    ctx.gpr[16] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFA60;
      }
      goto L_088DFA4C;
    }
L_088DFA4C:
    ctx.gpr[6] = (ctx.gpr[21] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DFA60u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 411u, 0x088D5CA8u>(ctx, &aot_mem) && ctx.pc == 0x088DFA60u) goto L_088DFA60;
    return;
L_088DFA60:
    ctx.gpr[4] = (ctx.gpr[16] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFA80;
      }
      goto L_088DFA6C;
    }
L_088DFA6C:
    ctx.gpr[6] = (ctx.gpr[21] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DFA80u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 411u, 0x088D5CA8u>(ctx, &aot_mem) && ctx.pc == 0x088DFA80u) goto L_088DFA80;
    return;
L_088DFA80:
    ctx.gpr[4] = (ctx.gpr[16] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFAA0;
      }
      goto L_088DFA8C;
    }
L_088DFA8C:
    ctx.gpr[6] = (ctx.gpr[21] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DFAA0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 411u, 0x088D5CA8u>(ctx, &aot_mem) && ctx.pc == 0x088DFAA0u) goto L_088DFAA0;
    return;
L_088DFAA0:
    ctx.gpr[4] = (ctx.gpr[16] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFAC0;
      }
      goto L_088DFAAC;
    }
L_088DFAAC:
    ctx.gpr[6] = (ctx.gpr[21] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DFAC0u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 411u, 0x088D5CA8u>(ctx, &aot_mem) && ctx.pc == 0x088DFAC0u) goto L_088DFAC0;
    return;
L_088DFAC0:
    ctx.gpr[4] = (ctx.gpr[16] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFAE0;
      }
      goto L_088DFACC;
    }
L_088DFACC:
    ctx.gpr[6] = (ctx.gpr[21] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DFAE0u);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 411u, 0x088D5CA8u>(ctx, &aot_mem) && ctx.pc == 0x088DFAE0u) goto L_088DFAE0;
    return;
L_088DFAE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFAF8;
      }
      goto L_088DFAF4;
    }
L_088DFAF4:
    ctx.gpr[18] = (0u | 1u);
    goto L_088DFAF8;
L_088DFAF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFB20;
      }
      goto L_088DFB0C;
    }
L_088DFB0C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFB28;
      }
      goto L_088DFB18;
    }
L_088DFB18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DFB40;
      }
      goto L_088DFB20;
    }
L_088DFB20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 116u, 0x088E064Cu>(ctx, &aot_mem); return;
      }
      goto L_088DFB28;
    }
L_088DFB28:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    // nop
      if (branch_taken) {
          goto L_088DFB6C;
      }
      goto L_088DFB30;
    }
L_088DFB30:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_088DFB58;
      }
      goto L_088DFB38;
    }
L_088DFB38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 25u);
      if (branch_taken) {
          goto L_088DFB6C;
      }
      goto L_088DFB40;
    }
L_088DFB40:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DFB60;
      }
      goto L_088DFB48;
    }
L_088DFB48:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFB68;
      }
      goto L_088DFB50;
    }
L_088DFB50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFB6C;
      }
      goto L_088DFB58;
    }
L_088DFB58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 26u);
      if (branch_taken) {
          goto L_088DFB6C;
      }
      goto L_088DFB60;
    }
L_088DFB60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 27u);
      if (branch_taken) {
          goto L_088DFB6C;
      }
      goto L_088DFB68;
    }
L_088DFB68:
    ctx.gpr[20] = (0u | 28u);
    goto L_088DFB6C;
L_088DFB6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFE54;
      }
      goto L_088DFB74;
    }
L_088DFB74:
    ctx.gpr[31] = (0x088DFB7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088DFB7Cu) goto L_088DFB7C;
    return;
L_088DFB7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
      if (branch_taken) {
          goto L_088DFBAC;
      }
      goto L_088DFB94;
    }
L_088DFB94:
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_088DFBB4;
      }
      goto L_088DFBA4;
    }
L_088DFBA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DFBCC;
      }
      goto L_088DFBAC;
    }
L_088DFBAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 116u, 0x088E064Cu>(ctx, &aot_mem); return;
      }
      goto L_088DFBB4;
    }
L_088DFBB4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    // nop
      if (branch_taken) {
          goto L_088DFD00;
      }
      goto L_088DFBBC;
    }
L_088DFBBC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088DFBE8;
      }
      goto L_088DFBC4;
    }
L_088DFBC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFC54;
      }
      goto L_088DFBCC;
    }
L_088DFBCC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFC78;
      }
      goto L_088DFBD4;
    }
L_088DFBD4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFCE4;
      }
      goto L_088DFBE0;
    }
L_088DFBE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFD00;
      }
      goto L_088DFBE8;
    }
L_088DFBE8:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088DFC04;
      }
      goto L_088DFBF4;
    }
L_088DFBF4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFC14;
      }
      goto L_088DFC00;
    }
L_088DFC00:
    ctx.gpr[5] = (0u | 1u);
    goto L_088DFC04;
L_088DFC04:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DFC1C;
      }
      goto L_088DFC0C;
    }
L_088DFC0C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DFC1C;
      }
      goto L_088DFC14;
    }
L_088DFC14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 26u);
      if (branch_taken) {
          goto L_088DFC4C;
      }
      goto L_088DFC1C;
    }
L_088DFC1C:
    ctx.gpr[7] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[7];
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DFC30;
      }
      goto L_088DFC28;
    }
L_088DFC28:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFC40;
      }
      goto L_088DFC30;
    }
L_088DFC30:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DFC48;
      }
      goto L_088DFC38;
    }
L_088DFC38:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DFC48;
      }
      goto L_088DFC40;
    }
L_088DFC40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 28u);
      if (branch_taken) {
          goto L_088DFC4C;
      }
      goto L_088DFC48;
    }
L_088DFC48:
    ctx.gpr[20] = (0u | 25u);
    goto L_088DFC4C;
L_088DFC4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFD00;
      }
      goto L_088DFC54;
    }
L_088DFC54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DFC6C;
      }
      goto L_088DFC64;
    }
L_088DFC64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 23u);
      if (branch_taken) {
          goto L_088DFC70;
      }
      goto L_088DFC6C;
    }
L_088DFC6C:
    ctx.gpr[20] = (0u | 26u);
    goto L_088DFC70;
L_088DFC70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFD00;
      }
      goto L_088DFC78;
    }
L_088DFC78:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[5];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_088DFC94;
      }
      goto L_088DFC84;
    }
L_088DFC84:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFCA4;
      }
      goto L_088DFC90;
    }
L_088DFC90:
    ctx.gpr[6] = (0u | 1u);
    goto L_088DFC94;
L_088DFC94:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DFCAC;
      }
      goto L_088DFC9C;
    }
L_088DFC9C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DFCAC;
      }
      goto L_088DFCA4;
    }
L_088DFCA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 23u);
      if (branch_taken) {
          goto L_088DFCDC;
      }
      goto L_088DFCAC;
    }
L_088DFCAC:
    ctx.gpr[7] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[7];
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DFCC0;
      }
      goto L_088DFCB8;
    }
L_088DFCB8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFCD0;
      }
      goto L_088DFCC0;
    }
L_088DFCC0:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DFCD8;
      }
      goto L_088DFCC8;
    }
L_088DFCC8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DFCD8;
      }
      goto L_088DFCD0;
    }
L_088DFCD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 24u);
      if (branch_taken) {
          goto L_088DFCDC;
      }
      goto L_088DFCD8;
    }
L_088DFCD8:
    ctx.gpr[20] = (0u | 27u);
    goto L_088DFCDC;
L_088DFCDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFD00;
      }
      goto L_088DFCE4;
    }
L_088DFCE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DFCFC;
      }
      goto L_088DFCF4;
    }
L_088DFCF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 24u);
      if (branch_taken) {
          goto L_088DFD00;
      }
      goto L_088DFCFC;
    }
L_088DFCFC:
    ctx.gpr[20] = (0u | 28u);
    goto L_088DFD00;
L_088DFD00:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFDB4;
      }
      goto L_088DFD08;
    }
L_088DFD08:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFDB4;
      }
      goto L_088DFD10;
    }
L_088DFD10:
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_088DFD44;
      }
      goto L_088DFD1C;
    }
L_088DFD1C:
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
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[22];
      if (branch_taken) {
          goto L_088DFDB4;
      }
      goto L_088DFD44;
    }
L_088DFD44:
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16704u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[22];
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
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088DFD8Cu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x088DFD8Cu) goto L_088DFD8C;
    return;
L_088DFD8C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21572)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21568)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088DFDA4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x088DFDA4u) goto L_088DFDA4;
    return;
L_088DFDA4:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088DFDB0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x088DFDB0u) goto L_088DFDB0;
    return;
L_088DFDB0:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088DFDB4;
L_088DFDB4:
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DFDC8;
      }
      goto L_088DFDC4;
    }
L_088DFDC4:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_088DFDC8;
L_088DFDC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFE54;
      }
      goto L_088DFDD0;
    }
L_088DFDD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 152u);
      if (branch_taken) {
          goto L_088DFE54;
      }
      goto L_088DFDD8;
    }
L_088DFDD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFE00;
      }
      goto L_088DFDEC;
    }
L_088DFDEC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFE08;
      }
      goto L_088DFDF8;
    }
L_088DFDF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DFE20;
      }
      goto L_088DFE00;
    }
L_088DFE00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 116u, 0x088E064Cu>(ctx, &aot_mem); return;
      }
      goto L_088DFE08;
    }
L_088DFE08:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    // nop
      if (branch_taken) {
          goto L_088DFE4C;
      }
      goto L_088DFE10;
    }
L_088DFE10:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_088DFE38;
      }
      goto L_088DFE18;
    }
L_088DFE18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 25u);
      if (branch_taken) {
          goto L_088DFE4C;
      }
      goto L_088DFE20;
    }
L_088DFE20:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DFE40;
      }
      goto L_088DFE28;
    }
L_088DFE28:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFE48;
      }
      goto L_088DFE30;
    }
L_088DFE30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFE4C;
      }
      goto L_088DFE38;
    }
L_088DFE38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 26u);
      if (branch_taken) {
          goto L_088DFE4C;
      }
      goto L_088DFE40;
    }
L_088DFE40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 27u);
      if (branch_taken) {
          goto L_088DFE4C;
      }
      goto L_088DFE48;
    }
L_088DFE48:
    ctx.gpr[20] = (0u | 28u);
    goto L_088DFE4C;
L_088DFE4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFE54;
      }
      goto L_088DFE54;
    }
L_088DFE54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1212)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[16] = (0u | 44u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[26])) && ctx.fpr[12] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DFF08;
      }
      goto L_088DFE70;
    }
L_088DFE70:
    ctx.gpr[4] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DFE84;
      }
      goto L_088DFE7C;
    }
L_088DFE7C:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[16];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088DFE8C;
      }
      goto L_088DFE84;
    }
L_088DFE84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088DFE8C;
      }
      goto L_088DFE8C;
    }
L_088DFE8C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFF08;
      }
      goto L_088DFE94;
    }
L_088DFE94:
    ctx.gpr[31] = (0x088DFE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088DFE9Cu) goto L_088DFE9C;
    return;
L_088DFE9C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088DFED4;
      }
      goto L_088DFEA4;
    }
L_088DFEA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(252), ctx.gpr[5]);
    goto L_088DFED4;
L_088DFED4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1212)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DFEF8;
      }
      goto L_088DFEE8;
    }
L_088DFEE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1212)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
      if (branch_taken) {
          goto L_088DFF08;
      }
      goto L_088DFEF8;
    }
L_088DFEF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1212)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088DFF08;
L_088DFF08:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[26])) && ctx.fpr[20] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DFF60;
      }
      goto L_088DFF18;
    }
L_088DFF18:
    ctx.gpr[31] = (0x088DFF20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088DFF20u) goto L_088DFF20;
    return;
L_088DFF20:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088DFF58;
      }
      goto L_088DFF28;
    }
L_088DFF28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(248), ctx.gpr[5]);
    goto L_088DFF58;
L_088DFF58:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1918), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1920), ctx.gpr[22]);
    goto L_088DFF60;
L_088DFF60:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088DFFF4;
      }
      goto L_088DFF68;
    }
L_088DFF68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DFF74u);
    ctx.gpr[5] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088DFF74u) goto L_088DFF74;
    return;
L_088DFF74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFFF4;
      }
      goto L_088DFF7C;
    }
L_088DFF7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1208)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DFFF4;
      }
      goto L_088DFF90;
    }
L_088DFF90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1208)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DFFF4;
      }
      goto L_088DFFB0;
    }
L_088DFFB0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1208)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1208)));
        goto L_088DFFC4;
    }
    goto L_088DFFC4;
L_088DFFC4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFFEC;
      }
      goto L_088DFFD4;
    }
L_088DFFD4:
    ctx.gpr[31] = (0x088DFFDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088DFFDCu) goto L_088DFFDC;
    return;
L_088DFFDC:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088DFFEC;
      }
      goto L_088DFFE4;
    }
L_088DFFE4:
    ctx.gpr[31] = (0x088DFFECu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 161u, 0x08868FD8u>(ctx, &aot_mem) && ctx.pc == 0x088DFFECu) goto L_088DFFEC;
    return;
L_088DFFEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 115u, 0x088E0648u>(ctx, &aot_mem); return;
      }
      goto L_088DFFF4;
    }
L_088DFFF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    ctx.pc = 0x088E0000u; return;
}

void recomp_unit_0054(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0054_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_54(Runtime &runtime) {
    runtime.register_generated_unit(54u, 0x088DC000u, 16384u, &recomp_unit_0054, &recomp_unit_0054_entry);
    runtime.register_function(0x088DC000u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC020u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC02Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC04Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC07Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC08Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC094u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC09Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC0ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC0BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC0C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC0CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC0D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC108u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC114u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC11Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC148u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC154u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC15Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC17Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC1A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC1ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC1B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC1C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC1CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC1D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC1E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC1ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC1F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC200u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC20Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC234u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC240u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC24Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC268u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC298u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC29Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC2B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC2C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC2CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC2D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC2E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC2F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC304u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC310u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC318u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC32Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC334u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC344u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC350u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC374u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC3BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC3C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC3E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC410u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC41Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC424u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC478u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC480u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC488u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC490u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC498u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC4A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC4B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC4B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC4C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC4CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC4DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC4F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC504u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC518u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC528u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC53Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC544u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC54Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC560u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC570u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC578u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC590u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC598u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC5B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC5BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC5C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC5CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC5E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC5F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC60Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC614u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC624u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC63Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC644u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC64Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC654u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC664u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC678u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC68Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC700u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC708u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC71Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC724u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC730u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC738u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC744u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC74Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC758u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC760u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC76Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC774u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC778u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC798u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC804u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC81Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC82Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC858u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC85Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC860u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC8A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC8A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC8B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC90Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC914u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC924u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC92Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC938u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC944u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC948u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC954u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC968u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC970u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC97Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC984u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC994u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC9A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC9CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC9D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC9DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC9E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC9E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC9F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC9F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC9FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA00u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA08u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA2Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA58u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA68u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA7Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCAD8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCAF4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB04u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB0Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB10u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB18u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB24u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB30u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB58u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB68u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB70u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB80u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB88u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB90u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB98u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBA8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBBCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBD4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBDCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBE4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBE8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBF0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBFCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC18u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC24u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC2Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC38u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC3Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC44u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC4Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC54u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC64u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC78u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC88u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC90u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC98u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCCA0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCCBCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCCCCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCCD4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCCE4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD00u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD30u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD48u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD54u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD5Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD6Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD74u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD9Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCDA4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCDACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCDD4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCDF8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE00u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE08u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE2Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE54u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE64u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE7Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCEACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCEB4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCEBCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCED4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCEECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCEF4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCEFCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCF0Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCF1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCF28u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCF58u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCF84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCF98u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCFACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCFBCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCFCCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCFFCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD004u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD034u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD048u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD05Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD068u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD070u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD100u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD110u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD124u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD12Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD144u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD14Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD154u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD170u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD178u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD17Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD188u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD198u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD1A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD1B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD1C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD1D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD1E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD1F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD1F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD200u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD228u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD234u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD23Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD244u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD26Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD274u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD284u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD29Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD2A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD2B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD2CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD2D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD2DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD2ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD2FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD304u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD334u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD360u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD374u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD388u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD398u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD3A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD3ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD3D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD3E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD410u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD424u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD438u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD444u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD44Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD47Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD4A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD4BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD4C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD4D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD4D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD4DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD528u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD574u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD580u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD588u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD594u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD5A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD5A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD5ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD5B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD5C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD5D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD5E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD5E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD5F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD620u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD62Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD63Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD648u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD658u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD660u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD66Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD67Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD714u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD728u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD734u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD74Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD760u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD768u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD774u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD77Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD784u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD798u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD7ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD7B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD7DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD83Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD864u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD868u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD878u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD880u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD888u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD890u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD898u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD8A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD8C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD8D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD8F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD904u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD920u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD92Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD934u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD958u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD980u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD984u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD9A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD9D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD9F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA00u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA08u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA18u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA2Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA40u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA4Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA64u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA74u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA80u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA98u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDAACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDAB8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDAD0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDADCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDAE0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDAE4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDAE8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB00u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB08u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB10u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB24u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB2Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB34u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB3Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB54u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB68u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB74u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB88u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDBC0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDBD4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC50u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC80u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC88u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDCA0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDCACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD0Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD64u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD6Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDDA4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDDB0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDDB4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDDC0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDDCCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDE08u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDE1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDEBCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDEECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDEF4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF0Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF2Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF38u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF40u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF90u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF9Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDFD8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDFF0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE008u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE010u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE028u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE040u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE04Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE050u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE088u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE0F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE100u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE104u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE124u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE12Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE134u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE13Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE14Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE150u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE170u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE204u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE22Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE238u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE240u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE248u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE254u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE25Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE264u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE284u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE28Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE294u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE29Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE2ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE2BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE2C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE32Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE338u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE340u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE34Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE35Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE36Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE378u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE37Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE3ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE3D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE3DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE3E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE3F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE3F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE41Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE444u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE44Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE450u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE480u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE488u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE4B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE4C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE4C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE4F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE504u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE514u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE51Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE52Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE53Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE544u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE57Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE584u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE5B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE5C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE5D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE5D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE5E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE628u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE68Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE694u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE6A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE710u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE740u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE768u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE770u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE778u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE7A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE7D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE7D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE7E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE81Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE824u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE84Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE854u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE85Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE864u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE8ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE8D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE8ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE8F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE8FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE90Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE91Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE92Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE944u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE960u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE974u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE97Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE9A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE9C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE9D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE9D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE9DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE9ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE9F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEA0Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEA1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEA38u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEA48u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEA58u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEAD4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB04u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB0Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB4Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB54u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB64u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB6Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB98u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEBA0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEBA8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEBB0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEBC8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEBD4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEC00u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEC04u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEC28u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEC50u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEC78u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DECA0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DECB0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DECC8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DECD0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DECE8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DECF0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DED00u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DED18u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DED20u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DED38u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DED40u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DED98u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEE5Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEE94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF20u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF30u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF3Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF44u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF50u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF5Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF70u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF78u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF80u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF88u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF90u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF98u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEFACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEFDCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEFE4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEFECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEFF4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF000u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF008u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF010u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF018u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF034u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF044u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF050u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF058u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF060u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF068u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF06Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF09Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF0A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF0B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF0B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF0C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF0D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF0E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF0ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF0F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF0FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF10Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF124u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF12Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF134u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF140u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF150u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF158u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF16Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF174u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF17Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF184u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF18Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF194u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF19Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF1A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF1ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF1B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF1BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF1D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF1D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF1E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF1F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF1F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF200u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF20Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF214u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF21Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF224u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF230u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF23Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF244u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF250u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF258u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF264u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF280u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF298u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF2C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF2E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF304u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF308u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF30Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF314u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF31Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF324u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF32Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF334u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF33Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF344u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF34Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF354u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF364u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF378u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF380u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF38Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF39Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF3A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF3A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF3B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF3C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF3D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF3E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF3F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF410u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF418u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF41Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF428u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF430u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF444u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF44Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF450u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF454u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF45Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF468u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF480u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF494u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF504u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF50Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF518u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF520u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF528u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF530u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF538u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF540u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF548u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF550u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF558u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF55Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF564u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF578u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF584u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF58Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF594u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF59Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF600u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF608u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF614u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF62Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF638u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF648u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF65Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF664u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF670u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF67Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF684u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF688u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF698u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF708u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF710u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF718u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF720u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF728u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF730u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF738u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF740u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF748u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF74Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF754u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF768u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF770u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF778u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF780u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF788u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF794u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF798u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF804u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF80Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF814u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF820u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF82Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF834u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF83Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF844u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF84Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF854u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF85Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF864u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF86Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF870u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF878u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF884u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF89Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF8B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF8C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF8CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF8D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF8E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF8FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF900u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF908u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF914u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF92Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF930u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF938u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF944u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF95Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF960u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF968u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF974u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF98Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF990u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF998u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF9ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF9B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF9BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF9D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF9E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF9E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF9F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF9F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA00u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA0Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA34u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA3Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA4Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA60u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA6Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA80u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA8Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAA0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAC0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFACCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAE0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAF4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAF8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB0Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB18u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB20u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB28u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB30u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB38u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB40u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB48u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB50u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB58u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB60u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB68u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB6Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB74u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB7Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBA4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBB4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBBCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBC4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBCCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBD4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBE0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBE8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBF4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC00u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC04u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC0Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC14u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC28u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC30u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC38u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC40u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC48u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC4Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC54u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC64u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC6Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC70u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC78u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC90u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC9Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFCA4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFCACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFCB8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFCC0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFCC8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFCD0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFCD8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFCDCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFCE4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFCF4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFCFCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD00u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD08u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD10u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD44u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD8Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDA4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDB0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDB4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDC4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDC8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDD0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDD8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDF8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE00u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE08u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE10u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE18u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE20u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE28u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE30u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE38u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE40u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE48u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE4Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE54u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE70u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE7Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE8Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE9Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFEA4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFED4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFEE8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFEF8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF08u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF18u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF20u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF28u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF58u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF60u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF68u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF74u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF7Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF90u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFB0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFC4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFD4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFDCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFE4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFF4u, &recomp_unit_0054, "recomp_unit_0054");
}
} // namespace psprecomp
