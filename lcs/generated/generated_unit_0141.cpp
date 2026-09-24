#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0141[4094] = {
    1, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 5, 0, 6, 0, 7, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 11, 12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 13, 0, 0, 0, 14, 0, 0, 15, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 23, 24, 0, 25, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 33, 34, 0, 35, 0, 0, 0, 0, 36, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0,
    0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 43, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 55, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 58, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0,
    67, 0, 68, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 74, 0, 0, 75, 0,
    0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 88,
    0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 95, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 139, 0, 140, 0,
    0, 141, 142, 0, 0, 0, 0, 143, 0, 144, 0, 0, 145, 146, 0, 0, 0, 0, 147, 0, 148, 0, 0, 149, 150, 0, 0, 0, 0, 151, 0, 152,
    0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 155, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 160, 0, 161, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164,
    0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169,
    0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 182,
    0, 0, 183, 184, 0, 0, 185, 0, 186, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0,
    0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213,
    0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 218, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221,
    0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228,
    0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0,
    236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 241, 0, 0, 242, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 248, 0, 0, 0, 0, 249, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 256, 0, 257, 0, 258, 0, 259, 0, 0, 0, 0, 260, 0, 261, 0, 262, 0, 263, 0,
    0, 0, 264, 0, 265, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 270, 0, 0, 271, 0, 0, 272, 0, 273, 0, 274,
    0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 280, 0, 281, 282, 0, 283, 0, 0, 284,
    0, 0, 0, 0, 0, 285, 0, 286, 0, 287, 0, 0, 0, 288, 0, 289, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 294, 0, 295, 0, 0, 296, 0, 0, 297, 0, 0, 298, 0, 0, 299, 0, 300, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0,
    0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 325, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 328, 0, 329, 0, 330, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0,
    0, 333, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 342, 0,
    0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0,
    0, 0, 0, 0, 349, 0, 0, 350, 0, 351, 0, 0, 352, 0, 0, 0, 353, 0, 0, 354, 0, 355, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0,
    0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 363, 0, 0, 364, 0, 0, 0, 0,
    0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 370, 0, 371, 0, 0,
    372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 376, 0, 377, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 382,
    0, 383, 0, 0, 384, 0, 0, 385, 0, 386, 387, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0,
    0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0,
    0, 398, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 401, 0, 402, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 408, 409, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0,
    0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0,
    0, 0, 419, 0, 0, 420, 0, 0, 421, 0, 422, 0, 423, 0, 0, 424, 0, 425, 426, 0, 427, 0, 0, 428, 0, 0, 0, 429, 0, 0, 430, 0,
    0, 0, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0,
    437, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 444, 0,
    0, 445, 0, 446, 0, 447, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 454,
    0, 0, 455, 0, 0, 456, 0, 457, 0, 458, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0,
    0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 468, 0, 0, 469, 0, 470, 0, 471, 0, 0, 472, 0, 0, 473,
    0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 479, 0, 0, 480, 0, 481, 0, 482, 0, 0,
    483, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 490, 0, 0, 0, 0,
    0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 495, 0,
    0, 496, 0, 0, 497, 0, 0, 0, 498, 0, 0, 499, 500, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 508, 0, 0, 509, 0, 0, 0,
    0, 510, 511, 0, 0, 512, 0, 513, 0, 0, 0, 514, 0, 515, 0, 516, 0, 0, 0, 0, 0, 517, 0, 518, 0, 519, 0, 0, 0, 520, 0, 521,
    0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 526, 0, 0, 0, 527, 528, 0, 0, 0, 0, 0, 0, 529,
    0, 0, 0, 0, 0, 0, 530, 0, 531, 0, 532, 0, 0, 0, 0, 0, 0, 533, 534, 0, 0, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 537,
    0, 538, 0, 0, 0, 539, 0, 540, 0, 0, 541, 0, 0, 542, 0, 543, 0, 544, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 548,
    0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 550, 0, 551, 0, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 0, 554, 0, 555, 0, 0, 0, 0,
    556, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 563, 0, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 566, 567, 0, 0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 571, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 574, 0, 0, 0, 575, 0,
    0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 581, 0, 582, 0, 0, 0,
    583, 0, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 589, 0, 0, 0,
    0, 590, 591, 0, 592, 0, 593, 0, 0, 0, 0, 594, 0, 0, 595, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 598, 0, 0, 599, 0,
    600, 0, 601, 0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 606, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0,
    612, 613, 0, 614, 0, 615, 0, 616, 0, 0, 617, 0, 0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 0, 0, 0, 621, 622,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 624, 0, 625, 0, 0, 626, 0, 0, 627, 0, 0, 0,
    0, 628, 0, 0, 0, 0, 629, 0, 0, 630, 0, 0, 631, 0, 0, 632, 0, 0, 633, 0, 0, 634, 0, 0, 635, 0, 0, 0, 636, 0, 0, 637,
    0, 638, 0, 639, 0, 0, 640, 0, 0, 0, 641, 0, 0, 642, 0, 643, 0, 0, 0, 644, 0, 645, 0, 0, 0, 0, 0, 0, 646, 0, 647, 0,
    648, 0, 0, 649, 0, 650, 0, 0, 651, 0, 0, 0, 652, 0, 653, 0, 0, 654, 0, 655, 0, 656, 0, 657, 0, 658, 659, 0, 0, 0, 660, 0,
    661, 0, 0, 0, 0, 0, 662, 0, 0, 663, 664, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 670, 0, 671, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0,
    0, 0, 673, 0, 0, 0, 0, 674, 0, 0, 0, 0, 675, 0, 0, 0, 676, 0, 0, 677, 0, 0, 678, 0, 0, 679, 0, 0, 0, 0, 0, 680,
    0, 0, 681, 0, 0, 682, 0, 0, 0, 683, 0, 0, 684, 0, 0, 0, 685, 0, 0, 686, 0, 687, 0, 688, 0, 0, 689, 0, 0, 0, 690, 0,
    0, 691, 0, 692, 0, 693, 0, 0, 694, 0, 695, 0, 696, 0, 0, 697, 0, 698, 0, 699, 0, 0, 700, 0, 701, 0, 702, 0, 703, 0, 0, 0,
    704, 0, 0, 0, 0, 0, 0, 705, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0, 709, 0,
    710, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 714,
    0, 0, 0, 715, 0, 0, 0, 0, 716, 0, 0, 0, 0, 717, 718, 0, 0, 0, 0, 719, 0, 720, 0, 0, 0, 0, 0, 721, 0, 722, 0, 723,
    0, 0, 724, 0, 725, 0, 0, 726, 0, 0, 0, 727, 0, 728, 0, 0, 729, 0, 730, 0, 731, 0, 732, 0, 733, 734, 0, 0, 0, 735, 0, 736,
    0, 0, 0, 0, 0, 737, 0, 0, 738, 739, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 744, 0, 0, 0, 745, 0, 746, 0, 747, 0, 748, 0, 749, 0, 0, 750, 0, 0, 0,
    751, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 756, 0, 0,
    0, 757, 0, 0, 758, 0, 0, 0, 759, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 762, 0, 0, 0, 0, 763, 0, 764, 0, 0, 0,
    0, 0, 765, 0, 0, 766, 0, 0, 0, 0, 767, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769,
    0, 0, 0, 0, 770, 771, 0, 0, 772, 0, 0, 773, 0, 0, 0, 0, 774, 0, 0, 0, 0, 775, 0, 0, 776, 0, 0, 777, 0, 0, 778, 0,
    0, 779, 0, 0, 780, 0, 0, 781, 0, 0, 0, 782, 0, 0, 783, 0, 784, 0, 785, 0, 0, 786, 0, 0, 0, 787, 0, 0, 788, 0, 789, 0,
    0, 0, 790, 0, 791, 0, 0, 0, 0, 0, 0, 792, 0, 793, 0, 794, 0, 0, 795, 0, 796, 0, 0, 797, 0, 0, 0, 798, 0, 799, 0, 0,
    800, 0, 801, 0, 802, 0, 803, 0, 804, 805, 0, 0, 0, 806, 0, 807, 0, 0, 0, 0, 0, 808, 0, 0, 809, 810, 0, 0, 0, 0, 0, 0,
    0, 811, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 814, 0, 0, 0, 815, 0,
    0, 0, 816, 817, 0, 818, 0, 0, 0, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 820, 0, 0, 0, 821, 822, 0, 823, 0, 824, 0, 0, 0,
    825, 0, 0, 826, 0, 0, 0, 827, 0, 0, 0, 0, 828, 0, 0, 0, 829, 0, 0, 830, 0, 831, 0, 0, 0, 0, 832, 0, 833, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 835, 0, 0, 836, 0, 0, 837, 838, 0, 839, 0, 0, 0,
    840, 0, 0, 0, 0, 0, 841, 0, 842, 0, 0, 0, 0, 843, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 0, 0, 845, 0, 846, 0, 0, 847,
    0, 0, 0, 0, 848, 0, 0, 849, 0, 850, 0, 0, 0, 851, 0, 0, 0, 0, 852, 0, 0, 0, 0, 853, 0, 854, 0, 0, 0, 855, 0, 0,
    0, 0, 856, 0, 0, 857, 0, 858, 0, 0, 0, 0, 0, 859, 0, 0, 860, 0, 0, 0, 0, 0, 0, 861, 0, 0, 862, 0, 0, 863,
};
void recomp_unit_0141_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A38004u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0141[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A38004;
    case 2u: goto L_08A38010;
    case 3u: goto L_08A38018;
    case 4u: goto L_08A38020;
    case 5u: goto L_08A38030;
    case 6u: goto L_08A38038;
    case 7u: goto L_08A38040;
    case 8u: goto L_08A38048;
    case 9u: goto L_08A38058;
    case 10u: goto L_08A38068;
    case 11u: goto L_08A38074;
    case 12u: goto L_08A38078;
    case 13u: goto L_08A38108;
    case 14u: goto L_08A38118;
    case 15u: goto L_08A38124;
    case 16u: goto L_08A38128;
    case 17u: goto L_08A38130;
    case 18u: goto L_08A3815C;
    case 19u: goto L_08A38168;
    case 20u: goto L_08A38174;
    case 21u: goto L_08A38210;
    case 22u: goto L_08A38220;
    case 23u: goto L_08A3822C;
    case 24u: goto L_08A38230;
    case 25u: goto L_08A38238;
    case 26u: goto L_08A3823C;
    case 27u: goto L_08A38264;
    case 28u: goto L_08A38270;
    case 29u: goto L_08A3831C;
    case 30u: goto L_08A38328;
    case 31u: goto L_08A383BC;
    case 32u: goto L_08A383CC;
    case 33u: goto L_08A383D8;
    case 34u: goto L_08A383DC;
    case 35u: goto L_08A383E4;
    case 36u: goto L_08A383F8;
    case 37u: goto L_08A38440;
    case 38u: goto L_08A38470;
    case 39u: goto L_08A3848C;
    case 40u: goto L_08A38498;
    case 41u: goto L_08A384D8;
    case 42u: goto L_08A384EC;
    case 43u: goto L_08A384F0;
    case 44u: goto L_08A38530;
    case 45u: goto L_08A3856C;
    case 46u: goto L_08A38574;
    case 47u: goto L_08A38594;
    case 48u: goto L_08A385B4;
    case 49u: goto L_08A385E8;
    case 50u: goto L_08A38690;
    case 51u: goto L_08A386A8;
    case 52u: goto L_08A386C4;
    case 53u: goto L_08A386DC;
    case 54u: goto L_08A386F4;
    case 55u: goto L_08A3870C;
    case 56u: goto L_08A38710;
    case 57u: goto L_08A38744;
    case 58u: goto L_08A38748;
    case 59u: goto L_08A38754;
    case 60u: goto L_08A3876C;
    case 61u: goto L_08A38774;
    case 62u: goto L_08A38784;
    case 63u: goto L_08A387A0;
    case 64u: goto L_08A387B8;
    case 65u: goto L_08A387D0;
    case 66u: goto L_08A387E8;
    case 67u: goto L_08A38804;
    case 68u: goto L_08A3880C;
    case 69u: goto L_08A38824;
    case 70u: goto L_08A3882C;
    case 71u: goto L_08A38838;
    case 72u: goto L_08A38858;
    case 73u: goto L_08A3886C;
    case 74u: goto L_08A38870;
    case 75u: goto L_08A3887C;
    case 76u: goto L_08A38894;
    case 77u: goto L_08A3889C;
    case 78u: goto L_08A388AC;
    case 79u: goto L_08A388C4;
    case 80u: goto L_08A388DC;
    case 81u: goto L_08A388F4;
    case 82u: goto L_08A3890C;
    case 83u: goto L_08A38928;
    case 84u: goto L_08A38930;
    case 85u: goto L_08A38948;
    case 86u: goto L_08A3895C;
    case 87u: goto L_08A38964;
    case 88u: goto L_08A38980;
    case 89u: goto L_08A38988;
    case 90u: goto L_08A389B8;
    case 91u: goto L_08A389D8;
    case 92u: goto L_08A38A40;
    case 93u: goto L_08A38A50;
    case 94u: goto L_08A38A5C;
    case 95u: goto L_08A38A8C;
    case 96u: goto L_08A38A90;
    case 97u: goto L_08A38ACC;
    case 98u: goto L_08A38ADC;
    case 99u: goto L_08A38B18;
    case 100u: goto L_08A38B34;
    case 101u: goto L_08A38B3C;
    case 102u: goto L_08A38B44;
    case 103u: goto L_08A38B50;
    case 104u: goto L_08A38B60;
    case 105u: goto L_08A38B74;
    case 106u: goto L_08A38B98;
    case 107u: goto L_08A38BA4;
    case 108u: goto L_08A38BB8;
    case 109u: goto L_08A38BC8;
    case 110u: goto L_08A38BD4;
    case 111u: goto L_08A38BDC;
    case 112u: goto L_08A38BE4;
    case 113u: goto L_08A38C14;
    case 114u: goto L_08A38C2C;
    case 115u: goto L_08A38C44;
    case 116u: goto L_08A38C54;
    case 117u: goto L_08A38C5C;
    case 118u: goto L_08A38C6C;
    case 119u: goto L_08A38C88;
    case 120u: goto L_08A38C9C;
    case 121u: goto L_08A38CC8;
    case 122u: goto L_08A38CE0;
    case 123u: goto L_08A38CEC;
    case 124u: goto L_08A38D14;
    case 125u: goto L_08A38D44;
    case 126u: goto L_08A38D80;
    case 127u: goto L_08A38DAC;
    case 128u: goto L_08A38DD8;
    case 129u: goto L_08A38E34;
    case 130u: goto L_08A38E3C;
    case 131u: goto L_08A38E68;
    case 132u: goto L_08A38E74;
    case 133u: goto L_08A38EB4;
    case 134u: goto L_08A38F2C;
    case 135u: goto L_08A38F34;
    case 136u: goto L_08A38F44;
    case 137u: goto L_08A38F54;
    case 138u: goto L_08A38F5C;
    case 139u: goto L_08A38F74;
    case 140u: goto L_08A38F7C;
    case 141u: goto L_08A38F88;
    case 142u: goto L_08A38F8C;
    case 143u: goto L_08A38FA0;
    case 144u: goto L_08A38FA8;
    case 145u: goto L_08A38FB4;
    case 146u: goto L_08A38FB8;
    case 147u: goto L_08A38FCC;
    case 148u: goto L_08A38FD4;
    case 149u: goto L_08A38FE0;
    case 150u: goto L_08A38FE4;
    case 151u: goto L_08A38FF8;
    case 152u: goto L_08A39000;
    case 153u: goto L_08A3900C;
    case 154u: goto L_08A39074;
    case 155u: goto L_08A390A0;
    case 156u: goto L_08A390A4;
    case 157u: goto L_08A390D8;
    case 158u: goto L_08A39120;
    case 159u: goto L_08A39128;
    case 160u: goto L_08A39134;
    case 161u: goto L_08A3913C;
    case 162u: goto L_08A39144;
    case 163u: goto L_08A3914C;
    case 164u: goto L_08A39180;
    case 165u: goto L_08A391A0;
    case 166u: goto L_08A391C0;
    case 167u: goto L_08A391C8;
    case 168u: goto L_08A391F8;
    case 169u: goto L_08A39200;
    case 170u: goto L_08A39208;
    case 171u: goto L_08A39210;
    case 172u: goto L_08A39230;
    case 173u: goto L_08A39254;
    case 174u: goto L_08A39264;
    case 175u: goto L_08A3926C;
    case 176u: goto L_08A392A0;
    case 177u: goto L_08A392B0;
    case 178u: goto L_08A392C4;
    case 179u: goto L_08A392D0;
    case 180u: goto L_08A392E4;
    case 181u: goto L_08A392F0;
    case 182u: goto L_08A39300;
    case 183u: goto L_08A3930C;
    case 184u: goto L_08A39310;
    case 185u: goto L_08A3931C;
    case 186u: goto L_08A39324;
    case 187u: goto L_08A39328;
    case 188u: goto L_08A3934C;
    case 189u: goto L_08A3936C;
    case 190u: goto L_08A39374;
    case 191u: goto L_08A393A4;
    case 192u: goto L_08A393C4;
    case 193u: goto L_08A393D4;
    case 194u: goto L_08A393F4;
    case 195u: goto L_08A39440;
    case 196u: goto L_08A3944C;
    case 197u: goto L_08A39450;
    case 198u: goto L_08A39460;
    case 199u: goto L_08A39484;
    case 200u: goto L_08A394A4;
    case 201u: goto L_08A394B0;
    case 202u: goto L_08A394B8;
    case 203u: goto L_08A394C8;
    case 204u: goto L_08A394D8;
    case 205u: goto L_08A3953C;
    case 206u: goto L_08A39550;
    case 207u: goto L_08A39564;
    case 208u: goto L_08A3957C;
    case 209u: goto L_08A39590;
    case 210u: goto L_08A395A4;
    case 211u: goto L_08A395E0;
    case 212u: goto L_08A395F0;
    case 213u: goto L_08A39600;
    case 214u: goto L_08A39614;
    case 215u: goto L_08A39628;
    case 216u: goto L_08A39640;
    case 217u: goto L_08A39684;
    case 218u: goto L_08A3969C;
    case 219u: goto L_08A396A0;
    case 220u: goto L_08A3976C;
    case 221u: goto L_08A39780;
    case 222u: goto L_08A39790;
    case 223u: goto L_08A3979C;
    case 224u: goto L_08A397B0;
    case 225u: goto L_08A397C0;
    case 226u: goto L_08A397E0;
    case 227u: goto L_08A397F0;
    case 228u: goto L_08A39800;
    case 229u: goto L_08A3980C;
    case 230u: goto L_08A3981C;
    case 231u: goto L_08A3982C;
    case 232u: goto L_08A39838;
    case 233u: goto L_08A39858;
    case 234u: goto L_08A3986C;
    case 235u: goto L_08A3987C;
    case 236u: goto L_08A39884;
    case 237u: goto L_08A398A0;
    case 238u: goto L_08A398B8;
    case 239u: goto L_08A398CC;
    case 240u: goto L_08A398E0;
    case 241u: goto L_08A398E4;
    case 242u: goto L_08A398F0;
    case 243u: goto L_08A3990C;
    case 244u: goto L_08A39920;
    case 245u: goto L_08A39934;
    case 246u: goto L_08A39948;
    case 247u: goto L_08A39964;
    case 248u: goto L_08A39968;
    case 249u: goto L_08A3997C;
    case 250u: goto L_08A399A4;
    case 251u: goto L_08A399C4;
    case 252u: goto L_08A399E8;
    case 253u: goto L_08A39A04;
    case 254u: goto L_08A39A1C;
    case 255u: goto L_08A39A2C;
    case 256u: goto L_08A39A38;
    case 257u: goto L_08A39A40;
    case 258u: goto L_08A39A48;
    case 259u: goto L_08A39A50;
    case 260u: goto L_08A39A64;
    case 261u: goto L_08A39A6C;
    case 262u: goto L_08A39A74;
    case 263u: goto L_08A39A7C;
    case 264u: goto L_08A39A8C;
    case 265u: goto L_08A39A94;
    case 266u: goto L_08A39AA4;
    case 267u: goto L_08A39AAC;
    case 268u: goto L_08A39AC8;
    case 269u: goto L_08A39AD0;
    case 270u: goto L_08A39AD8;
    case 271u: goto L_08A39AE4;
    case 272u: goto L_08A39AF0;
    case 273u: goto L_08A39AF8;
    case 274u: goto L_08A39B00;
    case 275u: goto L_08A39B10;
    case 276u: goto L_08A39B18;
    case 277u: goto L_08A39B34;
    case 278u: goto L_08A39B40;
    case 279u: goto L_08A39B54;
    case 280u: goto L_08A39B60;
    case 281u: goto L_08A39B68;
    case 282u: goto L_08A39B6C;
    case 283u: goto L_08A39B74;
    case 284u: goto L_08A39B80;
    case 285u: goto L_08A39B98;
    case 286u: goto L_08A39BA0;
    case 287u: goto L_08A39BA8;
    case 288u: goto L_08A39BB8;
    case 289u: goto L_08A39BC0;
    case 290u: goto L_08A39BCC;
    case 291u: goto L_08A39BD4;
    case 292u: goto L_08A39C18;
    case 293u: goto L_08A39C20;
    case 294u: goto L_08A39C34;
    case 295u: goto L_08A39C3C;
    case 296u: goto L_08A39C48;
    case 297u: goto L_08A39C54;
    case 298u: goto L_08A39C60;
    case 299u: goto L_08A39C6C;
    case 300u: goto L_08A39C74;
    case 301u: goto L_08A39CA8;
    case 302u: goto L_08A39CC4;
    case 303u: goto L_08A39CD0;
    case 304u: goto L_08A39CE8;
    case 305u: goto L_08A39CF4;
    case 306u: goto L_08A39D04;
    case 307u: goto L_08A39D20;
    case 308u: goto L_08A39D28;
    case 309u: goto L_08A39D40;
    case 310u: goto L_08A39D50;
    case 311u: goto L_08A39D60;
    case 312u: goto L_08A39D6C;
    case 313u: goto L_08A39D90;
    case 314u: goto L_08A39D9C;
    case 315u: goto L_08A39DAC;
    case 316u: goto L_08A39DC0;
    case 317u: goto L_08A39DE0;
    case 318u: goto L_08A39DE8;
    case 319u: goto L_08A39E2C;
    case 320u: goto L_08A39E3C;
    case 321u: goto L_08A39E48;
    case 322u: goto L_08A39E54;
    case 323u: goto L_08A39E60;
    case 324u: goto L_08A39E6C;
    case 325u: goto L_08A39E78;
    case 326u: goto L_08A39EAC;
    case 327u: goto L_08A39EC4;
    case 328u: goto L_08A39EC8;
    case 329u: goto L_08A39ED0;
    case 330u: goto L_08A39ED8;
    case 331u: goto L_08A39EE4;
    case 332u: goto L_08A39EF0;
    case 333u: goto L_08A39F08;
    case 334u: goto L_08A39F20;
    case 335u: goto L_08A39F28;
    case 336u: goto L_08A39F34;
    case 337u: goto L_08A39F40;
    case 338u: goto L_08A39F4C;
    case 339u: goto L_08A39F54;
    case 340u: goto L_08A39F64;
    case 341u: goto L_08A39F74;
    case 342u: goto L_08A39F7C;
    case 343u: goto L_08A39F90;
    case 344u: goto L_08A39FB0;
    case 345u: goto L_08A39FB8;
    case 346u: goto L_08A39FD4;
    case 347u: goto L_08A39FF4;
    case 348u: goto L_08A39FFC;
    case 349u: goto L_08A3A014;
    case 350u: goto L_08A3A020;
    case 351u: goto L_08A3A028;
    case 352u: goto L_08A3A034;
    case 353u: goto L_08A3A044;
    case 354u: goto L_08A3A050;
    case 355u: goto L_08A3A058;
    case 356u: goto L_08A3A068;
    case 357u: goto L_08A3A070;
    case 358u: goto L_08A3A08C;
    case 359u: goto L_08A3A094;
    case 360u: goto L_08A3A0B0;
    case 361u: goto L_08A3A0CC;
    case 362u: goto L_08A3A0DC;
    case 363u: goto L_08A3A0E4;
    case 364u: goto L_08A3A0F0;
    case 365u: goto L_08A3A108;
    case 366u: goto L_08A3A114;
    case 367u: goto L_08A3A144;
    case 368u: goto L_08A3A154;
    case 369u: goto L_08A3A160;
    case 370u: goto L_08A3A170;
    case 371u: goto L_08A3A178;
    case 372u: goto L_08A3A184;
    case 373u: goto L_08A3A18C;
    case 374u: goto L_08A3A1C0;
    case 375u: goto L_08A3A1E0;
    case 376u: goto L_08A3A1EC;
    case 377u: goto L_08A3A1F4;
    case 378u: goto L_08A3A230;
    case 379u: goto L_08A3A258;
    case 380u: goto L_08A3A268;
    case 381u: goto L_08A3A278;
    case 382u: goto L_08A3A280;
    case 383u: goto L_08A3A288;
    case 384u: goto L_08A3A294;
    case 385u: goto L_08A3A2A0;
    case 386u: goto L_08A3A2A8;
    case 387u: goto L_08A3A2AC;
    case 388u: goto L_08A3A2B4;
    case 389u: goto L_08A3A2EC;
    case 390u: goto L_08A3A2F4;
    case 391u: goto L_08A3A310;
    case 392u: goto L_08A3A32C;
    case 393u: goto L_08A3A33C;
    case 394u: goto L_08A3A348;
    case 395u: goto L_08A3A358;
    case 396u: goto L_08A3A364;
    case 397u: goto L_08A3A378;
    case 398u: goto L_08A3A388;
    case 399u: goto L_08A3A398;
    case 400u: goto L_08A3A3A8;
    case 401u: goto L_08A3A3B4;
    case 402u: goto L_08A3A3BC;
    case 403u: goto L_08A3A3C4;
    case 404u: goto L_08A3A3D8;
    case 405u: goto L_08A3A404;
    case 406u: goto L_08A3A420;
    case 407u: goto L_08A3A430;
    case 408u: goto L_08A3A43C;
    case 409u: goto L_08A3A440;
    case 410u: goto L_08A3A448;
    case 411u: goto L_08A3A45C;
    case 412u: goto L_08A3A478;
    case 413u: goto L_08A3A49C;
    case 414u: goto L_08A3A4A4;
    case 415u: goto L_08A3A4C8;
    case 416u: goto L_08A3A4D0;
    case 417u: goto L_08A3A4E8;
    case 418u: goto L_08A3A4F4;
    case 419u: goto L_08A3A50C;
    case 420u: goto L_08A3A518;
    case 421u: goto L_08A3A524;
    case 422u: goto L_08A3A52C;
    case 423u: goto L_08A3A534;
    case 424u: goto L_08A3A540;
    case 425u: goto L_08A3A548;
    case 426u: goto L_08A3A54C;
    case 427u: goto L_08A3A554;
    case 428u: goto L_08A3A560;
    case 429u: goto L_08A3A570;
    case 430u: goto L_08A3A57C;
    case 431u: goto L_08A3A59C;
    case 432u: goto L_08A3A5A8;
    case 433u: goto L_08A3A5C4;
    case 434u: goto L_08A3A5D0;
    case 435u: goto L_08A3A5E4;
    case 436u: goto L_08A3A5F8;
    case 437u: goto L_08A3A604;
    case 438u: goto L_08A3A608;
    case 439u: goto L_08A3A61C;
    case 440u: goto L_08A3A638;
    case 441u: goto L_08A3A650;
    case 442u: goto L_08A3A668;
    case 443u: goto L_08A3A670;
    case 444u: goto L_08A3A67C;
    case 445u: goto L_08A3A688;
    case 446u: goto L_08A3A690;
    case 447u: goto L_08A3A698;
    case 448u: goto L_08A3A6A4;
    case 449u: goto L_08A3A6B0;
    case 450u: goto L_08A3A6C4;
    case 451u: goto L_08A3A6D4;
    case 452u: goto L_08A3A6E0;
    case 453u: goto L_08A3A6F8;
    case 454u: goto L_08A3A700;
    case 455u: goto L_08A3A70C;
    case 456u: goto L_08A3A718;
    case 457u: goto L_08A3A720;
    case 458u: goto L_08A3A728;
    case 459u: goto L_08A3A734;
    case 460u: goto L_08A3A740;
    case 461u: goto L_08A3A754;
    case 462u: goto L_08A3A764;
    case 463u: goto L_08A3A770;
    case 464u: goto L_08A3A788;
    case 465u: goto L_08A3A7A0;
    case 466u: goto L_08A3A7B8;
    case 467u: goto L_08A3A7C0;
    case 468u: goto L_08A3A7CC;
    case 469u: goto L_08A3A7D8;
    case 470u: goto L_08A3A7E0;
    case 471u: goto L_08A3A7E8;
    case 472u: goto L_08A3A7F4;
    case 473u: goto L_08A3A800;
    case 474u: goto L_08A3A814;
    case 475u: goto L_08A3A824;
    case 476u: goto L_08A3A830;
    case 477u: goto L_08A3A848;
    case 478u: goto L_08A3A850;
    case 479u: goto L_08A3A85C;
    case 480u: goto L_08A3A868;
    case 481u: goto L_08A3A870;
    case 482u: goto L_08A3A878;
    case 483u: goto L_08A3A884;
    case 484u: goto L_08A3A890;
    case 485u: goto L_08A3A8A4;
    case 486u: goto L_08A3A8B4;
    case 487u: goto L_08A3A8C0;
    case 488u: goto L_08A3A8D8;
    case 489u: goto L_08A3A8E8;
    case 490u: goto L_08A3A8F0;
    case 491u: goto L_08A3A910;
    case 492u: goto L_08A3A93C;
    case 493u: goto L_08A3A950;
    case 494u: goto L_08A3A96C;
    case 495u: goto L_08A3A97C;
    case 496u: goto L_08A3A988;
    case 497u: goto L_08A3A994;
    case 498u: goto L_08A3A9A4;
    case 499u: goto L_08A3A9B0;
    case 500u: goto L_08A3A9B4;
    case 501u: goto L_08A3A9D0;
    case 502u: goto L_08A3A9D8;
    case 503u: goto L_08A3A9E4;
    case 504u: goto L_08A3AA24;
    case 505u: goto L_08A3AA34;
    case 506u: goto L_08A3AA58;
    case 507u: goto L_08A3AA60;
    case 508u: goto L_08A3AA68;
    case 509u: goto L_08A3AA74;
    case 510u: goto L_08A3AA88;
    case 511u: goto L_08A3AA8C;
    case 512u: goto L_08A3AA98;
    case 513u: goto L_08A3AAA0;
    case 514u: goto L_08A3AAB0;
    case 515u: goto L_08A3AAB8;
    case 516u: goto L_08A3AAC0;
    case 517u: goto L_08A3AAD8;
    case 518u: goto L_08A3AAE0;
    case 519u: goto L_08A3AAE8;
    case 520u: goto L_08A3AAF8;
    case 521u: goto L_08A3AB00;
    case 522u: goto L_08A3AB0C;
    case 523u: goto L_08A3AB1C;
    case 524u: goto L_08A3AB38;
    case 525u: goto L_08A3AB48;
    case 526u: goto L_08A3AB50;
    case 527u: goto L_08A3AB60;
    case 528u: goto L_08A3AB64;
    case 529u: goto L_08A3AB80;
    case 530u: goto L_08A3AB9C;
    case 531u: goto L_08A3ABA4;
    case 532u: goto L_08A3ABAC;
    case 533u: goto L_08A3ABC8;
    case 534u: goto L_08A3ABCC;
    case 535u: goto L_08A3ABE0;
    case 536u: goto L_08A3ABF4;
    case 537u: goto L_08A3AC00;
    case 538u: goto L_08A3AC08;
    case 539u: goto L_08A3AC18;
    case 540u: goto L_08A3AC20;
    case 541u: goto L_08A3AC2C;
    case 542u: goto L_08A3AC38;
    case 543u: goto L_08A3AC40;
    case 544u: goto L_08A3AC48;
    case 545u: goto L_08A3AC54;
    case 546u: goto L_08A3AC60;
    case 547u: goto L_08A3AC74;
    case 548u: goto L_08A3AC80;
    case 549u: goto L_08A3AC9C;
    case 550u: goto L_08A3ACAC;
    case 551u: goto L_08A3ACB4;
    case 552u: goto L_08A3ACC0;
    case 553u: goto L_08A3ACD8;
    case 554u: goto L_08A3ACE8;
    case 555u: goto L_08A3ACF0;
    case 556u: goto L_08A3AD04;
    case 557u: goto L_08A3AD10;
    case 558u: goto L_08A3AD28;
    case 559u: goto L_08A3AD38;
    case 560u: goto L_08A3AD40;
    case 561u: goto L_08A3AD58;
    case 562u: goto L_08A3AD6C;
    case 563u: goto L_08A3AD9C;
    case 564u: goto L_08A3ADA8;
    case 565u: goto L_08A3ADC0;
    case 566u: goto L_08A3ADCC;
    case 567u: goto L_08A3ADD0;
    case 568u: goto L_08A3ADE4;
    case 569u: goto L_08A3ADF8;
    case 570u: goto L_08A3AE28;
    case 571u: goto L_08A3AE34;
    case 572u: goto L_08A3AE3C;
    case 573u: goto L_08A3AE64;
    case 574u: goto L_08A3AE6C;
    case 575u: goto L_08A3AE7C;
    case 576u: goto L_08A3AE8C;
    case 577u: goto L_08A3AEAC;
    case 578u: goto L_08A3AEB8;
    case 579u: goto L_08A3AED4;
    case 580u: goto L_08A3AEDC;
    case 581u: goto L_08A3AEEC;
    case 582u: goto L_08A3AEF4;
    case 583u: goto L_08A3AF04;
    case 584u: goto L_08A3AF18;
    case 585u: goto L_08A3AF2C;
    case 586u: goto L_08A3AF38;
    case 587u: goto L_08A3AF48;
    case 588u: goto L_08A3AF60;
    case 589u: goto L_08A3AF74;
    case 590u: goto L_08A3AF88;
    case 591u: goto L_08A3AF8C;
    case 592u: goto L_08A3AF94;
    case 593u: goto L_08A3AF9C;
    case 594u: goto L_08A3AFB0;
    case 595u: goto L_08A3AFBC;
    case 596u: goto L_08A3AFC4;
    case 597u: goto L_08A3AFE8;
    case 598u: goto L_08A3AFF0;
    case 599u: goto L_08A3AFFC;
    case 600u: goto L_08A3B004;
    case 601u: goto L_08A3B00C;
    case 602u: goto L_08A3B018;
    case 603u: goto L_08A3B028;
    case 604u: goto L_08A3B044;
    case 605u: goto L_08A3B050;
    case 606u: goto L_08A3B08C;
    case 607u: goto L_08A3B0A8;
    case 608u: goto L_08A3B0C4;
    case 609u: goto L_08A3B0D8;
    case 610u: goto L_08A3B0EC;
    case 611u: goto L_08A3B0FC;
    case 612u: goto L_08A3B104;
    case 613u: goto L_08A3B108;
    case 614u: goto L_08A3B110;
    case 615u: goto L_08A3B118;
    case 616u: goto L_08A3B120;
    case 617u: goto L_08A3B12C;
    case 618u: goto L_08A3B138;
    case 619u: goto L_08A3B154;
    case 620u: goto L_08A3B168;
    case 621u: goto L_08A3B17C;
    case 622u: goto L_08A3B180;
    case 623u: goto L_08A3B1C0;
    case 624u: goto L_08A3B1D4;
    case 625u: goto L_08A3B1DC;
    case 626u: goto L_08A3B1E8;
    case 627u: goto L_08A3B1F4;
    case 628u: goto L_08A3B208;
    case 629u: goto L_08A3B21C;
    case 630u: goto L_08A3B228;
    case 631u: goto L_08A3B234;
    case 632u: goto L_08A3B240;
    case 633u: goto L_08A3B24C;
    case 634u: goto L_08A3B258;
    case 635u: goto L_08A3B264;
    case 636u: goto L_08A3B274;
    case 637u: goto L_08A3B280;
    case 638u: goto L_08A3B288;
    case 639u: goto L_08A3B290;
    case 640u: goto L_08A3B29C;
    case 641u: goto L_08A3B2AC;
    case 642u: goto L_08A3B2B8;
    case 643u: goto L_08A3B2C0;
    case 644u: goto L_08A3B2D0;
    case 645u: goto L_08A3B2D8;
    case 646u: goto L_08A3B2F4;
    case 647u: goto L_08A3B2FC;
    case 648u: goto L_08A3B304;
    case 649u: goto L_08A3B310;
    case 650u: goto L_08A3B318;
    case 651u: goto L_08A3B324;
    case 652u: goto L_08A3B334;
    case 653u: goto L_08A3B33C;
    case 654u: goto L_08A3B348;
    case 655u: goto L_08A3B350;
    case 656u: goto L_08A3B358;
    case 657u: goto L_08A3B360;
    case 658u: goto L_08A3B368;
    case 659u: goto L_08A3B36C;
    case 660u: goto L_08A3B37C;
    case 661u: goto L_08A3B384;
    case 662u: goto L_08A3B39C;
    case 663u: goto L_08A3B3A8;
    case 664u: goto L_08A3B3AC;
    case 665u: goto L_08A3B3CC;
    case 666u: goto L_08A3B3D8;
    case 667u: goto L_08A3B424;
    case 668u: goto L_08A3B430;
    case 669u: goto L_08A3B440;
    case 670u: goto L_08A3B450;
    case 671u: goto L_08A3B458;
    case 672u: goto L_08A3B46C;
    case 673u: goto L_08A3B48C;
    case 674u: goto L_08A3B4A0;
    case 675u: goto L_08A3B4B4;
    case 676u: goto L_08A3B4C4;
    case 677u: goto L_08A3B4D0;
    case 678u: goto L_08A3B4DC;
    case 679u: goto L_08A3B4E8;
    case 680u: goto L_08A3B500;
    case 681u: goto L_08A3B50C;
    case 682u: goto L_08A3B518;
    case 683u: goto L_08A3B528;
    case 684u: goto L_08A3B534;
    case 685u: goto L_08A3B544;
    case 686u: goto L_08A3B550;
    case 687u: goto L_08A3B558;
    case 688u: goto L_08A3B560;
    case 689u: goto L_08A3B56C;
    case 690u: goto L_08A3B57C;
    case 691u: goto L_08A3B588;
    case 692u: goto L_08A3B590;
    case 693u: goto L_08A3B598;
    case 694u: goto L_08A3B5A4;
    case 695u: goto L_08A3B5AC;
    case 696u: goto L_08A3B5B4;
    case 697u: goto L_08A3B5C0;
    case 698u: goto L_08A3B5C8;
    case 699u: goto L_08A3B5D0;
    case 700u: goto L_08A3B5DC;
    case 701u: goto L_08A3B5E4;
    case 702u: goto L_08A3B5EC;
    case 703u: goto L_08A3B5F4;
    case 704u: goto L_08A3B604;
    case 705u: goto L_08A3B620;
    case 706u: goto L_08A3B62C;
    case 707u: goto L_08A3B65C;
    case 708u: goto L_08A3B66C;
    case 709u: goto L_08A3B67C;
    case 710u: goto L_08A3B684;
    case 711u: goto L_08A3B69C;
    case 712u: goto L_08A3B6B8;
    case 713u: goto L_08A3B6F0;
    case 714u: goto L_08A3B700;
    case 715u: goto L_08A3B710;
    case 716u: goto L_08A3B724;
    case 717u: goto L_08A3B738;
    case 718u: goto L_08A3B73C;
    case 719u: goto L_08A3B750;
    case 720u: goto L_08A3B758;
    case 721u: goto L_08A3B770;
    case 722u: goto L_08A3B778;
    case 723u: goto L_08A3B780;
    case 724u: goto L_08A3B78C;
    case 725u: goto L_08A3B794;
    case 726u: goto L_08A3B7A0;
    case 727u: goto L_08A3B7B0;
    case 728u: goto L_08A3B7B8;
    case 729u: goto L_08A3B7C4;
    case 730u: goto L_08A3B7CC;
    case 731u: goto L_08A3B7D4;
    case 732u: goto L_08A3B7DC;
    case 733u: goto L_08A3B7E4;
    case 734u: goto L_08A3B7E8;
    case 735u: goto L_08A3B7F8;
    case 736u: goto L_08A3B800;
    case 737u: goto L_08A3B818;
    case 738u: goto L_08A3B824;
    case 739u: goto L_08A3B828;
    case 740u: goto L_08A3B848;
    case 741u: goto L_08A3B854;
    case 742u: goto L_08A3B8A0;
    case 743u: goto L_08A3B8AC;
    case 744u: goto L_08A3B8B8;
    case 745u: goto L_08A3B8C8;
    case 746u: goto L_08A3B8D0;
    case 747u: goto L_08A3B8D8;
    case 748u: goto L_08A3B8E0;
    case 749u: goto L_08A3B8E8;
    case 750u: goto L_08A3B8F4;
    case 751u: goto L_08A3B904;
    case 752u: goto L_08A3B914;
    case 753u: goto L_08A3B930;
    case 754u: goto L_08A3B948;
    case 755u: goto L_08A3B964;
    case 756u: goto L_08A3B978;
    case 757u: goto L_08A3B988;
    case 758u: goto L_08A3B994;
    case 759u: goto L_08A3B9A4;
    case 760u: goto L_08A3B9AC;
    case 761u: goto L_08A3B9D0;
    case 762u: goto L_08A3B9D8;
    case 763u: goto L_08A3B9EC;
    case 764u: goto L_08A3B9F4;
    case 765u: goto L_08A3BA0C;
    case 766u: goto L_08A3BA18;
    case 767u: goto L_08A3BA2C;
    case 768u: goto L_08A3BA40;
    case 769u: goto L_08A3BA80;
    case 770u: goto L_08A3BA94;
    case 771u: goto L_08A3BA98;
    case 772u: goto L_08A3BAA4;
    case 773u: goto L_08A3BAB0;
    case 774u: goto L_08A3BAC4;
    case 775u: goto L_08A3BAD8;
    case 776u: goto L_08A3BAE4;
    case 777u: goto L_08A3BAF0;
    case 778u: goto L_08A3BAFC;
    case 779u: goto L_08A3BB08;
    case 780u: goto L_08A3BB14;
    case 781u: goto L_08A3BB20;
    case 782u: goto L_08A3BB30;
    case 783u: goto L_08A3BB3C;
    case 784u: goto L_08A3BB44;
    case 785u: goto L_08A3BB4C;
    case 786u: goto L_08A3BB58;
    case 787u: goto L_08A3BB68;
    case 788u: goto L_08A3BB74;
    case 789u: goto L_08A3BB7C;
    case 790u: goto L_08A3BB8C;
    case 791u: goto L_08A3BB94;
    case 792u: goto L_08A3BBB0;
    case 793u: goto L_08A3BBB8;
    case 794u: goto L_08A3BBC0;
    case 795u: goto L_08A3BBCC;
    case 796u: goto L_08A3BBD4;
    case 797u: goto L_08A3BBE0;
    case 798u: goto L_08A3BBF0;
    case 799u: goto L_08A3BBF8;
    case 800u: goto L_08A3BC04;
    case 801u: goto L_08A3BC0C;
    case 802u: goto L_08A3BC14;
    case 803u: goto L_08A3BC1C;
    case 804u: goto L_08A3BC24;
    case 805u: goto L_08A3BC28;
    case 806u: goto L_08A3BC38;
    case 807u: goto L_08A3BC40;
    case 808u: goto L_08A3BC58;
    case 809u: goto L_08A3BC64;
    case 810u: goto L_08A3BC68;
    case 811u: goto L_08A3BC88;
    case 812u: goto L_08A3BC94;
    case 813u: goto L_08A3BCE0;
    case 814u: goto L_08A3BCEC;
    case 815u: goto L_08A3BCFC;
    case 816u: goto L_08A3BD0C;
    case 817u: goto L_08A3BD10;
    case 818u: goto L_08A3BD18;
    case 819u: goto L_08A3BD38;
    case 820u: goto L_08A3BD50;
    case 821u: goto L_08A3BD60;
    case 822u: goto L_08A3BD64;
    case 823u: goto L_08A3BD6C;
    case 824u: goto L_08A3BD74;
    case 825u: goto L_08A3BD84;
    case 826u: goto L_08A3BD90;
    case 827u: goto L_08A3BDA0;
    case 828u: goto L_08A3BDB4;
    case 829u: goto L_08A3BDC4;
    case 830u: goto L_08A3BDD0;
    case 831u: goto L_08A3BDD8;
    case 832u: goto L_08A3BDEC;
    case 833u: goto L_08A3BDF4;
    case 834u: goto L_08A3BE38;
    case 835u: goto L_08A3BE50;
    case 836u: goto L_08A3BE5C;
    case 837u: goto L_08A3BE68;
    case 838u: goto L_08A3BE6C;
    case 839u: goto L_08A3BE74;
    case 840u: goto L_08A3BE84;
    case 841u: goto L_08A3BE9C;
    case 842u: goto L_08A3BEA4;
    case 843u: goto L_08A3BEB8;
    case 844u: goto L_08A3BED8;
    case 845u: goto L_08A3BEEC;
    case 846u: goto L_08A3BEF4;
    case 847u: goto L_08A3BF00;
    case 848u: goto L_08A3BF14;
    case 849u: goto L_08A3BF20;
    case 850u: goto L_08A3BF28;
    case 851u: goto L_08A3BF38;
    case 852u: goto L_08A3BF4C;
    case 853u: goto L_08A3BF60;
    case 854u: goto L_08A3BF68;
    case 855u: goto L_08A3BF78;
    case 856u: goto L_08A3BF8C;
    case 857u: goto L_08A3BF98;
    case 858u: goto L_08A3BFA0;
    case 859u: goto L_08A3BFB8;
    case 860u: goto L_08A3BFC4;
    case 861u: goto L_08A3BFE0;
    case 862u: goto L_08A3BFEC;
    case 863u: goto L_08A3BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A38004:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A38030;
      }
      goto L_08A38010;
    }
L_08A38010:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A38078;
      }
      goto L_08A38018;
    }
L_08A38018:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A38048;
      }
      goto L_08A38020;
    }
L_08A38020:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(864)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08A38074;
      }
      goto L_08A38030;
    }
L_08A38030:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A38058;
      }
      goto L_08A38038;
    }
L_08A38038:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38068;
      }
      goto L_08A38040;
    }
L_08A38040:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A38078;
      }
      goto L_08A38048;
    }
L_08A38048:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(864)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08A38074;
      }
      goto L_08A38058;
    }
L_08A38058:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(868)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08A38074;
      }
      goto L_08A38068;
    }
L_08A38068:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(868)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08A38074;
L_08A38074:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A38078;
L_08A38078:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38130;
      }
      goto L_08A38108;
    }
L_08A38108:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A38118u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 273u, 0x08A1D6B8u>(ctx, &aot_mem) && ctx.pc == 0x08A38118u) goto L_08A38118;
    return;
L_08A38118:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A38128;
      }
      goto L_08A38124;
    }
L_08A38124:
    ctx.gpr[16] = (0u | 0u);
    goto L_08A38128;
L_08A38128:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38108;
      }
      goto L_08A38130;
    }
L_08A38130:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38168;
      }
      goto L_08A3815C;
    }
L_08A3815C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A38264;
      }
      goto L_08A38168;
    }
L_08A38168:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A38264;
      }
      goto L_08A38174;
    }
L_08A38174:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(860)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[16] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08A3823C;
    }
    goto L_08A38210;
L_08A38210:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A38220u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 273u, 0x08A1D6B8u>(ctx, &aot_mem) && ctx.pc == 0x08A38220u) goto L_08A38220;
    return;
L_08A38220:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A38230;
      }
      goto L_08A3822C;
    }
L_08A3822C:
    ctx.gpr[16] = (0u | 0u);
    goto L_08A38230;
L_08A38230:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38210;
      }
      goto L_08A38238;
    }
L_08A38238:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08A3823C;
L_08A3823C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A38264;
L_08A38264:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A38270;
L_08A38270:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[4] << 16u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 608u, 0x08A37FC4u>(ctx, &aot_mem); return;
      }
      goto L_08A3831C;
    }
L_08A3831C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
        goto L_08A383F8;
    }
    goto L_08A38328;
L_08A38328:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(856)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A383E4;
      }
      goto L_08A383BC;
    }
L_08A383BC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A383CCu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 273u, 0x08A1D6B8u>(ctx, &aot_mem) && ctx.pc == 0x08A383CCu) goto L_08A383CC;
    return;
L_08A383CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A383DC;
      }
      goto L_08A383D8;
    }
L_08A383D8:
    ctx.gpr[16] = (0u | 0u);
    goto L_08A383DC;
L_08A383DC:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A383BC;
      }
      goto L_08A383E4;
    }
L_08A383E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    goto L_08A383F8;
L_08A383F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (0u | 0u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A38440;
L_08A38440:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(60)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1280)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08A38440;
      }
      goto L_08A38470;
    }
L_08A38470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A38498;
      }
      goto L_08A3848C;
    }
L_08A3848C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A38498;
L_08A38498:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(16));
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(32));
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
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A384D8;
    }
    goto L_08A384D8;
L_08A384D8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A384F0;
      }
      goto L_08A384EC;
    }
L_08A384EC:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A384F0;
L_08A384F0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A38530:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A3856Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25728));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 569u, 0x0883AB50u>(ctx, &aot_mem) && ctx.pc == 0x08A3856Cu) goto L_08A3856C;
    return;
L_08A3856C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
        goto L_08A38988;
    }
    goto L_08A38574;
L_08A38574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08A38594u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A38594u) goto L_08A38594;
    return;
L_08A38594:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A385B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 288u, 0x08A0E2E0u>(ctx, &aot_mem) && ctx.pc == 0x08A385B4u) goto L_08A385B4;
    return;
L_08A385B4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8144)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08A385E8;
    }
    goto L_08A385E8;
L_08A385E8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (15363u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[16];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
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
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16076u << 16u);
      if (branch_taken) {
          goto L_08A3870C;
      }
      goto L_08A38690;
    }
L_08A38690:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
        goto L_08A38964;
    }
    goto L_08A386A8;
L_08A386A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[20] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
        goto L_08A38710;
    }
    goto L_08A386C4;
L_08A386C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
        goto L_08A38710;
    }
    goto L_08A386DC;
L_08A386DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
        goto L_08A38710;
    }
    goto L_08A386F4;
L_08A386F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1164)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
        goto L_08A38964;
    }
    goto L_08A3870C;
L_08A3870C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    goto L_08A38710;
L_08A38710:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 1u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A38748;
      }
      goto L_08A38744;
    }
L_08A38744:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A38748;
L_08A38748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3882C;
      }
      goto L_08A38754;
    }
L_08A38754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A3876Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08A3876Cu) goto L_08A3876C;
    return;
L_08A3876C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38784;
      }
      goto L_08A38774;
    }
L_08A38774:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38858;
      }
      goto L_08A38784;
    }
L_08A38784:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[20] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A387E8;
      }
      goto L_08A387A0;
    }
L_08A387A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A387E8;
      }
      goto L_08A387B8;
    }
L_08A387B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A387E8;
      }
      goto L_08A387D0;
    }
L_08A387D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1164)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3880C;
      }
      goto L_08A387E8;
    }
L_08A387E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 43u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A38804u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 580u, 0x088DEE94u>(ctx, &aot_mem) && ctx.pc == 0x08A38804u) goto L_08A38804;
    return;
L_08A38804:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38858;
      }
      goto L_08A3880C;
    }
L_08A3880C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 43u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A38824u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 95u, 0x08A408F0u>(ctx, &aot_mem) && ctx.pc == 0x08A38824u) goto L_08A38824;
    return;
L_08A38824:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38858;
      }
      goto L_08A3882C;
    }
L_08A3882C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38858;
      }
      goto L_08A38838;
    }
L_08A38838:
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1444), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 164u);
    ctx.gpr[31] = (0x08A38858u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38858u) goto L_08A38858;
    return;
L_08A38858:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A3895C;
      }
      goto L_08A3886C;
    }
L_08A3886C:
    ctx.gpr[20] = (2229u << 16u);
    goto L_08A38870;
L_08A38870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38948;
      }
      goto L_08A3887C;
    }
L_08A3887C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A38894u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08A38894u) goto L_08A38894;
    return;
L_08A38894:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A388AC;
      }
      goto L_08A3889C;
    }
L_08A3889C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38948;
      }
      goto L_08A388AC;
    }
L_08A388AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3890C;
      }
      goto L_08A388C4;
    }
L_08A388C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3890C;
      }
      goto L_08A388DC;
    }
L_08A388DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3890C;
      }
      goto L_08A388F4;
    }
L_08A388F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1164)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A38930;
      }
      goto L_08A3890C;
    }
L_08A3890C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 43u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A38928u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 580u, 0x088DEE94u>(ctx, &aot_mem) && ctx.pc == 0x08A38928u) goto L_08A38928;
    return;
L_08A38928:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38948;
      }
      goto L_08A38930;
    }
L_08A38930:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 43u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A38948u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 95u, 0x08A408F0u>(ctx, &aot_mem) && ctx.pc == 0x08A38948u) goto L_08A38948;
    return;
L_08A38948:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A38870;
      }
      goto L_08A3895C;
    }
L_08A3895C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38980;
      }
      goto L_08A38964;
    }
L_08A38964:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A38980;
L_08A38980:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A389B8;
      }
      goto L_08A38988;
    }
L_08A38988:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1444), static_cast<std::uint8_t>(0u));
    goto L_08A389B8;
L_08A389B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A389D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-2336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2312), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(504)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2280), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2284), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2288), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2292), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2308), ctx.gpr[22]);
    ctx.fpr[30] = std::bit_cast<float>(0u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-9));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2264), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2268), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2272), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2276), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2296), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2300), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2304), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2316), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2320), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A38A8C;
      }
      goto L_08A38A40;
    }
L_08A38A40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A38A8C;
      }
      goto L_08A38A50;
    }
L_08A38A50:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(88))))));
        goto L_08A38A90;
    }
    goto L_08A38A5C;
L_08A38A5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(504), 0u);
    ctx.gpr[6] = (0u & 255u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-17));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(600), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A38A8C;
L_08A38A8C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(88))))));
    goto L_08A38A90;
L_08A38A90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2232), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2164), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A38ADC;
      }
      goto L_08A38ACC;
    }
L_08A38ACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A38ADC;
L_08A38ADC:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(598), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(880), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(1340), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(603))))));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(675))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A38B3C;
      }
      goto L_08A38B18;
    }
L_08A38B18:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(676))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(676), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38B3C;
      }
      goto L_08A38B34;
    }
L_08A38B34:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(675), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A38B3C;
L_08A38B3C:
    ctx.gpr[31] = (0x08A38B44u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 74u, 0x088A05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A38B44u) goto L_08A38B44;
    return;
L_08A38B44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38BC8;
      }
      goto L_08A38B50;
    }
L_08A38B50:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38BB8;
      }
      goto L_08A38B60;
    }
L_08A38B60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A38BB8;
      }
      goto L_08A38B74;
    }
L_08A38B74:
    ctx.gpr[4] = (0u | 1000u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1336)));
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(646), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(648), ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-8107));
      if (branch_taken) {
          goto L_08A38BA4;
      }
      goto L_08A38B98;
    }
L_08A38B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(648)));
    ctx.gpr[31] = (0x08A38BA4u);
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(648));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08A38BA4u) goto L_08A38BA4;
    return;
L_08A38BA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A38BB8u);
    ctx.gpr[6] = (0u | 93u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38BB8u) goto L_08A38BB8;
    return;
L_08A38BB8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1332), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A38BD4;
      }
      goto L_08A38BC8;
    }
L_08A38BC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1332), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A38BD4;
L_08A38BD4:
    ctx.gpr[31] = (0x08A38BDCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 255u, 0x08A89A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38BDCu) goto L_08A38BDC;
    return;
L_08A38BDC:
    ctx.gpr[31] = (0x08A38BE4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 580u, 0x0889ED70u>(ctx, &aot_mem) && ctx.pc == 0x08A38BE4u) goto L_08A38BE4;
    return;
L_08A38BE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] & 496u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[18] >> 4u);
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3944C;
      }
      goto L_08A38C14;
    }
L_08A38C14:
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[18]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(5640)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A38C2C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[31] = (0x08A38C44u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1332), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38C44u) goto L_08A38C44;
    return;
L_08A38C44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A39120;
      }
      goto L_08A38C54;
    }
L_08A38C54:
    ctx.gpr[31] = (0x08A38C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38C5Cu) goto L_08A38C5C;
    return;
L_08A38C5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A39120;
      }
      goto L_08A38C6C;
    }
L_08A38C6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A38C88u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A38C88u) goto L_08A38C88;
    return;
L_08A38C88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1316)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A38E3C;
      }
      goto L_08A38C9C;
    }
L_08A38C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1316)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(592)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[30])) && ctx.fpr[15] == ctx.fpr[30]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A38CE0;
      }
      goto L_08A38CC8;
    }
L_08A38CC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38CEC;
      }
      goto L_08A38CE0;
    }
L_08A38CE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1445)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38F2C;
      }
      goto L_08A38CEC;
    }
L_08A38CEC:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(88))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[9] = (0u | 210u);
    ctx.gpr[7] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(240));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A38D80;
      }
      goto L_08A38D14;
    }
L_08A38D14:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (16025u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08A38D44;
    }
    goto L_08A38D44;
L_08A38D44:
    ctx.gpr[7] = (16179u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(588)));
    ctx.gpr[7] = (ctx.gpr[7] | 13107u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1316)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A38DD8;
      }
      goto L_08A38D80;
    }
L_08A38D80:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08A38DAC;
    }
    goto L_08A38DAC;
L_08A38DAC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(588)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1316)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08A38DD8;
L_08A38DD8:
    ctx.gpr[7] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08A38E34u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 288u, 0x08A0E2E0u>(ctx, &aot_mem) && ctx.pc == 0x08A38E34u) goto L_08A38E34;
    return;
L_08A38E34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38F2C;
      }
      goto L_08A38E3C;
    }
L_08A38E3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1316)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(592)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[30]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A38E74;
      }
      goto L_08A38E68;
    }
L_08A38E68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1445)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38F2C;
      }
      goto L_08A38E74;
    }
L_08A38E74:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[6] = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A38EB4;
    }
    goto L_08A38EB4;
L_08A38EB4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1316)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[7] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (0x08A38F2Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 288u, 0x08A0E2E0u>(ctx, &aot_mem) && ctx.pc == 0x08A38F2Cu) goto L_08A38F2C;
    return;
L_08A38F2C:
    ctx.gpr[31] = (0x08A38F34u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 720u, 0x0883BA30u>(ctx, &aot_mem) && ctx.pc == 0x08A38F34u) goto L_08A38F34;
    return;
L_08A38F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A38F5C;
      }
      goto L_08A38F44;
    }
L_08A38F44:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-8092)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A38F5C;
      }
      goto L_08A38F54;
    }
L_08A38F54:
    ctx.gpr[31] = (0x08A38F5Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 281u, 0x08861DA4u>(ctx, &aot_mem) && ctx.pc == 0x08A38F5Cu) goto L_08A38F5C;
    return;
L_08A38F5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1156)));
        goto L_08A38F8C;
    }
    goto L_08A38F74;
L_08A38F74:
    ctx.gpr[31] = (0x08A38F7Cu);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1054)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x08925840u>(ctx, &aot_mem) && ctx.pc == 0x08A38F7Cu) goto L_08A38F7C;
    return;
L_08A38F7C:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3900C;
      }
      goto L_08A38F88;
    }
L_08A38F88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1156)));
    goto L_08A38F8C;
L_08A38F8C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1160)));
        goto L_08A38FB8;
    }
    goto L_08A38FA0;
L_08A38FA0:
    ctx.gpr[31] = (0x08A38FA8u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1086)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x08925840u>(ctx, &aot_mem) && ctx.pc == 0x08A38FA8u) goto L_08A38FA8;
    return;
L_08A38FA8:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3900C;
      }
      goto L_08A38FB4;
    }
L_08A38FB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1160)));
    goto L_08A38FB8;
L_08A38FB8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1164)));
        goto L_08A38FE4;
    }
    goto L_08A38FCC;
L_08A38FCC:
    ctx.gpr[31] = (0x08A38FD4u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1118)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x08925840u>(ctx, &aot_mem) && ctx.pc == 0x08A38FD4u) goto L_08A38FD4;
    return;
L_08A38FD4:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3900C;
      }
      goto L_08A38FE0;
    }
L_08A38FE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1164)));
    goto L_08A38FE4;
L_08A38FE4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A39120;
      }
      goto L_08A38FF8;
    }
L_08A38FF8:
    ctx.gpr[31] = (0x08A39000u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1150)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x08925840u>(ctx, &aot_mem) && ctx.pc == 0x08A39000u) goto L_08A39000;
    return;
L_08A39000:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A39120;
      }
      goto L_08A3900C;
    }
L_08A3900C:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
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
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(588)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A390D8;
      }
      goto L_08A39074;
    }
L_08A39074:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15800u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A390A4;
      }
      goto L_08A390A0;
    }
L_08A390A0:
    ctx.gpr[30] = (0u | 1u);
    goto L_08A390A4;
L_08A390A4:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A390D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x08A390D8u) goto L_08A390D8;
    return;
L_08A390D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (48291u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (0x08A39120u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A39120u) goto L_08A39120;
    return;
L_08A39120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39450;
      }
      goto L_08A39128;
    }
L_08A39128:
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A39450;
      }
      goto L_08A39134;
    }
L_08A39134:
    ctx.gpr[31] = (0x08A3913Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 385u, 0x0891DFE8u>(ctx, &aot_mem) && ctx.pc == 0x08A3913Cu) goto L_08A3913C;
    return;
L_08A3913C:
    ctx.gpr[31] = (0x08A39144u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 230u, 0x08A0DCCCu>(ctx, &aot_mem) && ctx.pc == 0x08A39144u) goto L_08A39144;
    return;
L_08A39144:
    ctx.gpr[31] = (0x08A3914Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 335u, 0x089F1CCCu>(ctx, &aot_mem) && ctx.pc == 0x08A3914Cu) goto L_08A3914C;
    return;
L_08A3914C:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1446)));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1445), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1447), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1446), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(404)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x08A39180u);
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(624));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 170u, 0x08A7CE80u>(ctx, &aot_mem) && ctx.pc == 0x08A39180u) goto L_08A39180;
    return;
L_08A39180:
    ctx.gpr[8] = (16128u << 16u);
    ctx.gpr[7] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[31] = (0x08A391A0u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 806u, 0x0889FBE8u>(ctx, &aot_mem) && ctx.pc == 0x08A391A0u) goto L_08A391A0;
    return;
L_08A391A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1216)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1220)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A391C0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1220), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 387u, 0x08A36520u>(ctx, &aot_mem) && ctx.pc == 0x08A391C0u) goto L_08A391C0;
    return;
L_08A391C0:
    ctx.gpr[31] = (0x08A391C8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 384u, 0x08A36504u>(ctx, &aot_mem) && ctx.pc == 0x08A391C8u) goto L_08A391C8;
    return;
L_08A391C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 264u, 0x08A3D2A0u>(ctx, &aot_mem); return;
      }
      goto L_08A391F8;
    }
L_08A391F8:
    ctx.gpr[31] = (0x08A39200u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 385u, 0x0891DFE8u>(ctx, &aot_mem) && ctx.pc == 0x08A39200u) goto L_08A39200;
    return;
L_08A39200:
    ctx.gpr[31] = (0x08A39208u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 185u, 0x089F5D1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39208u) goto L_08A39208;
    return;
L_08A39208:
    ctx.gpr[31] = (0x08A39210u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 387u, 0x08A36520u>(ctx, &aot_mem) && ctx.pc == 0x08A39210u) goto L_08A39210;
    return;
L_08A39210:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A39254;
      }
      goto L_08A39230;
    }
L_08A39230:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A39264;
      }
      goto L_08A39254;
    }
L_08A39254:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1332), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A39264;
L_08A39264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39450;
      }
      goto L_08A3926C;
    }
L_08A3926C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A392B0;
      }
      goto L_08A392A0;
    }
L_08A392A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A392C4;
      }
      goto L_08A392B0;
    }
L_08A392B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A392D0;
      }
      goto L_08A392C4;
    }
L_08A392C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A392D0;
L_08A392D0:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(680), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(504)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
        goto L_08A39310;
    }
    goto L_08A392E4;
L_08A392E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(508)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
        goto L_08A39310;
    }
    goto L_08A392F0;
L_08A392F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
        goto L_08A39310;
    }
    goto L_08A39300;
L_08A39300:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(601))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A39324;
      }
      goto L_08A3930C;
    }
L_08A3930C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    goto L_08A39310;
L_08A39310:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A39324;
      }
      goto L_08A3931C;
    }
L_08A3931C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08A39328;
      }
      goto L_08A39324;
    }
L_08A39324:
    ctx.gpr[21] = (0u | 0u);
    goto L_08A39328;
L_08A39328:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1320), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1324), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(599))))));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3936C;
      }
      goto L_08A3934C;
    }
L_08A3934C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A3936C;
L_08A3936C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39450;
      }
      goto L_08A39374;
    }
L_08A39374:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A393C4;
      }
      goto L_08A393A4;
    }
L_08A393A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A393D4;
      }
      goto L_08A393C4;
    }
L_08A393C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(597))))));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A393D4;
L_08A393D4:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(680), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A39450;
      }
      goto L_08A393F4;
    }
L_08A393F4:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(597))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(680), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1320), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08A39440u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1324), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 379u, 0x08852474u>(ctx, &aot_mem) && ctx.pc == 0x08A39440u) goto L_08A39440;
    return;
L_08A39440:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1336), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A39450;
      }
      goto L_08A3944C;
    }
L_08A3944C:
    ctx.gpr[20] = (2230u << 16u);
    goto L_08A39450;
L_08A39450:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A394B0;
      }
      goto L_08A39460;
    }
L_08A39460:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A394A4;
      }
      goto L_08A39484;
    }
L_08A39484:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A394B0;
      }
      goto L_08A394A4;
    }
L_08A394A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A394B0;
L_08A394B0:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A394D8;
      }
      goto L_08A394B8;
    }
L_08A394B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A394D8;
      }
      goto L_08A394C8;
    }
L_08A394C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
        goto L_08A39884;
    }
    goto L_08A394D8;
L_08A394D8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10768)));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22608));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(240));
    ctx.gpr[16] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (49024u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A3969C;
      }
      goto L_08A3953C;
    }
L_08A3953C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1184)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[30])) && ctx.fpr[13] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A39600;
      }
      goto L_08A39550;
    }
L_08A39550:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1188)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[30])) && ctx.fpr[13] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A39600;
      }
      goto L_08A39564;
    }
L_08A39564:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1192)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10764)));
      if (branch_taken) {
          goto L_08A39590;
      }
      goto L_08A3957C;
    }
L_08A3957C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1196)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[30])) && ctx.fpr[13] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A395F0;
      }
      goto L_08A39590;
    }
L_08A39590:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A395F0;
      }
      goto L_08A395A4;
    }
L_08A395A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (15759u << 16u);
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A395E0;
    }
    goto L_08A395E0;
L_08A395E0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A3969C;
      }
      goto L_08A395F0;
    }
L_08A395F0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10760)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A3969C;
      }
      goto L_08A39600;
    }
L_08A39600:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1192)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[30])) && ctx.fpr[13] == ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2220), static_cast<std::uint8_t>(ctx.gpr[21]));
        goto L_08A396A0;
    }
    goto L_08A39614;
L_08A39614:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1196)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[30])) && ctx.fpr[13] == ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2220), static_cast<std::uint8_t>(ctx.gpr[21]));
        goto L_08A396A0;
    }
    goto L_08A39628;
L_08A39628:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10764)));
      if (branch_taken) {
          goto L_08A3969C;
      }
      goto L_08A39640;
    }
L_08A39640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[14] = ctx.fpr[16] - ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
        goto L_08A39684;
    }
    goto L_08A39684;
L_08A39684:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A3969C;
L_08A3969C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2220), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08A396A0;
L_08A396A0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2236), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10756)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[19] + ctx.fpr[17];
    ctx.fpr[13] = ctx.fpr[17] / ctx.fpr[13];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[14];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[13] - ctx.fpr[18];
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[31] = (0x08A3976Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A3629Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3976Cu) goto L_08A3976C;
    return;
L_08A3976C:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A39780u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 353u, 0x08A362B8u>(ctx, &aot_mem) && ctx.pc == 0x08A39780u) goto L_08A39780;
    return;
L_08A39780:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A39790u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 353u, 0x08A362B8u>(ctx, &aot_mem) && ctx.pc == 0x08A39790u) goto L_08A39790;
    return;
L_08A39790:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3979Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3979Cu) goto L_08A3979C;
    return;
L_08A3979C:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A397B0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 346u, 0x08A361F4u>(ctx, &aot_mem) && ctx.pc == 0x08A397B0u) goto L_08A397B0;
    return;
L_08A397B0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A397C0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A3626Cu>(ctx, &aot_mem) && ctx.pc == 0x08A397C0u) goto L_08A397C0;
    return;
L_08A397C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[31] = (0x08A397E0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 288u, 0x08A0E2E0u>(ctx, &aot_mem) && ctx.pc == 0x08A397E0u) goto L_08A397E0;
    return;
L_08A397E0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A397F0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 353u, 0x08A362B8u>(ctx, &aot_mem) && ctx.pc == 0x08A397F0u) goto L_08A397F0;
    return;
L_08A397F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A39800u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 353u, 0x08A362B8u>(ctx, &aot_mem) && ctx.pc == 0x08A39800u) goto L_08A39800;
    return;
L_08A39800:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3980Cu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3980Cu) goto L_08A3980C;
    return;
L_08A3980C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3981Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 346u, 0x08A361F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3981Cu) goto L_08A3981C;
    return;
L_08A3981C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3982Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A3626Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3982Cu) goto L_08A3982C;
    return;
L_08A3982C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A39838u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39838u) goto L_08A39838;
    return;
L_08A39838:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[31] = (0x08A39858u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 288u, 0x08A0E2E0u>(ctx, &aot_mem) && ctx.pc == 0x08A39858u) goto L_08A39858;
    return;
L_08A39858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2236)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2220)));
      if (branch_taken) {
          goto L_08A3987C;
      }
      goto L_08A3986C;
    }
L_08A3986C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3987Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3987Cu) goto L_08A3987C;
    return;
L_08A3987C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A398A0;
      }
      goto L_08A39884;
    }
L_08A39884:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A398A0;
L_08A398A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08A39B6C;
      }
      goto L_08A398B8;
    }
L_08A398B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
        goto L_08A398E4;
    }
    goto L_08A398CC;
L_08A398CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A39B6C;
      }
      goto L_08A398E0;
    }
L_08A398E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
    goto L_08A398E4;
L_08A398E4:
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A39B6C;
      }
      goto L_08A398F0;
    }
L_08A398F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_08A39968;
      }
      goto L_08A3990C;
    }
L_08A3990C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(112)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A39968;
      }
      goto L_08A39920;
    }
L_08A39920:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A39968;
      }
      goto L_08A39934;
    }
L_08A39934:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A39968;
      }
      goto L_08A39948;
    }
L_08A39948:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1180)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A39968;
      }
      goto L_08A39964;
    }
L_08A39964:
    ctx.gpr[16] = (0u | 1u);
    goto L_08A39968;
L_08A39968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (15172u << 16u);
      if (branch_taken) {
          goto L_08A399A4;
      }
      goto L_08A3997C;
    }
L_08A3997C:
    ctx.gpr[4] = (15300u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15044u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A399C4;
      }
      goto L_08A399A4;
    }
L_08A399A4:
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (14955u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 60923u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A399C4;
L_08A399C4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2220), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2237), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2236), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(176));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A399E8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A3626Cu>(ctx, &aot_mem) && ctx.pc == 0x08A399E8u) goto L_08A399E8;
    return;
L_08A399E8:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A39A04u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 354u, 0x08A362D4u>(ctx, &aot_mem) && ctx.pc == 0x08A39A04u) goto L_08A39A04;
    return;
L_08A39A04:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A39A1Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A3626Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39A1Cu) goto L_08A39A1C;
    return;
L_08A39A1C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A39A2Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 354u, 0x08A362D4u>(ctx, &aot_mem) && ctx.pc == 0x08A39A2Cu) goto L_08A39A2C;
    return;
L_08A39A2C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A39A38u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39A38u) goto L_08A39A38;
    return;
L_08A39A38:
    ctx.gpr[31] = (0x08A39A40u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 361u, 0x08A36374u>(ctx, &aot_mem) && ctx.pc == 0x08A39A40u) goto L_08A39A40;
    return;
L_08A39A40:
    ctx.gpr[31] = (0x08A39A48u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A39A48u) goto L_08A39A48;
    return;
L_08A39A48:
    ctx.gpr[31] = (0x08A39A50u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 392u, 0x08AF9BB8u>(ctx, &aot_mem) && ctx.pc == 0x08A39A50u) goto L_08A39A50;
    return;
L_08A39A50:
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[0]));
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2236)));
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2237)));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2220)));
      if (branch_taken) {
          goto L_08A39AA4;
      }
      goto L_08A39A64;
    }
L_08A39A64:
    ctx.gpr[31] = (0x08A39A6Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 361u, 0x08A36374u>(ctx, &aot_mem) && ctx.pc == 0x08A39A6Cu) goto L_08A39A6C;
    return;
L_08A39A6C:
    ctx.gpr[31] = (0x08A39A74u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A39A74u) goto L_08A39A74;
    return;
L_08A39A74:
    ctx.gpr[31] = (0x08A39A7Cu);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 392u, 0x08AF9BB8u>(ctx, &aot_mem) && ctx.pc == 0x08A39A7Cu) goto L_08A39A7C;
    return;
L_08A39A7C:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A39AA4;
      }
      goto L_08A39A8C;
    }
L_08A39A8C:
    ctx.gpr[31] = (0x08A39A94u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 446u, 0x08AFA0A8u>(ctx, &aot_mem) && ctx.pc == 0x08A39A94u) goto L_08A39A94;
    return;
L_08A39A94:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A39AAC;
      }
      goto L_08A39AA4;
    }
L_08A39AA4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39B68;
      }
      goto L_08A39AAC;
    }
L_08A39AAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(265)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(265)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39AD0;
      }
      goto L_08A39AC8;
    }
L_08A39AC8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39B6C;
      }
      goto L_08A39AD0;
    }
L_08A39AD0:
    ctx.gpr[31] = (0x08A39AD8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39AD8u) goto L_08A39AD8;
    return;
L_08A39AD8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A39AE4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39AE4u) goto L_08A39AE4;
    return;
L_08A39AE4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A39AF0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 441u, 0x089EE6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A39AF0u) goto L_08A39AF0;
    return;
L_08A39AF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A39B6C;
      }
      goto L_08A39AF8;
    }
L_08A39AF8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39B10;
      }
      goto L_08A39B00;
    }
L_08A39B00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(265)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A39B18;
      }
      goto L_08A39B10;
    }
L_08A39B10:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A39B18;
L_08A39B18:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[22] = (0u | 1u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A39B34u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 357u, 0x08A3630Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39B34u) goto L_08A39B34;
    return;
L_08A39B34:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A39B40u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39B40u) goto L_08A39B40;
    return;
L_08A39B40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08A39B54u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 357u, 0x08A3630Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39B54u) goto L_08A39B54;
    return;
L_08A39B54:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A39B60u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39B60u) goto L_08A39B60;
    return;
L_08A39B60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39B6C;
      }
      goto L_08A39B68;
    }
L_08A39B68:
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(0u));
    goto L_08A39B6C;
L_08A39B6C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    goto L_08A39B74;
L_08A39B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39BA8;
      }
      goto L_08A39B80;
    }
L_08A39B80:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-8091)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39BA8;
      }
      goto L_08A39B98;
    }
L_08A39B98:
    ctx.gpr[31] = (0x08A39BA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 427u, 0x08AF9E94u>(ctx, &aot_mem) && ctx.pc == 0x08A39BA0u) goto L_08A39BA0;
    return;
L_08A39BA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A39BC0;
      }
      goto L_08A39BA8;
    }
L_08A39BA8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A39B74;
      }
      goto L_08A39BB8;
    }
L_08A39BB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A39BD4;
      }
      goto L_08A39BC0;
    }
L_08A39BC0:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39BCCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9EA4u>(ctx, &aot_mem) && ctx.pc == 0x08A39BCCu) goto L_08A39BCC;
    return;
L_08A39BCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 264u, 0x08A3D2A0u>(ctx, &aot_mem); return;
      }
      goto L_08A39BD4;
    }
L_08A39BD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[6] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2172), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2200), ctx.gpr[6]);
    ctx.gpr[6] = (15948u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2168), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A39C20;
      }
      goto L_08A39C18;
    }
L_08A39C18:
    ctx.gpr[22] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(0u));
    goto L_08A39C20;
L_08A39C20:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2236), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2237), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[31] = (0x08A39C34u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 266u, 0x08A418F0u>(ctx, &aot_mem) && ctx.pc == 0x08A39C34u) goto L_08A39C34;
    return;
L_08A39C34:
    if (ctx.gpr[22] == 0u) {
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
        goto L_08A39DE8;
    }
    goto L_08A39C3C;
L_08A39C3C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39C48u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 423u, 0x08AF9E14u>(ctx, &aot_mem) && ctx.pc == 0x08A39C48u) goto L_08A39C48;
    return;
L_08A39C48:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39C54u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 426u, 0x08AF9E6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39C54u) goto L_08A39C54;
    return;
L_08A39C54:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39C60u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9EA4u>(ctx, &aot_mem) && ctx.pc == 0x08A39C60u) goto L_08A39C60;
    return;
L_08A39C60:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39C6Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 429u, 0x08AF9ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A39C6Cu) goto L_08A39C6C;
    return;
L_08A39C6C:
    ctx.gpr[31] = (0x08A39C74u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 437u, 0x08AF9F48u>(ctx, &aot_mem) && ctx.pc == 0x08A39C74u) goto L_08A39C74;
    return;
L_08A39C74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[6] = (65520u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[19]);
    ctx.gpr[31] = (0x08A39CA8u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 383u, 0x08A364F0u>(ctx, &aot_mem) && ctx.pc == 0x08A39CA8u) goto L_08A39CA8;
    return;
L_08A39CA8:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(160));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A39CC4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 357u, 0x08A3630Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39CC4u) goto L_08A39CC4;
    return;
L_08A39CC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A39CD0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39CD0u) goto L_08A39CD0;
    return;
L_08A39CD0:
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(144));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08A39CE8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 357u, 0x08A3630Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39CE8u) goto L_08A39CE8;
    return;
L_08A39CE8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A39CF4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39CF4u) goto L_08A39CF4;
    return;
L_08A39CF4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16050u << 16u);
      if (branch_taken) {
          goto L_08A39D40;
      }
      goto L_08A39D04;
    }
L_08A39D04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1304)));
    ctx.gpr[4] = (ctx.gpr[4] | 47299u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A39D40;
      }
      goto L_08A39D20;
    }
L_08A39D20:
    ctx.gpr[31] = (0x08A39D28u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1304)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A39D28u) goto L_08A39D28;
    return;
L_08A39D28:
    ctx.gpr[4] = (15502u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64053u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A39D40;
L_08A39D40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39DE0;
      }
      goto L_08A39D50;
    }
L_08A39D50:
    ctx.gpr[4] = (16248u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.gpr[31] = (0x08A39D60u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A39D60u) goto L_08A39D60;
    return;
L_08A39D60:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A39D6Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 394u, 0x08AF9BECu>(ctx, &aot_mem) && ctx.pc == 0x08A39D6Cu) goto L_08A39D6C;
    return;
L_08A39D6C:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08A39D90u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A39D90u) goto L_08A39D90;
    return;
L_08A39D90:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08A39D9Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(392));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 337u, 0x08AF9854u>(ctx, &aot_mem) && ctx.pc == 0x08A39D9Cu) goto L_08A39D9C;
    return;
L_08A39D9C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(388));
    ctx.gpr[31] = (0x08A39DACu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF98A0u>(ctx, &aot_mem) && ctx.pc == 0x08A39DACu) goto L_08A39DAC;
    return;
L_08A39DAC:
    ctx.fpr[20] = ctx.fpr[26] - ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1312)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A39DC0u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 385u, 0x08AF9B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39DC0u) goto L_08A39DC0;
    return;
L_08A39DC0:
    ctx.gpr[4] = (16006u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A39DE0;
L_08A39DE0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2220), static_cast<std::uint8_t>(ctx.gpr[21]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 54u, 0x08A3C3E4u>(ctx, &aot_mem); return;
      }
      goto L_08A39DE8;
    }
L_08A39DE8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(976));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[7] = (16051u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2160), ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-29628));
    ctx.gpr[7] = (ctx.gpr[7] | 13107u);
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2208), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A39F4C;
      }
      goto L_08A39E2C;
    }
L_08A39E2C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A39E3Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 489u, 0x08A05EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A39E3Cu) goto L_08A39E3C;
    return;
L_08A39E3C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39E48u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08A39E48u) goto L_08A39E48;
    return;
L_08A39E48:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39E54u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 423u, 0x08AF9E14u>(ctx, &aot_mem) && ctx.pc == 0x08A39E54u) goto L_08A39E54;
    return;
L_08A39E54:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39E60u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 426u, 0x08AF9E6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39E60u) goto L_08A39E60;
    return;
L_08A39E60:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39E6Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9EA4u>(ctx, &aot_mem) && ctx.pc == 0x08A39E6Cu) goto L_08A39E6C;
    return;
L_08A39E6C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39E78u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 429u, 0x08AF9ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A39E78u) goto L_08A39E78;
    return;
L_08A39E78:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(323))))));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(322))))));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A39EACu);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39EACu) goto L_08A39EAC;
    return;
L_08A39EAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A39EC4u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39EC4u) goto L_08A39EC4;
    return;
L_08A39EC4:
    ctx.gpr[16] = (0u | 0u);
    goto L_08A39EC8;
L_08A39EC8:
    ctx.gpr[31] = (0x08A39ED0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 377u, 0x08A0EDE0u>(ctx, &aot_mem) && ctx.pc == 0x08A39ED0u) goto L_08A39ED0;
    return;
L_08A39ED0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A39F28;
      }
      goto L_08A39ED8;
    }
L_08A39ED8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
      if (branch_taken) {
          goto L_08A39F28;
      }
      goto L_08A39EE4;
    }
L_08A39EE4:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39EF0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x08A39EF0u) goto L_08A39EF0;
    return;
L_08A39EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A39F08u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39F08u) goto L_08A39F08;
    return;
L_08A39F08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A39F20u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39F20u) goto L_08A39F20;
    return;
L_08A39F20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39EC8;
      }
      goto L_08A39F28;
    }
L_08A39F28:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39F34u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 426u, 0x08AF9E6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39F34u) goto L_08A39F34;
    return;
L_08A39F34:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39F40u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08A39F40u) goto L_08A39F40;
    return;
L_08A39F40:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A39F4Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 370u, 0x08A36434u>(ctx, &aot_mem) && ctx.pc == 0x08A39F4Cu) goto L_08A39F4C;
    return;
L_08A39F4C:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2220), static_cast<std::uint8_t>(ctx.gpr[21]));
      if (branch_taken) {
          goto L_08A3A014;
      }
      goto L_08A39F54;
    }
L_08A39F54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A014;
      }
      goto L_08A39F64;
    }
L_08A39F64:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A014;
      }
      goto L_08A39F74;
    }
L_08A39F74:
    ctx.gpr[31] = (0x08A39F7Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A39F7Cu) goto L_08A39F7C;
    return;
L_08A39F7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A39FD4;
      }
      goto L_08A39F90;
    }
L_08A39F90:
    ctx.gpr[4] = (48863u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A014;
      }
      goto L_08A39FB0;
    }
L_08A39FB0:
    ctx.gpr[31] = (0x08A39FB8u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A39FB8u) goto L_08A39FB8;
    return;
L_08A39FB8:
    ctx.gpr[4] = (15374u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64053u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3A014;
      }
      goto L_08A39FD4;
    }
L_08A39FD4:
    ctx.gpr[4] = (16095u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A014;
      }
      goto L_08A39FF4;
    }
L_08A39FF4:
    ctx.gpr[31] = (0x08A39FFCu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A39FFCu) goto L_08A39FFC;
    return;
L_08A39FFC:
    ctx.gpr[4] = (15374u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64053u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3A014;
L_08A3A014:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(220)));
    ctx.gpr[31] = (0x08A3A020u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 418u, 0x08AF9DE0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A020u) goto L_08A3A020;
    return;
L_08A3A020:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A170;
      }
      goto L_08A3A028;
    }
L_08A3A028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A170;
      }
      goto L_08A3A034;
    }
L_08A3A034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 188u);
    ctx.gpr[31] = (0x08A3A044u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08A3A044u) goto L_08A3A044;
    return;
L_08A3A044:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A170;
      }
      goto L_08A3A050;
    }
L_08A3A050:
    ctx.gpr[31] = (0x08A3A058u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 826u, 0x08AFB95Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A058u) goto L_08A3A058;
    return;
L_08A3A058:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A170;
      }
      goto L_08A3A068;
    }
L_08A3A068:
    ctx.gpr[31] = (0x08A3A070u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 806u, 0x08AFB794u>(ctx, &aot_mem) && ctx.pc == 0x08A3A070u) goto L_08A3A070;
    return;
L_08A3A070:
    ctx.gpr[4] = (15733u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A170;
      }
      goto L_08A3A08C;
    }
L_08A3A08C:
    ctx.gpr[31] = (0x08A3A094u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 806u, 0x08AFB794u>(ctx, &aot_mem) && ctx.pc == 0x08A3A094u) goto L_08A3A094;
    return;
L_08A3A094:
    ctx.gpr[4] = (15887u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16153u << 16u);
      if (branch_taken) {
          goto L_08A3A170;
      }
      goto L_08A3A0B0;
    }
L_08A3A0B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(220)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3A0CCu);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 456u, 0x08AFA15Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A0CCu) goto L_08A3A0CC;
    return;
L_08A3A0CC:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A170;
      }
      goto L_08A3A0DC;
    }
L_08A3A0DC:
    ctx.gpr[31] = (0x08A3A0E4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A3A0E4u) goto L_08A3A0E4;
    return;
L_08A3A0E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2200)));
    ctx.gpr[31] = (0x08A3A0F0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 348u, 0x08A3623Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A0F0u) goto L_08A3A0F0;
    return;
L_08A3A0F0:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A170;
      }
      goto L_08A3A108;
    }
L_08A3A108:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2240), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08A3A114u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A3A114u) goto L_08A3A114;
    return;
L_08A3A114:
    ctx.gpr[4] = (15948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15363u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A3A144u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A3A144u) goto L_08A3A144;
    return;
L_08A3A144:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3A154u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A3629Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A154u) goto L_08A3A154;
    return;
L_08A3A154:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3A160u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 440u, 0x08AF9F60u>(ctx, &aot_mem) && ctx.pc == 0x08A3A160u) goto L_08A3A160;
    return;
L_08A3A160:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2240)));
    goto L_08A3A170;
L_08A3A170:
    ctx.gpr[31] = (0x08A3A178u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 230u, 0x08A0DCCCu>(ctx, &aot_mem) && ctx.pc == 0x08A3A178u) goto L_08A3A178;
    return;
L_08A3A178:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A3A184u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08A38530;
L_08A3A184:
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08A3A18C;
L_08A3A18C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1264)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[12]) < 4 ? 1u : 0u);
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3A18C;
      }
      goto L_08A3A1C0;
    }
L_08A3A1C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08A3A1E0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A3A1E0u) goto L_08A3A1E0;
    return;
L_08A3A1E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3A1ECu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 348u, 0x08A3623Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A1ECu) goto L_08A3A1EC;
    return;
L_08A3A1EC:
    ctx.gpr[31] = (0x08A3A1F4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 356u, 0x08A36300u>(ctx, &aot_mem) && ctx.pc == 0x08A3A1F4u) goto L_08A3A1F4;
    return;
L_08A3A1F4:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(864));
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[5] & 65535u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(98));
    goto L_08A3A230;
L_08A3A230:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[17] = (ctx.gpr[16] << 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[17] = (ctx.gpr[23] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A3A268;
      }
      goto L_08A3A258;
    }
L_08A3A258:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10792)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3A2F4;
      }
      goto L_08A3A268;
    }
L_08A3A268:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3A2F4;
      }
      goto L_08A3A278;
    }
L_08A3A278:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A288;
      }
      goto L_08A3A280;
    }
L_08A3A280:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A3A2AC;
      }
      goto L_08A3A288;
    }
L_08A3A288:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08A3A294u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 537u, 0x08A373E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3A294u) goto L_08A3A294;
    return;
L_08A3A294:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A2A8;
      }
      goto L_08A3A2A0;
    }
L_08A3A2A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3A2AC;
      }
      goto L_08A3A2A8;
    }
L_08A3A2A8:
    ctx.gpr[19] = (0u | 0u);
    goto L_08A3A2AC;
L_08A3A2AC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A2F4;
      }
      goto L_08A3A2B4;
    }
L_08A3A2B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1264)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A2F4;
      }
      goto L_08A3A2EC;
    }
L_08A3A2EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10792)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3A2F4;
L_08A3A2F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A3C4;
      }
      goto L_08A3A310;
    }
L_08A3A310:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[17] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2244), ctx.gpr[30]);
    ctx.gpr[31] = (0x08A3A32Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1024));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 431u, 0x08AF9F18u>(ctx, &aot_mem) && ctx.pc == 0x08A3A32Cu) goto L_08A3A32C;
    return;
L_08A3A32C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2248), ctx.gpr[21]);
    ctx.gpr[31] = (0x08A3A33Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 396u, 0x08AF9C28u>(ctx, &aot_mem) && ctx.pc == 0x08A3A33Cu) goto L_08A3A33C;
    return;
L_08A3A33C:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3A348u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A348u) goto L_08A3A348;
    return;
L_08A3A348:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A3A358u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 351u, 0x08A36284u>(ctx, &aot_mem) && ctx.pc == 0x08A3A358u) goto L_08A3A358;
    return;
L_08A3A358:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(560));
    ctx.gpr[31] = (0x08A3A364u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A364u) goto L_08A3A364;
    return;
L_08A3A364:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2164)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(432));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A3A378u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 603u, 0x08B069CCu>(ctx, &aot_mem) && ctx.pc == 0x08A3A378u) goto L_08A3A378;
    return;
L_08A3A378:
    ctx.gpr[21] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A3A388u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 603u, 0x08B069CCu>(ctx, &aot_mem) && ctx.pc == 0x08A3A388u) goto L_08A3A388;
    return;
L_08A3A388:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3A398u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 351u, 0x08A36284u>(ctx, &aot_mem) && ctx.pc == 0x08A3A398u) goto L_08A3A398;
    return;
L_08A3A398:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3A3A8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 346u, 0x08A361F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3A3A8u) goto L_08A3A3A8;
    return;
L_08A3A3A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3A3B4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A3B4u) goto L_08A3A3B4;
    return;
L_08A3A3B4:
    ctx.gpr[31] = (0x08A3A3BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 359u, 0x08A36330u>(ctx, &aot_mem) && ctx.pc == 0x08A3A3BCu) goto L_08A3A3BC;
    return;
L_08A3A3BC:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2248)));
    goto L_08A3A3C4;
L_08A3A3C4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (0u | 2u);
      if (branch_taken) {
          goto L_08A3A230;
      }
      goto L_08A3A3D8;
    }
L_08A3A3D8:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1208), 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1204), 0u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1215), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1214), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    ctx.gpr[19] = (ctx.gpr[23] | 0u);
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(1024));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    goto L_08A3A404;
L_08A3A404:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A554;
      }
      goto L_08A3A420;
    }
L_08A3A420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
      if (branch_taken) {
          goto L_08A3A43C;
      }
      goto L_08A3A430;
    }
L_08A3A430:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3A440;
      }
      goto L_08A3A43C;
    }
L_08A3A43C:
    ctx.fpr[20] = ctx.fpr[26] - ctx.fpr[20];
    goto L_08A3A440;
L_08A3A440:
    ctx.gpr[31] = (0x08A3A448u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9F20u>(ctx, &aot_mem) && ctx.pc == 0x08A3A448u) goto L_08A3A448;
    return;
L_08A3A448:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A4A4;
      }
      goto L_08A3A45C;
    }
L_08A3A45C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2240), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2252), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (0x08A3A478u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9F20u>(ctx, &aot_mem) && ctx.pc == 0x08A3A478u) goto L_08A3A478;
    return;
L_08A3A478:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2252)));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3A49Cu);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 424u, 0x08A0F3B4u>(ctx, &aot_mem) && ctx.pc == 0x08A3A49Cu) goto L_08A3A49C;
    return;
L_08A3A49C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2240)));
      if (branch_taken) {
          goto L_08A3A4C8;
      }
      goto L_08A3A4A4;
    }
L_08A3A4A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3A4C8u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 416u, 0x08A0F298u>(ctx, &aot_mem) && ctx.pc == 0x08A3A4C8u) goto L_08A3A4C8;
    return;
L_08A3A4C8:
    ctx.gpr[31] = (0x08A3A4D0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9F38u>(ctx, &aot_mem) && ctx.pc == 0x08A3A4D0u) goto L_08A3A4D0;
    return;
L_08A3A4D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[9] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3A54C;
      }
      goto L_08A3A4E8;
    }
L_08A3A4E8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 34 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A3A54C;
      }
      goto L_08A3A4F4;
    }
L_08A3A4F4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(5696)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A50C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A524;
      }
      goto L_08A3A518;
    }
L_08A3A518:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1204), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1214), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08A3A52C;
      }
      goto L_08A3A524;
    }
L_08A3A524:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1208), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1215), static_cast<std::uint8_t>(ctx.gpr[9]));
    goto L_08A3A52C;
L_08A3A52C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A54C;
      }
      goto L_08A3A534;
    }
L_08A3A534:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A548;
      }
      goto L_08A3A540;
    }
L_08A3A540:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1204), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A3A54C;
      }
      goto L_08A3A548;
    }
L_08A3A548:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1208), ctx.gpr[8]);
    goto L_08A3A54C;
L_08A3A54C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A57C;
      }
      goto L_08A3A554;
    }
L_08A3A554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2164)));
    ctx.gpr[31] = (0x08A3A560u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 603u, 0x08B069CCu>(ctx, &aot_mem) && ctx.pc == 0x08A3A560u) goto L_08A3A560;
    return;
L_08A3A560:
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A3A570u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 346u, 0x08A361F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3A570u) goto L_08A3A570;
    return;
L_08A3A570:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3A57Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A57Cu) goto L_08A3A57C;
    return;
L_08A3A57C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3A404;
      }
      goto L_08A3A59C;
    }
L_08A3A59C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    goto L_08A3A5A8;
L_08A3A5A8:
    ctx.gpr[18] = (ctx.gpr[19] << 4u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(496));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(560));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3A5C4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 445u, 0x08AFA028u>(ctx, &aot_mem) && ctx.pc == 0x08A3A5C4u) goto L_08A3A5C4;
    return;
L_08A3A5C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3A5D0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A5D0u) goto L_08A3A5D0;
    return;
L_08A3A5D0:
    ctx.gpr[16] = (ctx.gpr[19] << 2u);
    ctx.gpr[16] = (ctx.gpr[23] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A608;
      }
      goto L_08A3A5E4;
    }
L_08A3A5E4:
    ctx.gpr[6] = (ctx.gpr[23] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1376));
    ctx.gpr[31] = (0x08A3A5F8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 445u, 0x08AFA028u>(ctx, &aot_mem) && ctx.pc == 0x08A3A5F8u) goto L_08A3A5F8;
    return;
L_08A3A5F8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3A604u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x08A3A604u) goto L_08A3A604;
    return;
L_08A3A604:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1360), 0u);
    goto L_08A3A608;
L_08A3A608:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A5A8;
      }
      goto L_08A3A61C;
    }
L_08A3A61C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A650;
      }
      goto L_08A3A638;
    }
L_08A3A638:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1156)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A770;
      }
      goto L_08A3A650;
    }
L_08A3A650:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
      if (branch_taken) {
          goto L_08A3A690;
      }
      goto L_08A3A668;
    }
L_08A3A668:
    ctx.gpr[31] = (0x08A3A670u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1024));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9F20u>(ctx, &aot_mem) && ctx.pc == 0x08A3A670u) goto L_08A3A670;
    return;
L_08A3A670:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(928));
    ctx.gpr[31] = (0x08A3A67Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 396u, 0x08AF9C28u>(ctx, &aot_mem) && ctx.pc == 0x08A3A67Cu) goto L_08A3A67C;
    return;
L_08A3A67C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3A688u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A688u) goto L_08A3A688;
    return;
L_08A3A688:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A6B0;
      }
      goto L_08A3A690;
    }
L_08A3A690:
    ctx.gpr[31] = (0x08A3A698u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1056));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9F20u>(ctx, &aot_mem) && ctx.pc == 0x08A3A698u) goto L_08A3A698;
    return;
L_08A3A698:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    ctx.gpr[31] = (0x08A3A6A4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 396u, 0x08AF9C28u>(ctx, &aot_mem) && ctx.pc == 0x08A3A6A4u) goto L_08A3A6A4;
    return;
L_08A3A6A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3A6B0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A6B0u) goto L_08A3A6B0;
    return;
L_08A3A6B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A6E0;
      }
      goto L_08A3A6C4;
    }
L_08A3A6C4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3A6D4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 349u, 0x08A36258u>(ctx, &aot_mem) && ctx.pc == 0x08A3A6D4u) goto L_08A3A6D4;
    return;
L_08A3A6D4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[31] = (0x08A3A6E0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A6E0u) goto L_08A3A6E0;
    return;
L_08A3A6E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1156)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A720;
      }
      goto L_08A3A6F8;
    }
L_08A3A6F8:
    ctx.gpr[31] = (0x08A3A700u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1056));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9F20u>(ctx, &aot_mem) && ctx.pc == 0x08A3A700u) goto L_08A3A700;
    return;
L_08A3A700:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[31] = (0x08A3A70Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 396u, 0x08AF9C28u>(ctx, &aot_mem) && ctx.pc == 0x08A3A70Cu) goto L_08A3A70C;
    return;
L_08A3A70C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3A718u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A718u) goto L_08A3A718;
    return;
L_08A3A718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A740;
      }
      goto L_08A3A720;
    }
L_08A3A720:
    ctx.gpr[31] = (0x08A3A728u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1024));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9F20u>(ctx, &aot_mem) && ctx.pc == 0x08A3A728u) goto L_08A3A728;
    return;
L_08A3A728:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[31] = (0x08A3A734u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 396u, 0x08AF9C28u>(ctx, &aot_mem) && ctx.pc == 0x08A3A734u) goto L_08A3A734;
    return;
L_08A3A734:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3A740u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A740u) goto L_08A3A740;
    return;
L_08A3A740:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A770;
      }
      goto L_08A3A754;
    }
L_08A3A754:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3A764u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 349u, 0x08A36258u>(ctx, &aot_mem) && ctx.pc == 0x08A3A764u) goto L_08A3A764;
    return;
L_08A3A764:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[31] = (0x08A3A770u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A770u) goto L_08A3A770;
    return;
L_08A3A770:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A7A0;
      }
      goto L_08A3A788;
    }
L_08A3A788:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1164)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A8C0;
      }
      goto L_08A3A7A0;
    }
L_08A3A7A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
      if (branch_taken) {
          goto L_08A3A7E0;
      }
      goto L_08A3A7B8;
    }
L_08A3A7B8:
    ctx.gpr[31] = (0x08A3A7C0u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1088));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9F20u>(ctx, &aot_mem) && ctx.pc == 0x08A3A7C0u) goto L_08A3A7C0;
    return;
L_08A3A7C0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[31] = (0x08A3A7CCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 396u, 0x08AF9C28u>(ctx, &aot_mem) && ctx.pc == 0x08A3A7CCu) goto L_08A3A7CC;
    return;
L_08A3A7CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3A7D8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A7D8u) goto L_08A3A7D8;
    return;
L_08A3A7D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A800;
      }
      goto L_08A3A7E0;
    }
L_08A3A7E0:
    ctx.gpr[31] = (0x08A3A7E8u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1120));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9F20u>(ctx, &aot_mem) && ctx.pc == 0x08A3A7E8u) goto L_08A3A7E8;
    return;
L_08A3A7E8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x08A3A7F4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 396u, 0x08AF9C28u>(ctx, &aot_mem) && ctx.pc == 0x08A3A7F4u) goto L_08A3A7F4;
    return;
L_08A3A7F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3A800u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A800u) goto L_08A3A800;
    return;
L_08A3A800:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A830;
      }
      goto L_08A3A814;
    }
L_08A3A814:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3A824u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 349u, 0x08A36258u>(ctx, &aot_mem) && ctx.pc == 0x08A3A824u) goto L_08A3A824;
    return;
L_08A3A824:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[31] = (0x08A3A830u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A830u) goto L_08A3A830;
    return;
L_08A3A830:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1164)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A870;
      }
      goto L_08A3A848;
    }
L_08A3A848:
    ctx.gpr[31] = (0x08A3A850u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1120));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9F20u>(ctx, &aot_mem) && ctx.pc == 0x08A3A850u) goto L_08A3A850;
    return;
L_08A3A850:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[31] = (0x08A3A85Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 396u, 0x08AF9C28u>(ctx, &aot_mem) && ctx.pc == 0x08A3A85Cu) goto L_08A3A85C;
    return;
L_08A3A85C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3A868u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A868u) goto L_08A3A868;
    return;
L_08A3A868:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A890;
      }
      goto L_08A3A870;
    }
L_08A3A870:
    ctx.gpr[31] = (0x08A3A878u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1088));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9F20u>(ctx, &aot_mem) && ctx.pc == 0x08A3A878u) goto L_08A3A878;
    return;
L_08A3A878:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    ctx.gpr[31] = (0x08A3A884u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 396u, 0x08AF9C28u>(ctx, &aot_mem) && ctx.pc == 0x08A3A884u) goto L_08A3A884;
    return;
L_08A3A884:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3A890u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A890u) goto L_08A3A890;
    return;
L_08A3A890:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A8C0;
      }
      goto L_08A3A8A4;
    }
L_08A3A8A4:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3A8B4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 349u, 0x08A36258u>(ctx, &aot_mem) && ctx.pc == 0x08A3A8B4u) goto L_08A3A8B4;
    return;
L_08A3A8B4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[31] = (0x08A3A8C0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A8C0u) goto L_08A3A8C0;
    return;
L_08A3A8C0:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2200)));
    ctx.gpr[31] = (0x08A3A8D8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 360u, 0x08A36358u>(ctx, &aot_mem) && ctx.pc == 0x08A3A8D8u) goto L_08A3A8D8;
    return;
L_08A3A8D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[31] = (0x08A3A8E8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(396));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF98A0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A8E8u) goto L_08A3A8E8;
    return;
L_08A3A8E8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (2229u << 16u);
    goto L_08A3A8F0;
L_08A3A8F0:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A93C;
      }
      goto L_08A3A910;
    }
L_08A3A910:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(624)));
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(432));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(560));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(496));
    ctx.gpr[31] = (0x08A3A93Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 436u, 0x08A0F52Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A93Cu) goto L_08A3A93C;
    return;
L_08A3A93C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A8F0;
      }
      goto L_08A3A950;
    }
L_08A3A950:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(1376));
    goto L_08A3A96C;
L_08A3A96C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A3A97Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 445u, 0x08AFA028u>(ctx, &aot_mem) && ctx.pc == 0x08A3A97Cu) goto L_08A3A97C;
    return;
L_08A3A97C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3A988u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A988u) goto L_08A3A988;
    return;
L_08A3A988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A9B4;
      }
      goto L_08A3A994;
    }
L_08A3A994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3A9A4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 445u, 0x08AFA028u>(ctx, &aot_mem) && ctx.pc == 0x08A3A9A4u) goto L_08A3A9A4;
    return;
L_08A3A9A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3A9B0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x08A3A9B0u) goto L_08A3A9B0;
    return;
L_08A3A9B0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1360), 0u);
    goto L_08A3A9B4;
L_08A3A9B4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A3A96C;
      }
      goto L_08A3A9D0;
    }
L_08A3A9D0:
    ctx.gpr[31] = (0x08A3A9D8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A3A9D8u) goto L_08A3A9D8;
    return;
L_08A3A9D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2200)));
    ctx.gpr[31] = (0x08A3A9E4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 348u, 0x08A3623Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A9E4u) goto L_08A3A9E4;
    return;
L_08A3A9E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(15918)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1446)));
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[8] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(588));
    ctx.gpr[6] = (ctx.gpr[23] + static_cast<std::uint32_t>(624));
    ctx.gpr[7] = (ctx.gpr[23] + static_cast<std::uint32_t>(628));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3AA24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 177u, 0x08A7CEFCu>(ctx, &aot_mem) && ctx.pc == 0x08A3AA24u) goto L_08A3AA24;
    return;
L_08A3AA24:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(216)));
    ctx.fpr[22] = ctx.fpr[0] / ctx.fpr[22];
    ctx.gpr[31] = (0x08A3AA34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A3AA34u) goto L_08A3AA34;
    return;
L_08A3AA34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(592)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A3AA58u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 418u, 0x08AF9DE0u>(ctx, &aot_mem) && ctx.pc == 0x08A3AA58u) goto L_08A3AA58;
    return;
L_08A3AA58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AA8C;
      }
      goto L_08A3AA60;
    }
L_08A3AA60:
    ctx.gpr[31] = (0x08A3AA68u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 418u, 0x08AF9DE0u>(ctx, &aot_mem) && ctx.pc == 0x08A3AA68u) goto L_08A3AA68;
    return;
L_08A3AA68:
    ctx.gpr[4] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3AA8C;
      }
      goto L_08A3AA74;
    }
L_08A3AA74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AA8C;
      }
      goto L_08A3AA88;
    }
L_08A3AA88:
    ctx.gpr[16] = (0u | 1u);
    goto L_08A3AA8C;
L_08A3AA8C:
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
        goto L_08A3AAA0;
    }
    goto L_08A3AA98;
L_08A3AA98:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A3AAB0;
      }
      goto L_08A3AAA0;
    }
L_08A3AAA0:
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    goto L_08A3AAB0;
L_08A3AAB0:
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
        goto L_08A3AAC0;
    }
    goto L_08A3AAB8;
L_08A3AAB8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2176), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A3AAD8;
      }
      goto L_08A3AAC0;
    }
L_08A3AAC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3AAD8;
L_08A3AAD8:
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
        goto L_08A3AAE8;
    }
    goto L_08A3AAE0;
L_08A3AAE0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A3AAF8;
      }
      goto L_08A3AAE8;
    }
L_08A3AAE8:
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08A3AAF8;
L_08A3AAF8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (16384u << 16u);
      if (branch_taken) {
          goto L_08A3AB0C;
      }
      goto L_08A3AB00;
    }
L_08A3AB00:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2216), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A3AB1C;
      }
      goto L_08A3AB0C;
    }
L_08A3AB0C:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3AB1C;
L_08A3AB1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1446)));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1445), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1447), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A3AB38u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1446), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 356u, 0x08A36300u>(ctx, &aot_mem) && ctx.pc == 0x08A3AB38u) goto L_08A3AB38;
    return;
L_08A3AB38:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3AB60;
      }
      goto L_08A3AB48;
    }
L_08A3AB48:
    ctx.gpr[31] = (0x08A3AB50u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 356u, 0x08A36300u>(ctx, &aot_mem) && ctx.pc == 0x08A3AB50u) goto L_08A3AB50;
    return;
L_08A3AB50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(620)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(620), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3AB64;
      }
      goto L_08A3AB60;
    }
L_08A3AB60:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(620), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08A3AB64;
L_08A3AB64:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1156));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(1024));
    goto L_08A3AB80;
L_08A3AB80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10792)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3ABA4;
      }
      goto L_08A3AB9C;
    }
L_08A3AB9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1184), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08A3ABCC;
      }
      goto L_08A3ABA4;
    }
L_08A3ABA4:
    ctx.gpr[31] = (0x08A3ABACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A3ABACu) goto L_08A3ABAC;
    return;
L_08A3ABAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1156), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3ABC8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF98A0u>(ctx, &aot_mem) && ctx.pc == 0x08A3ABC8u) goto L_08A3ABC8;
    return;
L_08A3ABC8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1184), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A3ABCC;
L_08A3ABCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1184)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3AC60;
      }
      goto L_08A3ABE0;
    }
L_08A3ABE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1445)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1445), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A3AC00;
      }
      goto L_08A3ABF4;
    }
L_08A3ABF4:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3AC08;
      }
      goto L_08A3AC00;
    }
L_08A3AC00:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1446), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A3AC08;
L_08A3AC08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1445)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3AC40;
      }
      goto L_08A3AC18;
    }
L_08A3AC18:
    ctx.gpr[31] = (0x08A3AC20u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9F20u>(ctx, &aot_mem) && ctx.pc == 0x08A3AC20u) goto L_08A3AC20;
    return;
L_08A3AC20:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3AC2Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 396u, 0x08AF9C28u>(ctx, &aot_mem) && ctx.pc == 0x08A3AC2Cu) goto L_08A3AC2C;
    return;
L_08A3AC2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2160)));
    ctx.gpr[31] = (0x08A3AC38u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3AC38u) goto L_08A3AC38;
    return;
L_08A3AC38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AC60;
      }
      goto L_08A3AC40;
    }
L_08A3AC40:
    ctx.gpr[31] = (0x08A3AC48u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9F20u>(ctx, &aot_mem) && ctx.pc == 0x08A3AC48u) goto L_08A3AC48;
    return;
L_08A3AC48:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A3AC54u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 396u, 0x08AF9C28u>(ctx, &aot_mem) && ctx.pc == 0x08A3AC54u) goto L_08A3AC54;
    return;
L_08A3AC54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2160)));
    ctx.gpr[31] = (0x08A3AC60u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3AC60u) goto L_08A3AC60;
    return;
L_08A3AC60:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A3AB80;
      }
      goto L_08A3AC74;
    }
L_08A3AC74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1445)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A3ACF0;
      }
      goto L_08A3AC80;
    }
L_08A3AC80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1445)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(976));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08A3AC9Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 354u, 0x08A362D4u>(ctx, &aot_mem) && ctx.pc == 0x08A3AC9Cu) goto L_08A3AC9C;
    return;
L_08A3AC9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2160)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3ACACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3ACACu) goto L_08A3ACAC;
    return;
L_08A3ACAC:
    ctx.gpr[31] = (0x08A3ACB4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF990Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3ACB4u) goto L_08A3ACB4;
    return;
L_08A3ACB4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3ACC0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 348u, 0x08A3623Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3ACC0u) goto L_08A3ACC0;
    return;
L_08A3ACC0:
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3ACE8;
      }
      goto L_08A3ACD8;
    }
L_08A3ACD8:
    ctx.gpr[5] = (49024u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3ACE8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 363u, 0x08A3639Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3ACE8u) goto L_08A3ACE8;
    return;
L_08A3ACE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AD10;
      }
      goto L_08A3ACF0;
    }
L_08A3ACF0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08A3AD04u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 357u, 0x08A3630Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3AD04u) goto L_08A3AD04;
    return;
L_08A3AD04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2160)));
    ctx.gpr[31] = (0x08A3AD10u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3AD10u) goto L_08A3AD10;
    return;
L_08A3AD10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1156)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_08A3AD38;
      }
      goto L_08A3AD28;
    }
L_08A3AD28:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[23] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2204), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3AD40;
      }
      goto L_08A3AD38;
    }
L_08A3AD38:
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2204), ctx.gpr[4]);
    goto L_08A3AD40;
L_08A3AD40:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2188), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3AD58u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 603u, 0x08B069CCu>(ctx, &aot_mem) && ctx.pc == 0x08A3AD58u) goto L_08A3AD58;
    return;
L_08A3AD58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A3AD6Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 603u, 0x08B069CCu>(ctx, &aot_mem) && ctx.pc == 0x08A3AD6Cu) goto L_08A3AD6C;
    return;
L_08A3AD6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[31] = (0x08A3AD9Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 346u, 0x08A361F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3AD9Cu) goto L_08A3AD9C;
    return;
L_08A3AD9C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.gpr[31] = (0x08A3ADA8u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3ADA8u) goto L_08A3ADA8;
    return;
L_08A3ADA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1164)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A3ADCC;
      }
      goto L_08A3ADC0;
    }
L_08A3ADC0:
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 64u);
      if (branch_taken) {
          goto L_08A3ADD0;
      }
      goto L_08A3ADCC;
    }
L_08A3ADCC:
    ctx.gpr[18] = (0u | 96u);
    goto L_08A3ADD0;
L_08A3ADD0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2184), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3ADE4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 603u, 0x08B069CCu>(ctx, &aot_mem) && ctx.pc == 0x08A3ADE4u) goto L_08A3ADE4;
    return;
L_08A3ADE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A3ADF8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 603u, 0x08B069CCu>(ctx, &aot_mem) && ctx.pc == 0x08A3ADF8u) goto L_08A3ADF8;
    return;
L_08A3ADF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1256)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[31] = (0x08A3AE28u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 346u, 0x08A361F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3AE28u) goto L_08A3AE28;
    return;
L_08A3AE28:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.gpr[31] = (0x08A3AE34u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3AE34u) goto L_08A3AE34;
    return;
L_08A3AE34:
    ctx.gpr[31] = (0x08A3AE3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 297u, 0x08A89F4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3AE3Cu) goto L_08A3AE3C;
    return;
L_08A3AE3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1284)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10804)));
    ctx.gpr[4] = (16000u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A3AE64u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 418u, 0x08AF9DE0u>(ctx, &aot_mem) && ctx.pc == 0x08A3AE64u) goto L_08A3AE64;
    return;
L_08A3AE64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AED4;
      }
      goto L_08A3AE6C;
    }
L_08A3AE6C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AED4;
      }
      goto L_08A3AE7C;
    }
L_08A3AE7C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AED4;
      }
      goto L_08A3AE8C;
    }
L_08A3AE8C:
    ctx.gpr[4] = (16050u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1304)));
    ctx.gpr[4] = (ctx.gpr[4] | 47299u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2196), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A3B12C;
      }
      goto L_08A3AEAC;
    }
L_08A3AEAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2196), ctx.gpr[18]);
    ctx.gpr[31] = (0x08A3AEB8u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1304)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A3AEB8u) goto L_08A3AEB8;
    return;
L_08A3AEB8:
    ctx.gpr[4] = (15574u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 30544u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3B12C;
      }
      goto L_08A3AED4;
    }
L_08A3AED4:
    ctx.gpr[31] = (0x08A3AEDCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 356u, 0x08A36300u>(ctx, &aot_mem) && ctx.pc == 0x08A3AEDCu) goto L_08A3AEDC;
    return;
L_08A3AEDC:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3AF48;
      }
      goto L_08A3AEEC;
    }
L_08A3AEEC:
    ctx.gpr[31] = (0x08A3AEF4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(116)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 356u, 0x08A36300u>(ctx, &aot_mem) && ctx.pc == 0x08A3AEF4u) goto L_08A3AEF4;
    return;
L_08A3AEF4:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3AF48;
      }
      goto L_08A3AF04;
    }
L_08A3AF04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3AF48;
      }
      goto L_08A3AF18;
    }
L_08A3AF18:
    ctx.gpr[4] = (16245u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2196), ctx.gpr[18]);
    ctx.gpr[31] = (0x08A3AF2Cu);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A3AF2Cu) goto L_08A3AF2C;
    return;
L_08A3AF2C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A3AF38u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 394u, 0x08AF9BECu>(ctx, &aot_mem) && ctx.pc == 0x08A3AF38u) goto L_08A3AF38;
    return;
L_08A3AF38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1304)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3B12C;
      }
      goto L_08A3AF48;
    }
L_08A3AF48:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2196), ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3B104;
      }
      goto L_08A3AF60;
    }
L_08A3AF60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1184)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2196), ctx.gpr[18]);
        goto L_08A3AF8C;
    }
    goto L_08A3AF74;
L_08A3AF74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1188)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2196), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A3B104;
      }
      goto L_08A3AF88;
    }
L_08A3AF88:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2196), ctx.gpr[18]);
    goto L_08A3AF8C;
L_08A3AF8C:
    ctx.gpr[31] = (0x08A3AF94u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 418u, 0x08AF9DE0u>(ctx, &aot_mem) && ctx.pc == 0x08A3AF94u) goto L_08A3AF94;
    return;
L_08A3AF94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B104;
      }
      goto L_08A3AF9C;
    }
L_08A3AF9C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1248));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2196), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3AFB0u);
    ctx.gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 433u, 0x08AF9F28u>(ctx, &aot_mem) && ctx.pc == 0x08A3AFB0u) goto L_08A3AFB0;
    return;
L_08A3AFB0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3AFBCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 434u, 0x08AF9F30u>(ctx, &aot_mem) && ctx.pc == 0x08A3AFBCu) goto L_08A3AFBC;
    return;
L_08A3AFBC:
    ctx.gpr[31] = (0x08A3AFC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 199u, 0x089257E4u>(ctx, &aot_mem) && ctx.pc == 0x08A3AFC4u) goto L_08A3AFC4;
    return;
L_08A3AFC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (ctx.gpr[23] + ctx.gpr[18]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1024));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x08A3AFE8u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9F38u>(ctx, &aot_mem) && ctx.pc == 0x08A3AFE8u) goto L_08A3AFE8;
    return;
L_08A3AFE8:
    ctx.gpr[31] = (0x08A3AFF0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x08925840u>(ctx, &aot_mem) && ctx.pc == 0x08A3AFF0u) goto L_08A3AFF0;
    return;
L_08A3AFF0:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1240));
      if (branch_taken) {
          goto L_08A3B018;
      }
      goto L_08A3AFFC;
    }
L_08A3AFFC:
    ctx.gpr[31] = (0x08A3B004u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9F38u>(ctx, &aot_mem) && ctx.pc == 0x08A3B004u) goto L_08A3B004;
    return;
L_08A3B004:
    ctx.gpr[31] = (0x08A3B00Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x08925840u>(ctx, &aot_mem) && ctx.pc == 0x08A3B00Cu) goto L_08A3B00C;
    return;
L_08A3B00C:
    ctx.gpr[4] = (0u | 4u);
    if (ctx.gpr[2] != ctx.gpr[4]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
        goto L_08A3B028;
    }
    goto L_08A3B018;
L_08A3B018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    goto L_08A3B028;
L_08A3B028:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1236), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1236));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3B044u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 337u, 0x08AF9854u>(ctx, &aot_mem) && ctx.pc == 0x08A3B044u) goto L_08A3B044;
    return;
L_08A3B044:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A3B050u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 385u, 0x08AF9B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B050u) goto L_08A3B050;
    return;
L_08A3B050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (ctx.gpr[5] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3B0A8;
      }
      goto L_08A3B08C;
    }
L_08A3B08C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1308)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3B0D8;
      }
      goto L_08A3B0A8;
    }
L_08A3B0A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3B0EC;
      }
      goto L_08A3B0C4;
    }
L_08A3B0C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1308)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3B0EC;
      }
      goto L_08A3B0D8;
    }
L_08A3B0D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1232)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3B0EC;
L_08A3B0EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1232));
    ctx.gpr[31] = (0x08A3B0FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 337u, 0x08AF9854u>(ctx, &aot_mem) && ctx.pc == 0x08A3B0FCu) goto L_08A3B0FC;
    return;
L_08A3B0FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A3B108;
      }
      goto L_08A3B104;
    }
L_08A3B104:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08A3B108;
L_08A3B108:
    ctx.gpr[31] = (0x08A3B110u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 418u, 0x08AF9DE0u>(ctx, &aot_mem) && ctx.pc == 0x08A3B110u) goto L_08A3B110;
    return;
L_08A3B110:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
        goto L_08A3B120;
    }
    goto L_08A3B118;
L_08A3B118:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
    goto L_08A3B120;
L_08A3B120:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1232)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3B12C;
L_08A3B12C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2200)));
    ctx.gpr[31] = (0x08A3B138u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 358u, 0x08A36320u>(ctx, &aot_mem) && ctx.pc == 0x08A3B138u) goto L_08A3B138;
    return;
L_08A3B138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2180), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3B48C;
      }
      goto L_08A3B154;
    }
L_08A3B154:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1184)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08A3B180;
    }
    goto L_08A3B168;
L_08A3B168:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1188)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16243u << 16u);
      if (branch_taken) {
          goto L_08A3B46C;
      }
      goto L_08A3B17C;
    }
L_08A3B17C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A3B180;
L_08A3B180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2204)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1192)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2212)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    ctx.gpr[16] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2232)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1328));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1296));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1024));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1344));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[30] = (ctx.gpr[23] + static_cast<std::uint32_t>(1224));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[21] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A3B1DC;
      }
      goto L_08A3B1C0;
    }
L_08A3B1C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1196)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A3B1DC;
      }
      goto L_08A3B1D4;
    }
L_08A3B1D4:
    ctx.gpr[22] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A3B1DC;
L_08A3B1DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2248), ctx.gpr[20]);
    ctx.gpr[31] = (0x08A3B1E8u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1304)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 383u, 0x08AF9AC4u>(ctx, &aot_mem) && ctx.pc == 0x08A3B1E8u) goto L_08A3B1E8;
    return;
L_08A3B1E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1304)));
    ctx.gpr[31] = (0x08A3B1F4u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 384u, 0x08AF9AE8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B1F4u) goto L_08A3B1F4;
    return;
L_08A3B1F4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A3B208u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 357u, 0x08A3630Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B208u) goto L_08A3B208;
    return;
L_08A3B208:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1280));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3B21Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 346u, 0x08A361F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3B21Cu) goto L_08A3B21C;
    return;
L_08A3B21C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3B228u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B228u) goto L_08A3B228;
    return;
L_08A3B228:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1312));
    ctx.gpr[31] = (0x08A3B234u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9F20u>(ctx, &aot_mem) && ctx.pc == 0x08A3B234u) goto L_08A3B234;
    return;
L_08A3B234:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3B240u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 396u, 0x08AF9C28u>(ctx, &aot_mem) && ctx.pc == 0x08A3B240u) goto L_08A3B240;
    return;
L_08A3B240:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3B24Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 348u, 0x08A3623Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B24Cu) goto L_08A3B24C;
    return;
L_08A3B24C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A3B258u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9F20u>(ctx, &aot_mem) && ctx.pc == 0x08A3B258u) goto L_08A3B258;
    return;
L_08A3B258:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3B264u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 396u, 0x08AF9C28u>(ctx, &aot_mem) && ctx.pc == 0x08A3B264u) goto L_08A3B264;
    return;
L_08A3B264:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A3B274u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A3629Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B274u) goto L_08A3B274;
    return;
L_08A3B274:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3B280u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x08A3B280u) goto L_08A3B280;
    return;
L_08A3B280:
    ctx.gpr[31] = (0x08A3B288u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 359u, 0x08A36330u>(ctx, &aot_mem) && ctx.pc == 0x08A3B288u) goto L_08A3B288;
    return;
L_08A3B288:
    ctx.gpr[31] = (0x08A3B290u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9F20u>(ctx, &aot_mem) && ctx.pc == 0x08A3B290u) goto L_08A3B290;
    return;
L_08A3B290:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3B29Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 396u, 0x08AF9C28u>(ctx, &aot_mem) && ctx.pc == 0x08A3B29Cu) goto L_08A3B29C;
    return;
L_08A3B29C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3B2ACu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 345u, 0x08A361DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3B2ACu) goto L_08A3B2AC;
    return;
L_08A3B2AC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A3B2B8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B2B8u) goto L_08A3B2B8;
    return;
L_08A3B2B8:
    ctx.gpr[31] = (0x08A3B2C0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 359u, 0x08A36330u>(ctx, &aot_mem) && ctx.pc == 0x08A3B2C0u) goto L_08A3B2C0;
    return;
L_08A3B2C0:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-29632), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3B2D0u);
    ctx.gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 433u, 0x08AF9F28u>(ctx, &aot_mem) && ctx.pc == 0x08A3B2D0u) goto L_08A3B2D0;
    return;
L_08A3B2D0:
    ctx.gpr[31] = (0x08A3B2D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 199u, 0x089257E4u>(ctx, &aot_mem) && ctx.pc == 0x08A3B2D8u) goto L_08A3B2D8;
    return;
L_08A3B2D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1348)));
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2248)));
      if (branch_taken) {
          goto L_08A3B348;
      }
      goto L_08A3B2F4;
    }
L_08A3B2F4:
    ctx.gpr[31] = (0x08A3B2FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9F38u>(ctx, &aot_mem) && ctx.pc == 0x08A3B2FCu) goto L_08A3B2FC;
    return;
L_08A3B2FC:
    ctx.gpr[31] = (0x08A3B304u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x08925840u>(ctx, &aot_mem) && ctx.pc == 0x08A3B304u) goto L_08A3B304;
    return;
L_08A3B304:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3B348;
      }
      goto L_08A3B310;
    }
L_08A3B310:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_08A3B334;
    }
    goto L_08A3B318;
L_08A3B318:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B33C;
      }
      goto L_08A3B324;
    }
L_08A3B324:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3B348;
      }
      goto L_08A3B334;
    }
L_08A3B334:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B348;
      }
      goto L_08A3B33C;
    }
L_08A3B33C:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A3B348;
L_08A3B348:
    ctx.gpr[31] = (0x08A3B350u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 419u, 0x08AF9DF0u>(ctx, &aot_mem) && ctx.pc == 0x08A3B350u) goto L_08A3B350;
    return;
L_08A3B350:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B36C;
      }
      goto L_08A3B358;
    }
L_08A3B358:
    ctx.gpr[31] = (0x08A3B360u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9F38u>(ctx, &aot_mem) && ctx.pc == 0x08A3B360u) goto L_08A3B360;
    return;
L_08A3B360:
    ctx.gpr[31] = (0x08A3B368u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 212u, 0x089258A4u>(ctx, &aot_mem) && ctx.pc == 0x08A3B368u) goto L_08A3B368;
    return;
L_08A3B368:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08A3B36C;
L_08A3B36C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3B3AC;
      }
      goto L_08A3B37C;
    }
L_08A3B37C:
    ctx.gpr[31] = (0x08A3B384u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A3B384u) goto L_08A3B384;
    return;
L_08A3B384:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10708)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10712)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A3B39Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B39Cu) goto L_08A3B39C;
    return;
L_08A3B39C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A3B3A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B3A8u) goto L_08A3B3A8;
    return;
L_08A3B3A8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A3B3AC;
L_08A3B3AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1452)));
    ctx.gpr[16] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29628), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3B3CCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 445u, 0x08AFA028u>(ctx, &aot_mem) && ctx.pc == 0x08A3B3CCu) goto L_08A3B3CC;
    return;
L_08A3B3CC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3B3D8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B3D8u) goto L_08A3B3D8;
    return;
L_08A3B3D8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2192)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-29632)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1016)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2208)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A3B424u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 345u, 0x088A6438u>(ctx, &aot_mem) && ctx.pc == 0x08A3B424u) goto L_08A3B424;
    return;
L_08A3B424:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2236)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A3B458;
      }
      goto L_08A3B430;
    }
L_08A3B430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29628)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2224)));
      if (branch_taken) {
          goto L_08A3B450;
      }
      goto L_08A3B440;
    }
L_08A3B440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29628)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A3B458;
      }
      goto L_08A3B450;
    }
L_08A3B450:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29628), 0u);
    goto L_08A3B458;
L_08A3B458:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2224)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3B48C;
      }
      goto L_08A3B46C;
    }
L_08A3B46C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1224)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1216)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A3B48C;
L_08A3B48C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1192)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A3B4B4;
      }
      goto L_08A3B4A0;
    }
L_08A3B4A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1196)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A3B8D8;
      }
      goto L_08A3B4B4;
    }
L_08A3B4B4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1392));
    ctx.gpr[31] = (0x08A3B4C4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A3B4C4u) goto L_08A3B4C4;
    return;
L_08A3B4C4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3B4D0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 358u, 0x08A36320u>(ctx, &aot_mem) && ctx.pc == 0x08A3B4D0u) goto L_08A3B4D0;
    return;
L_08A3B4D0:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1408));
    ctx.gpr[31] = (0x08A3B4DCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A3B4DCu) goto L_08A3B4DC;
    return;
L_08A3B4DC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A3B4E8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 358u, 0x08A36320u>(ctx, &aot_mem) && ctx.pc == 0x08A3B4E8u) goto L_08A3B4E8;
    return;
L_08A3B4E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1360));
    ctx.gpr[16] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1024));
    ctx.gpr[31] = (0x08A3B500u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9F20u>(ctx, &aot_mem) && ctx.pc == 0x08A3B500u) goto L_08A3B500;
    return;
L_08A3B500:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3B50Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 396u, 0x08AF9C28u>(ctx, &aot_mem) && ctx.pc == 0x08A3B50Cu) goto L_08A3B50C;
    return;
L_08A3B50C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3B518u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 348u, 0x08A3623Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B518u) goto L_08A3B518;
    return;
L_08A3B518:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1376));
    ctx.gpr[31] = (0x08A3B528u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9F20u>(ctx, &aot_mem) && ctx.pc == 0x08A3B528u) goto L_08A3B528;
    return;
L_08A3B528:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3B534u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 396u, 0x08AF9C28u>(ctx, &aot_mem) && ctx.pc == 0x08A3B534u) goto L_08A3B534;
    return;
L_08A3B534:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A3B544u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A3629Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B544u) goto L_08A3B544;
    return;
L_08A3B544:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3B550u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x08A3B550u) goto L_08A3B550;
    return;
L_08A3B550:
    ctx.gpr[31] = (0x08A3B558u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 359u, 0x08A36330u>(ctx, &aot_mem) && ctx.pc == 0x08A3B558u) goto L_08A3B558;
    return;
L_08A3B558:
    ctx.gpr[31] = (0x08A3B560u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9F20u>(ctx, &aot_mem) && ctx.pc == 0x08A3B560u) goto L_08A3B560;
    return;
L_08A3B560:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3B56Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 396u, 0x08AF9C28u>(ctx, &aot_mem) && ctx.pc == 0x08A3B56Cu) goto L_08A3B56C;
    return;
L_08A3B56C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3B57Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 345u, 0x08A361DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3B57Cu) goto L_08A3B57C;
    return;
L_08A3B57C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A3B588u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B588u) goto L_08A3B588;
    return;
L_08A3B588:
    ctx.gpr[31] = (0x08A3B590u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 359u, 0x08A36330u>(ctx, &aot_mem) && ctx.pc == 0x08A3B590u) goto L_08A3B590;
    return;
L_08A3B590:
    ctx.gpr[31] = (0x08A3B598u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 453u, 0x08AFA13Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B598u) goto L_08A3B598;
    return;
L_08A3B598:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[20] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A3B5DC;
      }
      goto L_08A3B5A4;
    }
L_08A3B5A4:
    ctx.gpr[31] = (0x08A3B5ACu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B5ACu) goto L_08A3B5AC;
    return;
L_08A3B5AC:
    ctx.gpr[31] = (0x08A3B5B4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 604u, 0x08B069DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3B5B4u) goto L_08A3B5B4;
    return;
L_08A3B5B4:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3B604;
      }
      goto L_08A3B5C0;
    }
L_08A3B5C0:
    ctx.gpr[31] = (0x08A3B5C8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B5C8u) goto L_08A3B5C8;
    return;
L_08A3B5C8:
    ctx.gpr[31] = (0x08A3B5D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 604u, 0x08B069DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3B5D0u) goto L_08A3B5D0;
    return;
L_08A3B5D0:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3B604;
      }
      goto L_08A3B5DC;
    }
L_08A3B5DC:
    ctx.gpr[31] = (0x08A3B5E4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 453u, 0x08AFA13Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B5E4u) goto L_08A3B5E4;
    return;
L_08A3B5E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B620;
      }
      goto L_08A3B5EC;
    }
L_08A3B5EC:
    ctx.gpr[31] = (0x08A3B5F4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 379u, 0x08AF9A74u>(ctx, &aot_mem) && ctx.pc == 0x08A3B5F4u) goto L_08A3B5F4;
    return;
L_08A3B5F4:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3B620;
      }
      goto L_08A3B604;
    }
L_08A3B604:
    ctx.gpr[4] = (18076u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2176)));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1344), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_08A3B710;
      }
      goto L_08A3B620;
    }
L_08A3B620:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2176)));
      if (branch_taken) {
          goto L_08A3B684;
      }
      goto L_08A3B62C;
    }
L_08A3B62C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (47940u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1424));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3B65Cu);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A3B65Cu) goto L_08A3B65C;
    return;
L_08A3B65C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3B66Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A3629Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B66Cu) goto L_08A3B66C;
    return;
L_08A3B66C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[31] = (0x08A3B67Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AF9F84u>(ctx, &aot_mem) && ctx.pc == 0x08A3B67Cu) goto L_08A3B67C;
    return;
L_08A3B67C:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_08A3B710;
      }
      goto L_08A3B684;
    }
L_08A3B684:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2232)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1344)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_08A3B710;
      }
      goto L_08A3B69C;
    }
L_08A3B69C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(588)));
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3B710;
      }
      goto L_08A3B6B8;
    }
L_08A3B6B8:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1344)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[22];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (47940u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1440));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A3B6F0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 349u, 0x08AF98FCu>(ctx, &aot_mem) && ctx.pc == 0x08A3B6F0u) goto L_08A3B6F0;
    return;
L_08A3B6F0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3B700u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A3629Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B700u) goto L_08A3B700;
    return;
L_08A3B700:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[31] = (0x08A3B710u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AF9F84u>(ctx, &aot_mem) && ctx.pc == 0x08A3B710u) goto L_08A3B710;
    return;
L_08A3B710:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-29632)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3B73C;
      }
      goto L_08A3B724;
    }
L_08A3B724:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2232)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3B73C;
      }
      goto L_08A3B738;
    }
L_08A3B738:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2232), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08A3B73C;
L_08A3B73C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2224)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-29632), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A3B750u);
    ctx.gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 433u, 0x08AF9F28u>(ctx, &aot_mem) && ctx.pc == 0x08A3B750u) goto L_08A3B750;
    return;
L_08A3B750:
    ctx.gpr[31] = (0x08A3B758u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 199u, 0x089257E4u>(ctx, &aot_mem) && ctx.pc == 0x08A3B758u) goto L_08A3B758;
    return;
L_08A3B758:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1348)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A3B7C4;
      }
      goto L_08A3B770;
    }
L_08A3B770:
    ctx.gpr[31] = (0x08A3B778u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9F38u>(ctx, &aot_mem) && ctx.pc == 0x08A3B778u) goto L_08A3B778;
    return;
L_08A3B778:
    ctx.gpr[31] = (0x08A3B780u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x08925840u>(ctx, &aot_mem) && ctx.pc == 0x08A3B780u) goto L_08A3B780;
    return;
L_08A3B780:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3B7C4;
      }
      goto L_08A3B78C;
    }
L_08A3B78C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_08A3B7B0;
    }
    goto L_08A3B794;
L_08A3B794:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B7B8;
      }
      goto L_08A3B7A0;
    }
L_08A3B7A0:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3B7C4;
      }
      goto L_08A3B7B0;
    }
L_08A3B7B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B7C4;
      }
      goto L_08A3B7B8;
    }
L_08A3B7B8:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A3B7C4;
L_08A3B7C4:
    ctx.gpr[31] = (0x08A3B7CCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 419u, 0x08AF9DF0u>(ctx, &aot_mem) && ctx.pc == 0x08A3B7CCu) goto L_08A3B7CC;
    return;
L_08A3B7CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B7E8;
      }
      goto L_08A3B7D4;
    }
L_08A3B7D4:
    ctx.gpr[31] = (0x08A3B7DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9F38u>(ctx, &aot_mem) && ctx.pc == 0x08A3B7DCu) goto L_08A3B7DC;
    return;
L_08A3B7DC:
    ctx.gpr[31] = (0x08A3B7E4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 212u, 0x089258A4u>(ctx, &aot_mem) && ctx.pc == 0x08A3B7E4u) goto L_08A3B7E4;
    return;
L_08A3B7E4:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08A3B7E8;
L_08A3B7E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1017)));
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A3B828;
      }
      goto L_08A3B7F8;
    }
L_08A3B7F8:
    ctx.gpr[31] = (0x08A3B800u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A3B800u) goto L_08A3B800;
    return;
L_08A3B800:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10708)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10712)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A3B818u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B818u) goto L_08A3B818;
    return;
L_08A3B818:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A3B824u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B824u) goto L_08A3B824;
    return;
L_08A3B824:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A3B828;
L_08A3B828:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2208)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1456)));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3B848u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 445u, 0x08AFA028u>(ctx, &aot_mem) && ctx.pc == 0x08A3B848u) goto L_08A3B848;
    return;
L_08A3B848:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3B854u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B854u) goto L_08A3B854;
    return;
L_08A3B854:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2216)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-29632)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1017)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[3] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[11] = (ctx.gpr[23] + static_cast<std::uint32_t>(1228));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08A3B8A0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 345u, 0x088A6438u>(ctx, &aot_mem) && ctx.pc == 0x08A3B8A0u) goto L_08A3B8A0;
    return;
L_08A3B8A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2236)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B8D0;
      }
      goto L_08A3B8AC;
    }
L_08A3B8AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2224)));
      if (branch_taken) {
          goto L_08A3B8C8;
      }
      goto L_08A3B8B8;
    }
L_08A3B8B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A3B8D0;
      }
      goto L_08A3B8C8;
    }
L_08A3B8C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A3B8D0;
L_08A3B8D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B988;
      }
      goto L_08A3B8D8;
    }
L_08A3B8D8:
    ctx.gpr[31] = (0x08A3B8E0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 453u, 0x08AFA13Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B8E0u) goto L_08A3B8E0;
    return;
L_08A3B8E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2208)));
      if (branch_taken) {
          goto L_08A3B8F4;
      }
      goto L_08A3B8E8;
    }
L_08A3B8E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1228), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08A3B978;
      }
      goto L_08A3B8F4;
    }
L_08A3B8F4:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[30])) && ctx.fpr[22] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A3B978;
      }
      goto L_08A3B904;
    }
L_08A3B904:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A3B948;
      }
      goto L_08A3B914;
    }
L_08A3B914:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1228)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_08A3B978;
      }
      goto L_08A3B930;
    }
L_08A3B930:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1228)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3B978;
      }
      goto L_08A3B948;
    }
L_08A3B948:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1228)));
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_08A3B978;
      }
      goto L_08A3B964;
    }
L_08A3B964:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1228)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3B978;
L_08A3B978:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1220)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1228)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3B988;
L_08A3B988:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B9D8;
      }
      goto L_08A3B994;
    }
L_08A3B994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1456)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3B9D8;
      }
      goto L_08A3B9A4;
    }
L_08A3B9A4:
    ctx.gpr[31] = (0x08A3B9ACu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1344)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A3B9ACu) goto L_08A3B9AC;
    return;
L_08A3B9AC:
    ctx.gpr[4] = (15107u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3BA0C;
      }
      goto L_08A3B9D0;
    }
L_08A3B9D0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1344), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08A3BA0C;
      }
      goto L_08A3B9D8;
    }
L_08A3B9D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1344)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3BA0C;
      }
      goto L_08A3B9EC;
    }
L_08A3B9EC:
    ctx.gpr[31] = (0x08A3B9F4u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1344)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A3B9F4u) goto L_08A3B9F4;
    return;
L_08A3B9F4:
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3BA0C;
L_08A3BA0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2180)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BD38;
      }
      goto L_08A3BA18;
    }
L_08A3BA18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1184)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3BA40;
      }
      goto L_08A3BA2C;
    }
L_08A3BA2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1188)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16243u << 16u);
      if (branch_taken) {
          goto L_08A3BD18;
      }
      goto L_08A3BA40;
    }
L_08A3BA40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2204)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1192)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2212)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2232)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    ctx.gpr[16] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[20] = (0u | 0u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1024));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[30] = (ctx.gpr[23] + static_cast<std::uint32_t>(1224));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1504));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1472));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1520));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[22] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A3BA98;
      }
      goto L_08A3BA80;
    }
L_08A3BA80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1196)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3BA98;
      }
      goto L_08A3BA94;
    }
L_08A3BA94:
    ctx.gpr[20] = (0u | 2u);
    goto L_08A3BA98;
L_08A3BA98:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2256), ctx.gpr[20]);
    ctx.gpr[31] = (0x08A3BAA4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1304)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 383u, 0x08AF9AC4u>(ctx, &aot_mem) && ctx.pc == 0x08A3BAA4u) goto L_08A3BAA4;
    return;
L_08A3BAA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1304)));
    ctx.gpr[31] = (0x08A3BAB0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 384u, 0x08AF9AE8u>(ctx, &aot_mem) && ctx.pc == 0x08A3BAB0u) goto L_08A3BAB0;
    return;
L_08A3BAB0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A3BAC4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 357u, 0x08A3630Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BAC4u) goto L_08A3BAC4;
    return;
L_08A3BAC4:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1456));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3BAD8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 346u, 0x08A361F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3BAD8u) goto L_08A3BAD8;
    return;
L_08A3BAD8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3BAE4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BAE4u) goto L_08A3BAE4;
    return;
L_08A3BAE4:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1488));
    ctx.gpr[31] = (0x08A3BAF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9F20u>(ctx, &aot_mem) && ctx.pc == 0x08A3BAF0u) goto L_08A3BAF0;
    return;
L_08A3BAF0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3BAFCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 396u, 0x08AF9C28u>(ctx, &aot_mem) && ctx.pc == 0x08A3BAFCu) goto L_08A3BAFC;
    return;
L_08A3BAFC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3BB08u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 348u, 0x08A3623Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BB08u) goto L_08A3BB08;
    return;
L_08A3BB08:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A3BB14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9F20u>(ctx, &aot_mem) && ctx.pc == 0x08A3BB14u) goto L_08A3BB14;
    return;
L_08A3BB14:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3BB20u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 396u, 0x08AF9C28u>(ctx, &aot_mem) && ctx.pc == 0x08A3BB20u) goto L_08A3BB20;
    return;
L_08A3BB20:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A3BB30u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A3629Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BB30u) goto L_08A3BB30;
    return;
L_08A3BB30:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3BB3Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x08A3BB3Cu) goto L_08A3BB3C;
    return;
L_08A3BB3C:
    ctx.gpr[31] = (0x08A3BB44u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 359u, 0x08A36330u>(ctx, &aot_mem) && ctx.pc == 0x08A3BB44u) goto L_08A3BB44;
    return;
L_08A3BB44:
    ctx.gpr[31] = (0x08A3BB4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9F20u>(ctx, &aot_mem) && ctx.pc == 0x08A3BB4Cu) goto L_08A3BB4C;
    return;
L_08A3BB4C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3BB58u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 396u, 0x08AF9C28u>(ctx, &aot_mem) && ctx.pc == 0x08A3BB58u) goto L_08A3BB58;
    return;
L_08A3BB58:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3BB68u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 345u, 0x08A361DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3BB68u) goto L_08A3BB68;
    return;
L_08A3BB68:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A3BB74u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BB74u) goto L_08A3BB74;
    return;
L_08A3BB74:
    ctx.gpr[31] = (0x08A3BB7Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 359u, 0x08A36330u>(ctx, &aot_mem) && ctx.pc == 0x08A3BB7Cu) goto L_08A3BB7C;
    return;
L_08A3BB7C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-29632), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3BB8Cu);
    ctx.gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 433u, 0x08AF9F28u>(ctx, &aot_mem) && ctx.pc == 0x08A3BB8Cu) goto L_08A3BB8C;
    return;
L_08A3BB8C:
    ctx.gpr[31] = (0x08A3BB94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 199u, 0x089257E4u>(ctx, &aot_mem) && ctx.pc == 0x08A3BB94u) goto L_08A3BB94;
    return;
L_08A3BB94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1348)));
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2256)));
      if (branch_taken) {
          goto L_08A3BC04;
      }
      goto L_08A3BBB0;
    }
L_08A3BBB0:
    ctx.gpr[31] = (0x08A3BBB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9F38u>(ctx, &aot_mem) && ctx.pc == 0x08A3BBB8u) goto L_08A3BBB8;
    return;
L_08A3BBB8:
    ctx.gpr[31] = (0x08A3BBC0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x08925840u>(ctx, &aot_mem) && ctx.pc == 0x08A3BBC0u) goto L_08A3BBC0;
    return;
L_08A3BBC0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3BC04;
      }
      goto L_08A3BBCC;
    }
L_08A3BBCC:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_08A3BBF0;
    }
    goto L_08A3BBD4;
L_08A3BBD4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BBF8;
      }
      goto L_08A3BBE0;
    }
L_08A3BBE0:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3BC04;
      }
      goto L_08A3BBF0;
    }
L_08A3BBF0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BC04;
      }
      goto L_08A3BBF8;
    }
L_08A3BBF8:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A3BC04;
L_08A3BC04:
    ctx.gpr[31] = (0x08A3BC0Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 419u, 0x08AF9DF0u>(ctx, &aot_mem) && ctx.pc == 0x08A3BC0Cu) goto L_08A3BC0C;
    return;
L_08A3BC0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BC28;
      }
      goto L_08A3BC14;
    }
L_08A3BC14:
    ctx.gpr[31] = (0x08A3BC1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9F38u>(ctx, &aot_mem) && ctx.pc == 0x08A3BC1Cu) goto L_08A3BC1C;
    return;
L_08A3BC1C:
    ctx.gpr[31] = (0x08A3BC24u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 212u, 0x089258A4u>(ctx, &aot_mem) && ctx.pc == 0x08A3BC24u) goto L_08A3BC24;
    return;
L_08A3BC24:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08A3BC28;
L_08A3BC28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3BC68;
      }
      goto L_08A3BC38;
    }
L_08A3BC38:
    ctx.gpr[31] = (0x08A3BC40u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A3BC40u) goto L_08A3BC40;
    return;
L_08A3BC40:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10708)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10712)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A3BC58u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08A3BC58u) goto L_08A3BC58;
    return;
L_08A3BC58:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A3BC64u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x08A3BC64u) goto L_08A3BC64;
    return;
L_08A3BC64:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A3BC68;
L_08A3BC68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1452)));
    ctx.gpr[16] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29628), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3BC88u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 445u, 0x08AFA028u>(ctx, &aot_mem) && ctx.pc == 0x08A3BC88u) goto L_08A3BC88;
    return;
L_08A3BC88:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3BC94u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BC94u) goto L_08A3BC94;
    return;
L_08A3BC94:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2192)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-29632)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1016)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2208)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A3BCE0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 345u, 0x088A6438u>(ctx, &aot_mem) && ctx.pc == 0x08A3BCE0u) goto L_08A3BCE0;
    return;
L_08A3BCE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2236)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A3BD10;
      }
      goto L_08A3BCEC;
    }
L_08A3BCEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29628)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3BD0C;
      }
      goto L_08A3BCFC;
    }
L_08A3BCFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29628)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3BD10;
      }
      goto L_08A3BD0C;
    }
L_08A3BD0C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29628), 0u);
    goto L_08A3BD10;
L_08A3BD10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2208)));
      if (branch_taken) {
          goto L_08A3BD38;
      }
      goto L_08A3BD18;
    }
L_08A3BD18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1224)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1216)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A3BD38;
L_08A3BD38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(504)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A3BD64;
      }
      goto L_08A3BD50;
    }
L_08A3BD50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 184u);
    ctx.gpr[31] = (0x08A3BD60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x08A3BD60u) goto L_08A3BD60;
    return;
L_08A3BD60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A3BD64;
L_08A3BD64:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BD84;
      }
      goto L_08A3BD6C;
    }
L_08A3BD6C:
    ctx.gpr[31] = (0x08A3BD74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 826u, 0x08AFB95Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BD74u) goto L_08A3BD74;
    return;
L_08A3BD74:
    ctx.gpr[4] = (15922u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 47299u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08A3BD84;
L_08A3BD84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2220)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BDA0;
      }
      goto L_08A3BD90;
    }
L_08A3BD90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 3u, 0x08A3C02Cu>(ctx, &aot_mem); return;
      }
      goto L_08A3BDA0;
    }
L_08A3BDA0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2160)));
    ctx.gpr[16] = (ctx.gpr[23] + static_cast<std::uint32_t>(992));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1536));
    ctx.gpr[31] = (0x08A3BDB4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 350u, 0x08AF9904u>(ctx, &aot_mem) && ctx.pc == 0x08A3BDB4u) goto L_08A3BDB4;
    return;
L_08A3BDB4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3BDC4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 345u, 0x08A361DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3BDC4u) goto L_08A3BDC4;
    return;
L_08A3BDC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3BDD0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BDD0u) goto L_08A3BDD0;
    return;
L_08A3BDD0:
    ctx.gpr[31] = (0x08A3BDD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 359u, 0x08A36330u>(ctx, &aot_mem) && ctx.pc == 0x08A3BDD8u) goto L_08A3BDD8;
    return;
L_08A3BDD8:
    ctx.gpr[5] = (15363u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1445)));
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A3BE38;
      }
      goto L_08A3BDEC;
    }
L_08A3BDEC:
    ctx.gpr[31] = (0x08A3BDF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A3BDF4u) goto L_08A3BDF4;
    return;
L_08A3BDF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08A3BE6C;
      }
      goto L_08A3BE38;
    }
L_08A3BE38:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1568));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2200)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3BE50u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 351u, 0x08A36284u>(ctx, &aot_mem) && ctx.pc == 0x08A3BE50u) goto L_08A3BE50;
    return;
L_08A3BE50:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3BE5Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 362u, 0x08A3638Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BE5Cu) goto L_08A3BE5C;
    return;
L_08A3BE5C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3BE68u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 348u, 0x08A3623Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BE68u) goto L_08A3BE68;
    return;
L_08A3BE68:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A3BE6C;
L_08A3BE6C:
    ctx.gpr[31] = (0x08A3BE74u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1552), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A3BE74u) goto L_08A3BE74;
    return;
L_08A3BE74:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1556), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1556));
    ctx.gpr[31] = (0x08A3BE84u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1552));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF98A0u>(ctx, &aot_mem) && ctx.pc == 0x08A3BE84u) goto L_08A3BE84;
    return;
L_08A3BE84:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1016)));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3BFA0;
      }
      goto L_08A3BE9C;
    }
L_08A3BE9C:
    ctx.gpr[31] = (0x08A3BEA4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A3BEA4u) goto L_08A3BEA4;
    return;
L_08A3BEA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A3BEB8u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A3BEB8u) goto L_08A3BEB8;
    return;
L_08A3BEB8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10708)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10712)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3BED8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08A3BED8u) goto L_08A3BED8;
    return;
L_08A3BED8:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3BEECu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 524u, 0x08AF6874u>(ctx, &aot_mem) && ctx.pc == 0x08A3BEECu) goto L_08A3BEEC;
    return;
L_08A3BEEC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A3BF28;
      }
      goto L_08A3BEF4;
    }
L_08A3BEF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.gpr[31] = (0x08A3BF00u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A3BF00u) goto L_08A3BF00;
    return;
L_08A3BF00:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3BF14u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08A3BF14u) goto L_08A3BF14;
    return;
L_08A3BF14:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A3BF20u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x08A3BF20u) goto L_08A3BF20;
    return;
L_08A3BF20:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A3BFEC;
      }
      goto L_08A3BF28;
    }
L_08A3BF28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A3BF38u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A3BF38u) goto L_08A3BF38;
    return;
L_08A3BF38:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3BF4Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08A3BF4Cu) goto L_08A3BF4C;
    return;
L_08A3BF4C:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3BF60u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 524u, 0x08AF6874u>(ctx, &aot_mem) && ctx.pc == 0x08A3BF60u) goto L_08A3BF60;
    return;
L_08A3BF60:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A3BFEC;
      }
      goto L_08A3BF68;
    }
L_08A3BF68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A3BF78u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A3BF78u) goto L_08A3BF78;
    return;
L_08A3BF78:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3BF8Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08A3BF8Cu) goto L_08A3BF8C;
    return;
L_08A3BF8C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A3BF98u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x08A3BF98u) goto L_08A3BF98;
    return;
L_08A3BF98:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A3BFEC;
      }
      goto L_08A3BFA0;
    }
L_08A3BFA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3BFC4;
      }
      goto L_08A3BFB8;
    }
L_08A3BFB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A3BFEC;
      }
      goto L_08A3BFC4;
    }
L_08A3BFC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3BFEC;
      }
      goto L_08A3BFE0;
    }
L_08A3BFE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    goto L_08A3BFEC;
L_08A3BFEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.gpr[31] = (0x08A3BFF8u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 347u, 0x08AF98D4u>(ctx, &aot_mem) && ctx.pc == 0x08A3BFF8u) goto L_08A3BFF8;
    return;
L_08A3BFF8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A3C004u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    (void)rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 394u, 0x08AF9BECu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0141(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0141_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_141(Runtime &runtime) {
    runtime.register_generated_unit(141u, 0x08A38000u, 16384u, &recomp_unit_0141, &recomp_unit_0141_entry);
    runtime.register_function(0x08A38004u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38010u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38018u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38020u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38030u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38038u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38040u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38048u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38058u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38068u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38074u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38078u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38108u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38118u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38124u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38128u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38130u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3815Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38168u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38174u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38210u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38220u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3822Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38230u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38238u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3823Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38264u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38270u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3831Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38328u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38440u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38470u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3848Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38498u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38530u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3856Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38574u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38594u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38690u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A386A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A386C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A386DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A386F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3870Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38710u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38744u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38748u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38754u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3876Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38774u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38784u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A387A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A387B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A387D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A387E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38804u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3880Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38824u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3882Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38838u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38858u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3886Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38870u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3887Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38894u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3889Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A388ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A388C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A388DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A388F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3890Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38928u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38930u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38948u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3895Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38964u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38980u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38988u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A389B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A389D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38ACCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38ADCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B18u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B98u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BA4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BD4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BDCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C6Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38CC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38CE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38CECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38DACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38DD8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38EB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FCCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FD4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FF8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39000u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3900Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39074u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A390A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A390A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A390D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39120u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39128u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39134u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3913Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39144u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3914Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39180u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39200u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39208u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39210u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39230u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39254u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39264u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3926Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39300u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3930Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39310u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3931Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39324u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39328u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3934Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3936Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39374u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A393A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A393C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A393D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A393F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39440u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3944Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39450u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39460u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39484u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3953Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39550u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39564u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3957Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39590u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A395A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A395E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A395F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39600u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39614u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39628u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39640u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39684u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3969Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A396A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3976Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39780u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39790u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3979Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A397B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A397C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A397E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A397F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39800u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3980Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3981Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3982Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39838u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39858u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3986Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3987Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39884u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A398A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A398B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A398CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A398E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A398E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A398F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3990Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39920u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39934u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39948u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39964u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39968u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3997Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A399A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A399C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A399E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A38u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A6Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AA4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AD0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AD8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AF8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B00u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B18u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B6Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B98u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BCCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BD4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C18u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C20u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C6Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39CA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39CC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39CD0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39CE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39CF4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D20u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D6Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E6Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E78u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39EACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39EC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39EC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39ED0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39ED8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39EE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39EF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F08u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F20u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F4Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39FB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39FB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39FD4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39FF4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39FFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A014u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A020u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A028u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A034u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A044u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A050u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A058u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A068u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A070u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A08Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A094u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A0B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A0CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A0DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A0E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A0F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A108u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A114u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A144u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A154u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A160u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A170u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A178u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A184u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A18Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A230u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A258u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A268u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A278u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A280u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A288u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A294u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A2A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A2A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A2ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A2B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A2ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A2F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A310u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A32Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A33Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A348u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A358u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A364u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A378u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A388u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A398u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A404u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A420u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A430u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A43Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A440u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A448u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A45Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A478u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A49Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A4A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A4C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A4D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A4E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A4F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A50Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A518u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A524u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A52Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A534u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A540u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A548u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A54Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A554u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A560u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A570u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A57Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A59Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A604u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A608u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A61Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A638u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A650u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A668u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A670u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A67Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A688u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A690u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A698u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A700u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A70Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A718u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A720u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A728u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A734u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A740u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A754u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A764u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A770u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A788u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A800u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A814u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A824u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A830u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A848u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A850u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A85Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A868u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A870u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A878u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A884u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A890u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A910u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A93Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A950u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A96Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A97Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A988u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A994u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA24u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA58u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA98u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AAA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AAB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AAB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AAC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AAD8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AAE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AAE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AAF8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB00u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB38u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABA4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABCCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABF4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC00u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC08u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC18u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC20u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC38u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACD8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD38u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD58u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD6Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ADA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ADC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ADCCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ADD0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ADE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ADF8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE6Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AED4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEDCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEF4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF18u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF38u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B004u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B00Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B018u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B028u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B044u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B050u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B08Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B104u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B108u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B110u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B118u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B120u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B12Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B138u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B154u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B168u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B17Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B180u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B1C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B1D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B1DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B1E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B1F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B208u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B21Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B228u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B234u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B240u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B24Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B258u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B264u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B274u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B280u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B288u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B290u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B29Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B2ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B2B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B2C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B2D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B2D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B2F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B2FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B304u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B310u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B318u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B324u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B334u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B33Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B348u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B350u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B358u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B360u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B368u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B36Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B37Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B384u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B39Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B424u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B430u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B440u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B450u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B458u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B46Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B48Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B500u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B50Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B518u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B528u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B534u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B544u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B550u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B558u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B560u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B56Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B57Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B588u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B590u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B598u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B604u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B620u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B62Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B65Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B66Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B67Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B684u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B69Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B6B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B6F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B700u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B710u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B724u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B738u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B73Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B750u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B758u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B770u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B778u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B780u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B78Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B794u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B800u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B818u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B824u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B828u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B848u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B854u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B904u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B914u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B930u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B948u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B964u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B978u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B988u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B994u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA18u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA98u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BAA4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BAB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BAC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BAD8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BAE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BAF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BAFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB08u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB20u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB30u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB4Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB58u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBCCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBD4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBF8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC24u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC38u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC58u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BCE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BCECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BCFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD18u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD38u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD6Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDD0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDD8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDF4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE38u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE6Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEA4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BED8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEF4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF00u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF20u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF38u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF4Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF78u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF98u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFF8u, &recomp_unit_0141, "recomp_unit_0141");
}
} // namespace psprecomp
