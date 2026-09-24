#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0139[4091] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 7, 0, 0,
    0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 14, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 18, 0, 19, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0,
    0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 28, 0, 29, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 34, 35, 0, 0, 36, 0,
    0, 37, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0, 52, 0, 53, 0, 54, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0,
    0, 60, 0, 0, 0, 61, 0, 0, 62, 0, 63, 0, 64, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 69, 70, 0, 0, 71, 0,
    0, 72, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 82, 0, 83, 0, 0, 0, 84,
    0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0,
    0, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 101,
    0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 0,
    0, 0, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0,
    135, 0, 0, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 0, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 160, 0, 161, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 165, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 170,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 185, 0, 0, 186, 0, 187,
    0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 197,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 202, 0, 203, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 210, 0, 0, 0, 211, 0, 0, 212,
    0, 0, 213, 0, 0, 214, 215, 0, 216, 0, 0, 0, 0, 217, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 222, 0, 223,
    0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 233,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 242,
    0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 248, 0, 249, 0, 250, 0,
    0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 265, 0, 266, 0, 0, 0, 0, 267, 0, 268, 0, 269, 0,
    0, 0, 0, 270, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0,
    0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0,
    0, 288, 0, 289, 0, 290, 291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0,
    0, 0, 0, 0, 296, 297, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 302, 0, 0, 0, 303, 0, 304, 0, 305,
    0, 306, 0, 307, 0, 308, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0,
    0, 0, 0, 0, 314, 315, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 319, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321,
    0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 326, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0,
    0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 338, 0, 339, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 344, 0,
    0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0,
    0, 351, 0, 352, 0, 353, 0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357,
    0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0,
    0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 368, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0,
    0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 382, 0, 0, 383, 0, 0, 0,
    0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 390, 0, 391, 0, 392, 0, 0,
    0, 393, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 400, 0,
    0, 401, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 410, 0, 411,
    0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 418, 0, 419, 0, 420, 0, 0, 421, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0,
    0, 0, 424, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0,
    0, 0, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 434, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437,
    0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 442, 443,
    0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 449, 0,
    450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 453, 0, 454, 0, 455, 456, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0,
    0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 461, 462, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 468, 0, 469, 0, 0, 0, 0, 470, 471, 0,
    0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477,
    0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 0, 0, 481, 0, 482, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484,
    0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 488, 489, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0,
    0, 492, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 0, 495, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 498, 0, 0, 0,
    0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 501, 502, 0, 503, 0, 0, 0, 0, 0, 504, 0, 505, 0, 0, 0, 0, 0,
    0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 518, 0, 519, 0, 520, 0, 0, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0,
    0, 0, 523, 0, 524, 0, 525, 0, 0, 526, 0, 527, 0, 528, 0, 0, 529, 0, 530, 0, 531, 0, 0, 532, 0, 533, 0, 534, 0, 0, 535, 0,
    536, 0, 0, 537, 0, 0, 538, 0, 539, 0, 540, 0, 0, 541, 0, 542, 0, 543, 0, 0, 544, 0, 545, 0, 546, 0, 0, 547, 0, 548, 0, 549,
    0, 0, 550, 0, 551, 0, 552, 0, 0, 553, 0, 554, 0, 555, 0, 0, 556, 0, 557, 0, 558, 0, 0, 559, 0, 560, 0, 561, 0, 0, 562, 0,
    563, 0, 564, 0, 0, 565, 0, 566, 0, 567, 0, 0, 568, 0, 569, 0, 570, 0, 0, 571, 0, 572, 0, 573, 0, 0, 574, 0, 575, 0, 576, 0,
    0, 577, 0, 578, 0, 579, 0, 0, 580, 0, 581, 0, 582, 0, 0, 583, 0, 584, 0, 585, 0, 0, 586, 0, 587, 0, 588, 0, 0, 589, 0, 590,
    0, 591, 0, 0, 592, 0, 593, 0, 594, 0, 0, 595, 0, 596, 0, 597, 0, 0, 598, 0, 599, 0, 600, 0, 0, 601, 0, 602, 0, 603, 0, 0,
    604, 0, 605, 0, 606, 0, 0, 607, 0, 608, 0, 609, 0, 0, 610, 0, 611, 0, 612, 0, 0, 613, 0, 614, 0, 615, 0, 0, 616, 0, 617, 0,
    618, 0, 0, 619, 0, 620, 0, 621, 0, 0, 622, 0, 623, 0, 624, 0, 0, 625, 0, 626, 0, 627, 0, 0, 628, 0, 629, 0, 630, 0, 0, 631,
    0, 632, 0, 633, 0, 0, 634, 0, 635, 0, 636, 0, 0, 637, 0, 638, 0, 639, 0, 0, 640, 0, 641, 0, 642, 0, 0, 643, 0, 644, 0, 645,
    0, 0, 646, 0, 647, 0, 648, 0, 0, 649, 0, 650, 0, 651, 0, 0, 652, 0, 653, 0, 654, 0, 0, 655, 0, 656, 0, 657, 0, 0, 658, 0,
    0, 0, 659, 0, 660, 0, 0, 0, 661, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 664, 0, 665, 0, 666, 0, 667, 0, 0, 668, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 674, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 676, 0, 0, 677, 0, 678, 0, 0, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0,
    0, 681, 0, 0, 0, 682, 683, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 685, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0,
    0, 0, 0, 0, 688, 689, 0, 690, 0, 0, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 0, 693, 0, 0, 0, 694, 695, 0, 0, 0, 0,
    0, 0, 0, 0, 696, 0, 697, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 700, 701, 0, 702, 0, 0, 0,
    0, 0, 703, 0, 0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 706, 707, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 709, 0, 0, 0, 0,
    0, 0, 710, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 712, 713, 0, 714, 0, 0, 0, 0, 0, 715, 0, 0, 0, 716, 0, 0, 0, 0,
    717, 0, 0, 0, 718, 719, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 723, 0, 0, 0,
    0, 0, 0, 724, 725, 0, 726, 0, 727, 0, 0, 728, 0, 729, 0, 730, 0, 0, 731, 0, 0, 0, 0, 0, 0, 732, 0, 733, 0, 0, 0, 0,
    0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 736, 737, 0, 738, 0, 739, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 741, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 745, 0, 0, 746,
    0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 749, 750, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 752, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 755, 0, 0, 0, 756, 0, 757, 0, 758, 0, 759, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 760, 0, 761, 0, 0, 0, 0, 0, 762, 0, 0, 0, 763, 0, 0, 0, 764, 765, 0, 0, 0, 0, 0, 0, 0,
    0, 766, 0, 767, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 770, 771, 0, 772, 0, 0, 0, 0, 0, 773,
    0, 0, 0, 774, 0, 0, 0, 775, 776, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 778, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 780,
    0, 0, 0, 0, 0, 0, 781, 782, 0, 783, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 786, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 788, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 792, 0, 793, 0, 0, 0, 0, 0, 0, 0, 794, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 796, 0, 797, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 0, 0, 0, 0, 0, 800, 0, 0, 0, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0,
    0, 0, 0, 802, 803, 0, 804, 0, 0, 0, 0, 0, 805, 0, 806, 0, 0, 0, 0, 0, 807, 0, 0, 0, 808, 0, 809, 810, 0, 0, 0, 0,
    0, 0, 0, 0, 811, 0, 812, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 815, 816, 0, 817, 0, 818, 0,
    819, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0,
    824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 826, 0, 827, 0, 0, 828, 0, 0, 0, 0, 0, 0, 829, 0, 830,
};
void recomp_unit_0139_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A30000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0139[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A30000;
    case 2u: goto L_08A30004;
    case 3u: goto L_08A3002C;
    case 4u: goto L_08A30040;
    case 5u: goto L_08A30058;
    case 6u: goto L_08A30060;
    case 7u: goto L_08A30074;
    case 8u: goto L_08A30084;
    case 9u: goto L_08A300D0;
    case 10u: goto L_08A301B0;
    case 11u: goto L_08A301C4;
    case 12u: goto L_08A301D8;
    case 13u: goto L_08A301F0;
    case 14u: goto L_08A3020C;
    case 15u: goto L_08A30214;
    case 16u: goto L_08A30224;
    case 17u: goto L_08A30230;
    case 18u: goto L_08A30238;
    case 19u: goto L_08A30240;
    case 20u: goto L_08A30248;
    case 21u: goto L_08A30254;
    case 22u: goto L_08A30260;
    case 23u: goto L_08A3026C;
    case 24u: goto L_08A30278;
    case 25u: goto L_08A30284;
    case 26u: goto L_08A30294;
    case 27u: goto L_08A302A0;
    case 28u: goto L_08A302A8;
    case 29u: goto L_08A302B0;
    case 30u: goto L_08A302B8;
    case 31u: goto L_08A302C4;
    case 32u: goto L_08A302D0;
    case 33u: goto L_08A302DC;
    case 34u: goto L_08A302E8;
    case 35u: goto L_08A302EC;
    case 36u: goto L_08A302F8;
    case 37u: goto L_08A30304;
    case 38u: goto L_08A3030C;
    case 39u: goto L_08A3031C;
    case 40u: goto L_08A30324;
    case 41u: goto L_08A30338;
    case 42u: goto L_08A30354;
    case 43u: goto L_08A30384;
    case 44u: goto L_08A303D0;
    case 45u: goto L_08A304B0;
    case 46u: goto L_08A304C4;
    case 47u: goto L_08A304D8;
    case 48u: goto L_08A304F0;
    case 49u: goto L_08A3050C;
    case 50u: goto L_08A30514;
    case 51u: goto L_08A30524;
    case 52u: goto L_08A30530;
    case 53u: goto L_08A30538;
    case 54u: goto L_08A30540;
    case 55u: goto L_08A30548;
    case 56u: goto L_08A30554;
    case 57u: goto L_08A30560;
    case 58u: goto L_08A3056C;
    case 59u: goto L_08A30578;
    case 60u: goto L_08A30584;
    case 61u: goto L_08A30594;
    case 62u: goto L_08A305A0;
    case 63u: goto L_08A305A8;
    case 64u: goto L_08A305B0;
    case 65u: goto L_08A305B8;
    case 66u: goto L_08A305C4;
    case 67u: goto L_08A305D0;
    case 68u: goto L_08A305DC;
    case 69u: goto L_08A305E8;
    case 70u: goto L_08A305EC;
    case 71u: goto L_08A305F8;
    case 72u: goto L_08A30604;
    case 73u: goto L_08A3061C;
    case 74u: goto L_08A30624;
    case 75u: goto L_08A30630;
    case 76u: goto L_08A30638;
    case 77u: goto L_08A30640;
    case 78u: goto L_08A30648;
    case 79u: goto L_08A30650;
    case 80u: goto L_08A30658;
    case 81u: goto L_08A30660;
    case 82u: goto L_08A30664;
    case 83u: goto L_08A3066C;
    case 84u: goto L_08A3067C;
    case 85u: goto L_08A30698;
    case 86u: goto L_08A306C8;
    case 87u: goto L_08A306E0;
    case 88u: goto L_08A308A0;
    case 89u: goto L_08A308BC;
    case 90u: goto L_08A308F8;
    case 91u: goto L_08A3090C;
    case 92u: goto L_08A30918;
    case 93u: goto L_08A30920;
    case 94u: goto L_08A30930;
    case 95u: goto L_08A30948;
    case 96u: goto L_08A30954;
    case 97u: goto L_08A3095C;
    case 98u: goto L_08A30964;
    case 99u: goto L_08A3096C;
    case 100u: goto L_08A30974;
    case 101u: goto L_08A3097C;
    case 102u: goto L_08A30990;
    case 103u: goto L_08A309E0;
    case 104u: goto L_08A309EC;
    case 105u: goto L_08A309F4;
    case 106u: goto L_08A30A0C;
    case 107u: goto L_08A30A14;
    case 108u: goto L_08A30A1C;
    case 109u: goto L_08A30A24;
    case 110u: goto L_08A30A2C;
    case 111u: goto L_08A30A40;
    case 112u: goto L_08A30A48;
    case 113u: goto L_08A30A50;
    case 114u: goto L_08A30A58;
    case 115u: goto L_08A30A60;
    case 116u: goto L_08A30A74;
    case 117u: goto L_08A30A88;
    case 118u: goto L_08A30A9C;
    case 119u: goto L_08A30AAC;
    case 120u: goto L_08A30AB4;
    case 121u: goto L_08A30ABC;
    case 122u: goto L_08A30AC4;
    case 123u: goto L_08A30ACC;
    case 124u: goto L_08A30ADC;
    case 125u: goto L_08A30AF4;
    case 126u: goto L_08A30BB0;
    case 127u: goto L_08A30C08;
    case 128u: goto L_08A30C9C;
    case 129u: goto L_08A30CA4;
    case 130u: goto L_08A30CB8;
    case 131u: goto L_08A30CCC;
    case 132u: goto L_08A30CDC;
    case 133u: goto L_08A30CEC;
    case 134u: goto L_08A30CF4;
    case 135u: goto L_08A30D00;
    case 136u: goto L_08A30D10;
    case 137u: goto L_08A30D18;
    case 138u: goto L_08A30D20;
    case 139u: goto L_08A30D28;
    case 140u: goto L_08A30D30;
    case 141u: goto L_08A30D40;
    case 142u: goto L_08A30D48;
    case 143u: goto L_08A30D50;
    case 144u: goto L_08A30D58;
    case 145u: goto L_08A30D60;
    case 146u: goto L_08A30D70;
    case 147u: goto L_08A30E14;
    case 148u: goto L_08A30E1C;
    case 149u: goto L_08A30E2C;
    case 150u: goto L_08A30ED0;
    case 151u: goto L_08A30ED8;
    case 152u: goto L_08A30EEC;
    case 153u: goto L_08A30F3C;
    case 154u: goto L_08A30FA8;
    case 155u: goto L_08A30FC0;
    case 156u: goto L_08A30FC8;
    case 157u: goto L_08A31004;
    case 158u: goto L_08A3100C;
    case 159u: goto L_08A31020;
    case 160u: goto L_08A31028;
    case 161u: goto L_08A31030;
    case 162u: goto L_08A31044;
    case 163u: goto L_08A3104C;
    case 164u: goto L_08A31088;
    case 165u: goto L_08A31090;
    case 166u: goto L_08A310A4;
    case 167u: goto L_08A310AC;
    case 168u: goto L_08A310E0;
    case 169u: goto L_08A310E8;
    case 170u: goto L_08A310FC;
    case 171u: goto L_08A31130;
    case 172u: goto L_08A31138;
    case 173u: goto L_08A3114C;
    case 174u: goto L_08A31180;
    case 175u: goto L_08A31188;
    case 176u: goto L_08A3119C;
    case 177u: goto L_08A311D8;
    case 178u: goto L_08A311E0;
    case 179u: goto L_08A311F4;
    case 180u: goto L_08A31228;
    case 181u: goto L_08A3124C;
    case 182u: goto L_08A31330;
    case 183u: goto L_08A3134C;
    case 184u: goto L_08A31360;
    case 185u: goto L_08A31368;
    case 186u: goto L_08A31374;
    case 187u: goto L_08A3137C;
    case 188u: goto L_08A31384;
    case 189u: goto L_08A3138C;
    case 190u: goto L_08A31394;
    case 191u: goto L_08A3139C;
    case 192u: goto L_08A313A4;
    case 193u: goto L_08A313B8;
    case 194u: goto L_08A313CC;
    case 195u: goto L_08A313D8;
    case 196u: goto L_08A313F0;
    case 197u: goto L_08A313FC;
    case 198u: goto L_08A31474;
    case 199u: goto L_08A314B4;
    case 200u: goto L_08A314D0;
    case 201u: goto L_08A314E8;
    case 202u: goto L_08A314F0;
    case 203u: goto L_08A314F8;
    case 204u: goto L_08A31510;
    case 205u: goto L_08A31520;
    case 206u: goto L_08A3152C;
    case 207u: goto L_08A3153C;
    case 208u: goto L_08A3154C;
    case 209u: goto L_08A31558;
    case 210u: goto L_08A31560;
    case 211u: goto L_08A31570;
    case 212u: goto L_08A3157C;
    case 213u: goto L_08A31588;
    case 214u: goto L_08A31594;
    case 215u: goto L_08A31598;
    case 216u: goto L_08A315A0;
    case 217u: goto L_08A315B4;
    case 218u: goto L_08A315C0;
    case 219u: goto L_08A315C8;
    case 220u: goto L_08A315E0;
    case 221u: goto L_08A315E8;
    case 222u: goto L_08A315F4;
    case 223u: goto L_08A315FC;
    case 224u: goto L_08A3160C;
    case 225u: goto L_08A31620;
    case 226u: goto L_08A31628;
    case 227u: goto L_08A31644;
    case 228u: goto L_08A31670;
    case 229u: goto L_08A316B0;
    case 230u: goto L_08A316B4;
    case 231u: goto L_08A316D8;
    case 232u: goto L_08A316E0;
    case 233u: goto L_08A316FC;
    case 234u: goto L_08A31710;
    case 235u: goto L_08A3172C;
    case 236u: goto L_08A31730;
    case 237u: goto L_08A31738;
    case 238u: goto L_08A31750;
    case 239u: goto L_08A3175C;
    case 240u: goto L_08A31768;
    case 241u: goto L_08A31774;
    case 242u: goto L_08A3177C;
    case 243u: goto L_08A31794;
    case 244u: goto L_08A317AC;
    case 245u: goto L_08A317B4;
    case 246u: goto L_08A317CC;
    case 247u: goto L_08A317D8;
    case 248u: goto L_08A317E8;
    case 249u: goto L_08A317F0;
    case 250u: goto L_08A317F8;
    case 251u: goto L_08A31814;
    case 252u: goto L_08A3185C;
    case 253u: goto L_08A31864;
    case 254u: goto L_08A31880;
    case 255u: goto L_08A31890;
    case 256u: goto L_08A318A4;
    case 257u: goto L_08A318B4;
    case 258u: goto L_08A318C4;
    case 259u: goto L_08A318D0;
    case 260u: goto L_08A318E0;
    case 261u: goto L_08A318EC;
    case 262u: goto L_08A31900;
    case 263u: goto L_08A31938;
    case 264u: goto L_08A31940;
    case 265u: goto L_08A3194C;
    case 266u: goto L_08A31954;
    case 267u: goto L_08A31968;
    case 268u: goto L_08A31970;
    case 269u: goto L_08A31978;
    case 270u: goto L_08A3198C;
    case 271u: goto L_08A31994;
    case 272u: goto L_08A319A0;
    case 273u: goto L_08A319B0;
    case 274u: goto L_08A319B8;
    case 275u: goto L_08A319D0;
    case 276u: goto L_08A319DC;
    case 277u: goto L_08A319F0;
    case 278u: goto L_08A31A04;
    case 279u: goto L_08A31A0C;
    case 280u: goto L_08A31A28;
    case 281u: goto L_08A31A34;
    case 282u: goto L_08A31A3C;
    case 283u: goto L_08A31A54;
    case 284u: goto L_08A31A98;
    case 285u: goto L_08A31AC4;
    case 286u: goto L_08A31AD4;
    case 287u: goto L_08A31AEC;
    case 288u: goto L_08A31B04;
    case 289u: goto L_08A31B0C;
    case 290u: goto L_08A31B14;
    case 291u: goto L_08A31B18;
    case 292u: goto L_08A31B3C;
    case 293u: goto L_08A31B44;
    case 294u: goto L_08A31B60;
    case 295u: goto L_08A31B74;
    case 296u: goto L_08A31B90;
    case 297u: goto L_08A31B94;
    case 298u: goto L_08A31B9C;
    case 299u: goto L_08A31BB4;
    case 300u: goto L_08A31BC4;
    case 301u: goto L_08A31BD4;
    case 302u: goto L_08A31BDC;
    case 303u: goto L_08A31BEC;
    case 304u: goto L_08A31BF4;
    case 305u: goto L_08A31BFC;
    case 306u: goto L_08A31C04;
    case 307u: goto L_08A31C0C;
    case 308u: goto L_08A31C14;
    case 309u: goto L_08A31C18;
    case 310u: goto L_08A31C3C;
    case 311u: goto L_08A31C44;
    case 312u: goto L_08A31C60;
    case 313u: goto L_08A31C74;
    case 314u: goto L_08A31C90;
    case 315u: goto L_08A31C94;
    case 316u: goto L_08A31C9C;
    case 317u: goto L_08A31CB4;
    case 318u: goto L_08A31CC4;
    case 319u: goto L_08A31CD4;
    case 320u: goto L_08A31CD8;
    case 321u: goto L_08A31CFC;
    case 322u: goto L_08A31D04;
    case 323u: goto L_08A31D20;
    case 324u: goto L_08A31D34;
    case 325u: goto L_08A31D50;
    case 326u: goto L_08A31D54;
    case 327u: goto L_08A31D5C;
    case 328u: goto L_08A31D78;
    case 329u: goto L_08A31D88;
    case 330u: goto L_08A31D94;
    case 331u: goto L_08A31DB0;
    case 332u: goto L_08A31DB8;
    case 333u: goto L_08A31DCC;
    case 334u: goto L_08A31DD4;
    case 335u: goto L_08A31DF0;
    case 336u: goto L_08A31E10;
    case 337u: goto L_08A31E20;
    case 338u: goto L_08A31E28;
    case 339u: goto L_08A31E30;
    case 340u: goto L_08A31E38;
    case 341u: goto L_08A31E40;
    case 342u: goto L_08A31E5C;
    case 343u: goto L_08A31E6C;
    case 344u: goto L_08A31E78;
    case 345u: goto L_08A31E94;
    case 346u: goto L_08A31E9C;
    case 347u: goto L_08A31EB0;
    case 348u: goto L_08A31EB8;
    case 349u: goto L_08A31ED4;
    case 350u: goto L_08A31EF4;
    case 351u: goto L_08A31F04;
    case 352u: goto L_08A31F0C;
    case 353u: goto L_08A31F14;
    case 354u: goto L_08A31F1C;
    case 355u: goto L_08A31F24;
    case 356u: goto L_08A31F40;
    case 357u: goto L_08A31F7C;
    case 358u: goto L_08A31F84;
    case 359u: goto L_08A31F9C;
    case 360u: goto L_08A31FAC;
    case 361u: goto L_08A31FBC;
    case 362u: goto L_08A31FC0;
    case 363u: goto L_08A31FE4;
    case 364u: goto L_08A31FEC;
    case 365u: goto L_08A32008;
    case 366u: goto L_08A3201C;
    case 367u: goto L_08A32038;
    case 368u: goto L_08A3203C;
    case 369u: goto L_08A32044;
    case 370u: goto L_08A3204C;
    case 371u: goto L_08A32070;
    case 372u: goto L_08A32078;
    case 373u: goto L_08A32094;
    case 374u: goto L_08A320BC;
    case 375u: goto L_08A320C4;
    case 376u: goto L_08A320E0;
    case 377u: goto L_08A32108;
    case 378u: goto L_08A32110;
    case 379u: goto L_08A3212C;
    case 380u: goto L_08A32154;
    case 381u: goto L_08A3215C;
    case 382u: goto L_08A32164;
    case 383u: goto L_08A32170;
    case 384u: goto L_08A3218C;
    case 385u: goto L_08A32194;
    case 386u: goto L_08A321AC;
    case 387u: goto L_08A321B4;
    case 388u: goto L_08A321C4;
    case 389u: goto L_08A321D4;
    case 390u: goto L_08A321E4;
    case 391u: goto L_08A321EC;
    case 392u: goto L_08A321F4;
    case 393u: goto L_08A32204;
    case 394u: goto L_08A32218;
    case 395u: goto L_08A32224;
    case 396u: goto L_08A32234;
    case 397u: goto L_08A32240;
    case 398u: goto L_08A32260;
    case 399u: goto L_08A32268;
    case 400u: goto L_08A32278;
    case 401u: goto L_08A32284;
    case 402u: goto L_08A3229C;
    case 403u: goto L_08A322A4;
    case 404u: goto L_08A322C4;
    case 405u: goto L_08A322DC;
    case 406u: goto L_08A322EC;
    case 407u: goto L_08A32340;
    case 408u: goto L_08A32354;
    case 409u: goto L_08A3235C;
    case 410u: goto L_08A32374;
    case 411u: goto L_08A3237C;
    case 412u: goto L_08A32398;
    case 413u: goto L_08A323BC;
    case 414u: goto L_08A323DC;
    case 415u: goto L_08A323E4;
    case 416u: goto L_08A32410;
    case 417u: goto L_08A32418;
    case 418u: goto L_08A32430;
    case 419u: goto L_08A32438;
    case 420u: goto L_08A32440;
    case 421u: goto L_08A3244C;
    case 422u: goto L_08A32454;
    case 423u: goto L_08A32470;
    case 424u: goto L_08A32488;
    case 425u: goto L_08A32490;
    case 426u: goto L_08A324AC;
    case 427u: goto L_08A324BC;
    case 428u: goto L_08A324C8;
    case 429u: goto L_08A324E8;
    case 430u: goto L_08A3250C;
    case 431u: goto L_08A32514;
    case 432u: goto L_08A32530;
    case 433u: goto L_08A32540;
    case 434u: goto L_08A3254C;
    case 435u: goto L_08A32554;
    case 436u: goto L_08A32568;
    case 437u: goto L_08A3257C;
    case 438u: goto L_08A32584;
    case 439u: goto L_08A3259C;
    case 440u: goto L_08A325D0;
    case 441u: goto L_08A325E0;
    case 442u: goto L_08A325F8;
    case 443u: goto L_08A325FC;
    case 444u: goto L_08A32620;
    case 445u: goto L_08A32628;
    case 446u: goto L_08A32644;
    case 447u: goto L_08A32658;
    case 448u: goto L_08A32674;
    case 449u: goto L_08A32678;
    case 450u: goto L_08A32680;
    case 451u: goto L_08A32698;
    case 452u: goto L_08A326A8;
    case 453u: goto L_08A326B4;
    case 454u: goto L_08A326BC;
    case 455u: goto L_08A326C4;
    case 456u: goto L_08A326C8;
    case 457u: goto L_08A326EC;
    case 458u: goto L_08A326F4;
    case 459u: goto L_08A32710;
    case 460u: goto L_08A32724;
    case 461u: goto L_08A32740;
    case 462u: goto L_08A32744;
    case 463u: goto L_08A3274C;
    case 464u: goto L_08A32768;
    case 465u: goto L_08A32778;
    case 466u: goto L_08A327B4;
    case 467u: goto L_08A327D0;
    case 468u: goto L_08A327D8;
    case 469u: goto L_08A327E0;
    case 470u: goto L_08A327F4;
    case 471u: goto L_08A327F8;
    case 472u: goto L_08A32810;
    case 473u: goto L_08A32820;
    case 474u: goto L_08A32828;
    case 475u: goto L_08A32850;
    case 476u: goto L_08A32868;
    case 477u: goto L_08A3287C;
    case 478u: goto L_08A32888;
    case 479u: goto L_08A328A4;
    case 480u: goto L_08A328AC;
    case 481u: goto L_08A328C4;
    case 482u: goto L_08A328CC;
    case 483u: goto L_08A328D4;
    case 484u: goto L_08A328FC;
    case 485u: goto L_08A32904;
    case 486u: goto L_08A32920;
    case 487u: goto L_08A32934;
    case 488u: goto L_08A32950;
    case 489u: goto L_08A32954;
    case 490u: goto L_08A3295C;
    case 491u: goto L_08A32974;
    case 492u: goto L_08A32984;
    case 493u: goto L_08A32994;
    case 494u: goto L_08A329A4;
    case 495u: goto L_08A329B8;
    case 496u: goto L_08A329C0;
    case 497u: goto L_08A329E8;
    case 498u: goto L_08A329F0;
    case 499u: goto L_08A32A0C;
    case 500u: goto L_08A32A20;
    case 501u: goto L_08A32A3C;
    case 502u: goto L_08A32A40;
    case 503u: goto L_08A32A48;
    case 504u: goto L_08A32A60;
    case 505u: goto L_08A32A68;
    case 506u: goto L_08A32A88;
    case 507u: goto L_08A32B10;
    case 508u: goto L_08A32B18;
    case 509u: goto L_08A32B38;
    case 510u: goto L_08A32BB0;
    case 511u: goto L_08A32BB8;
    case 512u: goto L_08A32BD8;
    case 513u: goto L_08A32C1C;
    case 514u: goto L_08A32C24;
    case 515u: goto L_08A32C44;
    case 516u: goto L_08A32CA8;
    case 517u: goto L_08A32CB0;
    case 518u: goto L_08A32CB8;
    case 519u: goto L_08A32CC0;
    case 520u: goto L_08A32CC8;
    case 521u: goto L_08A32CE0;
    case 522u: goto L_08A32CF0;
    case 523u: goto L_08A32D08;
    case 524u: goto L_08A32D10;
    case 525u: goto L_08A32D18;
    case 526u: goto L_08A32D24;
    case 527u: goto L_08A32D2C;
    case 528u: goto L_08A32D34;
    case 529u: goto L_08A32D40;
    case 530u: goto L_08A32D48;
    case 531u: goto L_08A32D50;
    case 532u: goto L_08A32D5C;
    case 533u: goto L_08A32D64;
    case 534u: goto L_08A32D6C;
    case 535u: goto L_08A32D78;
    case 536u: goto L_08A32D80;
    case 537u: goto L_08A32D8C;
    case 538u: goto L_08A32D98;
    case 539u: goto L_08A32DA0;
    case 540u: goto L_08A32DA8;
    case 541u: goto L_08A32DB4;
    case 542u: goto L_08A32DBC;
    case 543u: goto L_08A32DC4;
    case 544u: goto L_08A32DD0;
    case 545u: goto L_08A32DD8;
    case 546u: goto L_08A32DE0;
    case 547u: goto L_08A32DEC;
    case 548u: goto L_08A32DF4;
    case 549u: goto L_08A32DFC;
    case 550u: goto L_08A32E08;
    case 551u: goto L_08A32E10;
    case 552u: goto L_08A32E18;
    case 553u: goto L_08A32E24;
    case 554u: goto L_08A32E2C;
    case 555u: goto L_08A32E34;
    case 556u: goto L_08A32E40;
    case 557u: goto L_08A32E48;
    case 558u: goto L_08A32E50;
    case 559u: goto L_08A32E5C;
    case 560u: goto L_08A32E64;
    case 561u: goto L_08A32E6C;
    case 562u: goto L_08A32E78;
    case 563u: goto L_08A32E80;
    case 564u: goto L_08A32E88;
    case 565u: goto L_08A32E94;
    case 566u: goto L_08A32E9C;
    case 567u: goto L_08A32EA4;
    case 568u: goto L_08A32EB0;
    case 569u: goto L_08A32EB8;
    case 570u: goto L_08A32EC0;
    case 571u: goto L_08A32ECC;
    case 572u: goto L_08A32ED4;
    case 573u: goto L_08A32EDC;
    case 574u: goto L_08A32EE8;
    case 575u: goto L_08A32EF0;
    case 576u: goto L_08A32EF8;
    case 577u: goto L_08A32F04;
    case 578u: goto L_08A32F0C;
    case 579u: goto L_08A32F14;
    case 580u: goto L_08A32F20;
    case 581u: goto L_08A32F28;
    case 582u: goto L_08A32F30;
    case 583u: goto L_08A32F3C;
    case 584u: goto L_08A32F44;
    case 585u: goto L_08A32F4C;
    case 586u: goto L_08A32F58;
    case 587u: goto L_08A32F60;
    case 588u: goto L_08A32F68;
    case 589u: goto L_08A32F74;
    case 590u: goto L_08A32F7C;
    case 591u: goto L_08A32F84;
    case 592u: goto L_08A32F90;
    case 593u: goto L_08A32F98;
    case 594u: goto L_08A32FA0;
    case 595u: goto L_08A32FAC;
    case 596u: goto L_08A32FB4;
    case 597u: goto L_08A32FBC;
    case 598u: goto L_08A32FC8;
    case 599u: goto L_08A32FD0;
    case 600u: goto L_08A32FD8;
    case 601u: goto L_08A32FE4;
    case 602u: goto L_08A32FEC;
    case 603u: goto L_08A32FF4;
    case 604u: goto L_08A33000;
    case 605u: goto L_08A33008;
    case 606u: goto L_08A33010;
    case 607u: goto L_08A3301C;
    case 608u: goto L_08A33024;
    case 609u: goto L_08A3302C;
    case 610u: goto L_08A33038;
    case 611u: goto L_08A33040;
    case 612u: goto L_08A33048;
    case 613u: goto L_08A33054;
    case 614u: goto L_08A3305C;
    case 615u: goto L_08A33064;
    case 616u: goto L_08A33070;
    case 617u: goto L_08A33078;
    case 618u: goto L_08A33080;
    case 619u: goto L_08A3308C;
    case 620u: goto L_08A33094;
    case 621u: goto L_08A3309C;
    case 622u: goto L_08A330A8;
    case 623u: goto L_08A330B0;
    case 624u: goto L_08A330B8;
    case 625u: goto L_08A330C4;
    case 626u: goto L_08A330CC;
    case 627u: goto L_08A330D4;
    case 628u: goto L_08A330E0;
    case 629u: goto L_08A330E8;
    case 630u: goto L_08A330F0;
    case 631u: goto L_08A330FC;
    case 632u: goto L_08A33104;
    case 633u: goto L_08A3310C;
    case 634u: goto L_08A33118;
    case 635u: goto L_08A33120;
    case 636u: goto L_08A33128;
    case 637u: goto L_08A33134;
    case 638u: goto L_08A3313C;
    case 639u: goto L_08A33144;
    case 640u: goto L_08A33150;
    case 641u: goto L_08A33158;
    case 642u: goto L_08A33160;
    case 643u: goto L_08A3316C;
    case 644u: goto L_08A33174;
    case 645u: goto L_08A3317C;
    case 646u: goto L_08A33188;
    case 647u: goto L_08A33190;
    case 648u: goto L_08A33198;
    case 649u: goto L_08A331A4;
    case 650u: goto L_08A331AC;
    case 651u: goto L_08A331B4;
    case 652u: goto L_08A331C0;
    case 653u: goto L_08A331C8;
    case 654u: goto L_08A331D0;
    case 655u: goto L_08A331DC;
    case 656u: goto L_08A331E4;
    case 657u: goto L_08A331EC;
    case 658u: goto L_08A331F8;
    case 659u: goto L_08A33208;
    case 660u: goto L_08A33210;
    case 661u: goto L_08A33220;
    case 662u: goto L_08A33228;
    case 663u: goto L_08A33244;
    case 664u: goto L_08A33254;
    case 665u: goto L_08A3325C;
    case 666u: goto L_08A33264;
    case 667u: goto L_08A3326C;
    case 668u: goto L_08A33278;
    case 669u: goto L_08A332A4;
    case 670u: goto L_08A332CC;
    case 671u: goto L_08A33328;
    case 672u: goto L_08A33330;
    case 673u: goto L_08A33358;
    case 674u: goto L_08A3335C;
    case 675u: goto L_08A33398;
    case 676u: goto L_08A333B4;
    case 677u: goto L_08A333C0;
    case 678u: goto L_08A333C8;
    case 679u: goto L_08A333E0;
    case 680u: goto L_08A333F0;
    case 681u: goto L_08A33404;
    case 682u: goto L_08A33414;
    case 683u: goto L_08A33418;
    case 684u: goto L_08A3343C;
    case 685u: goto L_08A33444;
    case 686u: goto L_08A33460;
    case 687u: goto L_08A33474;
    case 688u: goto L_08A33490;
    case 689u: goto L_08A33494;
    case 690u: goto L_08A3349C;
    case 691u: goto L_08A334B4;
    case 692u: goto L_08A334C4;
    case 693u: goto L_08A334D8;
    case 694u: goto L_08A334E8;
    case 695u: goto L_08A334EC;
    case 696u: goto L_08A33510;
    case 697u: goto L_08A33518;
    case 698u: goto L_08A33534;
    case 699u: goto L_08A33548;
    case 700u: goto L_08A33564;
    case 701u: goto L_08A33568;
    case 702u: goto L_08A33570;
    case 703u: goto L_08A33588;
    case 704u: goto L_08A33598;
    case 705u: goto L_08A335AC;
    case 706u: goto L_08A335BC;
    case 707u: goto L_08A335C0;
    case 708u: goto L_08A335E4;
    case 709u: goto L_08A335EC;
    case 710u: goto L_08A33608;
    case 711u: goto L_08A3361C;
    case 712u: goto L_08A33638;
    case 713u: goto L_08A3363C;
    case 714u: goto L_08A33644;
    case 715u: goto L_08A3365C;
    case 716u: goto L_08A3366C;
    case 717u: goto L_08A33680;
    case 718u: goto L_08A33690;
    case 719u: goto L_08A33694;
    case 720u: goto L_08A336B8;
    case 721u: goto L_08A336C0;
    case 722u: goto L_08A336DC;
    case 723u: goto L_08A336F0;
    case 724u: goto L_08A3370C;
    case 725u: goto L_08A33710;
    case 726u: goto L_08A33718;
    case 727u: goto L_08A33720;
    case 728u: goto L_08A3372C;
    case 729u: goto L_08A33734;
    case 730u: goto L_08A3373C;
    case 731u: goto L_08A33748;
    case 732u: goto L_08A33764;
    case 733u: goto L_08A3376C;
    case 734u: goto L_08A33788;
    case 735u: goto L_08A3379C;
    case 736u: goto L_08A337B8;
    case 737u: goto L_08A337BC;
    case 738u: goto L_08A337C4;
    case 739u: goto L_08A337CC;
    case 740u: goto L_08A337E8;
    case 741u: goto L_08A337F8;
    case 742u: goto L_08A3382C;
    case 743u: goto L_08A33844;
    case 744u: goto L_08A33858;
    case 745u: goto L_08A33870;
    case 746u: goto L_08A3387C;
    case 747u: goto L_08A33888;
    case 748u: goto L_08A338D0;
    case 749u: goto L_08A338DC;
    case 750u: goto L_08A338E0;
    case 751u: goto L_08A33940;
    case 752u: goto L_08A33948;
    case 753u: goto L_08A33960;
    case 754u: goto L_08A339A4;
    case 755u: goto L_08A339BC;
    case 756u: goto L_08A339CC;
    case 757u: goto L_08A339D4;
    case 758u: goto L_08A339DC;
    case 759u: goto L_08A339E4;
    case 760u: goto L_08A33A1C;
    case 761u: goto L_08A33A24;
    case 762u: goto L_08A33A3C;
    case 763u: goto L_08A33A4C;
    case 764u: goto L_08A33A5C;
    case 765u: goto L_08A33A60;
    case 766u: goto L_08A33A84;
    case 767u: goto L_08A33A8C;
    case 768u: goto L_08A33AA8;
    case 769u: goto L_08A33ABC;
    case 770u: goto L_08A33AD8;
    case 771u: goto L_08A33ADC;
    case 772u: goto L_08A33AE4;
    case 773u: goto L_08A33AFC;
    case 774u: goto L_08A33B0C;
    case 775u: goto L_08A33B1C;
    case 776u: goto L_08A33B20;
    case 777u: goto L_08A33B44;
    case 778u: goto L_08A33B4C;
    case 779u: goto L_08A33B68;
    case 780u: goto L_08A33B7C;
    case 781u: goto L_08A33B98;
    case 782u: goto L_08A33B9C;
    case 783u: goto L_08A33BA4;
    case 784u: goto L_08A33BC0;
    case 785u: goto L_08A33BD0;
    case 786u: goto L_08A33C04;
    case 787u: goto L_08A33C20;
    case 788u: goto L_08A33C30;
    case 789u: goto L_08A33C44;
    case 790u: goto L_08A33C64;
    case 791u: goto L_08A33CA8;
    case 792u: goto L_08A33CC0;
    case 793u: goto L_08A33CC8;
    case 794u: goto L_08A33CE8;
    case 795u: goto L_08A33D1C;
    case 796u: goto L_08A33D28;
    case 797u: goto L_08A33D30;
    case 798u: goto L_08A33D50;
    case 799u: goto L_08A33DA0;
    case 800u: goto L_08A33DC8;
    case 801u: goto L_08A33DE8;
    case 802u: goto L_08A33E0C;
    case 803u: goto L_08A33E10;
    case 804u: goto L_08A33E18;
    case 805u: goto L_08A33E30;
    case 806u: goto L_08A33E38;
    case 807u: goto L_08A33E50;
    case 808u: goto L_08A33E60;
    case 809u: goto L_08A33E68;
    case 810u: goto L_08A33E6C;
    case 811u: goto L_08A33E90;
    case 812u: goto L_08A33E98;
    case 813u: goto L_08A33EB4;
    case 814u: goto L_08A33EC8;
    case 815u: goto L_08A33EE4;
    case 816u: goto L_08A33EE8;
    case 817u: goto L_08A33EF0;
    case 818u: goto L_08A33EF8;
    case 819u: goto L_08A33F00;
    case 820u: goto L_08A33F18;
    case 821u: goto L_08A33F34;
    case 822u: goto L_08A33F4C;
    case 823u: goto L_08A33F64;
    case 824u: goto L_08A33F80;
    case 825u: goto L_08A33FA8;
    case 826u: goto L_08A33FB0;
    case 827u: goto L_08A33FB8;
    case 828u: goto L_08A33FC4;
    case 829u: goto L_08A33FE0;
    case 830u: goto L_08A33FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A30000:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    goto L_08A30004;
L_08A30004:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A30040;
      }
      goto L_08A3002C;
    }
L_08A3002C:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A30040;
L_08A30040:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A30074;
      }
      goto L_08A30058;
    }
L_08A30058:
    ctx.gpr[31] = (0x08A30060u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 709u, 0x08806E98u>(ctx, &aot_mem) && ctx.pc == 0x08A30060u) goto L_08A30060;
    return;
L_08A30060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A30074;
L_08A30074:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30084:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
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
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A300D0u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A300D0u) goto L_08A300D0;
    return;
L_08A300D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.fpr[18] = ctx.fpr[17] / ctx.fpr[13];
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[18] = ctx.fpr[19] / ctx.fpr[13];
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = ctx.fpr[17] + ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[15] / ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A30354;
      }
      goto L_08A301B0;
    }
L_08A301B0:
    ctx.gpr[4] = (ctx.gpr[21] << 5u);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A301C4;
L_08A301C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A30338;
      }
      goto L_08A301D8;
    }
L_08A301D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[19]);
    goto L_08A301F0;
L_08A301F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
      if (branch_taken) {
          goto L_08A30284;
      }
      goto L_08A3020C;
    }
L_08A3020C:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A30284;
      }
      goto L_08A30214;
    }
L_08A30214:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A302EC;
      }
      goto L_08A30224;
    }
L_08A30224:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A30254;
      }
      goto L_08A30230;
    }
L_08A30230:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A30260;
      }
      goto L_08A30238;
    }
L_08A30238:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3026C;
      }
      goto L_08A30240;
    }
L_08A30240:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A30278;
      }
      goto L_08A30248;
    }
L_08A30248:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A302EC;
      }
      goto L_08A30254;
    }
L_08A30254:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A302EC;
      }
      goto L_08A30260;
    }
L_08A30260:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A302EC;
      }
      goto L_08A3026C;
    }
L_08A3026C:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A302EC;
      }
      goto L_08A30278;
    }
L_08A30278:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A302EC;
      }
      goto L_08A30284;
    }
L_08A30284:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A302EC;
      }
      goto L_08A30294;
    }
L_08A30294:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A302C4;
      }
      goto L_08A302A0;
    }
L_08A302A0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A302D0;
      }
      goto L_08A302A8;
    }
L_08A302A8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A302DC;
      }
      goto L_08A302B0;
    }
L_08A302B0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A302E8;
      }
      goto L_08A302B8;
    }
L_08A302B8:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A302EC;
      }
      goto L_08A302C4;
    }
L_08A302C4:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A302EC;
      }
      goto L_08A302D0;
    }
L_08A302D0:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A302EC;
      }
      goto L_08A302DC;
    }
L_08A302DC:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A302EC;
      }
      goto L_08A302E8;
    }
L_08A302E8:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    goto L_08A302EC;
L_08A302EC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A302F8u);
    ctx.gpr[4] = (0u | 12u);
    goto L_08A313B8;
L_08A302F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3030C;
      }
      goto L_08A30304;
    }
L_08A30304:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A3030C;
L_08A3030C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A30324;
      }
      goto L_08A3031C;
    }
L_08A3031C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_08A30324;
L_08A30324:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A301F0;
      }
      goto L_08A30338;
    }
L_08A30338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A301C4;
      }
      goto L_08A30354;
    }
L_08A30354:
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
L_08A30384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
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
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A303D0u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A303D0u) goto L_08A303D0;
    return;
L_08A303D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.fpr[18] = ctx.fpr[17] / ctx.fpr[13];
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[18] = ctx.fpr[19] / ctx.fpr[13];
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = ctx.fpr[17] + ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[15] / ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A30698;
      }
      goto L_08A304B0;
    }
L_08A304B0:
    ctx.gpr[4] = (ctx.gpr[21] << 5u);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A304C4;
L_08A304C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3067C;
      }
      goto L_08A304D8;
    }
L_08A304D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[20] = (ctx.gpr[4] - ctx.gpr[20]);
    goto L_08A304F0;
L_08A304F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[19];
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
      if (branch_taken) {
          goto L_08A30584;
      }
      goto L_08A3050C;
    }
L_08A3050C:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A30584;
      }
      goto L_08A30514;
    }
L_08A30514:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A305EC;
      }
      goto L_08A30524;
    }
L_08A30524:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A30554;
      }
      goto L_08A30530;
    }
L_08A30530:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A30560;
      }
      goto L_08A30538;
    }
L_08A30538:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3056C;
      }
      goto L_08A30540;
    }
L_08A30540:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A30578;
      }
      goto L_08A30548;
    }
L_08A30548:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A305EC;
      }
      goto L_08A30554;
    }
L_08A30554:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A305EC;
      }
      goto L_08A30560;
    }
L_08A30560:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A305EC;
      }
      goto L_08A3056C;
    }
L_08A3056C:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A305EC;
      }
      goto L_08A30578;
    }
L_08A30578:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A305EC;
      }
      goto L_08A30584;
    }
L_08A30584:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A305EC;
      }
      goto L_08A30594;
    }
L_08A30594:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A305C4;
      }
      goto L_08A305A0;
    }
L_08A305A0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A305D0;
      }
      goto L_08A305A8;
    }
L_08A305A8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A305DC;
      }
      goto L_08A305B0;
    }
L_08A305B0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A305E8;
      }
      goto L_08A305B8;
    }
L_08A305B8:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A305EC;
      }
      goto L_08A305C4;
    }
L_08A305C4:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A305EC;
      }
      goto L_08A305D0;
    }
L_08A305D0:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A305EC;
      }
      goto L_08A305DC;
    }
L_08A305DC:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A305EC;
      }
      goto L_08A305E8;
    }
L_08A305E8:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    goto L_08A305EC;
L_08A305EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3066C;
      }
      goto L_08A305F8;
    }
L_08A305F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A30660;
      }
      goto L_08A30604;
    }
L_08A30604:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A30624;
      }
      goto L_08A3061C;
    }
L_08A3061C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08A30624;
L_08A30624:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30638;
      }
      goto L_08A30630;
    }
L_08A30630:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08A30638;
L_08A30638:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30648;
      }
      goto L_08A30640;
    }
L_08A30640:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A30648;
L_08A30648:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30658;
      }
      goto L_08A30650;
    }
L_08A30650:
    ctx.gpr[31] = (0x08A30658u);
    // nop
    goto L_08A313D8;
L_08A30658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30664;
      }
      goto L_08A30660;
    }
L_08A30660:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A30664;
L_08A30664:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A305F8;
      }
      goto L_08A3066C;
    }
L_08A3066C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A304F0;
      }
      goto L_08A3067C;
    }
L_08A3067C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A304C4;
      }
      goto L_08A30698;
    }
L_08A30698:
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
L_08A306C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A306E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 41u, 0x08A28860u>(ctx, &aot_mem) && ctx.pc == 0x08A306E0u) goto L_08A306E0;
    return;
L_08A306E0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15244));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-15));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1025));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[8]);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[9]);
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[10]);
    ctx.gpr[11] = (65535u << 16u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[11]);
    ctx.gpr[2] = (65535u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[2]);
    ctx.gpr[3] = (65534u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[3]);
    ctx.gpr[12] = (65532u << 16u);
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[12]);
    ctx.gpr[13] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[13]);
    ctx.gpr[13] = (65520u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (65504u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (65472u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (65408u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (65280u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (65024u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (64512u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (63488u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (61440u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (57344u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (49152u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (32768u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[11]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[2]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[12]);
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A308A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A308A0u) goto L_08A308A0;
    return;
L_08A308A0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint16_t>(ctx.gpr[2]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A308BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-480));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3090C;
      }
      goto L_08A308F8;
    }
L_08A308F8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A3090C;
L_08A3090C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30920;
      }
      goto L_08A30918;
    }
L_08A30918:
    ctx.gpr[31] = (0x08A30920u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 355u, 0x089FA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30920u) goto L_08A30920;
    return;
L_08A30920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3095C;
      }
      goto L_08A30930;
    }
L_08A30930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A30964;
      }
      goto L_08A30948;
    }
L_08A30948:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3097C;
      }
      goto L_08A30954;
    }
L_08A30954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31228;
      }
      goto L_08A3095C;
    }
L_08A3095C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31228;
      }
      goto L_08A30964;
    }
L_08A30964:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A309F4;
      }
      goto L_08A3096C;
    }
L_08A3096C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A30FA8;
      }
      goto L_08A30974;
    }
L_08A30974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31228;
      }
      goto L_08A3097C;
    }
L_08A3097C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A309EC;
      }
      goto L_08A30990;
    }
L_08A30990:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3288)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3288)));
        goto L_08A309E0;
    }
    goto L_08A309E0;
L_08A309E0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A309ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 848u, 0x08A2FD3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A309ECu) goto L_08A309EC;
    return;
L_08A309EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31228;
      }
      goto L_08A309F4;
    }
L_08A309F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A30A2C;
      }
      goto L_08A30A0C;
    }
L_08A30A0C:
    ctx.gpr[31] = (0x08A30A14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 198u, 0x08A81FBCu>(ctx, &aot_mem) && ctx.pc == 0x08A30A14u) goto L_08A30A14;
    return;
L_08A30A14:
    ctx.gpr[31] = (0x08A30A1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A30A1Cu) goto L_08A30A1C;
    return;
L_08A30A1C:
    ctx.gpr[31] = (0x08A30A24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x08A30A24u) goto L_08A30A24;
    return;
L_08A30A24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30FA8;
      }
      goto L_08A30A2C;
    }
L_08A30A2C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(122)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A30A60;
      }
      goto L_08A30A40;
    }
L_08A30A40:
    ctx.gpr[31] = (0x08A30A48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 182u, 0x08A81AACu>(ctx, &aot_mem) && ctx.pc == 0x08A30A48u) goto L_08A30A48;
    return;
L_08A30A48:
    ctx.gpr[31] = (0x08A30A50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A30A50u) goto L_08A30A50;
    return;
L_08A30A50:
    ctx.gpr[31] = (0x08A30A58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x08A30A58u) goto L_08A30A58;
    return;
L_08A30A58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30FA8;
      }
      goto L_08A30A60;
    }
L_08A30A60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A30A9C;
      }
      goto L_08A30A74;
    }
L_08A30A74:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(206)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A30A9C;
      }
      goto L_08A30A88;
    }
L_08A30A88:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(218)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A30ACC;
      }
      goto L_08A30A9C;
    }
L_08A30A9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30FA8;
      }
      goto L_08A30AAC;
    }
L_08A30AAC:
    ctx.gpr[31] = (0x08A30AB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 190u, 0x08A81D40u>(ctx, &aot_mem) && ctx.pc == 0x08A30AB4u) goto L_08A30AB4;
    return;
L_08A30AB4:
    ctx.gpr[31] = (0x08A30ABCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A30ABCu) goto L_08A30ABC;
    return;
L_08A30ABC:
    ctx.gpr[31] = (0x08A30AC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x08A30AC4u) goto L_08A30AC4;
    return;
L_08A30AC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30FA8;
      }
      goto L_08A30ACC;
    }
L_08A30ACC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 273u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A30CA4;
      }
      goto L_08A30ADC;
    }
L_08A30ADC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A30AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A30AF4u) goto L_08A30AF4;
    return;
L_08A30AF4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27668)));
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (49408u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[4] = (17184u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08A30BB0u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 154u, 0x0892939Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30BB0u) goto L_08A30BB0;
    return;
L_08A30BB0:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A30C08u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 343u, 0x08AE5E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30C08u) goto L_08A30C08;
    return;
L_08A30C08:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (17244u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (17214u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16908)));
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A30C9Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 39u, 0x089FC9E4u>(ctx, &aot_mem) && ctx.pc == 0x08A30C9Cu) goto L_08A30C9C;
    return;
L_08A30C9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30FA8;
      }
      goto L_08A30CA4;
    }
L_08A30CA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A30CCC;
      }
      goto L_08A30CB8;
    }
L_08A30CB8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A30CCC;
L_08A30CCC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[7]) {
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(54)));
        goto L_08A30CF4;
    }
    goto L_08A30CDC;
L_08A30CDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 3u);
    if (ctx.gpr[4] == ctx.gpr[7]) {
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(54)));
        goto L_08A30CF4;
    }
    goto L_08A30CEC;
L_08A30CEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A30D18;
      }
      goto L_08A30CF4;
    }
L_08A30CF4:
    ctx.gpr[7] = (ctx.gpr[7] & 8192u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A30D10;
      }
      goto L_08A30D00;
    }
L_08A30D00:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(54)));
    ctx.gpr[5] = (ctx.gpr[5] & 16384u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A30D18;
      }
      goto L_08A30D10;
    }
L_08A30D10:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A30D18;
L_08A30D18:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30D30;
      }
      goto L_08A30D20;
    }
L_08A30D20:
    ctx.gpr[31] = (0x08A30D28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A30004;
L_08A30D28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30FA8;
      }
      goto L_08A30D30;
    }
L_08A30D30:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30D60;
      }
      goto L_08A30D40;
    }
L_08A30D40:
    ctx.gpr[31] = (0x08A30D48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 271u, 0x08A85378u>(ctx, &aot_mem) && ctx.pc == 0x08A30D48u) goto L_08A30D48;
    return;
L_08A30D48:
    ctx.gpr[31] = (0x08A30D50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A30D50u) goto L_08A30D50;
    return;
L_08A30D50:
    ctx.gpr[31] = (0x08A30D58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x08A30D58u) goto L_08A30D58;
    return;
L_08A30D58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30FA8;
      }
      goto L_08A30D60;
    }
L_08A30D60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 270u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A30E1C;
      }
      goto L_08A30D70;
    }
L_08A30D70:
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 100u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[31] = (0x08A30E14u);
    ctx.gpr[7] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 138u, 0x08824D68u>(ctx, &aot_mem) && ctx.pc == 0x08A30E14u) goto L_08A30E14;
    return;
L_08A30E14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30FA8;
      }
      goto L_08A30E1C;
    }
L_08A30E1C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 272u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A30ED8;
      }
      goto L_08A30E2C;
    }
L_08A30E2C:
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[31] = (0x08A30ED0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 138u, 0x08824D68u>(ctx, &aot_mem) && ctx.pc == 0x08A30ED0u) goto L_08A30ED0;
    return;
L_08A30ED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30FA8;
      }
      goto L_08A30ED8;
    }
L_08A30ED8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A30FA8;
      }
      goto L_08A30EEC;
    }
L_08A30EEC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A30FA8;
      }
      goto L_08A30F3C;
    }
L_08A30F3C:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27652)));
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(11140))))));
    ctx.gpr[8] = (ctx.gpr[7] & 255u);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08A30FA8u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 154u, 0x0892939Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30FA8u) goto L_08A30FA8;
    return;
L_08A30FA8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A3100C;
      }
      goto L_08A30FC0;
    }
L_08A30FC0:
    ctx.gpr[31] = (0x08A30FC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 478u, 0x0886622Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30FC8u) goto L_08A30FC8;
    return;
L_08A30FC8:
    ctx.gpr[4] = (16445u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16253u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15894u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 34603u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A31004u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 207u, 0x08929B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31004u) goto L_08A31004;
    return;
L_08A31004:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31228;
      }
      goto L_08A3100C;
    }
L_08A3100C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A31030;
      }
      goto L_08A31020;
    }
L_08A31020:
    ctx.gpr[31] = (0x08A31028u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 478u, 0x0886622Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31028u) goto L_08A31028;
    return;
L_08A31028:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31228;
      }
      goto L_08A31030;
    }
L_08A31030:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A31090;
      }
      goto L_08A31044;
    }
L_08A31044:
    ctx.gpr[31] = (0x08A3104Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 478u, 0x0886622Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3104Cu) goto L_08A3104C;
    return;
L_08A3104C:
    ctx.gpr[4] = (16538u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13631u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16296u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A31088u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 207u, 0x08929B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31088u) goto L_08A31088;
    return;
L_08A31088:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31228;
      }
      goto L_08A31090;
    }
L_08A31090:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A310E8;
      }
      goto L_08A310A4;
    }
L_08A310A4:
    ctx.gpr[31] = (0x08A310ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 478u, 0x0886622Cu>(ctx, &aot_mem) && ctx.pc == 0x08A310ACu) goto L_08A310AC;
    return;
L_08A310AC:
    ctx.gpr[4] = (16624u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 6291u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A310E0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 207u, 0x08929B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A310E0u) goto L_08A310E0;
    return;
L_08A310E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31228;
      }
      goto L_08A310E8;
    }
L_08A310E8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A31138;
      }
      goto L_08A310FC;
    }
L_08A310FC:
    ctx.gpr[4] = (16190u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 30409u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A31130u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 207u, 0x08929B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31130u) goto L_08A31130;
    return;
L_08A31130:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31228;
      }
      goto L_08A31138;
    }
L_08A31138:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A31188;
      }
      goto L_08A3114C;
    }
L_08A3114C:
    ctx.gpr[4] = (15664u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8389u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A31180u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 207u, 0x08929B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31180u) goto L_08A31180;
    return;
L_08A31180:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31228;
      }
      goto L_08A31188;
    }
L_08A31188:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A311E0;
      }
      goto L_08A3119C;
    }
L_08A3119C:
    ctx.gpr[4] = (16274u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 19923u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15892u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 31457u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A311D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 207u, 0x08929B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A311D8u) goto L_08A311D8;
    return;
L_08A311D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31228;
      }
      goto L_08A311E0;
    }
L_08A311E0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A31228;
      }
      goto L_08A311F4;
    }
L_08A311F4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (48452u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A31228u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 207u, 0x08929B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31228u) goto L_08A31228;
    return;
L_08A31228:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3124C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11108)));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-11104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11112)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-11100), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-11096), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-11092), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-11088), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11084)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-11080), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11076)));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-11068), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11072)));
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-11064), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-11060), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-11056), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A31330:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A313A4;
      }
      goto L_08A3134C;
    }
L_08A3134C:
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A31368;
      }
      goto L_08A31360;
    }
L_08A31360:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    goto L_08A31368;
L_08A31368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3137C;
      }
      goto L_08A31374;
    }
L_08A31374:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    goto L_08A3137C;
L_08A3137C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3138C;
      }
      goto L_08A31384;
    }
L_08A31384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08A3138C;
L_08A3138C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3139C;
      }
      goto L_08A31394;
    }
L_08A31394:
    ctx.gpr[31] = (0x08A3139Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08A313D8;
L_08A3139C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3134C;
      }
      goto L_08A313A4;
    }
L_08A313A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A313B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A313CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15324)));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 547u, 0x08B06610u>(ctx, &aot_mem) && ctx.pc == 0x08A313CCu) goto L_08A313CC;
    return;
L_08A313CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A313D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A313F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15324)));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 555u, 0x08B066D0u>(ctx, &aot_mem) && ctx.pc == 0x08A313F0u) goto L_08A313F0;
    return;
L_08A313F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A313FC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10980)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-10984)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-10976), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-10968), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-10972), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-10964), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-10960), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A31474:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-528));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1405));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(92) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 40u, 0x08A342C0u>(ctx, &aot_mem); return;
      }
      goto L_08A314B4;
    }
L_08A314B4:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1405));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(4824)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A314D0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A314E8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A314E8u) goto L_08A314E8;
    return;
L_08A314E8:
    ctx.gpr[31] = (0x08A314F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 118u, 0x088449E8u>(ctx, &aot_mem) && ctx.pc == 0x08A314F0u) goto L_08A314F0;
    return;
L_08A314F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A314F8;
    }
L_08A314F8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A31510u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31510u) goto L_08A31510;
    return;
L_08A31510:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A31520u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A31520u) goto L_08A31520;
    return;
L_08A31520:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31620;
      }
      goto L_08A3152C;
    }
L_08A3152C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A31620;
      }
      goto L_08A3153C;
    }
L_08A3153C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A31620;
      }
      goto L_08A3154C;
    }
L_08A3154C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), 0u);
    ctx.gpr[31] = (0x08A31558u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 554u, 0x089A258Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31558u) goto L_08A31558;
    return;
L_08A31558:
    ctx.gpr[31] = (0x08A31560u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 321u, 0x08865778u>(ctx, &aot_mem) && ctx.pc == 0x08A31560u) goto L_08A31560;
    return;
L_08A31560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A315A0;
      }
      goto L_08A31570;
    }
L_08A31570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31598;
      }
      goto L_08A3157C;
    }
L_08A3157C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_08A31598;
    }
    goto L_08A31588;
L_08A31588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08A31594u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08A31594u) goto L_08A31594;
    return;
L_08A31594:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_08A31598;
L_08A31598:
    ctx.gpr[31] = (0x08A315A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x08A315A0u) goto L_08A315A0;
    return;
L_08A315A0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A315B4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08A315B4u) goto L_08A315B4;
    return;
L_08A315B4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[31] = (0x08A315C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 61u, 0x089A04ACu>(ctx, &aot_mem) && ctx.pc == 0x08A315C0u) goto L_08A315C0;
    return;
L_08A315C0:
    ctx.gpr[31] = (0x08A315C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 92u, 0x089A0714u>(ctx, &aot_mem) && ctx.pc == 0x08A315C8u) goto L_08A315C8;
    return;
L_08A315C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A315E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08A315E0u) goto L_08A315E0;
    return;
L_08A315E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A315F4;
      }
      goto L_08A315E8;
    }
L_08A315E8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A315FC;
      }
      goto L_08A315F4;
    }
L_08A315F4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(856), ctx.gpr[4]);
    goto L_08A315FC;
L_08A315FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x08A3160Cu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3160Cu) goto L_08A3160C;
    return;
L_08A3160C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_08A31620;
L_08A31620:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A31628;
    }
L_08A31628:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A31644u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31644u) goto L_08A31644;
    return;
L_08A31644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2275u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11600));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A31670;
    }
L_08A31670:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A316B4;
      }
      goto L_08A316B0;
    }
L_08A316B0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A316B4;
L_08A316B4:
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
          goto L_08A316E0;
      }
      goto L_08A316D8;
    }
L_08A316D8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A31730;
      }
      goto L_08A316E0;
    }
L_08A316E0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A31710;
    }
    goto L_08A316FC;
L_08A316FC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A31730;
      }
      goto L_08A31710;
    }
L_08A31710:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31730;
      }
      goto L_08A3172C;
    }
L_08A3172C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A31730;
L_08A31730:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A31738;
    }
L_08A31738:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A31750u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31750u) goto L_08A31750;
    return;
L_08A31750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31768;
      }
      goto L_08A3175C;
    }
L_08A3175C:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7528), 0u);
      if (branch_taken) {
          goto L_08A31774;
      }
      goto L_08A31768;
    }
L_08A31768:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7528), ctx.gpr[4]);
    goto L_08A31774;
L_08A31774:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A3177C;
    }
L_08A3177C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A31794u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31794u) goto L_08A31794;
    return;
L_08A31794:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[31] = (0x08A317ACu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 143u, 0x08864A40u>(ctx, &aot_mem) && ctx.pc == 0x08A317ACu) goto L_08A317AC;
    return;
L_08A317AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A317B4;
    }
L_08A317B4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A317CCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A317CCu) goto L_08A317CC;
    return;
L_08A317CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A317E8;
      }
      goto L_08A317D8;
    }
L_08A317D8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6816), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A317F0;
      }
      goto L_08A317E8;
    }
L_08A317E8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6816), static_cast<std::uint8_t>(0u));
    goto L_08A317F0;
L_08A317F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A317F8;
    }
L_08A317F8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A31814u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31814u) goto L_08A31814;
    return;
L_08A31814:
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
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3216)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3216), 0u);
    ctx.gpr[31] = (0x08A3185Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A3185Cu) goto L_08A3185C;
    return;
L_08A3185C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A31864;
    }
L_08A31864:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A31880u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31880u) goto L_08A31880;
    return;
L_08A31880:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A31890u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A31890u) goto L_08A31890;
    return;
L_08A31890:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A318A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A318A4u) goto L_08A318A4;
    return;
L_08A318A4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A319A0;
      }
      goto L_08A318B4;
    }
L_08A318B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A319A0;
      }
      goto L_08A318C4;
    }
L_08A318C4:
    ctx.gpr[4] = (17352u << 16u);
    ctx.gpr[31] = (0x08A318D0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x08A318D0u) goto L_08A318D0;
    return;
L_08A318D0:
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A318E0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 700u, 0x08A2B4ACu>(ctx, &aot_mem) && ctx.pc == 0x08A318E0u) goto L_08A318E0;
    return;
L_08A318E0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A319A0;
      }
      goto L_08A318EC;
    }
L_08A318EC:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A31900u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 678u, 0x08A2B1E0u>(ctx, &aot_mem) && ctx.pc == 0x08A31900u) goto L_08A31900;
    return;
L_08A31900:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A319A0;
      }
      goto L_08A31938;
    }
L_08A31938:
    ctx.gpr[31] = (0x08A31940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x08A31940u) goto L_08A31940;
    return;
L_08A31940:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3194Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 650u, 0x08A2B0ACu>(ctx, &aot_mem) && ctx.pc == 0x08A3194Cu) goto L_08A3194C;
    return;
L_08A3194C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A319A0;
      }
      goto L_08A31954;
    }
L_08A31954:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A31968u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 682u, 0x08A2B2B4u>(ctx, &aot_mem) && ctx.pc == 0x08A31968u) goto L_08A31968;
    return;
L_08A31968:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A319A0;
      }
      goto L_08A31970;
    }
L_08A31970:
    ctx.gpr[31] = (0x08A31978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x08A31978u) goto L_08A31978;
    return;
L_08A31978:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3198Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 484u, 0x08A2A8A8u>(ctx, &aot_mem) && ctx.pc == 0x08A3198Cu) goto L_08A3198C;
    return;
L_08A3198C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A319A0;
      }
      goto L_08A31994;
    }
L_08A31994:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    goto L_08A319A0;
L_08A319A0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A319B0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A319B0u) goto L_08A319B0;
    return;
L_08A319B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A319B8;
    }
L_08A319B8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A319D0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A319D0u) goto L_08A319D0;
    return;
L_08A319D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A319F0;
      }
      goto L_08A319DC;
    }
L_08A319DC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7083), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7084), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A31A04;
      }
      goto L_08A319F0;
    }
L_08A319F0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7083), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7084), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A31A04;
L_08A31A04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A31A0C;
    }
L_08A31A0C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A31A28u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31A28u) goto L_08A31A28;
    return;
L_08A31A28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x08A31A34u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 113u, 0x08844984u>(ctx, &aot_mem) && ctx.pc == 0x08A31A34u) goto L_08A31A34;
    return;
L_08A31A34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A31A3C;
    }
L_08A31A3C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A31A54u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31A54u) goto L_08A31A54;
    return;
L_08A31A54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A31A98u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x08A31A98u) goto L_08A31A98;
    return;
L_08A31A98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10884)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10888)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A31AC4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x08A31AC4u) goto L_08A31AC4;
    return;
L_08A31AC4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A31AD4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 299u, 0x089D62A8u>(ctx, &aot_mem) && ctx.pc == 0x08A31AD4u) goto L_08A31AD4;
    return;
L_08A31AD4:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A31AECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 303u, 0x08871C84u>(ctx, &aot_mem) && ctx.pc == 0x08A31AECu) goto L_08A31AEC;
    return;
L_08A31AEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A31B14;
      }
      goto L_08A31B04;
    }
L_08A31B04:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A31B14;
      }
      goto L_08A31B0C;
    }
L_08A31B0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A31B18;
      }
      goto L_08A31B14;
    }
L_08A31B14:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A31B18;
L_08A31B18:
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
          goto L_08A31B44;
      }
      goto L_08A31B3C;
    }
L_08A31B3C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A31B94;
      }
      goto L_08A31B44;
    }
L_08A31B44:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A31B74;
    }
    goto L_08A31B60;
L_08A31B60:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A31B94;
      }
      goto L_08A31B74;
    }
L_08A31B74:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31B94;
      }
      goto L_08A31B90;
    }
L_08A31B90:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A31B94;
L_08A31B94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A31B9C;
    }
L_08A31B9C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A31BB4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31BB4u) goto L_08A31BB4;
    return;
L_08A31BB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A31BC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A31BC4u) goto L_08A31BC4;
    return;
L_08A31BC4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31BEC;
      }
      goto L_08A31BD4;
    }
L_08A31BD4:
    ctx.gpr[31] = (0x08A31BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x08A31BDCu) goto L_08A31BDC;
    return;
L_08A31BDC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A31BECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2AA08u>(ctx, &aot_mem) && ctx.pc == 0x08A31BECu) goto L_08A31BEC;
    return;
L_08A31BEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A31BF4;
    }
L_08A31BF4:
    ctx.gpr[31] = (0x08A31BFCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A31BFCu) goto L_08A31BFC;
    return;
L_08A31BFC:
    ctx.gpr[31] = (0x08A31C04u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1055u, 0x08A97E40u>(ctx, &aot_mem) && ctx.pc == 0x08A31C04u) goto L_08A31C04;
    return;
L_08A31C04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31C14;
      }
      goto L_08A31C0C;
    }
L_08A31C0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A31C18;
      }
      goto L_08A31C14;
    }
L_08A31C14:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A31C18;
L_08A31C18:
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
          goto L_08A31C44;
      }
      goto L_08A31C3C;
    }
L_08A31C3C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A31C94;
      }
      goto L_08A31C44;
    }
L_08A31C44:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A31C74;
    }
    goto L_08A31C60;
L_08A31C60:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A31C94;
      }
      goto L_08A31C74;
    }
L_08A31C74:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31C94;
      }
      goto L_08A31C90;
    }
L_08A31C90:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A31C94;
L_08A31C94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A31C9C;
    }
L_08A31C9C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A31CB4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31CB4u) goto L_08A31CB4;
    return;
L_08A31CB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A31CC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A31CC4u) goto L_08A31CC4;
    return;
L_08A31CC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (ctx.gpr[5] & 256u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A31CD8;
      }
      goto L_08A31CD4;
    }
L_08A31CD4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A31CD8;
L_08A31CD8:
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
          goto L_08A31D04;
      }
      goto L_08A31CFC;
    }
L_08A31CFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A31D54;
      }
      goto L_08A31D04;
    }
L_08A31D04:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A31D34;
    }
    goto L_08A31D20;
L_08A31D20:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A31D54;
      }
      goto L_08A31D34;
    }
L_08A31D34:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31D54;
      }
      goto L_08A31D50;
    }
L_08A31D50:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A31D54;
L_08A31D54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A31D5C;
    }
L_08A31D5C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A31D78u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31D78u) goto L_08A31D78;
    return;
L_08A31D78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A31D88u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A31D88u) goto L_08A31D88;
    return;
L_08A31D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A31DD4;
      }
      goto L_08A31D94;
    }
L_08A31D94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31E38;
      }
      goto L_08A31DB0;
    }
L_08A31DB0:
    ctx.gpr[31] = (0x08A31DB8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x08A31DB8u) goto L_08A31DB8;
    return;
L_08A31DB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 4096u);
    ctx.gpr[31] = (0x08A31DCCu);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31DCCu) goto L_08A31DCC;
    return;
L_08A31DCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31E38;
      }
      goto L_08A31DD4;
    }
L_08A31DD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31E38;
      }
      goto L_08A31DF0;
    }
L_08A31DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A31E20;
      }
      goto L_08A31E10;
    }
L_08A31E10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A31E28;
      }
      goto L_08A31E20;
    }
L_08A31E20:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A31E28;
L_08A31E28:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31E38;
      }
      goto L_08A31E30;
    }
L_08A31E30:
    ctx.gpr[31] = (0x08A31E38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 153u, 0x08A0D424u>(ctx, &aot_mem) && ctx.pc == 0x08A31E38u) goto L_08A31E38;
    return;
L_08A31E38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A31E40;
    }
L_08A31E40:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A31E5Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31E5Cu) goto L_08A31E5C;
    return;
L_08A31E5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A31E6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A31E6Cu) goto L_08A31E6C;
    return;
L_08A31E6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A31EB8;
      }
      goto L_08A31E78;
    }
L_08A31E78:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31F1C;
      }
      goto L_08A31E94;
    }
L_08A31E94:
    ctx.gpr[31] = (0x08A31E9Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x08A31E9Cu) goto L_08A31E9C;
    return;
L_08A31E9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 4096u);
    ctx.gpr[31] = (0x08A31EB0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31EB0u) goto L_08A31EB0;
    return;
L_08A31EB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31F1C;
      }
      goto L_08A31EB8;
    }
L_08A31EB8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31F1C;
      }
      goto L_08A31ED4;
    }
L_08A31ED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A31F04;
      }
      goto L_08A31EF4;
    }
L_08A31EF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A31F0C;
      }
      goto L_08A31F04;
    }
L_08A31F04:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A31F0C;
L_08A31F0C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31F1C;
      }
      goto L_08A31F14;
    }
L_08A31F14:
    ctx.gpr[31] = (0x08A31F1Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 153u, 0x08A0D424u>(ctx, &aot_mem) && ctx.pc == 0x08A31F1Cu) goto L_08A31F1C;
    return;
L_08A31F1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A31F24;
    }
L_08A31F24:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08A31F40u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31F40u) goto L_08A31F40;
    return;
L_08A31F40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x08A31F7Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 34u, 0x0886040Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31F7Cu) goto L_08A31F7C;
    return;
L_08A31F7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A31F84;
    }
L_08A31F84:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A31F9Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31F9Cu) goto L_08A31F9C;
    return;
L_08A31F9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A31FACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A31FACu) goto L_08A31FAC;
    return;
L_08A31FAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (ctx.gpr[5] & 64u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A31FC0;
      }
      goto L_08A31FBC;
    }
L_08A31FBC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A31FC0;
L_08A31FC0:
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
          goto L_08A31FEC;
      }
      goto L_08A31FE4;
    }
L_08A31FE4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A3203C;
      }
      goto L_08A31FEC;
    }
L_08A31FEC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A3201C;
    }
    goto L_08A32008;
L_08A32008:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A3203C;
      }
      goto L_08A3201C;
    }
L_08A3201C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3203C;
      }
      goto L_08A32038;
    }
L_08A32038:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A3203C;
L_08A3203C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A32044;
    }
L_08A32044:
    ctx.gpr[31] = (0x08A3204Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 177u, 0x08844EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A3204Cu) goto L_08A3204C;
    return;
L_08A3204C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[0]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A32070u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A32070u) goto L_08A32070;
    return;
L_08A32070:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A32078;
    }
L_08A32078:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A32094u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32094u) goto L_08A32094;
    return;
L_08A32094:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A320BCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 125u, 0x08A8C974u>(ctx, &aot_mem) && ctx.pc == 0x08A320BCu) goto L_08A320BC;
    return;
L_08A320BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A320C4;
    }
L_08A320C4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A320E0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A320E0u) goto L_08A320E0;
    return;
L_08A320E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A32108u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 128u, 0x08A8C9D0u>(ctx, &aot_mem) && ctx.pc == 0x08A32108u) goto L_08A32108;
    return;
L_08A32108:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A32110;
    }
L_08A32110:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x08A3212Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3212Cu) goto L_08A3212C;
    return;
L_08A3212C:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A32154u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08A32154u) goto L_08A32154;
    return;
L_08A32154:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A3215C;
L_08A3215C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3235C;
      }
      goto L_08A32164;
    }
L_08A32164:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A3235C;
      }
      goto L_08A32170;
    }
L_08A32170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
      if (branch_taken) {
          goto L_08A32194;
      }
      goto L_08A3218C;
    }
L_08A3218C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A321AC;
      }
      goto L_08A32194;
    }
L_08A32194:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08A321AC;
L_08A321AC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32354;
      }
      goto L_08A321B4;
    }
L_08A321B4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08A321C4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 493u, 0x08AFE0A8u>(ctx, &aot_mem) && ctx.pc == 0x08A321C4u) goto L_08A321C4;
    return;
L_08A321C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7124)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A32354;
      }
      goto L_08A321D4;
    }
L_08A321D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A32354;
      }
      goto L_08A321E4;
    }
L_08A321E4:
    ctx.gpr[31] = (0x08A321ECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x08A321ECu) goto L_08A321EC;
    return;
L_08A321EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32354;
      }
      goto L_08A321F4;
    }
L_08A321F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32354;
      }
      goto L_08A32204;
    }
L_08A32204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32354;
      }
      goto L_08A32218;
    }
L_08A32218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32354;
      }
      goto L_08A32224;
    }
L_08A32224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32354;
      }
      goto L_08A32234;
    }
L_08A32234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32354;
      }
      goto L_08A32240;
    }
L_08A32240:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A32260u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 34u, 0x088E4250u>(ctx, &aot_mem) && ctx.pc == 0x08A32260u) goto L_08A32260;
    return;
L_08A32260:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32354;
      }
      goto L_08A32268;
    }
L_08A32268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32354;
      }
      goto L_08A32278;
    }
L_08A32278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32354;
      }
      goto L_08A32284;
    }
L_08A32284:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A3229Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A288F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3229Cu) goto L_08A3229C;
    return;
L_08A3229C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A32354;
      }
      goto L_08A322A4;
    }
L_08A322A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_08A32354;
      }
      goto L_08A322C4;
    }
L_08A322C4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A32354;
      }
      goto L_08A322DC;
    }
L_08A322DC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08A322ECu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 493u, 0x08AFE0A8u>(ctx, &aot_mem) && ctx.pc == 0x08A322ECu) goto L_08A322EC;
    return;
L_08A322EC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7124), ctx.gpr[17]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32354;
      }
      goto L_08A32340;
    }
L_08A32340:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A32354u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 459u, 0x089571E0u>(ctx, &aot_mem) && ctx.pc == 0x08A32354u) goto L_08A32354;
    return;
L_08A32354:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A3215C;
      }
      goto L_08A3235C;
    }
L_08A3235C:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A32374u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A32374u) goto L_08A32374;
    return;
L_08A32374:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A3237C;
    }
L_08A3237C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A32398u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32398u) goto L_08A32398;
    return;
L_08A32398:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3244C;
      }
      goto L_08A323BC;
    }
L_08A323BC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_08A323E4;
      }
      goto L_08A323DC;
    }
L_08A323DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A32410;
      }
      goto L_08A323E4;
    }
L_08A323E4:
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08A32410;
L_08A32410:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32440;
      }
      goto L_08A32418;
    }
L_08A32418:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A32430u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A288F4u>(ctx, &aot_mem) && ctx.pc == 0x08A32430u) goto L_08A32430;
    return;
L_08A32430:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32440;
      }
      goto L_08A32438;
    }
L_08A32438:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    goto L_08A32440;
L_08A32440:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A323BC;
      }
      goto L_08A3244C;
    }
L_08A3244C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A32454;
    }
L_08A32454:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A32470u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32470u) goto L_08A32470;
    return;
L_08A32470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[31] = (0x08A32488u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 651u, 0x08AC3DD8u>(ctx, &aot_mem) && ctx.pc == 0x08A32488u) goto L_08A32488;
    return;
L_08A32488:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A32490;
    }
L_08A32490:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A324ACu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A324ACu) goto L_08A324AC;
    return;
L_08A324AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A324BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A324BCu) goto L_08A324BC;
    return;
L_08A324BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A324E8;
      }
      goto L_08A324C8;
    }
L_08A324C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3250C;
      }
      goto L_08A324E8;
    }
L_08A324E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
    goto L_08A3250C;
L_08A3250C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A32514;
    }
L_08A32514:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A32530u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32530u) goto L_08A32530;
    return;
L_08A32530:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A32540u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A32540u) goto L_08A32540;
    return;
L_08A32540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08A3254Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 313u, 0x08925FB4u>(ctx, &aot_mem) && ctx.pc == 0x08A3254Cu) goto L_08A3254C;
    return;
L_08A3254C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A32554;
    }
L_08A32554:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7768)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08A32568u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7768), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 186u, 0x08844F84u>(ctx, &aot_mem) && ctx.pc == 0x08A32568u) goto L_08A32568;
    return;
L_08A32568:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x08A3257Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7268), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 129u, 0x08A8C9F8u>(ctx, &aot_mem) && ctx.pc == 0x08A3257Cu) goto L_08A3257C;
    return;
L_08A3257C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A32584;
    }
L_08A32584:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A3259Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3259Cu) goto L_08A3259C;
    return;
L_08A3259C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A325FC;
      }
      goto L_08A325D0;
    }
L_08A325D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A325FC;
      }
      goto L_08A325E0;
    }
L_08A325E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7904)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A325FC;
      }
      goto L_08A325F8;
    }
L_08A325F8:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A325FC;
L_08A325FC:
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
          goto L_08A32628;
      }
      goto L_08A32620;
    }
L_08A32620:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A32678;
      }
      goto L_08A32628;
    }
L_08A32628:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A32658;
    }
    goto L_08A32644;
L_08A32644:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A32678;
      }
      goto L_08A32658;
    }
L_08A32658:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32678;
      }
      goto L_08A32674;
    }
L_08A32674:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A32678;
L_08A32678:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A32680;
    }
L_08A32680:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A32698u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32698u) goto L_08A32698;
    return;
L_08A32698:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A326A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A326A8u) goto L_08A326A8;
    return;
L_08A326A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08A326B4u);
    ctx.gpr[5] = (0u | 153u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08A326B4u) goto L_08A326B4;
    return;
L_08A326B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A326C4;
      }
      goto L_08A326BC;
    }
L_08A326BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A326C8;
      }
      goto L_08A326C4;
    }
L_08A326C4:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A326C8;
L_08A326C8:
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
          goto L_08A326F4;
      }
      goto L_08A326EC;
    }
L_08A326EC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A32744;
      }
      goto L_08A326F4;
    }
L_08A326F4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A32724;
    }
    goto L_08A32710;
L_08A32710:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A32744;
      }
      goto L_08A32724;
    }
L_08A32724:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32744;
      }
      goto L_08A32740;
    }
L_08A32740:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A32744;
L_08A32744:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A3274C;
    }
L_08A3274C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A32768u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32768u) goto L_08A32768;
    return;
L_08A32768:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[31] = (0x08A32778u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x08A32778u) goto L_08A32778;
    return;
L_08A32778:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A327B4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08A327B4u) goto L_08A327B4;
    return;
L_08A327B4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[31] = (0x08A327D0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 292u, 0x0890DE48u>(ctx, &aot_mem) && ctx.pc == 0x08A327D0u) goto L_08A327D0;
    return;
L_08A327D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A327E0;
      }
      goto L_08A327D8;
    }
L_08A327D8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A327E0;
L_08A327E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A327F8;
      }
      goto L_08A327F4;
    }
L_08A327F4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    goto L_08A327F8;
L_08A327F8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32820;
      }
      goto L_08A32810;
    }
L_08A32810:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A32820;
L_08A32820:
    ctx.gpr[31] = (0x08A32828u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A32828u) goto L_08A32828;
    return;
L_08A32828:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[31] = (0x08A32850u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A32850u) goto L_08A32850;
    return;
L_08A32850:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10876)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10880)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A32868u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08A32868u) goto L_08A32868;
    return;
L_08A32868:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A3287Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x08A3287Cu) goto L_08A3287C;
    return;
L_08A3287C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A32888u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x08A32888u) goto L_08A32888;
    return;
L_08A32888:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A328A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 129u, 0x088A5000u>(ctx, &aot_mem) && ctx.pc == 0x08A328A4u) goto L_08A328A4;
    return;
L_08A328A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A328AC;
    }
L_08A328AC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A328C4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A328C4u) goto L_08A328C4;
    return;
L_08A328C4:
    ctx.gpr[31] = (0x08A328CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 122u, 0x08844A28u>(ctx, &aot_mem) && ctx.pc == 0x08A328CCu) goto L_08A328CC;
    return;
L_08A328CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A328D4;
    }
L_08A328D4:
    ctx.gpr[4] = (0u | 0u);
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
          goto L_08A32904;
      }
      goto L_08A328FC;
    }
L_08A328FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A32954;
      }
      goto L_08A32904;
    }
L_08A32904:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A32934;
    }
    goto L_08A32920;
L_08A32920:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A32954;
      }
      goto L_08A32934;
    }
L_08A32934:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32954;
      }
      goto L_08A32950;
    }
L_08A32950:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A32954;
L_08A32954:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A3295C;
    }
L_08A3295C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A32974u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32974u) goto L_08A32974;
    return;
L_08A32974:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A32984u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A32984u) goto L_08A32984;
    return;
L_08A32984:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A329B8;
      }
      goto L_08A32994;
    }
L_08A32994:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A329B8;
      }
      goto L_08A329A4;
    }
L_08A329A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1512), 0u);
    goto L_08A329B8;
L_08A329B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A329C0;
    }
L_08A329C0:
    ctx.gpr[4] = (0u | 0u);
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
          goto L_08A329F0;
      }
      goto L_08A329E8;
    }
L_08A329E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A32A40;
      }
      goto L_08A329F0;
    }
L_08A329F0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A32A20;
    }
    goto L_08A32A0C;
L_08A32A0C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A32A40;
      }
      goto L_08A32A20;
    }
L_08A32A20:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32A40;
      }
      goto L_08A32A3C;
    }
L_08A32A3C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A32A40;
L_08A32A40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A32A48;
    }
L_08A32A48:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A32A60u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32A60u) goto L_08A32A60;
    return;
L_08A32A60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A32A68;
    }
L_08A32A68:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A32A88u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32A88u) goto L_08A32A88;
    return;
L_08A32A88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = ctx.fpr[13] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[12] = std::sqrt(ctx.fpr[14]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A32B10u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A32B10u) goto L_08A32B10;
    return;
L_08A32B10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A32B18;
    }
L_08A32B18:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08A32B38u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32B38u) goto L_08A32B38;
    return;
L_08A32B38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A32BB0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A32BB0u) goto L_08A32BB0;
    return;
L_08A32BB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A32BB8;
    }
L_08A32BB8:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A32BD8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32BD8u) goto L_08A32BD8;
    return;
L_08A32BD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A32C1Cu);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A32C1Cu) goto L_08A32C1C;
    return;
L_08A32C1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A32C24;
    }
L_08A32C24:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08A32C44u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32C44u) goto L_08A32C44;
    return;
L_08A32C44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A32CA8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A32CA8u) goto L_08A32CA8;
    return;
L_08A32CA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A32CB0;
    }
L_08A32CB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A32CB8;
    }
L_08A32CB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A32CC0;
    }
L_08A32CC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A32CC8;
    }
L_08A32CC8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A32CE0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32CE0u) goto L_08A32CE0;
    return;
L_08A32CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(45) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32CF0;
    }
L_08A32CF0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(5192)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A32D08:
    ctx.gpr[31] = (0x08A32D10u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32D10u) goto L_08A32D10;
    return;
L_08A32D10:
    ctx.gpr[31] = (0x08A32D18u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 799u, 0x08A97278u>(ctx, &aot_mem) && ctx.pc == 0x08A32D18u) goto L_08A32D18;
    return;
L_08A32D18:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32D24;
    }
L_08A32D24:
    ctx.gpr[31] = (0x08A32D2Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32D2Cu) goto L_08A32D2C;
    return;
L_08A32D2C:
    ctx.gpr[31] = (0x08A32D34u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1088u, 0x08A97F64u>(ctx, &aot_mem) && ctx.pc == 0x08A32D34u) goto L_08A32D34;
    return;
L_08A32D34:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32D40;
    }
L_08A32D40:
    ctx.gpr[31] = (0x08A32D48u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32D48u) goto L_08A32D48;
    return;
L_08A32D48:
    ctx.gpr[31] = (0x08A32D50u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 810u, 0x08A972E0u>(ctx, &aot_mem) && ctx.pc == 0x08A32D50u) goto L_08A32D50;
    return;
L_08A32D50:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32D5C;
    }
L_08A32D5C:
    ctx.gpr[31] = (0x08A32D64u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32D64u) goto L_08A32D64;
    return;
L_08A32D64:
    ctx.gpr[31] = (0x08A32D6Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 823u, 0x08A97388u>(ctx, &aot_mem) && ctx.pc == 0x08A32D6Cu) goto L_08A32D6C;
    return;
L_08A32D6C:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32D78;
    }
L_08A32D78:
    ctx.gpr[31] = (0x08A32D80u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32D80u) goto L_08A32D80;
    return;
L_08A32D80:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A32D8Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 835u, 0x08A97404u>(ctx, &aot_mem) && ctx.pc == 0x08A32D8Cu) goto L_08A32D8C;
    return;
L_08A32D8C:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32D98;
    }
L_08A32D98:
    ctx.gpr[31] = (0x08A32DA0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32DA0u) goto L_08A32DA0;
    return;
L_08A32DA0:
    ctx.gpr[31] = (0x08A32DA8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 846u, 0x08A974B0u>(ctx, &aot_mem) && ctx.pc == 0x08A32DA8u) goto L_08A32DA8;
    return;
L_08A32DA8:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32DB4;
    }
L_08A32DB4:
    ctx.gpr[31] = (0x08A32DBCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32DBCu) goto L_08A32DBC;
    return;
L_08A32DBC:
    ctx.gpr[31] = (0x08A32DC4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 870u, 0x08A975E8u>(ctx, &aot_mem) && ctx.pc == 0x08A32DC4u) goto L_08A32DC4;
    return;
L_08A32DC4:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32DD0;
    }
L_08A32DD0:
    ctx.gpr[31] = (0x08A32DD8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32DD8u) goto L_08A32DD8;
    return;
L_08A32DD8:
    ctx.gpr[31] = (0x08A32DE0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 879u, 0x08A9764Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32DE0u) goto L_08A32DE0;
    return;
L_08A32DE0:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32DEC;
    }
L_08A32DEC:
    ctx.gpr[31] = (0x08A32DF4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32DF4u) goto L_08A32DF4;
    return;
L_08A32DF4:
    ctx.gpr[31] = (0x08A32DFCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 902u, 0x08A9777Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32DFCu) goto L_08A32DFC;
    return;
L_08A32DFC:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32E08;
    }
L_08A32E08:
    ctx.gpr[31] = (0x08A32E10u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32E10u) goto L_08A32E10;
    return;
L_08A32E10:
    ctx.gpr[31] = (0x08A32E18u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 942u, 0x08A97950u>(ctx, &aot_mem) && ctx.pc == 0x08A32E18u) goto L_08A32E18;
    return;
L_08A32E18:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32E24;
    }
L_08A32E24:
    ctx.gpr[31] = (0x08A32E2Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32E2Cu) goto L_08A32E2C;
    return;
L_08A32E2C:
    ctx.gpr[31] = (0x08A32E34u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 982u, 0x08A97B28u>(ctx, &aot_mem) && ctx.pc == 0x08A32E34u) goto L_08A32E34;
    return;
L_08A32E34:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32E40;
    }
L_08A32E40:
    ctx.gpr[31] = (0x08A32E48u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32E48u) goto L_08A32E48;
    return;
L_08A32E48:
    ctx.gpr[31] = (0x08A32E50u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1017u, 0x08A97CDCu>(ctx, &aot_mem) && ctx.pc == 0x08A32E50u) goto L_08A32E50;
    return;
L_08A32E50:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32E5C;
    }
L_08A32E5C:
    ctx.gpr[31] = (0x08A32E64u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32E64u) goto L_08A32E64;
    return;
L_08A32E64:
    ctx.gpr[31] = (0x08A32E6Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1027u, 0x08A97D38u>(ctx, &aot_mem) && ctx.pc == 0x08A32E6Cu) goto L_08A32E6C;
    return;
L_08A32E6C:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32E78;
    }
L_08A32E78:
    ctx.gpr[31] = (0x08A32E80u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32E80u) goto L_08A32E80;
    return;
L_08A32E80:
    ctx.gpr[31] = (0x08A32E88u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1041u, 0x08A97DBCu>(ctx, &aot_mem) && ctx.pc == 0x08A32E88u) goto L_08A32E88;
    return;
L_08A32E88:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32E94;
    }
L_08A32E94:
    ctx.gpr[31] = (0x08A32E9Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32E9Cu) goto L_08A32E9C;
    return;
L_08A32E9C:
    ctx.gpr[31] = (0x08A32EA4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1055u, 0x08A97E40u>(ctx, &aot_mem) && ctx.pc == 0x08A32EA4u) goto L_08A32EA4;
    return;
L_08A32EA4:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32EB0;
    }
L_08A32EB0:
    ctx.gpr[31] = (0x08A32EB8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32EB8u) goto L_08A32EB8;
    return;
L_08A32EB8:
    ctx.gpr[31] = (0x08A32EC0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1059u, 0x08A97E64u>(ctx, &aot_mem) && ctx.pc == 0x08A32EC0u) goto L_08A32EC0;
    return;
L_08A32EC0:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32ECC;
    }
L_08A32ECC:
    ctx.gpr[31] = (0x08A32ED4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32ED4u) goto L_08A32ED4;
    return;
L_08A32ED4:
    ctx.gpr[31] = (0x08A32EDCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1075u, 0x08A97EECu>(ctx, &aot_mem) && ctx.pc == 0x08A32EDCu) goto L_08A32EDC;
    return;
L_08A32EDC:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32EE8;
    }
L_08A32EE8:
    ctx.gpr[31] = (0x08A32EF0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32EF0u) goto L_08A32EF0;
    return;
L_08A32EF0:
    ctx.gpr[31] = (0x08A32EF8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1088u, 0x08A97F64u>(ctx, &aot_mem) && ctx.pc == 0x08A32EF8u) goto L_08A32EF8;
    return;
L_08A32EF8:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32F04;
    }
L_08A32F04:
    ctx.gpr[31] = (0x08A32F0Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32F0Cu) goto L_08A32F0C;
    return;
L_08A32F0C:
    ctx.gpr[31] = (0x08A32F14u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1092u, 0x08A97F84u>(ctx, &aot_mem) && ctx.pc == 0x08A32F14u) goto L_08A32F14;
    return;
L_08A32F14:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32F20;
    }
L_08A32F20:
    ctx.gpr[31] = (0x08A32F28u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32F28u) goto L_08A32F28;
    return;
L_08A32F28:
    ctx.gpr[31] = (0x08A32F30u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1100u, 0x08A97FD4u>(ctx, &aot_mem) && ctx.pc == 0x08A32F30u) goto L_08A32F30;
    return;
L_08A32F30:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32F3C;
    }
L_08A32F3C:
    ctx.gpr[31] = (0x08A32F44u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32F44u) goto L_08A32F44;
    return;
L_08A32F44:
    ctx.gpr[31] = (0x08A32F4Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 9u, 0x08A98040u>(ctx, &aot_mem) && ctx.pc == 0x08A32F4Cu) goto L_08A32F4C;
    return;
L_08A32F4C:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32F58;
    }
L_08A32F58:
    ctx.gpr[31] = (0x08A32F60u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32F60u) goto L_08A32F60;
    return;
L_08A32F60:
    ctx.gpr[31] = (0x08A32F68u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 16u, 0x08A9807Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32F68u) goto L_08A32F68;
    return;
L_08A32F68:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32F74;
    }
L_08A32F74:
    ctx.gpr[31] = (0x08A32F7Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32F7Cu) goto L_08A32F7C;
    return;
L_08A32F7C:
    ctx.gpr[31] = (0x08A32F84u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 27u, 0x08A980DCu>(ctx, &aot_mem) && ctx.pc == 0x08A32F84u) goto L_08A32F84;
    return;
L_08A32F84:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32F90;
    }
L_08A32F90:
    ctx.gpr[31] = (0x08A32F98u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32F98u) goto L_08A32F98;
    return;
L_08A32F98:
    ctx.gpr[31] = (0x08A32FA0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 31u, 0x08A980FCu>(ctx, &aot_mem) && ctx.pc == 0x08A32FA0u) goto L_08A32FA0;
    return;
L_08A32FA0:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32FAC;
    }
L_08A32FAC:
    ctx.gpr[31] = (0x08A32FB4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32FB4u) goto L_08A32FB4;
    return;
L_08A32FB4:
    ctx.gpr[31] = (0x08A32FBCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 65u, 0x08A98258u>(ctx, &aot_mem) && ctx.pc == 0x08A32FBCu) goto L_08A32FBC;
    return;
L_08A32FBC:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32FC8;
    }
L_08A32FC8:
    ctx.gpr[31] = (0x08A32FD0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32FD0u) goto L_08A32FD0;
    return;
L_08A32FD0:
    ctx.gpr[31] = (0x08A32FD8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 72u, 0x08A982A4u>(ctx, &aot_mem) && ctx.pc == 0x08A32FD8u) goto L_08A32FD8;
    return;
L_08A32FD8:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A32FE4;
    }
L_08A32FE4:
    ctx.gpr[31] = (0x08A32FECu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A32FECu) goto L_08A32FEC;
    return;
L_08A32FEC:
    ctx.gpr[31] = (0x08A32FF4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 79u, 0x08A982F0u>(ctx, &aot_mem) && ctx.pc == 0x08A32FF4u) goto L_08A32FF4;
    return;
L_08A32FF4:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A33000;
    }
L_08A33000:
    ctx.gpr[31] = (0x08A33008u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A33008u) goto L_08A33008;
    return;
L_08A33008:
    ctx.gpr[31] = (0x08A33010u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 86u, 0x08A98340u>(ctx, &aot_mem) && ctx.pc == 0x08A33010u) goto L_08A33010;
    return;
L_08A33010:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A3301C;
    }
L_08A3301C:
    ctx.gpr[31] = (0x08A33024u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A33024u) goto L_08A33024;
    return;
L_08A33024:
    ctx.gpr[31] = (0x08A3302Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 98u, 0x08A983B8u>(ctx, &aot_mem) && ctx.pc == 0x08A3302Cu) goto L_08A3302C;
    return;
L_08A3302C:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A33038;
    }
L_08A33038:
    ctx.gpr[31] = (0x08A33040u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A33040u) goto L_08A33040;
    return;
L_08A33040:
    ctx.gpr[31] = (0x08A33048u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 136u, 0x08A98578u>(ctx, &aot_mem) && ctx.pc == 0x08A33048u) goto L_08A33048;
    return;
L_08A33048:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A33054;
    }
L_08A33054:
    ctx.gpr[31] = (0x08A3305Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A3305Cu) goto L_08A3305C;
    return;
L_08A3305C:
    ctx.gpr[31] = (0x08A33064u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 154u, 0x08A9864Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33064u) goto L_08A33064;
    return;
L_08A33064:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A33070;
    }
L_08A33070:
    ctx.gpr[31] = (0x08A33078u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A33078u) goto L_08A33078;
    return;
L_08A33078:
    ctx.gpr[31] = (0x08A33080u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 206u, 0x08A98890u>(ctx, &aot_mem) && ctx.pc == 0x08A33080u) goto L_08A33080;
    return;
L_08A33080:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A3308C;
    }
L_08A3308C:
    ctx.gpr[31] = (0x08A33094u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A33094u) goto L_08A33094;
    return;
L_08A33094:
    ctx.gpr[31] = (0x08A3309Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 252u, 0x08A98A88u>(ctx, &aot_mem) && ctx.pc == 0x08A3309Cu) goto L_08A3309C;
    return;
L_08A3309C:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A330A8;
    }
L_08A330A8:
    ctx.gpr[31] = (0x08A330B0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A330B0u) goto L_08A330B0;
    return;
L_08A330B0:
    ctx.gpr[31] = (0x08A330B8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 259u, 0x08A98AC8u>(ctx, &aot_mem) && ctx.pc == 0x08A330B8u) goto L_08A330B8;
    return;
L_08A330B8:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A330C4;
    }
L_08A330C4:
    ctx.gpr[31] = (0x08A330CCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A330CCu) goto L_08A330CC;
    return;
L_08A330CC:
    ctx.gpr[31] = (0x08A330D4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 266u, 0x08A98B08u>(ctx, &aot_mem) && ctx.pc == 0x08A330D4u) goto L_08A330D4;
    return;
L_08A330D4:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A330E0;
    }
L_08A330E0:
    ctx.gpr[31] = (0x08A330E8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A330E8u) goto L_08A330E8;
    return;
L_08A330E8:
    ctx.gpr[31] = (0x08A330F0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 281u, 0x08A98C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A330F0u) goto L_08A330F0;
    return;
L_08A330F0:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A330FC;
    }
L_08A330FC:
    ctx.gpr[31] = (0x08A33104u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A33104u) goto L_08A33104;
    return;
L_08A33104:
    ctx.gpr[31] = (0x08A3310Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 300u, 0x08A98D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3310Cu) goto L_08A3310C;
    return;
L_08A3310C:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A33118;
    }
L_08A33118:
    ctx.gpr[31] = (0x08A33120u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A33120u) goto L_08A33120;
    return;
L_08A33120:
    ctx.gpr[31] = (0x08A33128u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 320u, 0x08A98E3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33128u) goto L_08A33128;
    return;
L_08A33128:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A33134;
    }
L_08A33134:
    ctx.gpr[31] = (0x08A3313Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A3313Cu) goto L_08A3313C;
    return;
L_08A3313C:
    ctx.gpr[31] = (0x08A33144u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 743u, 0x08A97050u>(ctx, &aot_mem) && ctx.pc == 0x08A33144u) goto L_08A33144;
    return;
L_08A33144:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A33150;
    }
L_08A33150:
    ctx.gpr[31] = (0x08A33158u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A33158u) goto L_08A33158;
    return;
L_08A33158:
    ctx.gpr[31] = (0x08A33160u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 750u, 0x08A97098u>(ctx, &aot_mem) && ctx.pc == 0x08A33160u) goto L_08A33160;
    return;
L_08A33160:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A3316C;
    }
L_08A3316C:
    ctx.gpr[31] = (0x08A33174u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A33174u) goto L_08A33174;
    return;
L_08A33174:
    ctx.gpr[31] = (0x08A3317Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 757u, 0x08A970E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3317Cu) goto L_08A3317C;
    return;
L_08A3317C:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A33188;
    }
L_08A33188:
    ctx.gpr[31] = (0x08A33190u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A33190u) goto L_08A33190;
    return;
L_08A33190:
    ctx.gpr[31] = (0x08A33198u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 764u, 0x08A97128u>(ctx, &aot_mem) && ctx.pc == 0x08A33198u) goto L_08A33198;
    return;
L_08A33198:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A331A4;
    }
L_08A331A4:
    ctx.gpr[31] = (0x08A331ACu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A331ACu) goto L_08A331AC;
    return;
L_08A331AC:
    ctx.gpr[31] = (0x08A331B4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 771u, 0x08A97170u>(ctx, &aot_mem) && ctx.pc == 0x08A331B4u) goto L_08A331B4;
    return;
L_08A331B4:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A331C0;
    }
L_08A331C0:
    ctx.gpr[31] = (0x08A331C8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A331C8u) goto L_08A331C8;
    return;
L_08A331C8:
    ctx.gpr[31] = (0x08A331D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 772u, 0x08A9717Cu>(ctx, &aot_mem) && ctx.pc == 0x08A331D0u) goto L_08A331D0;
    return;
L_08A331D0:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A331DC;
    }
L_08A331DC:
    ctx.gpr[31] = (0x08A331E4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A331E4u) goto L_08A331E4;
    return;
L_08A331E4:
    ctx.gpr[31] = (0x08A331ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 782u, 0x08A971DCu>(ctx, &aot_mem) && ctx.pc == 0x08A331ECu) goto L_08A331EC;
    return;
L_08A331EC:
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A33208;
      }
      goto L_08A331F8;
    }
L_08A331F8:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A33208;
L_08A33208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33210;
      }
      goto L_08A33210;
    }
L_08A33210:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A33220u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A33220u) goto L_08A33220;
    return;
L_08A33220:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A33228;
    }
L_08A33228:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A33244u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33244u) goto L_08A33244;
    return;
L_08A33244:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A33254u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 643u, 0x08877F04u>(ctx, &aot_mem) && ctx.pc == 0x08A33254u) goto L_08A33254;
    return;
L_08A33254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A3325C;
    }
L_08A3325C:
    ctx.gpr[31] = (0x08A33264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 647u, 0x08877F78u>(ctx, &aot_mem) && ctx.pc == 0x08A33264u) goto L_08A33264;
    return;
L_08A33264:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A3326C;
    }
L_08A3326C:
    ctx.gpr[4] = (0u | 1454u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A332A4;
      }
      goto L_08A33278;
    }
L_08A33278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A332CC;
      }
      goto L_08A332A4;
    }
L_08A332A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08A332CC;
L_08A332CC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A33328u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33328u) goto L_08A33328;
    return;
L_08A33328:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(520)));
        goto L_08A3335C;
    }
    goto L_08A33330;
L_08A33330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(520)));
    ctx.gpr[7] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A33358u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33358u) goto L_08A33358;
    return;
L_08A33358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(520)));
    goto L_08A3335C;
L_08A3335C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(520), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A333B4;
      }
      goto L_08A33398;
    }
L_08A33398:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7260)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A333C0;
      }
      goto L_08A333B4;
    }
L_08A333B4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08A333C0;
L_08A333C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A333C8;
    }
L_08A333C8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A333E0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A333E0u) goto L_08A333E0;
    return;
L_08A333E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A333F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A333F0u) goto L_08A333F0;
    return;
L_08A333F0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(130) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A33418;
      }
      goto L_08A33404;
    }
L_08A33404:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(192) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33418;
      }
      goto L_08A33414;
    }
L_08A33414:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A33418;
L_08A33418:
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
          goto L_08A33444;
      }
      goto L_08A3343C;
    }
L_08A3343C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A33494;
      }
      goto L_08A33444;
    }
L_08A33444:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A33474;
    }
    goto L_08A33460;
L_08A33460:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A33494;
      }
      goto L_08A33474;
    }
L_08A33474:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33494;
      }
      goto L_08A33490;
    }
L_08A33490:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A33494;
L_08A33494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A3349C;
    }
L_08A3349C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A334B4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A334B4u) goto L_08A334B4;
    return;
L_08A334B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A334C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A334C4u) goto L_08A334C4;
    return;
L_08A334C4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(202) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A334EC;
      }
      goto L_08A334D8;
    }
L_08A334D8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(211) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A334EC;
      }
      goto L_08A334E8;
    }
L_08A334E8:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A334EC;
L_08A334EC:
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
          goto L_08A33518;
      }
      goto L_08A33510;
    }
L_08A33510:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A33568;
      }
      goto L_08A33518;
    }
L_08A33518:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A33548;
    }
    goto L_08A33534;
L_08A33534:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A33568;
      }
      goto L_08A33548;
    }
L_08A33548:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33568;
      }
      goto L_08A33564;
    }
L_08A33564:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A33568;
L_08A33568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A33570;
    }
L_08A33570:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A33588u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33588u) goto L_08A33588;
    return;
L_08A33588:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A33598u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A33598u) goto L_08A33598;
    return;
L_08A33598:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(200) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A335C0;
      }
      goto L_08A335AC;
    }
L_08A335AC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(202) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A335C0;
      }
      goto L_08A335BC;
    }
L_08A335BC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A335C0;
L_08A335C0:
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
          goto L_08A335EC;
      }
      goto L_08A335E4;
    }
L_08A335E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A3363C;
      }
      goto L_08A335EC;
    }
L_08A335EC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A3361C;
    }
    goto L_08A33608;
L_08A33608:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A3363C;
      }
      goto L_08A3361C;
    }
L_08A3361C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3363C;
      }
      goto L_08A33638;
    }
L_08A33638:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A3363C;
L_08A3363C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A33644;
    }
L_08A33644:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A3365Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3365Cu) goto L_08A3365C;
    return;
L_08A3365C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A3366Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A3366Cu) goto L_08A3366C;
    return;
L_08A3366C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(198) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A33694;
      }
      goto L_08A33680;
    }
L_08A33680:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(200) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33694;
      }
      goto L_08A33690;
    }
L_08A33690:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A33694;
L_08A33694:
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
          goto L_08A336C0;
      }
      goto L_08A336B8;
    }
L_08A336B8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A33710;
      }
      goto L_08A336C0;
    }
L_08A336C0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A336F0;
    }
    goto L_08A336DC;
L_08A336DC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A33710;
      }
      goto L_08A336F0;
    }
L_08A336F0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33710;
      }
      goto L_08A3370C;
    }
L_08A3370C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A33710;
L_08A33710:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A33718;
    }
L_08A33718:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A33720;
    }
L_08A33720:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33734;
      }
      goto L_08A3372C;
    }
L_08A3372C:
    ctx.gpr[31] = (0x08A33734u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 657u, 0x08957FD8u>(ctx, &aot_mem) && ctx.pc == 0x08A33734u) goto L_08A33734;
    return;
L_08A33734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A3373C;
    }
L_08A3373C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A337C4;
      }
      goto L_08A33748;
    }
L_08A33748:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3376C;
      }
      goto L_08A33764;
    }
L_08A33764:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A337BC;
      }
      goto L_08A3376C;
    }
L_08A3376C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A3379C;
    }
    goto L_08A33788;
L_08A33788:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A337BC;
      }
      goto L_08A3379C;
    }
L_08A3379C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A337BC;
      }
      goto L_08A337B8;
    }
L_08A337B8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A337BC;
L_08A337BC:
    ctx.gpr[31] = (0x08A337C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 657u, 0x08957FD8u>(ctx, &aot_mem) && ctx.pc == 0x08A337C4u) goto L_08A337C4;
    return;
L_08A337C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A337CC;
    }
L_08A337CC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A337E8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A337E8u) goto L_08A337E8;
    return;
L_08A337E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A337F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A337F8u) goto L_08A337F8;
    return;
L_08A337F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 9u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A3382C;
    }
L_08A3382C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A33844u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33844u) goto L_08A33844;
    return;
L_08A33844:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15912), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A33858;
    }
L_08A33858:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x08A33870u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33870u) goto L_08A33870;
    return;
L_08A33870:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A3387Cu);
    ctx.gpr[4] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A3387Cu) goto L_08A3387C;
    return;
L_08A3387C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_08A33888;
    }
    goto L_08A33888;
L_08A33888:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6808)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6808), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (49864u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A338E0;
      }
      goto L_08A338D0;
    }
L_08A338D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A338DCu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08A338DCu) goto L_08A338DC;
    return;
L_08A338DC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A338E0;
L_08A338E0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6804)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6804), ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A33940u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A33940u) goto L_08A33940;
    return;
L_08A33940:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A33948;
    }
L_08A33948:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A33960u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33960u) goto L_08A33960;
    return;
L_08A33960:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6804)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33A1C;
      }
      goto L_08A339A4;
    }
L_08A339A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
        goto L_08A339E4;
    }
    goto L_08A339BC;
L_08A339BC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A339CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6804));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 558u, 0x08B06714u>(ctx, &aot_mem) && ctx.pc == 0x08A339CCu) goto L_08A339CC;
    return;
L_08A339CC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A339DC;
      }
      goto L_08A339D4;
    }
L_08A339D4:
    ctx.gpr[31] = (0x08A339DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08A339DCu) goto L_08A339DC;
    return;
L_08A339DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33A1C;
      }
      goto L_08A339E4;
    }
L_08A339E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A339A4;
      }
      goto L_08A33A1C;
    }
L_08A33A1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A33A24;
    }
L_08A33A24:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A33A3Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33A3Cu) goto L_08A33A3C;
    return;
L_08A33A3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A33A4Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A33A4Cu) goto L_08A33A4C;
    return;
L_08A33A4C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A33A60;
      }
      goto L_08A33A5C;
    }
L_08A33A5C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A33A60;
L_08A33A60:
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
          goto L_08A33A8C;
      }
      goto L_08A33A84;
    }
L_08A33A84:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A33ADC;
      }
      goto L_08A33A8C;
    }
L_08A33A8C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A33ABC;
    }
    goto L_08A33AA8;
L_08A33AA8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A33ADC;
      }
      goto L_08A33ABC;
    }
L_08A33ABC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33ADC;
      }
      goto L_08A33AD8;
    }
L_08A33AD8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A33ADC;
L_08A33ADC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A33AE4;
    }
L_08A33AE4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A33AFCu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33AFCu) goto L_08A33AFC;
    return;
L_08A33AFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A33B0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A33B0Cu) goto L_08A33B0C;
    return;
L_08A33B0C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A33B20;
      }
      goto L_08A33B1C;
    }
L_08A33B1C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A33B20;
L_08A33B20:
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
          goto L_08A33B4C;
      }
      goto L_08A33B44;
    }
L_08A33B44:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A33B9C;
      }
      goto L_08A33B4C;
    }
L_08A33B4C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A33B7C;
    }
    goto L_08A33B68;
L_08A33B68:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A33B9C;
      }
      goto L_08A33B7C;
    }
L_08A33B7C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33B9C;
      }
      goto L_08A33B98;
    }
L_08A33B98:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A33B9C;
L_08A33B9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A33BA4;
    }
L_08A33BA4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A33BC0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33BC0u) goto L_08A33BC0;
    return;
L_08A33BC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A33BD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A33BD0u) goto L_08A33BD0;
    return;
L_08A33BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1025));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 10u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A33C04;
    }
L_08A33C04:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A33C20u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33C20u) goto L_08A33C20;
    return;
L_08A33C20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A33C30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A33C30u) goto L_08A33C30;
    return;
L_08A33C30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A33C44u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A33C44u) goto L_08A33C44;
    return;
L_08A33C44:
    ctx.gpr[4] = (48972u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (49049u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[31] = (0x08A33C64u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08A33C64u) goto L_08A33C64;
    return;
L_08A33C64:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[19] = ctx.fpr[20] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[18];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[31] = (0x08A33CA8u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 288u, 0x08A0E2E0u>(ctx, &aot_mem) && ctx.pc == 0x08A33CA8u) goto L_08A33CA8;
    return;
L_08A33CA8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 23u);
    ctx.gpr[31] = (0x08A33CC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33CC0u) goto L_08A33CC0;
    return;
L_08A33CC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A33CC8;
    }
L_08A33CC8:
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A33CE8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33CE8u) goto L_08A33CE8;
    return;
L_08A33CE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A33D1C;
L_08A33D1C:
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(336) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33E18;
      }
      goto L_08A33D28;
    }
L_08A33D28:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_08A33E18;
      }
      goto L_08A33D30;
    }
L_08A33D30:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30592));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33E10;
      }
      goto L_08A33D50;
    }
L_08A33D50:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30592));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[5] & 65535u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33E10;
      }
      goto L_08A33DA0;
    }
L_08A33DA0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
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
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_08A33E10;
      }
      goto L_08A33DC8;
    }
L_08A33DC8:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30592));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_08A33E10;
      }
      goto L_08A33DE8;
    }
L_08A33DE8:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30592));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08A33E0Cu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 140u, 0x08A81858u>(ctx, &aot_mem) && ctx.pc == 0x08A33E0Cu) goto L_08A33E0C;
    return;
L_08A33E0C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08A33E10;
L_08A33E10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A33D1C;
      }
      goto L_08A33E18;
    }
L_08A33E18:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A33E30u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A33E30u) goto L_08A33E30;
    return;
L_08A33E30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A33E38;
    }
L_08A33E38:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A33E50u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33E50u) goto L_08A33E50;
    return;
L_08A33E50:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A33E60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 339u, 0x088EE418u>(ctx, &aot_mem) && ctx.pc == 0x08A33E60u) goto L_08A33E60;
    return;
L_08A33E60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33E6C;
      }
      goto L_08A33E68;
    }
L_08A33E68:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A33E6C;
L_08A33E6C:
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
          goto L_08A33E98;
      }
      goto L_08A33E90;
    }
L_08A33E90:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08A33EE8;
      }
      goto L_08A33E98;
    }
L_08A33E98:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A33EC8;
    }
    goto L_08A33EB4;
L_08A33EB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A33EE8;
      }
      goto L_08A33EC8;
    }
L_08A33EC8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33EE8;
      }
      goto L_08A33EE4;
    }
L_08A33EE4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A33EE8;
L_08A33EE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A33EF0;
    }
L_08A33EF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A33EF8;
    }
L_08A33EF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A33F00;
    }
L_08A33F00:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A33F18u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33F18u) goto L_08A33F18;
    return;
L_08A33F18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25850), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25849), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A33F34;
    }
L_08A33F34:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A33F4Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33F4Cu) goto L_08A33F4C;
    return;
L_08A33F4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7940), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 41u, 0x08A342C4u>(ctx, &aot_mem); return;
      }
      goto L_08A33F64;
    }
L_08A33F64:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A33F80u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33F80u) goto L_08A33F80;
    return;
L_08A33F80:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A33FA8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08A33FA8u) goto L_08A33FA8;
    return;
L_08A33FA8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A33FB0;
L_08A33FB0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 13u, 0x08A34110u>(ctx, &aot_mem); return;
      }
      goto L_08A33FB8;
    }
L_08A33FB8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 13u, 0x08A34110u>(ctx, &aot_mem); return;
      }
      goto L_08A33FC4;
    }
L_08A33FC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
      if (branch_taken) {
          goto L_08A33FE8;
      }
      goto L_08A33FE0;
    }
L_08A33FE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 1u, 0x08A34000u>(ctx, &aot_mem); return;
      }
      goto L_08A33FE8;
    }
L_08A33FE8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.pc = 0x08A34000u; return;
}

void recomp_unit_0139(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0139_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_139(Runtime &runtime) {
    runtime.register_generated_unit(139u, 0x08A30000u, 16384u, &recomp_unit_0139, &recomp_unit_0139_entry);
    runtime.register_function(0x08A30000u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30004u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3002Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30040u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30058u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30060u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30074u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30084u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A300D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A301B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A301C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A301D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A301F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3020Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30214u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30224u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30230u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30238u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30240u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30248u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30254u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30260u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3026Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30278u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30284u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30294u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302F8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30304u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3030Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3031Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30324u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30338u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30354u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30384u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A303D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A304B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A304C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A304D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A304F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3050Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30514u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30524u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30530u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30538u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30540u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30548u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30554u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30560u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3056Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30578u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30584u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30594u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A305A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A305A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A305B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A305B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A305C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A305D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A305DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A305E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A305ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A305F8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30604u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3061Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30624u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30630u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30638u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30640u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30648u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30650u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30658u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30660u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30664u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3066Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3067Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30698u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A306C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A306E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A308A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A308BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A308F8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3090Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30918u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30920u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30930u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30948u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30954u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3095Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30964u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3096Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30974u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3097Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30990u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A309E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A309ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A309F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A24u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A2Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A48u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A50u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A58u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A60u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A74u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A88u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A9Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30AACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30AB4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30ABCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30AC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30ACCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30ADCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30AF4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30BB0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C08u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C9Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30CA4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30CB8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30CCCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30CDCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30CECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30CF4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D00u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D18u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D20u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D28u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D30u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D48u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D50u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D58u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D60u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D70u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E2Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30ED0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30ED8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30EECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30FA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30FC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30FC8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31004u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3100Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31020u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31028u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31030u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31044u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3104Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31088u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31090u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A310A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A310ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A310E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A310E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A310FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31130u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31138u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3114Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31180u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31188u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3119Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A311D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A311E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A311F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31228u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3124Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31330u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3134Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31360u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31368u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31374u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3137Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31384u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3138Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31394u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3139Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A313A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A313B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A313CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A313D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A313F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A313FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31474u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A314B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A314D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A314E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A314F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A314F8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31510u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31520u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3152Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3153Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3154Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31558u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31560u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31570u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3157Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31588u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31594u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31598u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A315A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A315B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A315C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A315C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A315E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A315E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A315F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A315FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3160Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31620u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31628u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31644u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31670u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31710u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3172Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31730u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31738u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31750u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3175Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31768u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31774u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3177Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31794u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317F8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31814u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3185Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31864u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31880u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31890u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31900u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31938u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31940u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3194Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31954u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31968u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31970u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31978u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3198Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31994u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A319A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A319B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A319B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A319D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A319DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A319F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A04u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A28u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A34u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A54u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A98u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31AC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31AD4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31AECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B04u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B18u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B44u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B60u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B74u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B90u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B94u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B9Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31BB4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31BC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31BD4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31BDCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31BECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31BF4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31BFCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C04u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C18u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C44u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C60u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C74u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C90u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C94u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C9Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31CB4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31CC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31CD4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31CD8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31CFCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D04u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D20u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D34u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D50u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D54u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D5Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D78u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D88u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D94u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31DB0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31DB8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31DCCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31DD4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31DF0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E20u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E28u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E30u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E5Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E6Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E78u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E94u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E9Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31EB0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31EB8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31ED4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31EF4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F04u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F24u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F7Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F84u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F9Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31FACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31FBCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31FC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31FE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31FECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32008u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3201Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32038u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3203Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32044u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3204Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32070u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32078u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32094u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A320BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A320C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A320E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32108u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32110u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3212Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32154u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3215Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32164u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32170u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3218Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32194u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A321ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A321B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A321C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A321D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A321E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A321ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A321F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32204u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32218u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32224u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32234u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32240u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32260u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32268u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32278u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32284u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3229Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A322A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A322C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A322DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A322ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32340u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32354u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3235Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32374u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3237Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32398u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A323BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A323DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A323E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32410u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32418u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32430u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32438u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32440u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3244Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32454u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32470u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32488u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32490u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A324ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A324BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A324C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A324E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3250Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32514u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32530u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32540u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3254Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32554u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32568u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3257Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32584u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3259Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325F8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32620u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32628u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32644u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32658u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32674u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32678u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32680u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32698u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32710u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32724u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32740u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32744u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3274Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32768u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32778u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A327B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A327D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A327D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A327E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A327F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A327F8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32810u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32820u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32828u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32850u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32868u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3287Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32888u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A328A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A328ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A328C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A328CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A328D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A328FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32904u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32920u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32934u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32950u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32954u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3295Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32974u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32984u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32994u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A329A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A329B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A329C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A329E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A329F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A20u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A48u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A60u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A68u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A88u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B18u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32BB0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32BB8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32BD8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C24u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C44u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CB0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CB8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CC8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CE0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CF0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D08u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D18u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D24u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D2Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D34u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D48u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D50u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D5Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D64u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D6Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D78u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D80u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D8Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D98u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DA0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DB4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DBCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DD0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DD8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DE0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DF4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DFCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E08u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E18u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E24u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E2Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E34u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E48u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E50u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E5Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E64u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E6Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E78u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E80u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E88u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E94u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E9Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EA4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EB0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EB8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32ECCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32ED4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EDCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EE8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EF0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EF8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F04u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F20u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F28u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F30u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F44u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F4Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F58u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F60u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F68u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F74u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F7Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F84u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F90u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F98u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FA0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FB4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FBCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FC8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FD0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FD8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FF4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33000u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33008u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33010u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3301Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33024u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3302Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33038u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33040u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33048u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33054u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3305Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33064u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33070u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33078u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33080u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3308Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33094u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3309Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33104u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3310Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33118u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33120u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33128u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33134u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3313Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33144u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33150u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33158u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33160u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3316Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33174u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3317Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33188u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33190u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33198u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A331A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A331ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A331B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A331C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A331C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A331D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A331DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A331E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A331ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A331F8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33208u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33210u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33220u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33228u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33244u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33254u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3325Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33264u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3326Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33278u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A332A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A332CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33328u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33330u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33358u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3335Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33398u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A333B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A333C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A333C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A333E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A333F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33404u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33414u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33418u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3343Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33444u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33460u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33474u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33490u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33494u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3349Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A334B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A334C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A334D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A334E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A334ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33510u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33518u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33534u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33548u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33564u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33568u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33570u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33588u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33598u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A335ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A335BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A335C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A335E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A335ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33608u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3361Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33638u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3363Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33644u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3365Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3366Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33680u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33690u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33694u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A336B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A336C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A336DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A336F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3370Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33710u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33718u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33720u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3372Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33734u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3373Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33748u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33764u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3376Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33788u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3379Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A337B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A337BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A337C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A337CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A337E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A337F8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3382Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33844u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33858u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33870u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3387Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33888u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A338D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A338DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A338E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33940u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33948u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33960u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A339A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A339BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A339CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A339D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A339DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A339E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A24u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A4Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A5Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A60u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A84u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A8Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33AA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33ABCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33AD8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33ADCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33AE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33AFCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B20u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B44u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B4Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B68u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B7Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B98u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B9Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33BA4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33BC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33BD0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33C04u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33C20u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33C30u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33C44u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33C64u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33CA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33CC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33CC8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33CE8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33D1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33D28u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33D30u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33D50u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33DA0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33DC8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33DE8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E18u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E30u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E50u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E60u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E68u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E6Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E90u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E98u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33EB4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33EC8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33EE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33EE8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33EF0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33EF8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F00u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F18u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F34u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F4Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F64u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F80u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33FA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33FB0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33FB8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33FC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33FE0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33FE8u, &recomp_unit_0139, "recomp_unit_0139");
}
} // namespace psprecomp
