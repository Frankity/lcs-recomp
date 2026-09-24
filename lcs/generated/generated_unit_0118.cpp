#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0118[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 0, 7, 0, 8, 0, 0, 9, 0, 0,
    0, 10, 0, 11, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 16, 0, 17, 18, 0, 0, 0,
    0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 23, 0, 0, 0,
    0, 24, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 0, 28, 0, 29, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 34, 0, 35, 36, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 53, 0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59,
    0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 63, 0, 0, 0, 0, 0,
    0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 69, 0, 70, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 74, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 78,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 81, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 86, 0, 0, 87, 0, 88, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93,
    0, 0, 0, 0, 0, 0, 94, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 102, 0, 103, 0, 104, 0, 0, 0, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 0, 108, 109, 0, 110, 0, 0, 0, 0, 111,
    0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 118,
    0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 139, 140, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146,
    0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0,
    0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 157, 0, 158, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 171, 0, 172, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0,
    0, 175, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0,
    181, 0, 0, 0, 182, 0, 183, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 201, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0,
    0, 207, 0, 0, 0, 208, 0, 209, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 214,
    0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 223, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 228, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231,
    0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 236, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239,
    0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 242, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 247, 0, 0, 0,
    0, 0, 0, 248, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 254, 0, 0, 0, 255,
    0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262,
    0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0,
    0, 0, 268, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 273, 0, 274, 0, 275, 276, 0, 0, 0, 0, 0, 0,
    0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 282, 0, 283, 0, 0, 0, 0, 0,
    0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 287, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 293, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0,
    0, 0, 0, 0, 297, 0, 0, 298, 299, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 307, 0, 308, 309, 0, 0, 0, 0,
    0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 313, 0, 314, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0,
    0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326,
    0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 330, 331, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0,
    335, 0, 336, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 341, 0, 342, 343, 0, 0,
    0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0,
    0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 353, 0, 354, 355, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 363, 0, 364, 365,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0,
    371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0,
    0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 380, 0, 381, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0,
    0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0,
    0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 394, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 402, 0, 403, 0, 0, 404, 0, 405, 406, 0,
    0, 0, 0, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 412, 0, 413,
    0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0,
    418, 0, 0, 0, 419, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 426, 427, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 429, 0, 0, 0, 0, 0,
    0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 433, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0,
    0, 0, 0, 437, 0, 438, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0,
    0, 0, 0, 0, 444, 445, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 450, 451, 0, 0,
    0, 0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 457, 0, 458, 0,
    0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 461, 0, 462, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 466,
    0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 470, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0,
    0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 479, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0,
    483, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 488, 489, 0, 0, 0, 490, 0,
    491, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 496, 0, 0, 0, 0, 0, 0, 497, 0,
    0, 0, 0, 0, 0, 0, 498, 0, 0, 499, 500, 0, 0, 0, 501, 0, 502, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 505,
    0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0,
    0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 519, 0, 520,
    0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 0, 0, 527,
    0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 532, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0,
    535, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 538, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 541, 0, 0, 542, 0, 0,
    543, 0, 544, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 549, 0,
    0, 550, 0, 551, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 556, 0,
    0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 559, 0, 0, 0, 560, 0, 0, 561, 0, 562, 0, 0, 563, 0, 564, 0, 0, 0, 0, 0, 565,
    0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 568, 569, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 0,
    0, 0, 573, 0, 0, 0, 0, 0, 0, 574, 575, 0, 576, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 583, 0, 584, 0, 0,
    0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 587, 0, 588, 0, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 591, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 596, 0, 0,
    0, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 600, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 602, 0, 603, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 607, 0, 0,
    0, 608, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 611, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 617, 0, 618, 0, 0, 0, 619, 0, 620, 0, 0, 0, 621, 0, 622, 0, 0, 0, 623, 0, 624, 0, 0, 0, 625, 0, 626, 0, 0, 0, 0,
    0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 629, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 631,
    0, 0, 0, 0, 0, 632, 0, 0, 633, 0, 0, 634, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 637, 0, 638, 0, 0, 0, 0,
    0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 641, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 644, 0, 645, 0, 0,
    0, 0, 646, 0, 0, 647, 0, 648, 0, 0, 0, 649, 0, 650, 0, 0, 651, 0, 652, 0, 653, 0, 654, 0, 0, 655, 0, 656, 0, 0, 0, 657,
    0, 658, 0, 0, 0, 659, 0, 660, 0, 0, 661, 0, 662, 0, 663, 0, 664, 0, 0, 0, 0, 0, 665, 0, 0, 0, 666, 0, 667, 0, 0, 0,
    0, 0, 668, 0, 0, 0, 669, 0, 670, 0, 671, 0, 672, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674,
    0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 678, 0, 0, 0, 679, 0, 680, 0, 0, 0, 0, 0, 0,
    681, 0, 0, 0, 682, 0, 0, 683, 0, 0, 684, 0, 685, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 688, 0, 0,
    0, 689, 0, 690, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 694,
    0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 698, 699, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 700, 0, 0, 0, 0, 0, 701, 0, 702, 0, 0, 0, 0, 0, 0, 0, 703, 0, 704, 0, 0, 0, 0, 0, 705, 0, 0, 0, 706, 0,
    0, 0, 707, 0, 0, 708, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 715,
    0, 716, 0, 0, 0, 717, 0, 718, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 721, 0,
    0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 724, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 728, 0, 729, 0, 0, 0,
    0, 0, 730, 0, 731, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 734, 0, 0,
    0, 0, 0, 735, 0, 0, 0, 736, 0, 0, 0, 737, 0, 738, 739, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 741, 0, 0, 0, 0, 0, 0,
    742, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 744, 745, 0, 746, 0, 0, 0, 0, 0, 747, 0, 0, 0, 748, 0, 749, 0, 0, 750, 0,
    0, 0, 0, 0, 751, 0, 752, 0, 0, 0, 0, 0, 753, 0, 0, 0, 754, 0, 755, 0, 0, 756, 0, 0, 0, 0, 0, 757, 0, 758, 0, 0,
    0, 0, 0, 759, 0, 0, 0, 760, 0, 761, 0, 0, 762, 0, 0, 0, 0, 0, 763, 0, 764, 0, 0, 0, 0, 0, 765, 0, 0, 0, 766, 0,
    0, 0, 0, 767, 0, 768, 0, 0, 0, 0, 0, 769, 0, 0, 0, 770, 0, 0, 0, 0, 771, 0, 772, 0, 0, 0, 0, 0, 773, 0, 0, 0,
    774, 0, 0, 0, 0, 775, 0, 776, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 778, 0, 0, 0, 0, 779, 0, 0, 0, 780, 0, 781, 0, 782,
    0, 783, 0, 784, 0, 0, 0, 0, 0, 785, 0, 0, 786, 0, 787, 0, 0, 0, 0, 0, 788, 0, 0, 0, 789, 0, 790, 0, 0, 0, 0, 0,
    791, 0, 0, 0, 792, 0, 793, 0, 0, 0, 0, 0, 794, 0, 0, 0, 795, 0, 796, 0, 0, 0, 0, 0, 797, 0, 0, 0, 798, 0, 799, 0,
    0, 0, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 0, 0, 802, 0, 0, 803, 0, 0, 804, 0, 0, 0, 0, 805, 806, 0, 807, 0, 0, 0,
    0, 0, 808, 0, 0, 0, 0, 809, 0, 0, 810, 0, 0, 811, 0, 0, 0, 812, 813, 0, 814, 0, 0, 815, 0, 0, 816, 0, 0, 0, 0, 817,
    818, 819, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 821, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0, 0, 824, 0, 0, 825,
};
void recomp_unit_0118_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089DC000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0118[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089DC000;
    case 2u: goto L_089DC014;
    case 3u: goto L_089DC07C;
    case 4u: goto L_089DC0B8;
    case 5u: goto L_089DC0C0;
    case 6u: goto L_089DC0CC;
    case 7u: goto L_089DC0E0;
    case 8u: goto L_089DC0E8;
    case 9u: goto L_089DC0F4;
    case 10u: goto L_089DC104;
    case 11u: goto L_089DC10C;
    case 12u: goto L_089DC110;
    case 13u: goto L_089DC128;
    case 14u: goto L_089DC148;
    case 15u: goto L_089DC154;
    case 16u: goto L_089DC164;
    case 17u: goto L_089DC16C;
    case 18u: goto L_089DC170;
    case 19u: goto L_089DC188;
    case 20u: goto L_089DC1A0;
    case 21u: goto L_089DC1DC;
    case 22u: goto L_089DC1E4;
    case 23u: goto L_089DC1F0;
    case 24u: goto L_089DC204;
    case 25u: goto L_089DC20C;
    case 26u: goto L_089DC218;
    case 27u: goto L_089DC224;
    case 28u: goto L_089DC234;
    case 29u: goto L_089DC23C;
    case 30u: goto L_089DC240;
    case 31u: goto L_089DC258;
    case 32u: goto L_089DC2CC;
    case 33u: goto L_089DC2D8;
    case 34u: goto L_089DC2EC;
    case 35u: goto L_089DC2F4;
    case 36u: goto L_089DC2F8;
    case 37u: goto L_089DC328;
    case 38u: goto L_089DC33C;
    case 39u: goto L_089DC37C;
    case 40u: goto L_089DC3A4;
    case 41u: goto L_089DC3AC;
    case 42u: goto L_089DC3C8;
    case 43u: goto L_089DC450;
    case 44u: goto L_089DC47C;
    case 45u: goto L_089DC490;
    case 46u: goto L_089DC4D0;
    case 47u: goto L_089DC51C;
    case 48u: goto L_089DC528;
    case 49u: goto L_089DC56C;
    case 50u: goto L_089DC59C;
    case 51u: goto L_089DC5A4;
    case 52u: goto L_089DC5CC;
    case 53u: goto L_089DC5D0;
    case 54u: goto L_089DC5DC;
    case 55u: goto L_089DC5E8;
    case 56u: goto L_089DC5F0;
    case 57u: goto L_089DC634;
    case 58u: goto L_089DC6C8;
    case 59u: goto L_089DC6FC;
    case 60u: goto L_089DC718;
    case 61u: goto L_089DC730;
    case 62u: goto L_089DC764;
    case 63u: goto L_089DC768;
    case 64u: goto L_089DC78C;
    case 65u: goto L_089DC794;
    case 66u: goto L_089DC7B0;
    case 67u: goto L_089DC7C4;
    case 68u: goto L_089DC7E0;
    case 69u: goto L_089DC7E4;
    case 70u: goto L_089DC7EC;
    case 71u: goto L_089DC808;
    case 72u: goto L_089DC818;
    case 73u: goto L_089DC828;
    case 74u: goto L_089DC830;
    case 75u: goto L_089DC834;
    case 76u: goto L_089DC858;
    case 77u: goto L_089DC860;
    case 78u: goto L_089DC87C;
    case 79u: goto L_089DC890;
    case 80u: goto L_089DC8AC;
    case 81u: goto L_089DC8B0;
    case 82u: goto L_089DC8B8;
    case 83u: goto L_089DC8D0;
    case 84u: goto L_089DC8E0;
    case 85u: goto L_089DC8F0;
    case 86u: goto L_089DC908;
    case 87u: goto L_089DC914;
    case 88u: goto L_089DC91C;
    case 89u: goto L_089DC920;
    case 90u: goto L_089DC944;
    case 91u: goto L_089DC94C;
    case 92u: goto L_089DC968;
    case 93u: goto L_089DC97C;
    case 94u: goto L_089DC998;
    case 95u: goto L_089DC99C;
    case 96u: goto L_089DC9A4;
    case 97u: goto L_089DC9C4;
    case 98u: goto L_089DCA20;
    case 99u: goto L_089DCA34;
    case 100u: goto L_089DCA3C;
    case 101u: goto L_089DCA58;
    case 102u: goto L_089DCA8C;
    case 103u: goto L_089DCA94;
    case 104u: goto L_089DCA9C;
    case 105u: goto L_089DCAB4;
    case 106u: goto L_089DCABC;
    case 107u: goto L_089DCAC4;
    case 108u: goto L_089DCADC;
    case 109u: goto L_089DCAE0;
    case 110u: goto L_089DCAE8;
    case 111u: goto L_089DCAFC;
    case 112u: goto L_089DCB20;
    case 113u: goto L_089DCB2C;
    case 114u: goto L_089DCB44;
    case 115u: goto L_089DCB4C;
    case 116u: goto L_089DCB64;
    case 117u: goto L_089DCB6C;
    case 118u: goto L_089DCB7C;
    case 119u: goto L_089DCB94;
    case 120u: goto L_089DCB9C;
    case 121u: goto L_089DCBB0;
    case 122u: goto L_089DCBD4;
    case 123u: goto L_089DCC00;
    case 124u: goto L_089DCC08;
    case 125u: goto L_089DCC18;
    case 126u: goto L_089DCC30;
    case 127u: goto L_089DCC38;
    case 128u: goto L_089DCC58;
    case 129u: goto L_089DCC80;
    case 130u: goto L_089DCC94;
    case 131u: goto L_089DCCDC;
    case 132u: goto L_089DCCEC;
    case 133u: goto L_089DCD00;
    case 134u: goto L_089DCD24;
    case 135u: goto L_089DCD3C;
    case 136u: goto L_089DCD54;
    case 137u: goto L_089DCD5C;
    case 138u: goto L_089DCD6C;
    case 139u: goto L_089DCD74;
    case 140u: goto L_089DCD78;
    case 141u: goto L_089DCDB0;
    case 142u: goto L_089DCDC0;
    case 143u: goto L_089DCDCC;
    case 144u: goto L_089DCDD4;
    case 145u: goto L_089DCDEC;
    case 146u: goto L_089DCDFC;
    case 147u: goto L_089DCE20;
    case 148u: goto L_089DCE34;
    case 149u: goto L_089DCE44;
    case 150u: goto L_089DCE50;
    case 151u: goto L_089DCE5C;
    case 152u: goto L_089DCE68;
    case 153u: goto L_089DCE84;
    case 154u: goto L_089DCE94;
    case 155u: goto L_089DCEA4;
    case 156u: goto L_089DCEB4;
    case 157u: goto L_089DCEBC;
    case 158u: goto L_089DCEC4;
    case 159u: goto L_089DCEC8;
    case 160u: goto L_089DCEEC;
    case 161u: goto L_089DCEF4;
    case 162u: goto L_089DCF10;
    case 163u: goto L_089DCF24;
    case 164u: goto L_089DCF40;
    case 165u: goto L_089DCF44;
    case 166u: goto L_089DCF4C;
    case 167u: goto L_089DCF70;
    case 168u: goto L_089DCF84;
    case 169u: goto L_089DCFAC;
    case 170u: goto L_089DCFB4;
    case 171u: goto L_089DCFC4;
    case 172u: goto L_089DCFCC;
    case 173u: goto L_089DCFD0;
    case 174u: goto L_089DCFF4;
    case 175u: goto L_089DD004;
    case 176u: goto L_089DD010;
    case 177u: goto L_089DD018;
    case 178u: goto L_089DD03C;
    case 179u: goto L_089DD050;
    case 180u: goto L_089DD078;
    case 181u: goto L_089DD080;
    case 182u: goto L_089DD090;
    case 183u: goto L_089DD098;
    case 184u: goto L_089DD09C;
    case 185u: goto L_089DD0C0;
    case 186u: goto L_089DD0D0;
    case 187u: goto L_089DD0DC;
    case 188u: goto L_089DD0E4;
    case 189u: goto L_089DD100;
    case 190u: goto L_089DD12C;
    case 191u: goto L_089DD134;
    case 192u: goto L_089DD14C;
    case 193u: goto L_089DD15C;
    case 194u: goto L_089DD168;
    case 195u: goto L_089DD198;
    case 196u: goto L_089DD1A0;
    case 197u: goto L_089DD1B8;
    case 198u: goto L_089DD1C8;
    case 199u: goto L_089DD1D4;
    case 200u: goto L_089DD204;
    case 201u: goto L_089DD20C;
    case 202u: goto L_089DD218;
    case 203u: goto L_089DD220;
    case 204u: goto L_089DD240;
    case 205u: goto L_089DD264;
    case 206u: goto L_089DD278;
    case 207u: goto L_089DD284;
    case 208u: goto L_089DD294;
    case 209u: goto L_089DD29C;
    case 210u: goto L_089DD2A0;
    case 211u: goto L_089DD358;
    case 212u: goto L_089DD368;
    case 213u: goto L_089DD374;
    case 214u: goto L_089DD37C;
    case 215u: goto L_089DD394;
    case 216u: goto L_089DD3A8;
    case 217u: goto L_089DD3C4;
    case 218u: goto L_089DD408;
    case 219u: goto L_089DD410;
    case 220u: goto L_089DD42C;
    case 221u: goto L_089DD44C;
    case 222u: goto L_089DD458;
    case 223u: goto L_089DD45C;
    case 224u: goto L_089DD490;
    case 225u: goto L_089DD498;
    case 226u: goto L_089DD4B0;
    case 227u: goto L_089DD4C0;
    case 228u: goto L_089DD4CC;
    case 229u: goto L_089DD4D4;
    case 230u: goto L_089DD4E0;
    case 231u: goto L_089DD4FC;
    case 232u: goto L_089DD510;
    case 233u: goto L_089DD518;
    case 234u: goto L_089DD530;
    case 235u: goto L_089DD540;
    case 236u: goto L_089DD54C;
    case 237u: goto L_089DD554;
    case 238u: goto L_089DD560;
    case 239u: goto L_089DD57C;
    case 240u: goto L_089DD590;
    case 241u: goto L_089DD598;
    case 242u: goto L_089DD5B0;
    case 243u: goto L_089DD5B8;
    case 244u: goto L_089DD5C0;
    case 245u: goto L_089DD5DC;
    case 246u: goto L_089DD5E8;
    case 247u: goto L_089DD5F0;
    case 248u: goto L_089DD60C;
    case 249u: goto L_089DD618;
    case 250u: goto L_089DD620;
    case 251u: goto L_089DD63C;
    case 252u: goto L_089DD65C;
    case 253u: goto L_089DD668;
    case 254u: goto L_089DD66C;
    case 255u: goto L_089DD67C;
    case 256u: goto L_089DD684;
    case 257u: goto L_089DD690;
    case 258u: goto L_089DD6B8;
    case 259u: goto L_089DD6CC;
    case 260u: goto L_089DD6D4;
    case 261u: goto L_089DD6F0;
    case 262u: goto L_089DD6FC;
    case 263u: goto L_089DD704;
    case 264u: goto L_089DD720;
    case 265u: goto L_089DD744;
    case 266u: goto L_089DD74C;
    case 267u: goto L_089DD764;
    case 268u: goto L_089DD788;
    case 269u: goto L_089DD790;
    case 270u: goto L_089DD79C;
    case 271u: goto L_089DD7BC;
    case 272u: goto L_089DD7C4;
    case 273u: goto L_089DD7D0;
    case 274u: goto L_089DD7D8;
    case 275u: goto L_089DD7E0;
    case 276u: goto L_089DD7E4;
    case 277u: goto L_089DD808;
    case 278u: goto L_089DD810;
    case 279u: goto L_089DD82C;
    case 280u: goto L_089DD840;
    case 281u: goto L_089DD85C;
    case 282u: goto L_089DD860;
    case 283u: goto L_089DD868;
    case 284u: goto L_089DD884;
    case 285u: goto L_089DD8A8;
    case 286u: goto L_089DD8B4;
    case 287u: goto L_089DD8B8;
    case 288u: goto L_089DD8D4;
    case 289u: goto L_089DD8DC;
    case 290u: goto L_089DD8F8;
    case 291u: goto L_089DD91C;
    case 292u: goto L_089DD928;
    case 293u: goto L_089DD92C;
    case 294u: goto L_089DD948;
    case 295u: goto L_089DD950;
    case 296u: goto L_089DD96C;
    case 297u: goto L_089DD990;
    case 298u: goto L_089DD99C;
    case 299u: goto L_089DD9A0;
    case 300u: goto L_089DD9BC;
    case 301u: goto L_089DD9C4;
    case 302u: goto L_089DD9DC;
    case 303u: goto L_089DDA10;
    case 304u: goto L_089DDA20;
    case 305u: goto L_089DDA44;
    case 306u: goto L_089DDA58;
    case 307u: goto L_089DDA60;
    case 308u: goto L_089DDA68;
    case 309u: goto L_089DDA6C;
    case 310u: goto L_089DDA90;
    case 311u: goto L_089DDAB0;
    case 312u: goto L_089DDAC4;
    case 313u: goto L_089DDACC;
    case 314u: goto L_089DDAD4;
    case 315u: goto L_089DDAD8;
    case 316u: goto L_089DDAF4;
    case 317u: goto L_089DDB08;
    case 318u: goto L_089DDB14;
    case 319u: goto L_089DDB2C;
    case 320u: goto L_089DDB38;
    case 321u: goto L_089DDB54;
    case 322u: goto L_089DDB5C;
    case 323u: goto L_089DDB74;
    case 324u: goto L_089DDBA8;
    case 325u: goto L_089DDBF4;
    case 326u: goto L_089DDBFC;
    case 327u: goto L_089DDC14;
    case 328u: goto L_089DDC24;
    case 329u: goto L_089DDC34;
    case 330u: goto L_089DDC3C;
    case 331u: goto L_089DDC40;
    case 332u: goto L_089DDC48;
    case 333u: goto L_089DDC64;
    case 334u: goto L_089DDC78;
    case 335u: goto L_089DDC80;
    case 336u: goto L_089DDC88;
    case 337u: goto L_089DDC8C;
    case 338u: goto L_089DDCB0;
    case 339u: goto L_089DDCCC;
    case 340u: goto L_089DDCE0;
    case 341u: goto L_089DDCE8;
    case 342u: goto L_089DDCF0;
    case 343u: goto L_089DDCF4;
    case 344u: goto L_089DDD10;
    case 345u: goto L_089DDD24;
    case 346u: goto L_089DDD30;
    case 347u: goto L_089DDD48;
    case 348u: goto L_089DDD54;
    case 349u: goto L_089DDD70;
    case 350u: goto L_089DDD78;
    case 351u: goto L_089DDD90;
    case 352u: goto L_089DDDA0;
    case 353u: goto L_089DDDB0;
    case 354u: goto L_089DDDB8;
    case 355u: goto L_089DDDBC;
    case 356u: goto L_089DDDC4;
    case 357u: goto L_089DDE08;
    case 358u: goto L_089DDE10;
    case 359u: goto L_089DDE28;
    case 360u: goto L_089DDE38;
    case 361u: goto L_089DDE54;
    case 362u: goto L_089DDE68;
    case 363u: goto L_089DDE70;
    case 364u: goto L_089DDE78;
    case 365u: goto L_089DDE7C;
    case 366u: goto L_089DDEAC;
    case 367u: goto L_089DDEB8;
    case 368u: goto L_089DDED0;
    case 369u: goto L_089DDEDC;
    case 370u: goto L_089DDEF8;
    case 371u: goto L_089DDF00;
    case 372u: goto L_089DDF1C;
    case 373u: goto L_089DDF2C;
    case 374u: goto L_089DDF54;
    case 375u: goto L_089DDF5C;
    case 376u: goto L_089DDF74;
    case 377u: goto L_089DDF84;
    case 378u: goto L_089DDFA0;
    case 379u: goto L_089DDFB4;
    case 380u: goto L_089DDFBC;
    case 381u: goto L_089DDFC4;
    case 382u: goto L_089DDFC8;
    case 383u: goto L_089DDFF8;
    case 384u: goto L_089DE004;
    case 385u: goto L_089DE01C;
    case 386u: goto L_089DE028;
    case 387u: goto L_089DE044;
    case 388u: goto L_089DE04C;
    case 389u: goto L_089DE068;
    case 390u: goto L_089DE078;
    case 391u: goto L_089DE084;
    case 392u: goto L_089DE0AC;
    case 393u: goto L_089DE0B4;
    case 394u: goto L_089DE0BC;
    case 395u: goto L_089DE0C4;
    case 396u: goto L_089DE0CC;
    case 397u: goto L_089DE0E8;
    case 398u: goto L_089DE11C;
    case 399u: goto L_089DE130;
    case 400u: goto L_089DE140;
    case 401u: goto L_089DE150;
    case 402u: goto L_089DE158;
    case 403u: goto L_089DE160;
    case 404u: goto L_089DE16C;
    case 405u: goto L_089DE174;
    case 406u: goto L_089DE178;
    case 407u: goto L_089DE19C;
    case 408u: goto L_089DE1A4;
    case 409u: goto L_089DE1C0;
    case 410u: goto L_089DE1D4;
    case 411u: goto L_089DE1F0;
    case 412u: goto L_089DE1F4;
    case 413u: goto L_089DE1FC;
    case 414u: goto L_089DE218;
    case 415u: goto L_089DE24C;
    case 416u: goto L_089DE254;
    case 417u: goto L_089DE270;
    case 418u: goto L_089DE280;
    case 419u: goto L_089DE290;
    case 420u: goto L_089DE298;
    case 421u: goto L_089DE2A8;
    case 422u: goto L_089DE2C4;
    case 423u: goto L_089DE2CC;
    case 424u: goto L_089DE2E8;
    case 425u: goto L_089DE330;
    case 426u: goto L_089DE338;
    case 427u: goto L_089DE33C;
    case 428u: goto L_089DE360;
    case 429u: goto L_089DE368;
    case 430u: goto L_089DE384;
    case 431u: goto L_089DE398;
    case 432u: goto L_089DE3B4;
    case 433u: goto L_089DE3B8;
    case 434u: goto L_089DE3C0;
    case 435u: goto L_089DE3DC;
    case 436u: goto L_089DE3EC;
    case 437u: goto L_089DE40C;
    case 438u: goto L_089DE414;
    case 439u: goto L_089DE418;
    case 440u: goto L_089DE43C;
    case 441u: goto L_089DE444;
    case 442u: goto L_089DE460;
    case 443u: goto L_089DE474;
    case 444u: goto L_089DE490;
    case 445u: goto L_089DE494;
    case 446u: goto L_089DE49C;
    case 447u: goto L_089DE4B8;
    case 448u: goto L_089DE4C8;
    case 449u: goto L_089DE4E8;
    case 450u: goto L_089DE4F0;
    case 451u: goto L_089DE4F4;
    case 452u: goto L_089DE518;
    case 453u: goto L_089DE520;
    case 454u: goto L_089DE53C;
    case 455u: goto L_089DE550;
    case 456u: goto L_089DE56C;
    case 457u: goto L_089DE570;
    case 458u: goto L_089DE578;
    case 459u: goto L_089DE590;
    case 460u: goto L_089DE5A0;
    case 461u: goto L_089DE5AC;
    case 462u: goto L_089DE5B4;
    case 463u: goto L_089DE5C0;
    case 464u: goto L_089DE5D8;
    case 465u: goto L_089DE5E8;
    case 466u: goto L_089DE5FC;
    case 467u: goto L_089DE604;
    case 468u: goto L_089DE61C;
    case 469u: goto L_089DE62C;
    case 470u: goto L_089DE638;
    case 471u: goto L_089DE640;
    case 472u: goto L_089DE64C;
    case 473u: goto L_089DE664;
    case 474u: goto L_089DE674;
    case 475u: goto L_089DE688;
    case 476u: goto L_089DE690;
    case 477u: goto L_089DE6A8;
    case 478u: goto L_089DE6B8;
    case 479u: goto L_089DE6C4;
    case 480u: goto L_089DE6CC;
    case 481u: goto L_089DE6D8;
    case 482u: goto L_089DE6F0;
    case 483u: goto L_089DE700;
    case 484u: goto L_089DE714;
    case 485u: goto L_089DE71C;
    case 486u: goto L_089DE738;
    case 487u: goto L_089DE758;
    case 488u: goto L_089DE764;
    case 489u: goto L_089DE768;
    case 490u: goto L_089DE778;
    case 491u: goto L_089DE780;
    case 492u: goto L_089DE78C;
    case 493u: goto L_089DE7AC;
    case 494u: goto L_089DE7BC;
    case 495u: goto L_089DE7D4;
    case 496u: goto L_089DE7DC;
    case 497u: goto L_089DE7F8;
    case 498u: goto L_089DE818;
    case 499u: goto L_089DE824;
    case 500u: goto L_089DE828;
    case 501u: goto L_089DE838;
    case 502u: goto L_089DE840;
    case 503u: goto L_089DE84C;
    case 504u: goto L_089DE86C;
    case 505u: goto L_089DE87C;
    case 506u: goto L_089DE894;
    case 507u: goto L_089DE89C;
    case 508u: goto L_089DE8B8;
    case 509u: goto L_089DE8C4;
    case 510u: goto L_089DE8CC;
    case 511u: goto L_089DE8E8;
    case 512u: goto L_089DE8F8;
    case 513u: goto L_089DE90C;
    case 514u: goto L_089DE914;
    case 515u: goto L_089DE92C;
    case 516u: goto L_089DE940;
    case 517u: goto L_089DE948;
    case 518u: goto L_089DE960;
    case 519u: goto L_089DE974;
    case 520u: goto L_089DE97C;
    case 521u: goto L_089DE994;
    case 522u: goto L_089DE9A8;
    case 523u: goto L_089DE9B0;
    case 524u: goto L_089DE9C8;
    case 525u: goto L_089DE9DC;
    case 526u: goto L_089DE9E4;
    case 527u: goto L_089DE9FC;
    case 528u: goto L_089DEA10;
    case 529u: goto L_089DEA18;
    case 530u: goto L_089DEA30;
    case 531u: goto L_089DEA44;
    case 532u: goto L_089DEA4C;
    case 533u: goto L_089DEA64;
    case 534u: goto L_089DEA78;
    case 535u: goto L_089DEA80;
    case 536u: goto L_089DEA98;
    case 537u: goto L_089DEAAC;
    case 538u: goto L_089DEAB4;
    case 539u: goto L_089DEACC;
    case 540u: goto L_089DEAE0;
    case 541u: goto L_089DEAE8;
    case 542u: goto L_089DEAF4;
    case 543u: goto L_089DEB00;
    case 544u: goto L_089DEB08;
    case 545u: goto L_089DEB10;
    case 546u: goto L_089DEB4C;
    case 547u: goto L_089DEB54;
    case 548u: goto L_089DEB6C;
    case 549u: goto L_089DEB78;
    case 550u: goto L_089DEB84;
    case 551u: goto L_089DEB8C;
    case 552u: goto L_089DEB94;
    case 553u: goto L_089DEBC8;
    case 554u: goto L_089DEBDC;
    case 555u: goto L_089DEBF0;
    case 556u: goto L_089DEBF8;
    case 557u: goto L_089DEC10;
    case 558u: goto L_089DEC20;
    case 559u: goto L_089DEC2C;
    case 560u: goto L_089DEC3C;
    case 561u: goto L_089DEC48;
    case 562u: goto L_089DEC50;
    case 563u: goto L_089DEC5C;
    case 564u: goto L_089DEC64;
    case 565u: goto L_089DEC7C;
    case 566u: goto L_089DEC8C;
    case 567u: goto L_089DECA0;
    case 568u: goto L_089DECA8;
    case 569u: goto L_089DECAC;
    case 570u: goto L_089DECD0;
    case 571u: goto L_089DECD8;
    case 572u: goto L_089DECF4;
    case 573u: goto L_089DED08;
    case 574u: goto L_089DED24;
    case 575u: goto L_089DED28;
    case 576u: goto L_089DED30;
    case 577u: goto L_089DED34;
    case 578u: goto L_089DED5C;
    case 579u: goto L_089DED98;
    case 580u: goto L_089DEDB4;
    case 581u: goto L_089DEDCC;
    case 582u: goto L_089DEDDC;
    case 583u: goto L_089DEDEC;
    case 584u: goto L_089DEDF4;
    case 585u: goto L_089DEE0C;
    case 586u: goto L_089DEE1C;
    case 587u: goto L_089DEE2C;
    case 588u: goto L_089DEE34;
    case 589u: goto L_089DEE4C;
    case 590u: goto L_089DEE5C;
    case 591u: goto L_089DEE8C;
    case 592u: goto L_089DEE94;
    case 593u: goto L_089DEEAC;
    case 594u: goto L_089DEEBC;
    case 595u: goto L_089DEEEC;
    case 596u: goto L_089DEEF4;
    case 597u: goto L_089DEF10;
    case 598u: goto L_089DEF20;
    case 599u: goto L_089DEF44;
    case 600u: goto L_089DEF50;
    case 601u: goto L_089DEF54;
    case 602u: goto L_089DEF94;
    case 603u: goto L_089DEF9C;
    case 604u: goto L_089DEFB8;
    case 605u: goto L_089DEFC8;
    case 606u: goto L_089DEFE8;
    case 607u: goto L_089DEFF4;
    case 608u: goto L_089DF004;
    case 609u: goto L_089DF014;
    case 610u: goto L_089DF03C;
    case 611u: goto L_089DF054;
    case 612u: goto L_089DF05C;
    case 613u: goto L_089DF0A4;
    case 614u: goto L_089DF0AC;
    case 615u: goto L_089DF0C4;
    case 616u: goto L_089DF0D4;
    case 617u: goto L_089DF104;
    case 618u: goto L_089DF10C;
    case 619u: goto L_089DF11C;
    case 620u: goto L_089DF124;
    case 621u: goto L_089DF134;
    case 622u: goto L_089DF13C;
    case 623u: goto L_089DF14C;
    case 624u: goto L_089DF154;
    case 625u: goto L_089DF164;
    case 626u: goto L_089DF16C;
    case 627u: goto L_089DF188;
    case 628u: goto L_089DF1C4;
    case 629u: goto L_089DF1D0;
    case 630u: goto L_089DF1EC;
    case 631u: goto L_089DF1FC;
    case 632u: goto L_089DF214;
    case 633u: goto L_089DF220;
    case 634u: goto L_089DF22C;
    case 635u: goto L_089DF238;
    case 636u: goto L_089DF258;
    case 637u: goto L_089DF264;
    case 638u: goto L_089DF26C;
    case 639u: goto L_089DF284;
    case 640u: goto L_089DF2AC;
    case 641u: goto L_089DF2B4;
    case 642u: goto L_089DF2BC;
    case 643u: goto L_089DF2D4;
    case 644u: goto L_089DF2EC;
    case 645u: goto L_089DF2F4;
    case 646u: goto L_089DF308;
    case 647u: goto L_089DF314;
    case 648u: goto L_089DF31C;
    case 649u: goto L_089DF32C;
    case 650u: goto L_089DF334;
    case 651u: goto L_089DF340;
    case 652u: goto L_089DF348;
    case 653u: goto L_089DF350;
    case 654u: goto L_089DF358;
    case 655u: goto L_089DF364;
    case 656u: goto L_089DF36C;
    case 657u: goto L_089DF37C;
    case 658u: goto L_089DF384;
    case 659u: goto L_089DF394;
    case 660u: goto L_089DF39C;
    case 661u: goto L_089DF3A8;
    case 662u: goto L_089DF3B0;
    case 663u: goto L_089DF3B8;
    case 664u: goto L_089DF3C0;
    case 665u: goto L_089DF3D8;
    case 666u: goto L_089DF3E8;
    case 667u: goto L_089DF3F0;
    case 668u: goto L_089DF408;
    case 669u: goto L_089DF418;
    case 670u: goto L_089DF420;
    case 671u: goto L_089DF428;
    case 672u: goto L_089DF430;
    case 673u: goto L_089DF44C;
    case 674u: goto L_089DF47C;
    case 675u: goto L_089DF488;
    case 676u: goto L_089DF498;
    case 677u: goto L_089DF4C4;
    case 678u: goto L_089DF4CC;
    case 679u: goto L_089DF4DC;
    case 680u: goto L_089DF4E4;
    case 681u: goto L_089DF500;
    case 682u: goto L_089DF510;
    case 683u: goto L_089DF51C;
    case 684u: goto L_089DF528;
    case 685u: goto L_089DF530;
    case 686u: goto L_089DF540;
    case 687u: goto L_089DF568;
    case 688u: goto L_089DF574;
    case 689u: goto L_089DF584;
    case 690u: goto L_089DF58C;
    case 691u: goto L_089DF5AC;
    case 692u: goto L_089DF5BC;
    case 693u: goto L_089DF5F4;
    case 694u: goto L_089DF5FC;
    case 695u: goto L_089DF618;
    case 696u: goto L_089DF628;
    case 697u: goto L_089DF64C;
    case 698u: goto L_089DF658;
    case 699u: goto L_089DF65C;
    case 700u: goto L_089DF688;
    case 701u: goto L_089DF6A0;
    case 702u: goto L_089DF6A8;
    case 703u: goto L_089DF6C8;
    case 704u: goto L_089DF6D0;
    case 705u: goto L_089DF6E8;
    case 706u: goto L_089DF6F8;
    case 707u: goto L_089DF708;
    case 708u: goto L_089DF714;
    case 709u: goto L_089DF730;
    case 710u: goto L_089DF744;
    case 711u: goto L_089DF798;
    case 712u: goto L_089DF7B0;
    case 713u: goto L_089DF7C4;
    case 714u: goto L_089DF7EC;
    case 715u: goto L_089DF7FC;
    case 716u: goto L_089DF804;
    case 717u: goto L_089DF814;
    case 718u: goto L_089DF81C;
    case 719u: goto L_089DF834;
    case 720u: goto L_089DF868;
    case 721u: goto L_089DF878;
    case 722u: goto L_089DF898;
    case 723u: goto L_089DF8B0;
    case 724u: goto L_089DF904;
    case 725u: goto L_089DF91C;
    case 726u: goto L_089DF930;
    case 727u: goto L_089DF958;
    case 728u: goto L_089DF968;
    case 729u: goto L_089DF970;
    case 730u: goto L_089DF988;
    case 731u: goto L_089DF990;
    case 732u: goto L_089DF9AC;
    case 733u: goto L_089DF9EC;
    case 734u: goto L_089DF9F4;
    case 735u: goto L_089DFA0C;
    case 736u: goto L_089DFA1C;
    case 737u: goto L_089DFA2C;
    case 738u: goto L_089DFA34;
    case 739u: goto L_089DFA38;
    case 740u: goto L_089DFA5C;
    case 741u: goto L_089DFA64;
    case 742u: goto L_089DFA80;
    case 743u: goto L_089DFA94;
    case 744u: goto L_089DFAB0;
    case 745u: goto L_089DFAB4;
    case 746u: goto L_089DFABC;
    case 747u: goto L_089DFAD4;
    case 748u: goto L_089DFAE4;
    case 749u: goto L_089DFAEC;
    case 750u: goto L_089DFAF8;
    case 751u: goto L_089DFB10;
    case 752u: goto L_089DFB18;
    case 753u: goto L_089DFB30;
    case 754u: goto L_089DFB40;
    case 755u: goto L_089DFB48;
    case 756u: goto L_089DFB54;
    case 757u: goto L_089DFB6C;
    case 758u: goto L_089DFB74;
    case 759u: goto L_089DFB8C;
    case 760u: goto L_089DFB9C;
    case 761u: goto L_089DFBA4;
    case 762u: goto L_089DFBB0;
    case 763u: goto L_089DFBC8;
    case 764u: goto L_089DFBD0;
    case 765u: goto L_089DFBE8;
    case 766u: goto L_089DFBF8;
    case 767u: goto L_089DFC0C;
    case 768u: goto L_089DFC14;
    case 769u: goto L_089DFC2C;
    case 770u: goto L_089DFC3C;
    case 771u: goto L_089DFC50;
    case 772u: goto L_089DFC58;
    case 773u: goto L_089DFC70;
    case 774u: goto L_089DFC80;
    case 775u: goto L_089DFC94;
    case 776u: goto L_089DFC9C;
    case 777u: goto L_089DFCB8;
    case 778u: goto L_089DFCC8;
    case 779u: goto L_089DFCDC;
    case 780u: goto L_089DFCEC;
    case 781u: goto L_089DFCF4;
    case 782u: goto L_089DFCFC;
    case 783u: goto L_089DFD04;
    case 784u: goto L_089DFD0C;
    case 785u: goto L_089DFD24;
    case 786u: goto L_089DFD30;
    case 787u: goto L_089DFD38;
    case 788u: goto L_089DFD50;
    case 789u: goto L_089DFD60;
    case 790u: goto L_089DFD68;
    case 791u: goto L_089DFD80;
    case 792u: goto L_089DFD90;
    case 793u: goto L_089DFD98;
    case 794u: goto L_089DFDB0;
    case 795u: goto L_089DFDC0;
    case 796u: goto L_089DFDC8;
    case 797u: goto L_089DFDE0;
    case 798u: goto L_089DFDF0;
    case 799u: goto L_089DFDF8;
    case 800u: goto L_089DFE10;
    case 801u: goto L_089DFE20;
    case 802u: goto L_089DFE38;
    case 803u: goto L_089DFE44;
    case 804u: goto L_089DFE50;
    case 805u: goto L_089DFE64;
    case 806u: goto L_089DFE68;
    case 807u: goto L_089DFE70;
    case 808u: goto L_089DFE88;
    case 809u: goto L_089DFE9C;
    case 810u: goto L_089DFEA8;
    case 811u: goto L_089DFEB4;
    case 812u: goto L_089DFEC4;
    case 813u: goto L_089DFEC8;
    case 814u: goto L_089DFED0;
    case 815u: goto L_089DFEDC;
    case 816u: goto L_089DFEE8;
    case 817u: goto L_089DFEFC;
    case 818u: goto L_089DFF00;
    case 819u: goto L_089DFF04;
    case 820u: goto L_089DFF5C;
    case 821u: goto L_089DFF70;
    case 822u: goto L_089DFFBC;
    case 823u: goto L_089DFFD0;
    case 824u: goto L_089DFFF0;
    case 825u: goto L_089DFFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089DC000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[31] = (0x089DC014u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x089DC014u) goto L_089DC014;
    return;
L_089DC014:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(248)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(232)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1032)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(228)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(248)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(236)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(520)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089DC0C0;
      }
      goto L_089DC07C;
    }
L_089DC07C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(232)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089DC0B8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x089DC0B8u) goto L_089DC0B8;
    return;
L_089DC0B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC0CC;
      }
      goto L_089DC0C0;
    }
L_089DC0C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (0x089DC0CCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A0606Cu>(ctx, &aot_mem) && ctx.pc == 0x089DC0CCu) goto L_089DC0CC;
    return;
L_089DC0CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (0x089DC0E0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x089DC0E0u) goto L_089DC0E0;
    return;
L_089DC0E0:
    ctx.gpr[31] = (0x089DC0E8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x089DC0E8u) goto L_089DC0E8;
    return;
L_089DC0E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          goto L_089DC10C;
      }
      goto L_089DC0F4;
    }
L_089DC0F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
        goto L_089DC110;
    }
    goto L_089DC104;
L_089DC104:
    ctx.gpr[31] = (0x089DC10Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089DC10Cu) goto L_089DC10C;
    return;
L_089DC10C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    goto L_089DC110;
L_089DC110:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[31] = (0x089DC128u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x089DC128u) goto L_089DC128;
    return;
L_089DC128:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089DC148u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x089DC148u) goto L_089DC148;
    return;
L_089DC148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
      if (branch_taken) {
          goto L_089DC16C;
      }
      goto L_089DC154;
    }
L_089DC154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089DC170;
      }
      goto L_089DC164;
    }
L_089DC164:
    ctx.gpr[31] = (0x089DC16Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089DC16Cu) goto L_089DC16C;
    return;
L_089DC16C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_089DC170;
L_089DC170:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[31] = (0x089DC188u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x089DC188u) goto L_089DC188;
    return;
L_089DC188:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089DC1E4;
      }
      goto L_089DC1A0;
    }
L_089DC1A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089DC1DCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x089DC1DCu) goto L_089DC1DC;
    return;
L_089DC1DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC1F0;
      }
      goto L_089DC1E4;
    }
L_089DC1E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(236)));
    ctx.gpr[31] = (0x089DC1F0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A0606Cu>(ctx, &aot_mem) && ctx.pc == 0x089DC1F0u) goto L_089DC1F0;
    return;
L_089DC1F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (0x089DC204u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x089DC204u) goto L_089DC204;
    return;
L_089DC204:
    ctx.gpr[31] = (0x089DC20Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x089DC20Cu) goto L_089DC20C;
    return;
L_089DC20C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(188)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(66))))));
        goto L_089DC2F8;
    }
    goto L_089DC218;
L_089DC218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(188)));
      if (branch_taken) {
          goto L_089DC23C;
      }
      goto L_089DC224;
    }
L_089DC224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089DC240;
      }
      goto L_089DC234;
    }
L_089DC234:
    ctx.gpr[31] = (0x089DC23Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089DC23Cu) goto L_089DC23C;
    return;
L_089DC23C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_089DC240;
L_089DC240:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[31] = (0x089DC258u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x089DC258u) goto L_089DC258;
    return;
L_089DC258:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1032)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (48460u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x089DC2CCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A0606Cu>(ctx, &aot_mem) && ctx.pc == 0x089DC2CCu) goto L_089DC2CC;
    return;
L_089DC2CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (0x089DC2D8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 502u, 0x08A062F8u>(ctx, &aot_mem) && ctx.pc == 0x089DC2D8u) goto L_089DC2D8;
    return;
L_089DC2D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (0x089DC2ECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x089DC2ECu) goto L_089DC2EC;
    return;
L_089DC2EC:
    ctx.gpr[31] = (0x089DC2F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x089DC2F4u) goto L_089DC2F4;
    return;
L_089DC2F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(66))))));
    goto L_089DC2F8;
L_089DC2F8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24020)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089DC5CC;
      }
      goto L_089DC328;
    }
L_089DC328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
        goto L_089DC5D0;
    }
    goto L_089DC33C;
L_089DC33C:
    ctx.gpr[4] = (17154u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1028)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17808)));
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DC5CC;
      }
      goto L_089DC37C;
    }
L_089DC37C:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[31] = (0x089DC3A4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 563u, 0x0892751Cu>(ctx, &aot_mem) && ctx.pc == 0x089DC3A4u) goto L_089DC3A4;
    return;
L_089DC3A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC5CC;
      }
      goto L_089DC3AC;
    }
L_089DC3AC:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
      if (branch_taken) {
          goto L_089DC47C;
      }
      goto L_089DC3C8;
    }
L_089DC3C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(760), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (48501u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (48373u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.gpr[31] = (0x089DC450u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089DC450u) goto L_089DC450;
    return;
L_089DC450:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(772)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089DC490;
      }
      goto L_089DC47C;
    }
L_089DC47C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089DC490;
L_089DC490:
    ctx.gpr[16] = (0u | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC51C;
      }
      goto L_089DC4D0;
    }
L_089DC4D0:
    ctx.gpr[16] = (0u | 1u);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(800)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(800), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089DC51C;
L_089DC51C:
    ctx.gpr[4] = (16448u << 16u);
    ctx.gpr[31] = (0x089DC528u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089DC528u) goto L_089DC528;
    return;
L_089DC528:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17788)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DC5CC;
      }
      goto L_089DC56C;
    }
L_089DC56C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[4] = (0u | 65u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089DC59Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x089DC59Cu) goto L_089DC59C;
    return;
L_089DC59C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC5CC;
      }
      goto L_089DC5A4;
    }
L_089DC5A4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 65u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089DC5CCu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x089DC5CCu) goto L_089DC5CC;
    return;
L_089DC5CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    goto L_089DC5D0;
L_089DC5D0:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC5F0;
      }
      goto L_089DC5DC;
    }
L_089DC5DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC5F0;
      }
      goto L_089DC5E8;
    }
L_089DC5E8:
    ctx.gpr[31] = (0x089DC5F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089DC5F0u) goto L_089DC5F0;
    return;
L_089DC5F0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1048)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC634:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17828)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17832)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17800)));
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
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-17824), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-17816), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-17820), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17812), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17808), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-17796), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC6C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-309));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(96) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089DED30;
      }
      goto L_089DC6FC;
    }
L_089DC6FC:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-309));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-5952)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC718:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DC730u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DC730u) goto L_089DC730;
    return;
L_089DC730:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(232)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089DC768;
      }
      goto L_089DC764;
    }
L_089DC764:
    ctx.gpr[4] = (0u | 1u);
    goto L_089DC768;
L_089DC768:
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
          goto L_089DC794;
      }
      goto L_089DC78C;
    }
L_089DC78C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DC7E4;
      }
      goto L_089DC794;
    }
L_089DC794:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089DC7C4;
    }
    goto L_089DC7B0;
L_089DC7B0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DC7E4;
      }
      goto L_089DC7C4;
    }
L_089DC7C4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC7E4;
      }
      goto L_089DC7E0;
    }
L_089DC7E0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089DC7E4;
L_089DC7E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DC7EC;
    }
L_089DC7EC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DC808u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DC808u) goto L_089DC808;
    return;
L_089DC808:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DC818u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089DC818u) goto L_089DC818;
    return;
L_089DC818:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089DC830;
      }
      goto L_089DC828;
    }
L_089DC828:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089DC834;
      }
      goto L_089DC830;
    }
L_089DC830:
    ctx.gpr[4] = (0u | 0u);
    goto L_089DC834;
L_089DC834:
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
          goto L_089DC860;
      }
      goto L_089DC858;
    }
L_089DC858:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DC8B0;
      }
      goto L_089DC860;
    }
L_089DC860:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089DC890;
    }
    goto L_089DC87C;
L_089DC87C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DC8B0;
      }
      goto L_089DC890;
    }
L_089DC890:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC8B0;
      }
      goto L_089DC8AC;
    }
L_089DC8AC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089DC8B0;
L_089DC8B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DC8B8;
    }
L_089DC8B8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DC8D0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DC8D0u) goto L_089DC8D0;
    return;
L_089DC8D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DC8E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089DC8E0u) goto L_089DC8E0;
    return;
L_089DC8E0:
    ctx.gpr[4] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(500), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DC8F0;
    }
L_089DC8F0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DC908u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DC908u) goto L_089DC908;
    return;
L_089DC908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x089DC914u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 37u, 0x0893C2C8u>(ctx, &aot_mem) && ctx.pc == 0x089DC914u) goto L_089DC914;
    return;
L_089DC914:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC920;
      }
      goto L_089DC91C;
    }
L_089DC91C:
    ctx.gpr[17] = (0u | 1u);
    goto L_089DC920;
L_089DC920:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_089DC94C;
      }
      goto L_089DC944;
    }
L_089DC944:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089DC99C;
      }
      goto L_089DC94C;
    }
L_089DC94C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089DC97C;
    }
    goto L_089DC968;
L_089DC968:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DC99C;
      }
      goto L_089DC97C;
    }
L_089DC97C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC99C;
      }
      goto L_089DC998;
    }
L_089DC998:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089DC99C;
L_089DC99C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DC9A4;
    }
L_089DC9A4:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[31] = (0x089DC9C4u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DC9C4u) goto L_089DC9C4;
    return;
L_089DC9C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[4] << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (ctx.gpr[11] & 65535u);
    ctx.gpr[31] = (0x089DCA20u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 749u, 0x08AD2D50u>(ctx, &aot_mem) && ctx.pc == 0x089DCA20u) goto L_089DCA20;
    return;
L_089DCA20:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DCA34u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089DCA34u) goto L_089DCA34;
    return;
L_089DCA34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DCA3C;
    }
L_089DCA3C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DCA58u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DCA58u) goto L_089DCA58;
    return;
L_089DCA58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5696));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DCA9C;
      }
      goto L_089DCA8C;
    }
L_089DCA8C:
    ctx.gpr[31] = (0x089DCA94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 730u, 0x08AD2BD8u>(ctx, &aot_mem) && ctx.pc == 0x089DCA94u) goto L_089DCA94;
    return;
L_089DCA94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCAE0;
      }
      goto L_089DCA9C;
    }
L_089DCA9C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 101 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DCAC4;
      }
      goto L_089DCAB4;
    }
L_089DCAB4:
    ctx.gpr[31] = (0x089DCABCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 731u, 0x08AD2BF0u>(ctx, &aot_mem) && ctx.pc == 0x089DCABCu) goto L_089DCABC;
    return;
L_089DCABC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCAE0;
      }
      goto L_089DCAC4;
    }
L_089DCAC4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DCADCu);
    ctx.gpr[17] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 731u, 0x08AD2BF0u>(ctx, &aot_mem) && ctx.pc == 0x089DCADCu) goto L_089DCADC;
    return;
L_089DCADC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[17]));
    goto L_089DCAE0;
L_089DCAE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DCAE8;
    }
L_089DCAE8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DCAFCu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x089DCAFCu) goto L_089DCAFC;
    return;
L_089DCAFC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DCB20u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DCB20u) goto L_089DCB20;
    return;
L_089DCB20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCB4C;
      }
      goto L_089DCB2C;
    }
L_089DCB2C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x089DCB44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8840));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 371u, 0x08AC6B38u>(ctx, &aot_mem) && ctx.pc == 0x089DCB44u) goto L_089DCB44;
    return;
L_089DCB44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCB64;
      }
      goto L_089DCB4C;
    }
L_089DCB4C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089DCB64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8840));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 371u, 0x08AC6B38u>(ctx, &aot_mem) && ctx.pc == 0x089DCB64u) goto L_089DCB64;
    return;
L_089DCB64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DCB6C;
    }
L_089DCB6C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DCB7Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x089DCB7Cu) goto L_089DCB7C;
    return;
L_089DCB7C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[2] - ctx.gpr[5]);
    ctx.gpr[31] = (0x089DCB94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8840));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 390u, 0x08AC6C78u>(ctx, &aot_mem) && ctx.pc == 0x089DCB94u) goto L_089DCB94;
    return;
L_089DCB94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DCB9C;
    }
L_089DCB9C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DCBB0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x089DCBB0u) goto L_089DCBB0;
    return;
L_089DCBB0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DCBD4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DCBD4u) goto L_089DCBD4;
    return;
L_089DCBD4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089DCC00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8840));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 406u, 0x08AC6D6Cu>(ctx, &aot_mem) && ctx.pc == 0x089DCC00u) goto L_089DCC00;
    return;
L_089DCC00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DCC08;
    }
L_089DCC08:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DCC18u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x089DCC18u) goto L_089DCC18;
    return;
L_089DCC18:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[2] - ctx.gpr[5]);
    ctx.gpr[31] = (0x089DCC30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8840));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 395u, 0x08AC6CCCu>(ctx, &aot_mem) && ctx.pc == 0x089DCC30u) goto L_089DCC30;
    return;
L_089DCC30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DCC38;
    }
L_089DCC38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DCC58u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x089DCC58u) goto L_089DCC58;
    return;
L_089DCC58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[31] = (0x089DCC80u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DCC80u) goto L_089DCC80;
    return;
L_089DCC80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(130), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089DCC94;
L_089DCC94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(132), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(138), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(140), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(142), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(144), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DCCDCu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 222u, 0x08871740u>(ctx, &aot_mem) && ctx.pc == 0x089DCCDCu) goto L_089DCCDC;
    return;
L_089DCCDC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089DCD54;
      }
      goto L_089DCCEC;
    }
L_089DCCEC:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(128))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_089DCD3C;
      }
      goto L_089DCD00;
    }
L_089DCD00:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5960));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089DCD3C;
      }
      goto L_089DCD24;
    }
L_089DCD24:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089DCD3Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6112));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x089DCD3Cu) goto L_089DCD3C;
    return;
L_089DCD3C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DCCEC;
      }
      goto L_089DCD54;
    }
L_089DCD54:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089DCD6C;
      }
      goto L_089DCD5C;
    }
L_089DCD5C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089DCD6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6048));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089DCD6Cu) goto L_089DCD6C;
    return;
L_089DCD6C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089DCDCC;
      }
      goto L_089DCD74;
    }
L_089DCD74:
    ctx.gpr[16] = (2227u << 16u);
    goto L_089DCD78;
L_089DCD78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (ctx.gpr[5] << 16u);
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x089DCDB0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 351u, 0x0887202Cu>(ctx, &aot_mem) && ctx.pc == 0x089DCDB0u) goto L_089DCDB0;
    return;
L_089DCDB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089DCDC0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 252u, 0x0887192Cu>(ctx, &aot_mem) && ctx.pc == 0x089DCDC0u) goto L_089DCDC0;
    return;
L_089DCDC0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[16] = (2227u << 16u);
      if (branch_taken) {
          goto L_089DCD78;
      }
      goto L_089DCDCC;
    }
L_089DCDCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DCDD4;
    }
L_089DCDD4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DCDECu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DCDECu) goto L_089DCDEC;
    return;
L_089DCDEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DCDFCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089DCDFCu) goto L_089DCDFC;
    return;
L_089DCDFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089DCE20u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x089DCE20u) goto L_089DCE20;
    return;
L_089DCE20:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089DCE34u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 222u, 0x08871740u>(ctx, &aot_mem) && ctx.pc == 0x089DCE34u) goto L_089DCE34;
    return;
L_089DCE34:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089DCE50;
      }
      goto L_089DCE44;
    }
L_089DCE44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_089DCE50;
L_089DCE50:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCE84;
      }
      goto L_089DCE5C;
    }
L_089DCE5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCE84;
      }
      goto L_089DCE68;
    }
L_089DCE68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCE94;
      }
      goto L_089DCE84;
    }
L_089DCE84:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    goto L_089DCE94;
L_089DCE94:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & 65535u);
    ctx.gpr[31] = (0x089DCEA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13564)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 381u, 0x0887240Cu>(ctx, &aot_mem) && ctx.pc == 0x089DCEA4u) goto L_089DCEA4;
    return;
L_089DCEA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x089DCEB4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 213u, 0x088716A8u>(ctx, &aot_mem) && ctx.pc == 0x089DCEB4u) goto L_089DCEB4;
    return;
L_089DCEB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCEC4;
      }
      goto L_089DCEBC;
    }
L_089DCEBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089DCEC8;
      }
      goto L_089DCEC4;
    }
L_089DCEC4:
    ctx.gpr[4] = (0u | 0u);
    goto L_089DCEC8;
L_089DCEC8:
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
          goto L_089DCEF4;
      }
      goto L_089DCEEC;
    }
L_089DCEEC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DCF44;
      }
      goto L_089DCEF4;
    }
L_089DCEF4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089DCF24;
    }
    goto L_089DCF10;
L_089DCF10:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DCF44;
      }
      goto L_089DCF24;
    }
L_089DCF24:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCF44;
      }
      goto L_089DCF40;
    }
L_089DCF40:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089DCF44;
L_089DCF44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DCF4C;
    }
L_089DCF4C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DCF70u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x089DCF70u) goto L_089DCF70;
    return;
L_089DCF70:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DCF84u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 222u, 0x08871740u>(ctx, &aot_mem) && ctx.pc == 0x089DCF84u) goto L_089DCF84;
    return;
L_089DCF84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DCFACu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DCFACu) goto L_089DCFAC;
    return;
L_089DCFAC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089DCFC4;
      }
      goto L_089DCFB4;
    }
L_089DCFB4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089DCFC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6016));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089DCFC4u) goto L_089DCFC4;
    return;
L_089DCFC4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089DD010;
      }
      goto L_089DCFCC;
    }
L_089DCFCC:
    ctx.gpr[5] = (ctx.gpr[16] & 65535u);
    goto L_089DCFD0;
L_089DCFD0:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[7] & 255u);
    ctx.gpr[31] = (0x089DCFF4u);
    ctx.gpr[7] = (ctx.gpr[8] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 365u, 0x0887227Cu>(ctx, &aot_mem) && ctx.pc == 0x089DCFF4u) goto L_089DCFF4;
    return;
L_089DCFF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089DD004u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 252u, 0x0887192Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD004u) goto L_089DD004;
    return;
L_089DD004:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[5] = (ctx.gpr[16] & 65535u);
      if (branch_taken) {
          goto L_089DCFD0;
      }
      goto L_089DD010;
    }
L_089DD010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DD018;
    }
L_089DD018:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DD03Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x089DD03Cu) goto L_089DD03C;
    return;
L_089DD03C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DD050u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 222u, 0x08871740u>(ctx, &aot_mem) && ctx.pc == 0x089DD050u) goto L_089DD050;
    return;
L_089DD050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DD078u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD078u) goto L_089DD078;
    return;
L_089DD078:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089DD090;
      }
      goto L_089DD080;
    }
L_089DD080:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089DD090u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6016));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD090u) goto L_089DD090;
    return;
L_089DD090:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089DD0DC;
      }
      goto L_089DD098;
    }
L_089DD098:
    ctx.gpr[5] = (ctx.gpr[16] & 65535u);
    goto L_089DD09C;
L_089DD09C:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[7] & 255u);
    ctx.gpr[31] = (0x089DD0C0u);
    ctx.gpr[7] = (ctx.gpr[8] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 370u, 0x088722F8u>(ctx, &aot_mem) && ctx.pc == 0x089DD0C0u) goto L_089DD0C0;
    return;
L_089DD0C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089DD0D0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 252u, 0x0887192Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD0D0u) goto L_089DD0D0;
    return;
L_089DD0D0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[5] = (ctx.gpr[16] & 65535u);
      if (branch_taken) {
          goto L_089DD09C;
      }
      goto L_089DD0DC;
    }
L_089DD0DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DD0E4;
    }
L_089DD0E4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DD100u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD100u) goto L_089DD100;
    return;
L_089DD100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x089DD12Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 349u, 0x088EE490u>(ctx, &aot_mem) && ctx.pc == 0x089DD12Cu) goto L_089DD12C;
    return;
L_089DD12C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DD134;
    }
L_089DD134:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DD14Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD14Cu) goto L_089DD14C;
    return;
L_089DD14C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DD15Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089DD15Cu) goto L_089DD15C;
    return;
L_089DD15C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089DD198;
      }
      goto L_089DD168;
    }
L_089DD168:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] << 16u);
    ctx.gpr[7] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x089DD198u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 349u, 0x088EE490u>(ctx, &aot_mem) && ctx.pc == 0x089DD198u) goto L_089DD198;
    return;
L_089DD198:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DD1A0;
    }
L_089DD1A0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DD1B8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD1B8u) goto L_089DD1B8;
    return;
L_089DD1B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DD1C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089DD1C8u) goto L_089DD1C8;
    return;
L_089DD1C8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089DD204;
      }
      goto L_089DD1D4;
    }
L_089DD1D4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] << 16u);
    ctx.gpr[7] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x089DD204u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 349u, 0x088EE490u>(ctx, &aot_mem) && ctx.pc == 0x089DD204u) goto L_089DD204;
    return;
L_089DD204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DD20C;
    }
L_089DD20C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089DD218u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 373u, 0x088EE65Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD218u) goto L_089DD218;
    return;
L_089DD218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DD220;
    }
L_089DD220:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DD240u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x089DD240u) goto L_089DD240;
    return;
L_089DD240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[31] = (0x089DD264u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD264u) goto L_089DD264;
    return;
L_089DD264:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DD278u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 222u, 0x08871740u>(ctx, &aot_mem) && ctx.pc == 0x089DD278u) goto L_089DD278;
    return;
L_089DD278:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089DD294;
      }
      goto L_089DD284;
    }
L_089DD284:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089DD294u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6048));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD294u) goto L_089DD294;
    return;
L_089DD294:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089DD374;
      }
      goto L_089DD29C;
    }
L_089DD29C:
    ctx.gpr[4] = (2269u << 16u);
    goto L_089DD2A0;
L_089DD2A0:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[3] = (ctx.gpr[11] << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[12] << 16u);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[13] << 16u);
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[5] << 16u);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[10] = (ctx.gpr[10] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DD358u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[15]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 358u, 0x08872108u>(ctx, &aot_mem) && ctx.pc == 0x089DD358u) goto L_089DD358;
    return;
L_089DD358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089DD368u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 252u, 0x0887192Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD368u) goto L_089DD368;
    return;
L_089DD368:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089DD2A0;
      }
      goto L_089DD374;
    }
L_089DD374:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DD37C;
    }
L_089DD37C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DD394u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD394u) goto L_089DD394;
    return;
L_089DD394:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DD3A8;
    }
L_089DD3A8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x089DD3C4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD3C4u) goto L_089DD3C4;
    return;
L_089DD3C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x089DD408u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 347u, 0x088EE45Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD408u) goto L_089DD408;
    return;
L_089DD408:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DD410;
    }
L_089DD410:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DD42Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD42Cu) goto L_089DD42C;
    return;
L_089DD42C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089DD45C;
      }
      goto L_089DD44C;
    }
L_089DD44C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089DD458u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x089DD458u) goto L_089DD458;
    return;
L_089DD458:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DD45C;
L_089DD45C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[31] = (0x089DD490u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 366u, 0x088EE5D0u>(ctx, &aot_mem) && ctx.pc == 0x089DD490u) goto L_089DD490;
    return;
L_089DD490:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DD498;
    }
L_089DD498:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DD4B0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD4B0u) goto L_089DD4B0;
    return;
L_089DD4B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DD4C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089DD4C0u) goto L_089DD4C0;
    return;
L_089DD4C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089DD4CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 639u, 0x08957DB8u>(ctx, &aot_mem) && ctx.pc == 0x089DD4CCu) goto L_089DD4CC;
    return;
L_089DD4CC:
    ctx.gpr[31] = (0x089DD4D4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x089DD4D4u) goto L_089DD4D4;
    return;
L_089DD4D4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DD4E0;
      }
      goto L_089DD4E0;
    }
L_089DD4E0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089DD4FCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 13u, 0x08968140u>(ctx, &aot_mem) && ctx.pc == 0x089DD4FCu) goto L_089DD4FC;
    return;
L_089DD4FC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DD510u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089DD510u) goto L_089DD510;
    return;
L_089DD510:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DD518;
    }
L_089DD518:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DD530u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD530u) goto L_089DD530;
    return;
L_089DD530:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DD540u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089DD540u) goto L_089DD540;
    return;
L_089DD540:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089DD54Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 639u, 0x08957DB8u>(ctx, &aot_mem) && ctx.pc == 0x089DD54Cu) goto L_089DD54C;
    return;
L_089DD54C:
    ctx.gpr[31] = (0x089DD554u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x089DD554u) goto L_089DD554;
    return;
L_089DD554:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DD560;
      }
      goto L_089DD560;
    }
L_089DD560:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089DD57Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 13u, 0x08968140u>(ctx, &aot_mem) && ctx.pc == 0x089DD57Cu) goto L_089DD57C;
    return;
L_089DD57C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DD590u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089DD590u) goto L_089DD590;
    return;
L_089DD590:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DD598;
    }
L_089DD598:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DD5B0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD5B0u) goto L_089DD5B0;
    return;
L_089DD5B0:
    ctx.gpr[31] = (0x089DD5B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 29u, 0x08968270u>(ctx, &aot_mem) && ctx.pc == 0x089DD5B8u) goto L_089DD5B8;
    return;
L_089DD5B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DD5C0;
    }
L_089DD5C0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DD5DCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD5DCu) goto L_089DD5DC;
    return;
L_089DD5DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x089DD5E8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 39u, 0x0896833Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD5E8u) goto L_089DD5E8;
    return;
L_089DD5E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DD5F0;
    }
L_089DD5F0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DD60Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD60Cu) goto L_089DD60C;
    return;
L_089DD60C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x089DD618u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 44u, 0x0896838Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD618u) goto L_089DD618;
    return;
L_089DD618:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DD620;
    }
L_089DD620:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x089DD63Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD63Cu) goto L_089DD63C;
    return;
L_089DD63C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089DD66C;
      }
      goto L_089DD65C;
    }
L_089DD65C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089DD668u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x089DD668u) goto L_089DD668;
    return;
L_089DD668:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DD66C;
L_089DD66C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089DD67Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 639u, 0x08957DB8u>(ctx, &aot_mem) && ctx.pc == 0x089DD67Cu) goto L_089DD67C;
    return;
L_089DD67C:
    ctx.gpr[31] = (0x089DD684u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x089DD684u) goto L_089DD684;
    return;
L_089DD684:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
      if (branch_taken) {
          goto L_089DD690;
      }
      goto L_089DD690;
    }
L_089DD690:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x089DD6B8u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 828u, 0x08967ED0u>(ctx, &aot_mem) && ctx.pc == 0x089DD6B8u) goto L_089DD6B8;
    return;
L_089DD6B8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DD6CCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089DD6CCu) goto L_089DD6CC;
    return;
L_089DD6CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DD6D4;
    }
L_089DD6D4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DD6F0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD6F0u) goto L_089DD6F0;
    return;
L_089DD6F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x089DD6FCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 51u, 0x089683F0u>(ctx, &aot_mem) && ctx.pc == 0x089DD6FCu) goto L_089DD6FC;
    return;
L_089DD6FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DD704;
    }
L_089DD704:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DD720u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD720u) goto L_089DD720;
    return;
L_089DD720:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[31] = (0x089DD744u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 390u, 0x088EE848u>(ctx, &aot_mem) && ctx.pc == 0x089DD744u) goto L_089DD744;
    return;
L_089DD744:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DD74C;
    }
L_089DD74C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DD764u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD764u) goto L_089DD764;
    return;
L_089DD764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DD790;
      }
      goto L_089DD788;
    }
L_089DD788:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089DD79C;
      }
      goto L_089DD790;
    }
L_089DD790:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    goto L_089DD79C;
L_089DD79C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x089DD7BCu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 401u, 0x088EE920u>(ctx, &aot_mem) && ctx.pc == 0x089DD7BCu) goto L_089DD7BC;
    return;
L_089DD7BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DD7C4;
    }
L_089DD7C4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089DD7D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 120u, 0x088ED060u>(ctx, &aot_mem) && ctx.pc == 0x089DD7D0u) goto L_089DD7D0;
    return;
L_089DD7D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD7E0;
      }
      goto L_089DD7D8;
    }
L_089DD7D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089DD7E4;
      }
      goto L_089DD7E0;
    }
L_089DD7E0:
    ctx.gpr[4] = (0u | 0u);
    goto L_089DD7E4;
L_089DD7E4:
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
          goto L_089DD810;
      }
      goto L_089DD808;
    }
L_089DD808:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DD860;
      }
      goto L_089DD810;
    }
L_089DD810:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089DD840;
    }
    goto L_089DD82C;
L_089DD82C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DD860;
      }
      goto L_089DD840;
    }
L_089DD840:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD860;
      }
      goto L_089DD85C;
    }
L_089DD85C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089DD860;
L_089DD860:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DD868;
    }
L_089DD868:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DD884u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD884u) goto L_089DD884;
    return;
L_089DD884:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089DD8B8;
      }
      goto L_089DD8A8;
    }
L_089DD8A8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089DD8B4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x089DD8B4u) goto L_089DD8B4;
    return;
L_089DD8B4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DD8B8;
L_089DD8B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x089DD8D4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 186u, 0x08A24EBCu>(ctx, &aot_mem) && ctx.pc == 0x089DD8D4u) goto L_089DD8D4;
    return;
L_089DD8D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DD8DC;
    }
L_089DD8DC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DD8F8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD8F8u) goto L_089DD8F8;
    return;
L_089DD8F8:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089DD92C;
      }
      goto L_089DD91C;
    }
L_089DD91C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089DD928u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x089DD928u) goto L_089DD928;
    return;
L_089DD928:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DD92C;
L_089DD92C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x089DD948u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 187u, 0x08A24F00u>(ctx, &aot_mem) && ctx.pc == 0x089DD948u) goto L_089DD948;
    return;
L_089DD948:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DD950;
    }
L_089DD950:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DD96Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD96Cu) goto L_089DD96C;
    return;
L_089DD96C:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089DD9A0;
      }
      goto L_089DD990;
    }
L_089DD990:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089DD99Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x089DD99Cu) goto L_089DD99C;
    return;
L_089DD99C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DD9A0;
L_089DD9A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x089DD9BCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 251u, 0x08A25644u>(ctx, &aot_mem) && ctx.pc == 0x089DD9BCu) goto L_089DD9BC;
    return;
L_089DD9BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DD9C4;
    }
L_089DD9C4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DD9DCu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD9DCu) goto L_089DD9DC;
    return;
L_089DD9DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDA90;
      }
      goto L_089DDA10;
    }
L_089DDA10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDA90;
      }
      goto L_089DDA20;
    }
L_089DDA20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089DDA60;
      }
      goto L_089DDA44;
    }
L_089DDA44:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDA60;
      }
      goto L_089DDA58;
    }
L_089DDA58:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089DDA6C;
      }
      goto L_089DDA60;
    }
L_089DDA60:
    ctx.gpr[31] = (0x089DDA68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089DDA68u) goto L_089DDA68;
    return;
L_089DDA68:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DDA6C;
L_089DDA6C:
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDAF4;
      }
      goto L_089DDA90;
    }
L_089DDA90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089DDACC;
      }
      goto L_089DDAB0;
    }
L_089DDAB0:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDACC;
      }
      goto L_089DDAC4;
    }
L_089DDAC4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089DDAD8;
      }
      goto L_089DDACC;
    }
L_089DDACC:
    ctx.gpr[31] = (0x089DDAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089DDAD4u) goto L_089DDAD4;
    return;
L_089DDAD4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DDAD8;
L_089DDAD8:
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    goto L_089DDAF4;
L_089DDAF4:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDB14;
      }
      goto L_089DDB08;
    }
L_089DDB08:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089DDB14;
L_089DDB14:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDB38;
      }
      goto L_089DDB2C;
    }
L_089DDB2C:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_089DDB38;
L_089DDB38:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DDB54u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089DDB54u) goto L_089DDB54;
    return;
L_089DDB54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DDB5C;
    }
L_089DDB5C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DDB74u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DDB74u) goto L_089DDB74;
    return;
L_089DDB74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089DDBF4;
      }
      goto L_089DDBA8;
    }
L_089DDBA8:
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1248)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[31] = (0x089DDBF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x089DDBF4u) goto L_089DDBF4;
    return;
L_089DDBF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DDBFC;
    }
L_089DDBFC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DDC14u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DDC14u) goto L_089DDC14;
    return;
L_089DDC14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DDC24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089DDC24u) goto L_089DDC24;
    return;
L_089DDC24:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDC3C;
      }
      goto L_089DDC34;
    }
L_089DDC34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_089DDC40;
      }
      goto L_089DDC3C;
    }
L_089DDC3C:
    ctx.gpr[5] = (0u | 0u);
    goto L_089DDC40;
L_089DDC40:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDCB0;
      }
      goto L_089DDC48;
    }
L_089DDC48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089DDC80;
      }
      goto L_089DDC64;
    }
L_089DDC64:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDC80;
      }
      goto L_089DDC78;
    }
L_089DDC78:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089DDC8C;
      }
      goto L_089DDC80;
    }
L_089DDC80:
    ctx.gpr[31] = (0x089DDC88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089DDC88u) goto L_089DDC88;
    return;
L_089DDC88:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DDC8C;
L_089DDC8C:
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDD10;
      }
      goto L_089DDCB0;
    }
L_089DDCB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089DDCE8;
      }
      goto L_089DDCCC;
    }
L_089DDCCC:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDCE8;
      }
      goto L_089DDCE0;
    }
L_089DDCE0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089DDCF4;
      }
      goto L_089DDCE8;
    }
L_089DDCE8:
    ctx.gpr[31] = (0x089DDCF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089DDCF0u) goto L_089DDCF0;
    return;
L_089DDCF0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DDCF4;
L_089DDCF4:
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    goto L_089DDD10;
L_089DDD10:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDD30;
      }
      goto L_089DDD24;
    }
L_089DDD24:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089DDD30;
L_089DDD30:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDD54;
      }
      goto L_089DDD48;
    }
L_089DDD48:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_089DDD54;
L_089DDD54:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DDD70u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089DDD70u) goto L_089DDD70;
    return;
L_089DDD70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DDD78;
    }
L_089DDD78:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DDD90u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DDD90u) goto L_089DDD90;
    return;
L_089DDD90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DDDA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089DDDA0u) goto L_089DDDA0;
    return;
L_089DDDA0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDDB8;
      }
      goto L_089DDDB0;
    }
L_089DDDB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_089DDDBC;
      }
      goto L_089DDDB8;
    }
L_089DDDB8:
    ctx.gpr[4] = (0u | 0u);
    goto L_089DDDBC;
L_089DDDBC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089DDE08;
      }
      goto L_089DDDC4;
    }
L_089DDDC4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[31] = (0x089DDE08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x089DDE08u) goto L_089DDE08;
    return;
L_089DDE08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DDE10;
    }
L_089DDE10:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DDE28u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DDE28u) goto L_089DDE28;
    return;
L_089DDE28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DDE38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089DDE38u) goto L_089DDE38;
    return;
L_089DDE38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089DDE70;
      }
      goto L_089DDE54;
    }
L_089DDE54:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDE70;
      }
      goto L_089DDE68;
    }
L_089DDE68:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089DDE7C;
      }
      goto L_089DDE70;
    }
L_089DDE70:
    ctx.gpr[31] = (0x089DDE78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089DDE78u) goto L_089DDE78;
    return;
L_089DDE78:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DDE7C;
L_089DDE7C:
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDEB8;
      }
      goto L_089DDEAC;
    }
L_089DDEAC:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089DDEB8;
L_089DDEB8:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDEDC;
      }
      goto L_089DDED0;
    }
L_089DDED0:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_089DDEDC;
L_089DDEDC:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DDEF8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089DDEF8u) goto L_089DDEF8;
    return;
L_089DDEF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DDF00;
    }
L_089DDF00:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DDF1Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DDF1Cu) goto L_089DDF1C;
    return;
L_089DDF1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DDF2Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089DDF2Cu) goto L_089DDF2C;
    return;
L_089DDF2C:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[31] = (0x089DDF54u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x089DDF54u) goto L_089DDF54;
    return;
L_089DDF54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DDF5C;
    }
L_089DDF5C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DDF74u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DDF74u) goto L_089DDF74;
    return;
L_089DDF74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DDF84u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x089DDF84u) goto L_089DDF84;
    return;
L_089DDF84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089DDFBC;
      }
      goto L_089DDFA0;
    }
L_089DDFA0:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDFBC;
      }
      goto L_089DDFB4;
    }
L_089DDFB4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089DDFC8;
      }
      goto L_089DDFBC;
    }
L_089DDFBC:
    ctx.gpr[31] = (0x089DDFC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089DDFC4u) goto L_089DDFC4;
    return;
L_089DDFC4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DDFC8;
L_089DDFC8:
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DE004;
      }
      goto L_089DDFF8;
    }
L_089DDFF8:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089DE004;
L_089DE004:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DE028;
      }
      goto L_089DE01C;
    }
L_089DE01C:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_089DE028;
L_089DE028:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DE044u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089DE044u) goto L_089DE044;
    return;
L_089DE044:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DE04C;
    }
L_089DE04C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DE068u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE068u) goto L_089DE068;
    return;
L_089DE068:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DE078u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x089DE078u) goto L_089DE078;
    return;
L_089DE078:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089DE084u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x089DE084u) goto L_089DE084;
    return;
L_089DE084:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[31] = (0x089DE0ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x089DE0ACu) goto L_089DE0AC;
    return;
L_089DE0AC:
    ctx.gpr[31] = (0x089DE0B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x089DE0B4u) goto L_089DE0B4;
    return;
L_089DE0B4:
    ctx.gpr[31] = (0x089DE0BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x089DE0BCu) goto L_089DE0BC;
    return;
L_089DE0BC:
    ctx.gpr[31] = (0x089DE0C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE0C4u) goto L_089DE0C4;
    return;
L_089DE0C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DE0CC;
    }
L_089DE0CC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DE0E8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE0E8u) goto L_089DE0E8;
    return;
L_089DE0E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DE11Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x089DE11Cu) goto L_089DE11C;
    return;
L_089DE11C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089DE160;
      }
      goto L_089DE130;
    }
L_089DE130:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE160;
      }
      goto L_089DE140;
    }
L_089DE140:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089DE150u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 269u, 0x08A0E174u>(ctx, &aot_mem) && ctx.pc == 0x089DE150u) goto L_089DE150;
    return;
L_089DE150:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE178;
      }
      goto L_089DE158;
    }
L_089DE158:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089DE178;
      }
      goto L_089DE160;
    }
L_089DE160:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089DE16Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 269u, 0x08A0E174u>(ctx, &aot_mem) && ctx.pc == 0x089DE16Cu) goto L_089DE16C;
    return;
L_089DE16C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE178;
      }
      goto L_089DE174;
    }
L_089DE174:
    ctx.gpr[18] = (0u | 1u);
    goto L_089DE178;
L_089DE178:
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
          goto L_089DE1A4;
      }
      goto L_089DE19C;
    }
L_089DE19C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_089DE1F4;
      }
      goto L_089DE1A4;
    }
L_089DE1A4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089DE1D4;
    }
    goto L_089DE1C0;
L_089DE1C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DE1F4;
      }
      goto L_089DE1D4;
    }
L_089DE1D4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE1F4;
      }
      goto L_089DE1F0;
    }
L_089DE1F0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089DE1F4;
L_089DE1F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DE1FC;
    }
L_089DE1FC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DE218u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE218u) goto L_089DE218;
    return;
L_089DE218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089DE24Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 679u, 0x0899F80Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE24Cu) goto L_089DE24C;
    return;
L_089DE24C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DE254;
    }
L_089DE254:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DE270u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE270u) goto L_089DE270;
    return;
L_089DE270:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DE280u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089DE280u) goto L_089DE280;
    return;
L_089DE280:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089DE290u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 679u, 0x0899F80Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE290u) goto L_089DE290;
    return;
L_089DE290:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DE298;
    }
L_089DE298:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DE2A8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x089DE2A8u) goto L_089DE2A8;
    return;
L_089DE2A8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7308), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DE2C4;
    }
L_089DE2C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DE2CC;
    }
L_089DE2CC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DE2E8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE2E8u) goto L_089DE2E8;
    return;
L_089DE2E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DE338;
      }
      goto L_089DE330;
    }
L_089DE330:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089DE33C;
      }
      goto L_089DE338;
    }
L_089DE338:
    ctx.gpr[4] = (0u | 0u);
    goto L_089DE33C;
L_089DE33C:
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
          goto L_089DE368;
      }
      goto L_089DE360;
    }
L_089DE360:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DE3B8;
      }
      goto L_089DE368;
    }
L_089DE368:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089DE398;
    }
    goto L_089DE384;
L_089DE384:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DE3B8;
      }
      goto L_089DE398;
    }
L_089DE398:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE3B8;
      }
      goto L_089DE3B4;
    }
L_089DE3B4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089DE3B8;
L_089DE3B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DE3C0;
    }
L_089DE3C0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DE3DCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE3DCu) goto L_089DE3DC;
    return;
L_089DE3DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DE3ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089DE3ECu) goto L_089DE3EC;
    return;
L_089DE3EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DE414;
      }
      goto L_089DE40C;
    }
L_089DE40C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089DE418;
      }
      goto L_089DE414;
    }
L_089DE414:
    ctx.gpr[4] = (0u | 0u);
    goto L_089DE418;
L_089DE418:
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
          goto L_089DE444;
      }
      goto L_089DE43C;
    }
L_089DE43C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DE494;
      }
      goto L_089DE444;
    }
L_089DE444:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089DE474;
    }
    goto L_089DE460;
L_089DE460:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DE494;
      }
      goto L_089DE474;
    }
L_089DE474:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE494;
      }
      goto L_089DE490;
    }
L_089DE490:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089DE494;
L_089DE494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DE49C;
    }
L_089DE49C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DE4B8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE4B8u) goto L_089DE4B8;
    return;
L_089DE4B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DE4C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089DE4C8u) goto L_089DE4C8;
    return;
L_089DE4C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(616)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DE4F0;
      }
      goto L_089DE4E8;
    }
L_089DE4E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089DE4F4;
      }
      goto L_089DE4F0;
    }
L_089DE4F0:
    ctx.gpr[4] = (0u | 0u);
    goto L_089DE4F4;
L_089DE4F4:
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
          goto L_089DE520;
      }
      goto L_089DE518;
    }
L_089DE518:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DE570;
      }
      goto L_089DE520;
    }
L_089DE520:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089DE550;
    }
    goto L_089DE53C;
L_089DE53C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DE570;
      }
      goto L_089DE550;
    }
L_089DE550:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE570;
      }
      goto L_089DE56C;
    }
L_089DE56C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089DE570;
L_089DE570:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DE578;
    }
L_089DE578:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DE590u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE590u) goto L_089DE590;
    return;
L_089DE590:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DE5A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089DE5A0u) goto L_089DE5A0;
    return;
L_089DE5A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089DE5ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 639u, 0x08957DB8u>(ctx, &aot_mem) && ctx.pc == 0x089DE5ACu) goto L_089DE5AC;
    return;
L_089DE5AC:
    ctx.gpr[31] = (0x089DE5B4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x089DE5B4u) goto L_089DE5B4;
    return;
L_089DE5B4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DE5C0;
      }
      goto L_089DE5C0;
    }
L_089DE5C0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DE5D8u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 13u, 0x08968140u>(ctx, &aot_mem) && ctx.pc == 0x089DE5D8u) goto L_089DE5D8;
    return;
L_089DE5D8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089DE5E8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 51u, 0x089683F0u>(ctx, &aot_mem) && ctx.pc == 0x089DE5E8u) goto L_089DE5E8;
    return;
L_089DE5E8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DE5FCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089DE5FCu) goto L_089DE5FC;
    return;
L_089DE5FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DE604;
    }
L_089DE604:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DE61Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE61Cu) goto L_089DE61C;
    return;
L_089DE61C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DE62Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089DE62Cu) goto L_089DE62C;
    return;
L_089DE62C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089DE638u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 639u, 0x08957DB8u>(ctx, &aot_mem) && ctx.pc == 0x089DE638u) goto L_089DE638;
    return;
L_089DE638:
    ctx.gpr[31] = (0x089DE640u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x089DE640u) goto L_089DE640;
    return;
L_089DE640:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DE64C;
      }
      goto L_089DE64C;
    }
L_089DE64C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DE664u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 13u, 0x08968140u>(ctx, &aot_mem) && ctx.pc == 0x089DE664u) goto L_089DE664;
    return;
L_089DE664:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089DE674u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 51u, 0x089683F0u>(ctx, &aot_mem) && ctx.pc == 0x089DE674u) goto L_089DE674;
    return;
L_089DE674:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DE688u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089DE688u) goto L_089DE688;
    return;
L_089DE688:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DE690;
    }
L_089DE690:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DE6A8u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE6A8u) goto L_089DE6A8;
    return;
L_089DE6A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DE6B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x089DE6B8u) goto L_089DE6B8;
    return;
L_089DE6B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089DE6C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 639u, 0x08957DB8u>(ctx, &aot_mem) && ctx.pc == 0x089DE6C4u) goto L_089DE6C4;
    return;
L_089DE6C4:
    ctx.gpr[31] = (0x089DE6CCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x089DE6CCu) goto L_089DE6CC;
    return;
L_089DE6CC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DE6D8;
      }
      goto L_089DE6D8;
    }
L_089DE6D8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DE6F0u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 13u, 0x08968140u>(ctx, &aot_mem) && ctx.pc == 0x089DE6F0u) goto L_089DE6F0;
    return;
L_089DE6F0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089DE700u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 51u, 0x089683F0u>(ctx, &aot_mem) && ctx.pc == 0x089DE700u) goto L_089DE700;
    return;
L_089DE700:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DE714u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089DE714u) goto L_089DE714;
    return;
L_089DE714:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DE71C;
    }
L_089DE71C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DE738u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE738u) goto L_089DE738;
    return;
L_089DE738:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089DE768;
      }
      goto L_089DE758;
    }
L_089DE758:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089DE764u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x089DE764u) goto L_089DE764;
    return;
L_089DE764:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DE768;
L_089DE768:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089DE778u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 639u, 0x08957DB8u>(ctx, &aot_mem) && ctx.pc == 0x089DE778u) goto L_089DE778;
    return;
L_089DE778:
    ctx.gpr[31] = (0x089DE780u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x089DE780u) goto L_089DE780;
    return;
L_089DE780:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
      if (branch_taken) {
          goto L_089DE78C;
      }
      goto L_089DE78C;
    }
L_089DE78C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x089DE7ACu);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 828u, 0x08967ED0u>(ctx, &aot_mem) && ctx.pc == 0x089DE7ACu) goto L_089DE7AC;
    return;
L_089DE7AC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DE7BCu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 51u, 0x089683F0u>(ctx, &aot_mem) && ctx.pc == 0x089DE7BCu) goto L_089DE7BC;
    return;
L_089DE7BC:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DE7D4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089DE7D4u) goto L_089DE7D4;
    return;
L_089DE7D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DE7DC;
    }
L_089DE7DC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DE7F8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE7F8u) goto L_089DE7F8;
    return;
L_089DE7F8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089DE828;
      }
      goto L_089DE818;
    }
L_089DE818:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089DE824u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x089DE824u) goto L_089DE824;
    return;
L_089DE824:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DE828;
L_089DE828:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089DE838u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 639u, 0x08957DB8u>(ctx, &aot_mem) && ctx.pc == 0x089DE838u) goto L_089DE838;
    return;
L_089DE838:
    ctx.gpr[31] = (0x089DE840u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x089DE840u) goto L_089DE840;
    return;
L_089DE840:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
      if (branch_taken) {
          goto L_089DE84C;
      }
      goto L_089DE84C;
    }
L_089DE84C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DE86Cu);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 828u, 0x08967ED0u>(ctx, &aot_mem) && ctx.pc == 0x089DE86Cu) goto L_089DE86C;
    return;
L_089DE86C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DE87Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 51u, 0x089683F0u>(ctx, &aot_mem) && ctx.pc == 0x089DE87Cu) goto L_089DE87C;
    return;
L_089DE87C:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DE894u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089DE894u) goto L_089DE894;
    return;
L_089DE894:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DE89C;
    }
L_089DE89C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DE8B8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE8B8u) goto L_089DE8B8;
    return;
L_089DE8B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x089DE8C4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 58u, 0x08968458u>(ctx, &aot_mem) && ctx.pc == 0x089DE8C4u) goto L_089DE8C4;
    return;
L_089DE8C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DE8CC;
    }
L_089DE8CC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DE8E8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DE8E8u) goto L_089DE8E8;
    return;
L_089DE8E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089DE914;
      }
      goto L_089DE8F8;
    }
L_089DE8F8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 168u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DE90Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x089DE90Cu) goto L_089DE90C;
    return;
L_089DE90C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEB4C;
      }
      goto L_089DE914;
    }
L_089DE914:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DE948;
      }
      goto L_089DE92C;
    }
L_089DE92C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 159u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DE940u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x089DE940u) goto L_089DE940;
    return;
L_089DE940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEB4C;
      }
      goto L_089DE948;
    }
L_089DE948:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DE97C;
      }
      goto L_089DE960;
    }
L_089DE960:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 160u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DE974u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x089DE974u) goto L_089DE974;
    return;
L_089DE974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEB4C;
      }
      goto L_089DE97C;
    }
L_089DE97C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DE9B0;
      }
      goto L_089DE994;
    }
L_089DE994:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 161u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DE9A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x089DE9A8u) goto L_089DE9A8;
    return;
L_089DE9A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEB4C;
      }
      goto L_089DE9B0;
    }
L_089DE9B0:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DE9E4;
      }
      goto L_089DE9C8;
    }
L_089DE9C8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 162u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DE9DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x089DE9DCu) goto L_089DE9DC;
    return;
L_089DE9DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEB4C;
      }
      goto L_089DE9E4;
    }
L_089DE9E4:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DEA18;
      }
      goto L_089DE9FC;
    }
L_089DE9FC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 77u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DEA10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x089DEA10u) goto L_089DEA10;
    return;
L_089DEA10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEB4C;
      }
      goto L_089DEA18;
    }
L_089DEA18:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DEA4C;
      }
      goto L_089DEA30;
    }
L_089DEA30:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DEA44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x089DEA44u) goto L_089DEA44;
    return;
L_089DEA44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEB4C;
      }
      goto L_089DEA4C;
    }
L_089DEA4C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DEA80;
      }
      goto L_089DEA64;
    }
L_089DEA64:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 193u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DEA78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x089DEA78u) goto L_089DEA78;
    return;
L_089DEA78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEB4C;
      }
      goto L_089DEA80;
    }
L_089DEA80:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 70u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DEAB4;
      }
      goto L_089DEA98;
    }
L_089DEA98:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DEAACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x089DEAACu) goto L_089DEAAC;
    return;
L_089DEAAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEB4C;
      }
      goto L_089DEAB4;
    }
L_089DEAB4:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 71u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DEAE8;
      }
      goto L_089DEACC;
    }
L_089DEACC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 205u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DEAE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x089DEAE0u) goto L_089DEAE0;
    return;
L_089DEAE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEB4C;
      }
      goto L_089DEAE8;
    }
L_089DEAE8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089DEAF4u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 635u, 0x0896EEC4u>(ctx, &aot_mem) && ctx.pc == 0x089DEAF4u) goto L_089DEAF4;
    return;
L_089DEAF4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089DEB10;
      }
      goto L_089DEB00;
    }
L_089DEB00:
    ctx.gpr[31] = (0x089DEB08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 628u, 0x0896EE50u>(ctx, &aot_mem) && ctx.pc == 0x089DEB08u) goto L_089DEB08;
    return;
L_089DEB08:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (2269u << 16u);
    goto L_089DEB10;
L_089DEB10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DEB4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 130u, 0x0886493Cu>(ctx, &aot_mem) && ctx.pc == 0x089DEB4Cu) goto L_089DEB4C;
    return;
L_089DEB4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DEB54;
    }
L_089DEB54:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DEB6Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DEB6Cu) goto L_089DEB6C;
    return;
L_089DEB6C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089DEB78u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 635u, 0x0896EEC4u>(ctx, &aot_mem) && ctx.pc == 0x089DEB78u) goto L_089DEB78;
    return;
L_089DEB78:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[18] = (2269u << 16u);
        goto L_089DEB94;
    }
    goto L_089DEB84;
L_089DEB84:
    ctx.gpr[31] = (0x089DEB8Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 628u, 0x0896EE50u>(ctx, &aot_mem) && ctx.pc == 0x089DEB8Cu) goto L_089DEB8C;
    return;
L_089DEB8C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (2269u << 16u);
    goto L_089DEB94;
L_089DEB94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x089DEBC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 124u, 0x088648C0u>(ctx, &aot_mem) && ctx.pc == 0x089DEBC8u) goto L_089DEBC8;
    return;
L_089DEBC8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15292)));
    ctx.gpr[31] = (0x089DEBDCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 638u, 0x08B02E50u>(ctx, &aot_mem) && ctx.pc == 0x089DEBDCu) goto L_089DEBDC;
    return;
L_089DEBDC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DEBF0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089DEBF0u) goto L_089DEBF0;
    return;
L_089DEBF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DEBF8;
    }
L_089DEBF8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DEC10u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DEC10u) goto L_089DEC10;
    return;
L_089DEC10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DEC20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15292)));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 259u, 0x08B053B0u>(ctx, &aot_mem) && ctx.pc == 0x089DEC20u) goto L_089DEC20;
    return;
L_089DEC20:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEC50;
      }
      goto L_089DEC2C;
    }
L_089DEC2C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x089DEC3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 128u, 0x0886491Cu>(ctx, &aot_mem) && ctx.pc == 0x089DEC3Cu) goto L_089DEC3C;
    return;
L_089DEC3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DEC48u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 630u, 0x0896EE78u>(ctx, &aot_mem) && ctx.pc == 0x089DEC48u) goto L_089DEC48;
    return;
L_089DEC48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEC5C;
      }
      goto L_089DEC50;
    }
L_089DEC50:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089DEC5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5988));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089DEC5Cu) goto L_089DEC5C;
    return;
L_089DEC5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DEC64;
    }
L_089DEC64:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DEC7Cu);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DEC7Cu) goto L_089DEC7C;
    return;
L_089DEC7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DEC8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089DEC8Cu) goto L_089DEC8C;
    return;
L_089DEC8C:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x089DECA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24272));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 498u, 0x089574ECu>(ctx, &aot_mem) && ctx.pc == 0x089DECA0u) goto L_089DECA0;
    return;
L_089DECA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DECAC;
      }
      goto L_089DECA8;
    }
L_089DECA8:
    ctx.gpr[17] = (0u | 1u);
    goto L_089DECAC;
L_089DECAC:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_089DECD8;
      }
      goto L_089DECD0;
    }
L_089DECD0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089DED28;
      }
      goto L_089DECD8;
    }
L_089DECD8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089DED08;
    }
    goto L_089DECF4;
L_089DECF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DED28;
      }
      goto L_089DED08;
    }
L_089DED08:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DED28;
      }
      goto L_089DED24;
    }
L_089DED24:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089DED28;
L_089DED28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DED34;
      }
      goto L_089DED30;
    }
L_089DED30:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089DED34;
L_089DED34:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DED5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-405));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 220u, 0x089E1308u>(ctx, &aot_mem); return;
      }
      goto L_089DED98;
    }
L_089DED98:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-405));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-5568)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DEDB4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DEDCCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DEDCCu) goto L_089DEDCC;
    return;
L_089DEDCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DEDDCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089DEDDCu) goto L_089DEDDC;
    return;
L_089DEDDC:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x089DEDECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24272));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 486u, 0x08957450u>(ctx, &aot_mem) && ctx.pc == 0x089DEDECu) goto L_089DEDEC;
    return;
L_089DEDEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DEDF4;
    }
L_089DEDF4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DEE0Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DEE0Cu) goto L_089DEE0C;
    return;
L_089DEE0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DEE1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089DEE1Cu) goto L_089DEE1C;
    return;
L_089DEE1C:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x089DEE2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24272));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 493u, 0x089574ACu>(ctx, &aot_mem) && ctx.pc == 0x089DEE2Cu) goto L_089DEE2C;
    return;
L_089DEE2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DEE34;
    }
L_089DEE34:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DEE4Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DEE4Cu) goto L_089DEE4C;
    return;
L_089DEE4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DEE5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089DEE5Cu) goto L_089DEE5C;
    return;
L_089DEE5C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089DEE8Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x089DEE8Cu) goto L_089DEE8C;
    return;
L_089DEE8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DEE94;
    }
L_089DEE94:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DEEACu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DEEACu) goto L_089DEEAC;
    return;
L_089DEEAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DEEBCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089DEEBCu) goto L_089DEEBC;
    return;
L_089DEEBC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089DEEECu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x089DEEECu) goto L_089DEEEC;
    return;
L_089DEEEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DEEF4;
    }
L_089DEEF4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DEF10u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DEF10u) goto L_089DEF10;
    return;
L_089DEF10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DEF20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089DEF20u) goto L_089DEF20;
    return;
L_089DEF20:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089DEF54;
      }
      goto L_089DEF44;
    }
L_089DEF44:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089DEF50u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x089DEF50u) goto L_089DEF50;
    return;
L_089DEF50:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DEF54;
L_089DEF54:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DEF94u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1049u, 0x08893758u>(ctx, &aot_mem) && ctx.pc == 0x089DEF94u) goto L_089DEF94;
    return;
L_089DEF94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DEF9C;
    }
L_089DEF9C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x089DEFB8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DEFB8u) goto L_089DEFB8;
    return;
L_089DEFB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DEFC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089DEFC8u) goto L_089DEFC8;
    return;
L_089DEFC8:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089DEFF4;
      }
      goto L_089DEFE8;
    }
L_089DEFE8:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_089DEFF4;
L_089DEFF4:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_089DF014;
    }
    goto L_089DF004;
L_089DF004:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_089DF014;
L_089DF014:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = ctx.fpr[13] + ctx.fpr[24];
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089DF03Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x089DF03Cu) goto L_089DF03C;
    return;
L_089DF03C:
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[24];
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[26];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089DF05C;
      }
      goto L_089DF054;
    }
L_089DF054:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089DF05C;
      }
      goto L_089DF05C;
    }
L_089DF05C:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DF0A4u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1107u, 0x08893BA8u>(ctx, &aot_mem) && ctx.pc == 0x089DF0A4u) goto L_089DF0A4;
    return;
L_089DF0A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DF0AC;
    }
L_089DF0AC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DF0C4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF0C4u) goto L_089DF0C4;
    return;
L_089DF0C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DF0D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089DF0D4u) goto L_089DF0D4;
    return;
L_089DF0D4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089DF104u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x089DF104u) goto L_089DF104;
    return;
L_089DF104:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DF10C;
    }
L_089DF10C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089DF11Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 708u, 0x0887F408u>(ctx, &aot_mem) && ctx.pc == 0x089DF11Cu) goto L_089DF11C;
    return;
L_089DF11C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DF124;
    }
L_089DF124:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089DF134u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 781u, 0x0887F89Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF134u) goto L_089DF134;
    return;
L_089DF134:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DF13C;
    }
L_089DF13C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089DF14Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 858u, 0x0887FD14u>(ctx, &aot_mem) && ctx.pc == 0x089DF14Cu) goto L_089DF14C;
    return;
L_089DF14C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DF154;
    }
L_089DF154:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089DF164u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 624u, 0x0887EDE4u>(ctx, &aot_mem) && ctx.pc == 0x089DF164u) goto L_089DF164;
    return;
L_089DF164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DF16C;
    }
L_089DF16C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DF188u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF188u) goto L_089DF188;
    return;
L_089DF188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DF1C4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x089DF1C4u) goto L_089DF1C4;
    return;
L_089DF1C4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DF1D0;
    }
L_089DF1D0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DF1ECu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF1ECu) goto L_089DF1EC;
    return;
L_089DF1EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DF1FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089DF1FCu) goto L_089DF1FC;
    return;
L_089DF1FC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DF214u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x089DF214u) goto L_089DF214;
    return;
L_089DF214:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DF220u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 596u, 0x0899F290u>(ctx, &aot_mem) && ctx.pc == 0x089DF220u) goto L_089DF220;
    return;
L_089DF220:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF264;
      }
      goto L_089DF22C;
    }
L_089DF22C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF264;
      }
      goto L_089DF238;
    }
L_089DF238:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089DF258u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF258u) goto L_089DF258;
    return;
L_089DF258:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x089DF264u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 576u, 0x0899F198u>(ctx, &aot_mem) && ctx.pc == 0x089DF264u) goto L_089DF264;
    return;
L_089DF264:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DF26C;
    }
L_089DF26C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DF284u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF284u) goto L_089DF284;
    return;
L_089DF284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[31] = (0x089DF2ACu);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF2ACu) goto L_089DF2AC;
    return;
L_089DF2AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF2F4;
      }
      goto L_089DF2B4;
    }
L_089DF2B4:
    ctx.gpr[31] = (0x089DF2BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF2BCu) goto L_089DF2BC;
    return;
L_089DF2BC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(404));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[31] = (0x089DF2D4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF2D4u) goto L_089DF2D4;
    return;
L_089DF2D4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(404));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[31] = (0x089DF2ECu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF2ECu) goto L_089DF2EC;
    return;
L_089DF2EC:
    ctx.gpr[31] = (0x089DF2F4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 887u, 0x089A3C28u>(ctx, &aot_mem) && ctx.pc == 0x089DF2F4u) goto L_089DF2F4;
    return;
L_089DF2F4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF358;
      }
      goto L_089DF308;
    }
L_089DF308:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DF314u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 267u, 0x089D9220u>(ctx, &aot_mem) && ctx.pc == 0x089DF314u) goto L_089DF314;
    return;
L_089DF314:
    ctx.gpr[31] = (0x089DF31Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF31Cu) goto L_089DF31C;
    return;
L_089DF31C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089DF3B8;
      }
      goto L_089DF32C;
    }
L_089DF32C:
    ctx.gpr[31] = (0x089DF334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF334u) goto L_089DF334;
    return;
L_089DF334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DF3B8;
      }
      goto L_089DF340;
    }
L_089DF340:
    ctx.gpr[31] = (0x089DF348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF348u) goto L_089DF348;
    return;
L_089DF348:
    ctx.gpr[31] = (0x089DF350u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 778u, 0x0899FE78u>(ctx, &aot_mem) && ctx.pc == 0x089DF350u) goto L_089DF350;
    return;
L_089DF350:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF3B8;
      }
      goto L_089DF358;
    }
L_089DF358:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DF364u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 267u, 0x089D9220u>(ctx, &aot_mem) && ctx.pc == 0x089DF364u) goto L_089DF364;
    return;
L_089DF364:
    ctx.gpr[31] = (0x089DF36Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF36Cu) goto L_089DF36C;
    return;
L_089DF36C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 39 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DF3B8;
      }
      goto L_089DF37C;
    }
L_089DF37C:
    ctx.gpr[31] = (0x089DF384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF384u) goto L_089DF384;
    return;
L_089DF384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089DF3B8;
      }
      goto L_089DF394;
    }
L_089DF394:
    ctx.gpr[31] = (0x089DF39Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 137u, 0x088ED164u>(ctx, &aot_mem) && ctx.pc == 0x089DF39Cu) goto L_089DF39C;
    return;
L_089DF39C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DF3B8;
      }
      goto L_089DF3A8;
    }
L_089DF3A8:
    ctx.gpr[31] = (0x089DF3B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF3B0u) goto L_089DF3B0;
    return;
L_089DF3B0:
    ctx.gpr[31] = (0x089DF3B8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 778u, 0x0899FE78u>(ctx, &aot_mem) && ctx.pc == 0x089DF3B8u) goto L_089DF3B8;
    return;
L_089DF3B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DF3C0;
    }
L_089DF3C0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DF3D8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF3D8u) goto L_089DF3D8;
    return;
L_089DF3D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x089DF3E8u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 565u, 0x08932E40u>(ctx, &aot_mem) && ctx.pc == 0x089DF3E8u) goto L_089DF3E8;
    return;
L_089DF3E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DF3F0;
    }
L_089DF3F0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DF408u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF408u) goto L_089DF408;
    return;
L_089DF408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x089DF418u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 566u, 0x08932E4Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF418u) goto L_089DF418;
    return;
L_089DF418:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DF420;
    }
L_089DF420:
    ctx.gpr[31] = (0x089DF428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 567u, 0x08932E68u>(ctx, &aot_mem) && ctx.pc == 0x089DF428u) goto L_089DF428;
    return;
L_089DF428:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DF430;
    }
L_089DF430:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DF44Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF44Cu) goto L_089DF44C;
    return;
L_089DF44C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DF488;
      }
      goto L_089DF47C;
    }
L_089DF47C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089DF4DC;
      }
      goto L_089DF488;
    }
L_089DF488:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF4DC;
      }
      goto L_089DF498;
    }
L_089DF498:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089DF4CC;
      }
      goto L_089DF4C4;
    }
L_089DF4C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089DF4CC;
L_089DF4CC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DF498;
      }
      goto L_089DF4DC;
    }
L_089DF4DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DF4E4;
    }
L_089DF4E4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DF500u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF500u) goto L_089DF500;
    return;
L_089DF500:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DF510u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089DF510u) goto L_089DF510;
    return;
L_089DF510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089DF530;
      }
      goto L_089DF51C;
    }
L_089DF51C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DF528u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 596u, 0x0899F290u>(ctx, &aot_mem) && ctx.pc == 0x089DF528u) goto L_089DF528;
    return;
L_089DF528:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF584;
      }
      goto L_089DF530;
    }
L_089DF530:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF584;
      }
      goto L_089DF540;
    }
L_089DF540:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089DF574;
      }
      goto L_089DF568;
    }
L_089DF568:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DF574u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 596u, 0x0899F290u>(ctx, &aot_mem) && ctx.pc == 0x089DF574u) goto L_089DF574;
    return;
L_089DF574:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DF540;
      }
      goto L_089DF584;
    }
L_089DF584:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DF58C;
    }
L_089DF58C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DF5ACu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF5ACu) goto L_089DF5AC;
    return;
L_089DF5AC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[31] = (0x089DF5BCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x089DF5BCu) goto L_089DF5BC;
    return;
L_089DF5BC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DF5F4u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089DF5F4u) goto L_089DF5F4;
    return;
L_089DF5F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DF5FC;
    }
L_089DF5FC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DF618u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF618u) goto L_089DF618;
    return;
L_089DF618:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DF628u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x089DF628u) goto L_089DF628;
    return;
L_089DF628:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089DF65C;
      }
      goto L_089DF64C;
    }
L_089DF64C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089DF658u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x089DF658u) goto L_089DF658;
    return;
L_089DF658:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DF65C;
L_089DF65C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089DF688u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DF688u) goto L_089DF688;
    return;
L_089DF688:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DF6A0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 509u, 0x08882624u>(ctx, &aot_mem) && ctx.pc == 0x089DF6A0u) goto L_089DF6A0;
    return;
L_089DF6A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DF6A8;
    }
L_089DF6A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DF6C8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089DF6C8u) goto L_089DF6C8;
    return;
L_089DF6C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DF6D0;
    }
L_089DF6D0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DF6E8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF6E8u) goto L_089DF6E8;
    return;
L_089DF6E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DF6F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089DF6F8u) goto L_089DF6F8;
    return;
L_089DF6F8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF730;
      }
      goto L_089DF708;
    }
L_089DF708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF730;
      }
      goto L_089DF714;
    }
L_089DF714:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF744;
      }
      goto L_089DF730;
    }
L_089DF730:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    goto L_089DF744;
L_089DF744:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x089DF798u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089DF798u) goto L_089DF798;
    return;
L_089DF798:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16329u << 16u);
      if (branch_taken) {
          goto L_089DF7C4;
      }
      goto L_089DF7B0;
    }
L_089DF7B0:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16329u << 16u);
    goto L_089DF7C4;
L_089DF7C4:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DF7FC;
      }
      goto L_089DF7EC;
    }
L_089DF7EC:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_089DF7FC;
L_089DF7FC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DF814;
      }
      goto L_089DF804;
    }
L_089DF804:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089DF814u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x089DF814u) goto L_089DF814;
    return;
L_089DF814:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DF81C;
    }
L_089DF81C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DF834u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF834u) goto L_089DF834;
    return;
L_089DF834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF898;
      }
      goto L_089DF868;
    }
L_089DF868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF898;
      }
      goto L_089DF878;
    }
L_089DF878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF8B0;
      }
      goto L_089DF898;
    }
L_089DF898:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    goto L_089DF8B0;
L_089DF8B0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x089DF904u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089DF904u) goto L_089DF904;
    return;
L_089DF904:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16329u << 16u);
      if (branch_taken) {
          goto L_089DF930;
      }
      goto L_089DF91C;
    }
L_089DF91C:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16329u << 16u);
    goto L_089DF930;
L_089DF930:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DF968;
      }
      goto L_089DF958;
    }
L_089DF958:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_089DF968;
L_089DF968:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DF988;
      }
      goto L_089DF970;
    }
L_089DF970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089DF988u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x089DF988u) goto L_089DF988;
    return;
L_089DF988:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DF990;
    }
L_089DF990:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DF9ACu);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF9ACu) goto L_089DF9AC;
    return;
L_089DF9AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[6]);
    ctx.gpr[31] = (0x089DF9ECu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089DF9ECu) goto L_089DF9EC;
    return;
L_089DF9EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DF9F4;
    }
L_089DF9F4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DFA0Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DFA0Cu) goto L_089DFA0C;
    return;
L_089DFA0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DFA1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089DFA1Cu) goto L_089DFA1C;
    return;
L_089DFA1C:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089DFA2Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 131u, 0x0887C998u>(ctx, &aot_mem) && ctx.pc == 0x089DFA2Cu) goto L_089DFA2C;
    return;
L_089DFA2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          goto L_089DFA38;
      }
      goto L_089DFA34;
    }
L_089DFA34:
    ctx.gpr[4] = (0u | 1u);
    goto L_089DFA38;
L_089DFA38:
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
          goto L_089DFA64;
      }
      goto L_089DFA5C;
    }
L_089DFA5C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DFAB4;
      }
      goto L_089DFA64;
    }
L_089DFA64:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089DFA94;
    }
    goto L_089DFA80;
L_089DFA80:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DFAB4;
      }
      goto L_089DFA94;
    }
L_089DFA94:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFAB4;
      }
      goto L_089DFAB0;
    }
L_089DFAB0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089DFAB4;
L_089DFAB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DFABC;
    }
L_089DFABC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DFAD4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DFAD4u) goto L_089DFAD4;
    return;
L_089DFAD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DFAE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089DFAE4u) goto L_089DFAE4;
    return;
L_089DFAE4:
    ctx.gpr[31] = (0x089DFAECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 154u, 0x0887CAECu>(ctx, &aot_mem) && ctx.pc == 0x089DFAECu) goto L_089DFAEC;
    return;
L_089DFAEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFB10;
      }
      goto L_089DFAF8;
    }
L_089DFAF8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DFB10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 194u, 0x08958B90u>(ctx, &aot_mem) && ctx.pc == 0x089DFB10u) goto L_089DFB10;
    return;
L_089DFB10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DFB18;
    }
L_089DFB18:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DFB30u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DFB30u) goto L_089DFB30;
    return;
L_089DFB30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DFB40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089DFB40u) goto L_089DFB40;
    return;
L_089DFB40:
    ctx.gpr[31] = (0x089DFB48u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 198u, 0x0887CD7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DFB48u) goto L_089DFB48;
    return;
L_089DFB48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFB6C;
      }
      goto L_089DFB54;
    }
L_089DFB54:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DFB6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 194u, 0x08958B90u>(ctx, &aot_mem) && ctx.pc == 0x089DFB6Cu) goto L_089DFB6C;
    return;
L_089DFB6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DFB74;
    }
L_089DFB74:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DFB8Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DFB8Cu) goto L_089DFB8C;
    return;
L_089DFB8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DFB9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x089DFB9Cu) goto L_089DFB9C;
    return;
L_089DFB9C:
    ctx.gpr[31] = (0x089DFBA4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 203u, 0x0887CDF0u>(ctx, &aot_mem) && ctx.pc == 0x089DFBA4u) goto L_089DFBA4;
    return;
L_089DFBA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFBC8;
      }
      goto L_089DFBB0;
    }
L_089DFBB0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DFBC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 194u, 0x08958B90u>(ctx, &aot_mem) && ctx.pc == 0x089DFBC8u) goto L_089DFBC8;
    return;
L_089DFBC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DFBD0;
    }
L_089DFBD0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DFBE8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DFBE8u) goto L_089DFBE8;
    return;
L_089DFBE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DFBF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089DFBF8u) goto L_089DFBF8;
    return;
L_089DFBF8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DFC0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 194u, 0x08958B90u>(ctx, &aot_mem) && ctx.pc == 0x089DFC0Cu) goto L_089DFC0C;
    return;
L_089DFC0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DFC14;
    }
L_089DFC14:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DFC2Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DFC2Cu) goto L_089DFC2C;
    return;
L_089DFC2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DFC3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089DFC3Cu) goto L_089DFC3C;
    return;
L_089DFC3C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DFC50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 194u, 0x08958B90u>(ctx, &aot_mem) && ctx.pc == 0x089DFC50u) goto L_089DFC50;
    return;
L_089DFC50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DFC58;
    }
L_089DFC58:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DFC70u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DFC70u) goto L_089DFC70;
    return;
L_089DFC70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DFC80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x089DFC80u) goto L_089DFC80;
    return;
L_089DFC80:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DFC94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 194u, 0x08958B90u>(ctx, &aot_mem) && ctx.pc == 0x089DFC94u) goto L_089DFC94;
    return;
L_089DFC94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 221u, 0x089E130Cu>(ctx, &aot_mem); return;
      }
      goto L_089DFC9C;
    }
L_089DFC9C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DFCB8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089DFCB8u) goto L_089DFCB8;
    return;
L_089DFCB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DFCC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089DFCC8u) goto L_089DFCC8;
    return;
L_089DFCC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089DFE20;
      }
      goto L_089DFCDC;
    }
L_089DFCDC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DFD38;
      }
      goto L_089DFCEC;
    }
L_089DFCEC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089DFD68;
      }
      goto L_089DFCF4;
    }
L_089DFCF4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089DFD98;
      }
      goto L_089DFCFC;
    }
L_089DFCFC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089DFDC8;
      }
      goto L_089DFD04;
    }
L_089DFD04:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089DFDF8;
      }
      goto L_089DFD0C;
    }
L_089DFD0C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DFD30;
      }
      goto L_089DFD24;
    }
L_089DFD24:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    goto L_089DFD30;
L_089DFD30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFE20;
      }
      goto L_089DFD38;
    }
L_089DFD38:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DFD60;
      }
      goto L_089DFD50;
    }
L_089DFD50:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_089DFD60;
L_089DFD60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFE20;
      }
      goto L_089DFD68;
    }
L_089DFD68:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DFD90;
      }
      goto L_089DFD80;
    }
L_089DFD80:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_089DFD90;
L_089DFD90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFE20;
      }
      goto L_089DFD98;
    }
L_089DFD98:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DFDC0;
      }
      goto L_089DFDB0;
    }
L_089DFDB0:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_089DFDC0;
L_089DFDC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFE20;
      }
      goto L_089DFDC8;
    }
L_089DFDC8:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DFDF0;
      }
      goto L_089DFDE0;
    }
L_089DFDE0:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_089DFDF0;
L_089DFDF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFE20;
      }
      goto L_089DFDF8;
    }
L_089DFDF8:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DFE20;
      }
      goto L_089DFE10;
    }
L_089DFE10:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 17u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_089DFE20;
L_089DFE20:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DFE70;
      }
      goto L_089DFE38;
    }
L_089DFE38:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089DFE44u);
    ctx.gpr[4] = (0u | 2128u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 251u, 0x0899DA4Cu>(ctx, &aot_mem) && ctx.pc == 0x089DFE44u) goto L_089DFE44;
    return;
L_089DFE44:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089DFE68;
      }
      goto L_089DFE50;
    }
L_089DFE50:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089DFE64u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 738u, 0x08A8F7E4u>(ctx, &aot_mem) && ctx.pc == 0x089DFE64u) goto L_089DFE64;
    return;
L_089DFE64:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089DFE68;
L_089DFE68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_089DFF04;
      }
      goto L_089DFE70;
    }
L_089DFE70:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2269u << 16u);
      if (branch_taken) {
          goto L_089DFE9C;
      }
      goto L_089DFE88;
    }
L_089DFE88:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DFED0;
      }
      goto L_089DFE9C;
    }
L_089DFE9C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089DFEA8u);
    ctx.gpr[4] = (0u | 2096u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 251u, 0x0899DA4Cu>(ctx, &aot_mem) && ctx.pc == 0x089DFEA8u) goto L_089DFEA8;
    return;
L_089DFEA8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089DFEC8;
      }
      goto L_089DFEB4;
    }
L_089DFEB4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089DFEC4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 442u, 0x0894E898u>(ctx, &aot_mem) && ctx.pc == 0x089DFEC4u) goto L_089DFEC4;
    return;
L_089DFEC4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089DFEC8;
L_089DFEC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_089DFF04;
      }
      goto L_089DFED0;
    }
L_089DFED0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089DFEDCu);
    ctx.gpr[4] = (0u | 2160u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 251u, 0x0899DA4Cu>(ctx, &aot_mem) && ctx.pc == 0x089DFEDCu) goto L_089DFEDC;
    return;
L_089DFEDC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089DFF00;
      }
      goto L_089DFEE8;
    }
L_089DFEE8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089DFEFCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 147u, 0x089FD534u>(ctx, &aot_mem) && ctx.pc == 0x089DFEFCu) goto L_089DFEFC;
    return;
L_089DFEFC:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089DFF00;
L_089DFF00:
    ctx.gpr[5] = (0u | 2u);
    goto L_089DFF04;
L_089DFF04:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (65504u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFF70;
      }
      goto L_089DFF5C;
    }
L_089DFF5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089DFF70;
L_089DFF70:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089DFFBCu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x089DFFBCu) goto L_089DFFBC;
    return;
L_089DFFBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (0x089DFFD0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x089DFFD0u) goto L_089DFFD0;
    return;
L_089DFFD0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300), ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[31] = (0x089DFFF0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 282u, 0x08871B18u>(ctx, &aot_mem) && ctx.pc == 0x089DFFF0u) goto L_089DFFF0;
    return;
L_089DFFF0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(326), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x089DFFFCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x089DFFFCu) goto L_089DFFFC;
    return;
L_089DFFFC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.pc = 0x089E0000u; return;
}

void recomp_unit_0118(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0118_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_118(Runtime &runtime) {
    runtime.register_generated_unit(118u, 0x089DC000u, 16384u, &recomp_unit_0118, &recomp_unit_0118_entry);
    runtime.register_function(0x089DC000u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC014u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC07Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC0B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC0C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC0CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC0E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC0E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC0F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC104u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC10Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC110u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC128u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC148u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC154u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC164u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC16Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC170u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC188u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC1A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC1DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC1E4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC1F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC204u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC20Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC218u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC224u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC234u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC23Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC240u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC258u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC2CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC2D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC2ECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC2F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC2F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC328u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC33Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC37Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC3A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC3ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC3C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC450u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC47Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC490u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC4D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC51Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC528u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC56Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC59Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC5A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC5CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC5D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC5DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC5E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC5F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC634u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC6C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC6FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC718u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC730u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC764u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC768u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC78Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC794u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC7B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC7C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC7E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC7E4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC7ECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC808u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC818u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC828u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC830u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC834u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC858u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC860u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC87Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC890u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC8ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC8B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC8B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC8D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC8E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC8F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC908u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC914u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC91Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC920u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC944u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC94Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC968u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC97Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC998u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC99Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC9A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC9C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCA20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCA34u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCA3Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCA58u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCA8Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCA94u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCA9Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCAB4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCABCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCAC4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCADCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCAE0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCAE8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCAFCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB44u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB4Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB64u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB6Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB7Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB94u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB9Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCBB0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCBD4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC00u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC08u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC18u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC58u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC80u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC94u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCCDCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCCECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD00u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD24u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD3Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD5Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD6Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD74u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD78u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCDB0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCDC0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCDCCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCDD4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCDECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCDFCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE34u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE44u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE50u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE5Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE68u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE84u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE94u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCEA4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCEB4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCEBCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCEC4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCEC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCEECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCEF4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF10u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF24u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF40u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF44u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF4Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF84u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCFACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCFB4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCFC4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCFCCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCFD0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCFF4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD004u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD010u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD018u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD03Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD050u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD078u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD080u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD090u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD098u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD09Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD0C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD0D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD0DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD0E4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD100u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD12Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD134u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD14Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD15Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD168u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD198u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD1A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD1B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD1C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD1D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD204u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD20Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD218u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD220u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD240u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD264u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD278u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD284u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD294u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD29Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD2A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD358u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD368u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD374u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD37Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD394u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD3A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD3C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD408u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD410u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD42Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD44Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD458u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD45Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD490u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD498u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD4B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD4C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD4CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD4D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD4E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD4FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD510u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD518u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD530u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD540u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD54Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD554u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD560u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD57Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD590u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD598u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD5B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD5B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD5C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD5DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD5E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD5F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD60Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD618u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD620u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD63Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD65Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD668u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD66Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD67Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD684u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD690u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD6B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD6CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD6D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD6F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD6FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD704u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD720u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD744u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD74Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD764u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD788u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD790u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD79Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7E4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD808u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD810u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD82Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD840u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD85Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD860u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD868u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD884u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD8A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD8B4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD8B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD8D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD8DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD8F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD91Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD928u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD92Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD948u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD950u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD96Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD990u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD99Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD9A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD9BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD9C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD9DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA10u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA44u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA58u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA60u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA68u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA6Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA90u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDAB0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDAC4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDACCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDAD4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDAD8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDAF4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB08u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB14u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB5Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB74u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDBA8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDBF4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDBFCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC14u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC24u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC34u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC3Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC40u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC48u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC64u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC78u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC80u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC88u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC8Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDCB0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDCCCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDCE0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDCE8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDCF0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDCF4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD10u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD24u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD48u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD78u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD90u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDDA0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDDB0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDDB8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDDBCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDDC4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE08u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE10u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE28u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE68u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE78u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE7Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDEACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDEB8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDED0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDEDCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDEF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF00u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF1Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF5Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF74u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF84u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDFA0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDFB4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDFBCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDFC4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDFC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDFF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE004u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE01Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE028u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE044u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE04Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE068u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE078u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE084u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE0ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE0B4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE0BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE0C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE0CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE0E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE11Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE130u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE140u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE150u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE158u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE160u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE16Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE174u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE178u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE19Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE1A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE1C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE1D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE1F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE1F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE1FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE218u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE24Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE254u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE270u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE280u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE290u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE298u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE2A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE2C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE2CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE2E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE330u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE338u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE33Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE360u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE368u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE384u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE398u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE3B4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE3B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE3C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE3DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE3ECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE40Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE414u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE418u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE43Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE444u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE460u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE474u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE490u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE494u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE49Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE4B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE4C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE4E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE4F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE4F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE518u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE520u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE53Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE550u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE56Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE570u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE578u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE590u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5B4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE604u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE61Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE62Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE638u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE640u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE64Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE664u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE674u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE688u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE690u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE6A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE6B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE6C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE6CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE6D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE6F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE700u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE714u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE71Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE738u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE758u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE764u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE768u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE778u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE780u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE78Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE7ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE7BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE7D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE7DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE7F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE818u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE824u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE828u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE838u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE840u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE84Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE86Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE87Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE894u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE89Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE8B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE8C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE8CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE8E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE8F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE90Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE914u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE92Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE940u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE948u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE960u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE974u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE97Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE994u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE9A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE9B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE9C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE9DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE9E4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE9FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA10u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA18u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA44u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA4Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA64u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA78u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA80u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA98u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEAACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEAB4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEACCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEAE0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEAE8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEAF4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB00u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB08u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB10u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB4Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB6Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB78u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB84u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB8Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB94u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEBC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEBDCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEBF0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEBF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC10u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC3Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC48u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC50u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC5Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC64u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC7Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC8Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DECA0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DECA8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DECACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DECD0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DECD8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DECF4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED08u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED24u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED28u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED34u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED5Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED98u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEDB4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEDCCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEDDCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEDECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEDF4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE0Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE1Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE34u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE4Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE5Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE8Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE94u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEEACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEEBCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEEECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEEF4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF10u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF44u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF50u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF94u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF9Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEFB8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEFC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEFE8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEFF4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF004u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF014u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF03Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF054u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF05Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF0A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF0ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF0C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF0D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF104u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF10Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF11Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF124u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF134u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF13Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF14Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF154u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF164u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF16Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF188u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF1C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF1D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF1ECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF1FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF214u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF220u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF22Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF238u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF258u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF264u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF26Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF284u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2B4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2ECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF308u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF314u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF31Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF32Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF334u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF340u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF348u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF350u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF358u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF364u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF36Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF37Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF384u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF394u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF39Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF3A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF3B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF3B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF3C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF3D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF3E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF3F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF408u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF418u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF420u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF428u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF430u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF44Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF47Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF488u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF498u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF4C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF4CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF4DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF4E4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF500u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF510u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF51Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF528u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF530u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF540u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF568u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF574u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF584u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF58Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF5ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF5BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF5F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF5FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF618u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF628u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF64Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF658u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF65Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF688u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF6A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF6A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF6C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF6D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF6E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF6F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF708u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF714u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF730u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF744u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF798u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF7B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF7C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF7ECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF7FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF804u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF814u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF81Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF834u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF868u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF878u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF898u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF8B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF904u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF91Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF930u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF958u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF968u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF970u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF988u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF990u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF9ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF9ECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF9F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA0Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA1Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA34u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA5Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA64u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA80u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA94u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFAB0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFAB4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFABCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFAD4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFAE4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFAECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFAF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB10u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB18u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB40u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB48u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB6Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB74u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB8Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB9Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFBA4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFBB0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFBC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFBD0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFBE8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFBF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC0Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC14u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC3Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC50u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC58u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC80u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC94u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC9Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFCB8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFCC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFCDCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFCECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFCF4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFCFCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD04u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD0Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD24u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD50u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD60u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD68u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD80u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD90u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD98u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFDB0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFDC0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFDC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFDE0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFDF0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFDF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE10u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE44u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE50u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE64u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE68u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE88u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE9Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFEA8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFEB4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFEC4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFEC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFED0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFEDCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFEE8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFEFCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF00u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF04u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF5Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFFBCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFFD0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFFF0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFFFCu, &recomp_unit_0118, "recomp_unit_0118");
}
} // namespace psprecomp
