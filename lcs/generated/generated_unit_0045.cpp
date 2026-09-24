#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0045[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0,
    14, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 18, 0, 19, 0, 20, 0, 21, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0,
    24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0,
    30, 0, 31, 0, 0, 0, 32, 0, 33, 0, 0, 0, 34, 0, 35, 0, 36, 0, 0, 37, 0, 0, 38, 39, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 55, 0, 56, 0, 57, 0, 0, 58, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62,
    0, 0, 0, 0, 63, 0, 0, 64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 0, 0,
    0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 80, 0, 0, 81, 0, 82, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 0, 0, 90,
    0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 96, 0, 0, 97, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 0, 103, 104, 0, 105, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110,
    0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 0, 117, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0,
    0, 121, 0, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 125, 0, 0, 126, 0, 0, 127, 0, 128, 0, 0, 0, 0, 129, 0, 130, 0, 0, 131,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 135, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 148, 0, 149, 150, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 167, 0, 0,
    0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0,
    0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191,
    0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 207,
    208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0,
    0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 221, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 226, 0, 0, 227, 0, 228, 0, 0, 0, 0, 229, 0, 0,
    0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 233, 0, 234, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 237,
    0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 241, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 248, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 251, 0, 252, 0, 0, 0, 253, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 261, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 273, 0, 274, 0, 0, 275, 0, 0, 276, 0, 0, 0,
    0, 0, 277, 0, 278, 0, 279, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 290, 0, 291, 0, 0, 0,
    0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0,
    0, 0, 0, 301, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305,
    0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 316, 0, 0, 0, 0, 317, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 323, 0, 0, 0, 0, 324, 0, 325, 0,
    0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336,
    0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 341,
    0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 351, 0, 0, 0, 0,
    0, 0, 352, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0,
    0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 0, 362, 0, 0,
    363, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 367, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0,
    0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 377, 0, 378, 0, 0, 379, 0, 380, 0, 0, 381, 0, 382, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 394, 0,
    395, 0, 0, 0, 396, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0,
    403, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0,
    0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 419,
    0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 0, 0, 427, 0, 0, 0, 428, 0, 429, 0, 0, 0, 430, 431, 0, 0, 0, 0, 432, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 440, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 448,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 453, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 457, 0, 458, 0, 459, 460, 0, 0,
    0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 467, 0, 468, 0, 0, 469,
    0, 470, 0, 0, 0, 471, 0, 472, 0, 0, 473, 0, 474, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 479,
    0, 480, 0, 481, 0, 482, 0, 483, 0, 484, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0,
    0, 488, 0, 0, 489, 0, 0, 490, 491, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 496, 0, 0, 0, 497,
    0, 0, 498, 0, 499, 0, 500, 0, 501, 0, 502, 0, 503, 0, 504, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 507, 508, 0, 0, 0,
    0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 0, 511, 0, 0, 512, 0, 0, 0, 513, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 515, 0, 516,
    0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 0, 519, 0, 0, 520, 0, 0, 0, 521, 0, 522, 0, 523, 0, 524, 0, 525, 0, 526, 0,
    527, 0, 528, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 532, 533, 0, 534, 0, 535, 0,
    536, 0, 537, 0, 538, 0, 539, 0, 0, 540, 0, 541, 542, 0, 543, 0, 0, 544, 0, 545, 0, 0, 546, 0, 0, 547, 0, 548, 0, 0, 549, 0,
    550, 0, 0, 551, 0, 552, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 554, 0, 0, 555, 0, 556, 0, 557, 0, 0, 0, 558, 0, 559, 0, 0,
    0, 560, 0, 0, 0, 0, 561, 0, 562, 0, 0, 0, 563, 0, 564, 0, 0, 0, 0, 565, 0, 0, 566, 0, 0, 567, 0, 0, 568, 0, 0, 0,
    0, 0, 0, 0, 569, 0, 570, 0, 0, 571, 0, 572, 573, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0, 576,
    0, 0, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 583, 0, 584, 585, 0, 0, 0,
    0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 587, 0, 588, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 590, 0, 0, 591, 0, 0,
    0, 592, 0, 0, 593, 0, 594, 0, 0, 0, 0, 595, 0, 596, 0, 597, 0, 598, 0, 599, 0, 0, 0, 0, 600, 0, 0, 601, 0, 0, 602, 0,
    0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 604, 605, 0, 606, 0, 0, 0, 0, 0, 0, 0, 607, 0, 608, 0, 609, 0, 0, 610, 0,
    0, 611, 0, 0, 612, 0, 613, 0, 614, 0, 615, 0, 0, 0, 616, 0, 617, 0, 618, 0, 0, 0, 619, 0, 620, 0, 621, 0, 622, 0, 623, 0,
    624, 0, 0, 0, 625, 0, 626, 0, 627, 0, 0, 0, 628, 0, 629, 0, 630, 631, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    633, 0, 634, 0, 635, 0, 0, 636, 0, 0, 637, 0, 0, 638, 0, 639, 0, 640, 0, 641, 0, 642, 0, 643, 644, 0, 0, 0, 0, 0, 645, 0,
    0, 0, 0, 0, 646, 0, 647, 0, 648, 0, 0, 0, 649, 0, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 0, 653, 0, 654,
    0, 0, 0, 0, 655, 0, 0, 0, 656, 0, 0, 657, 0, 658, 0, 659, 0, 660, 0, 661, 0, 662, 0, 663, 0, 0, 0, 664, 0, 0, 665, 0,
    0, 0, 0, 666, 0, 0, 667, 0, 0, 668, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 671, 0, 0, 672, 0, 673, 674, 0, 0, 0, 0, 675,
    0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 678, 0, 0, 0, 679, 0, 680, 0, 681, 0, 682, 0, 683, 0, 0, 684, 0, 685,
    0, 686, 0, 687, 0, 688, 0, 689, 0, 690, 0, 691, 0, 692, 0, 693, 0, 694, 0, 695, 0, 696, 0, 697, 0, 698, 0, 699, 0, 700, 0, 0,
    0, 0, 0, 0, 0, 701, 0, 0, 702, 0, 0, 0, 0, 0, 703, 0, 704, 0, 0, 0, 0, 0, 705, 0, 0, 706, 0, 0, 0, 707, 0, 708,
    0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 710, 0, 711, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 714,
    0, 715, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 720, 0, 721, 0, 722,
    0, 0, 0, 0, 723, 0, 724, 0, 0, 0, 0, 725, 0, 726, 0, 727, 0, 728, 0, 0, 0, 729, 0, 0, 0, 730, 0, 731, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 732, 0, 733, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0,
    738, 739, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 743, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0, 745, 0, 746, 0, 0, 747, 0, 0, 748, 0, 0, 0,
    749, 750, 0, 751, 0, 752, 0, 0, 753, 0, 0, 0, 0, 754, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 757, 0, 0, 758, 0,
    0, 759, 0, 0, 0, 0, 760, 0, 0, 761, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 764, 0, 0, 765, 0, 0, 766, 0, 0,
    767, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 769, 0, 770, 0, 771, 0, 0, 772, 0, 0, 773, 0, 0, 774, 0, 0, 775, 0, 0, 776, 0,
    0, 777, 0, 778, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 780, 0, 0, 0, 781, 0, 782, 783, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 785, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787,
    0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 793, 0,
    0, 794, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 796, 0, 0, 0, 797, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 799, 0, 0, 0, 0,
    800, 801, 0, 0, 0, 802, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 0, 805, 0, 0, 0, 806,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 808, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 811, 0, 0, 0, 0, 0, 0, 812, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    814, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 816, 817, 0, 818, 0, 819, 0, 0, 0, 0, 0, 0, 0,
    820, 0, 0, 821, 0, 0, 822, 0, 823, 0, 0, 824, 0, 825, 0, 0, 0, 826, 0, 827, 0, 828, 0, 829, 0, 830, 831, 0, 832, 0, 833, 0,
    0, 0, 834, 0, 0, 0, 835, 0, 836, 0, 837, 0, 838, 0, 0, 0, 0, 839, 0, 0, 0, 0, 0, 0, 0, 840, 0, 0, 841, 0, 0, 842,
    0, 843, 0, 0, 844, 0, 845, 0, 0, 0, 846, 0, 847, 0, 848, 0, 849, 0, 850, 851, 0, 852, 0, 853, 0, 0, 0, 854, 0, 855, 0, 856,
    0, 0, 0, 0, 0, 0, 0, 857, 0, 0, 0, 0, 0, 0, 858, 0, 859, 0, 0, 0, 860, 0, 0, 0, 861, 0, 862, 0, 863, 0, 0, 0,
    0, 864, 0, 0, 0, 865, 0, 0, 866, 0, 0, 867, 0, 868, 0, 869, 0, 870, 0, 871, 0, 0, 872, 0, 873, 0, 874, 0, 875, 0, 876,
};
void recomp_unit_0045_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088B8000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0045[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088B8000;
    case 2u: goto L_088B8030;
    case 3u: goto L_088B8034;
    case 4u: goto L_088B8038;
    case 5u: goto L_088B803C;
    case 6u: goto L_088B8064;
    case 7u: goto L_088B8074;
    case 8u: goto L_088B8108;
    case 9u: goto L_088B811C;
    case 10u: goto L_088B8134;
    case 11u: goto L_088B8148;
    case 12u: goto L_088B815C;
    case 13u: goto L_088B816C;
    case 14u: goto L_088B8180;
    case 15u: goto L_088B8190;
    case 16u: goto L_088B8198;
    case 17u: goto L_088B81A0;
    case 18u: goto L_088B81B0;
    case 19u: goto L_088B81B8;
    case 20u: goto L_088B81C0;
    case 21u: goto L_088B81C8;
    case 22u: goto L_088B81E0;
    case 23u: goto L_088B81E8;
    case 24u: goto L_088B8200;
    case 25u: goto L_088B8208;
    case 26u: goto L_088B8234;
    case 27u: goto L_088B823C;
    case 28u: goto L_088B8268;
    case 29u: goto L_088B8270;
    case 30u: goto L_088B8280;
    case 31u: goto L_088B8288;
    case 32u: goto L_088B8298;
    case 33u: goto L_088B82A0;
    case 34u: goto L_088B82B0;
    case 35u: goto L_088B82B8;
    case 36u: goto L_088B82C0;
    case 37u: goto L_088B82CC;
    case 38u: goto L_088B82D8;
    case 39u: goto L_088B82DC;
    case 40u: goto L_088B82F0;
    case 41u: goto L_088B8308;
    case 42u: goto L_088B831C;
    case 43u: goto L_088B8324;
    case 44u: goto L_088B8334;
    case 45u: goto L_088B8340;
    case 46u: goto L_088B8358;
    case 47u: goto L_088B8368;
    case 48u: goto L_088B8394;
    case 49u: goto L_088B83B8;
    case 50u: goto L_088B83C4;
    case 51u: goto L_088B83CC;
    case 52u: goto L_088B83DC;
    case 53u: goto L_088B83E4;
    case 54u: goto L_088B83F8;
    case 55u: goto L_088B8414;
    case 56u: goto L_088B841C;
    case 57u: goto L_088B8424;
    case 58u: goto L_088B8430;
    case 59u: goto L_088B8438;
    case 60u: goto L_088B844C;
    case 61u: goto L_088B8470;
    case 62u: goto L_088B847C;
    case 63u: goto L_088B8490;
    case 64u: goto L_088B849C;
    case 65u: goto L_088B84A4;
    case 66u: goto L_088B84AC;
    case 67u: goto L_088B84B4;
    case 68u: goto L_088B84BC;
    case 69u: goto L_088B84E8;
    case 70u: goto L_088B84FC;
    case 71u: goto L_088B8528;
    case 72u: goto L_088B8544;
    case 73u: goto L_088B8560;
    case 74u: goto L_088B8568;
    case 75u: goto L_088B8570;
    case 76u: goto L_088B8584;
    case 77u: goto L_088B85B4;
    case 78u: goto L_088B85C4;
    case 79u: goto L_088B85E4;
    case 80u: goto L_088B860C;
    case 81u: goto L_088B8618;
    case 82u: goto L_088B8620;
    case 83u: goto L_088B8624;
    case 84u: goto L_088B862C;
    case 85u: goto L_088B864C;
    case 86u: goto L_088B8654;
    case 87u: goto L_088B865C;
    case 88u: goto L_088B8664;
    case 89u: goto L_088B866C;
    case 90u: goto L_088B867C;
    case 91u: goto L_088B8684;
    case 92u: goto L_088B86B0;
    case 93u: goto L_088B86B8;
    case 94u: goto L_088B86C0;
    case 95u: goto L_088B86E0;
    case 96u: goto L_088B86E4;
    case 97u: goto L_088B86F0;
    case 98u: goto L_088B8708;
    case 99u: goto L_088B8724;
    case 100u: goto L_088B8730;
    case 101u: goto L_088B8738;
    case 102u: goto L_088B8740;
    case 103u: goto L_088B8758;
    case 104u: goto L_088B875C;
    case 105u: goto L_088B8764;
    case 106u: goto L_088B8780;
    case 107u: goto L_088B878C;
    case 108u: goto L_088B879C;
    case 109u: goto L_088B87D8;
    case 110u: goto L_088B87FC;
    case 111u: goto L_088B8804;
    case 112u: goto L_088B880C;
    case 113u: goto L_088B8814;
    case 114u: goto L_088B881C;
    case 115u: goto L_088B8824;
    case 116u: goto L_088B8838;
    case 117u: goto L_088B8844;
    case 118u: goto L_088B884C;
    case 119u: goto L_088B8854;
    case 120u: goto L_088B8874;
    case 121u: goto L_088B8884;
    case 122u: goto L_088B8894;
    case 123u: goto L_088B88A0;
    case 124u: goto L_088B88AC;
    case 125u: goto L_088B88B4;
    case 126u: goto L_088B88C0;
    case 127u: goto L_088B88CC;
    case 128u: goto L_088B88D4;
    case 129u: goto L_088B88E8;
    case 130u: goto L_088B88F0;
    case 131u: goto L_088B88FC;
    case 132u: goto L_088B8908;
    case 133u: goto L_088B8930;
    case 134u: goto L_088B893C;
    case 135u: goto L_088B8944;
    case 136u: goto L_088B8950;
    case 137u: goto L_088B8964;
    case 138u: goto L_088B898C;
    case 139u: goto L_088B89A4;
    case 140u: goto L_088B89AC;
    case 141u: goto L_088B89C0;
    case 142u: goto L_088B8A04;
    case 143u: goto L_088B8A14;
    case 144u: goto L_088B8A2C;
    case 145u: goto L_088B8A34;
    case 146u: goto L_088B8A58;
    case 147u: goto L_088B8A80;
    case 148u: goto L_088B8A8C;
    case 149u: goto L_088B8A94;
    case 150u: goto L_088B8A98;
    case 151u: goto L_088B8A9C;
    case 152u: goto L_088B8ABC;
    case 153u: goto L_088B8AC4;
    case 154u: goto L_088B8AF8;
    case 155u: goto L_088B8B20;
    case 156u: goto L_088B8B30;
    case 157u: goto L_088B8B40;
    case 158u: goto L_088B8B94;
    case 159u: goto L_088B8B9C;
    case 160u: goto L_088B8C7C;
    case 161u: goto L_088B8D10;
    case 162u: goto L_088B8D28;
    case 163u: goto L_088B8D38;
    case 164u: goto L_088B8D4C;
    case 165u: goto L_088B8D5C;
    case 166u: goto L_088B8D6C;
    case 167u: goto L_088B8D74;
    case 168u: goto L_088B8D84;
    case 169u: goto L_088B8D8C;
    case 170u: goto L_088B8D94;
    case 171u: goto L_088B8D9C;
    case 172u: goto L_088B8DA4;
    case 173u: goto L_088B8DB8;
    case 174u: goto L_088B8DD0;
    case 175u: goto L_088B8DD4;
    case 176u: goto L_088B8E10;
    case 177u: goto L_088B8E30;
    case 178u: goto L_088B8E38;
    case 179u: goto L_088B8E54;
    case 180u: goto L_088B8E64;
    case 181u: goto L_088B8E74;
    case 182u: goto L_088B8E94;
    case 183u: goto L_088B8F28;
    case 184u: goto L_088B8FD8;
    case 185u: goto L_088B8FF8;
    case 186u: goto L_088B9014;
    case 187u: goto L_088B9024;
    case 188u: goto L_088B9038;
    case 189u: goto L_088B9044;
    case 190u: goto L_088B9070;
    case 191u: goto L_088B907C;
    case 192u: goto L_088B9088;
    case 193u: goto L_088B9090;
    case 194u: goto L_088B90A8;
    case 195u: goto L_088B90B8;
    case 196u: goto L_088B90C0;
    case 197u: goto L_088B90D4;
    case 198u: goto L_088B9100;
    case 199u: goto L_088B9114;
    case 200u: goto L_088B9120;
    case 201u: goto L_088B912C;
    case 202u: goto L_088B9134;
    case 203u: goto L_088B914C;
    case 204u: goto L_088B9158;
    case 205u: goto L_088B9160;
    case 206u: goto L_088B9174;
    case 207u: goto L_088B917C;
    case 208u: goto L_088B9180;
    case 209u: goto L_088B91A0;
    case 210u: goto L_088B91BC;
    case 211u: goto L_088B91CC;
    case 212u: goto L_088B91E0;
    case 213u: goto L_088B9204;
    case 214u: goto L_088B921C;
    case 215u: goto L_088B9234;
    case 216u: goto L_088B9258;
    case 217u: goto L_088B926C;
    case 218u: goto L_088B9288;
    case 219u: goto L_088B929C;
    case 220u: goto L_088B92A8;
    case 221u: goto L_088B92B8;
    case 222u: goto L_088B92C0;
    case 223u: goto L_088B92C8;
    case 224u: goto L_088B933C;
    case 225u: goto L_088B9344;
    case 226u: goto L_088B934C;
    case 227u: goto L_088B9358;
    case 228u: goto L_088B9360;
    case 229u: goto L_088B9374;
    case 230u: goto L_088B938C;
    case 231u: goto L_088B93B4;
    case 232u: goto L_088B93BC;
    case 233u: goto L_088B93C8;
    case 234u: goto L_088B93D0;
    case 235u: goto L_088B93D8;
    case 236u: goto L_088B93EC;
    case 237u: goto L_088B93FC;
    case 238u: goto L_088B9404;
    case 239u: goto L_088B9418;
    case 240u: goto L_088B9428;
    case 241u: goto L_088B9430;
    case 242u: goto L_088B9434;
    case 243u: goto L_088B9454;
    case 244u: goto L_088B9474;
    case 245u: goto L_088B9490;
    case 246u: goto L_088B94A8;
    case 247u: goto L_088B94B0;
    case 248u: goto L_088B94C4;
    case 249u: goto L_088B94CC;
    case 250u: goto L_088B94D8;
    case 251u: goto L_088B9508;
    case 252u: goto L_088B9510;
    case 253u: goto L_088B9520;
    case 254u: goto L_088B9524;
    case 255u: goto L_088B953C;
    case 256u: goto L_088B956C;
    case 257u: goto L_088B9594;
    case 258u: goto L_088B959C;
    case 259u: goto L_088B95A8;
    case 260u: goto L_088B95E0;
    case 261u: goto L_088B95E4;
    case 262u: goto L_088B9614;
    case 263u: goto L_088B9628;
    case 264u: goto L_088B962C;
    case 265u: goto L_088B968C;
    case 266u: goto L_088B9698;
    case 267u: goto L_088B96CC;
    case 268u: goto L_088B96F0;
    case 269u: goto L_088B9708;
    case 270u: goto L_088B9750;
    case 271u: goto L_088B97B0;
    case 272u: goto L_088B97C8;
    case 273u: goto L_088B97D0;
    case 274u: goto L_088B97D8;
    case 275u: goto L_088B97E4;
    case 276u: goto L_088B97F0;
    case 277u: goto L_088B9808;
    case 278u: goto L_088B9810;
    case 279u: goto L_088B9818;
    case 280u: goto L_088B9824;
    case 281u: goto L_088B9838;
    case 282u: goto L_088B9844;
    case 283u: goto L_088B9850;
    case 284u: goto L_088B9874;
    case 285u: goto L_088B9880;
    case 286u: goto L_088B98A8;
    case 287u: goto L_088B98B0;
    case 288u: goto L_088B98C8;
    case 289u: goto L_088B98DC;
    case 290u: goto L_088B98E8;
    case 291u: goto L_088B98F0;
    case 292u: goto L_088B9908;
    case 293u: goto L_088B992C;
    case 294u: goto L_088B9948;
    case 295u: goto L_088B9994;
    case 296u: goto L_088B99B4;
    case 297u: goto L_088B99BC;
    case 298u: goto L_088B99C4;
    case 299u: goto L_088B99E4;
    case 300u: goto L_088B99F8;
    case 301u: goto L_088B9A0C;
    case 302u: goto L_088B9A10;
    case 303u: goto L_088B9A30;
    case 304u: goto L_088B9A5C;
    case 305u: goto L_088B9A7C;
    case 306u: goto L_088B9A90;
    case 307u: goto L_088B9AD4;
    case 308u: goto L_088B9AE0;
    case 309u: goto L_088B9AE8;
    case 310u: goto L_088B9B14;
    case 311u: goto L_088B9B3C;
    case 312u: goto L_088B9B54;
    case 313u: goto L_088B9B68;
    case 314u: goto L_088B9B7C;
    case 315u: goto L_088B9BA8;
    case 316u: goto L_088B9BAC;
    case 317u: goto L_088B9BC0;
    case 318u: goto L_088B9BCC;
    case 319u: goto L_088B9BD4;
    case 320u: goto L_088B9C18;
    case 321u: goto L_088B9C4C;
    case 322u: goto L_088B9C58;
    case 323u: goto L_088B9C5C;
    case 324u: goto L_088B9C70;
    case 325u: goto L_088B9C78;
    case 326u: goto L_088B9C88;
    case 327u: goto L_088B9C98;
    case 328u: goto L_088B9CA8;
    case 329u: goto L_088B9CC8;
    case 330u: goto L_088B9CD4;
    case 331u: goto L_088B9CD8;
    case 332u: goto L_088B9D2C;
    case 333u: goto L_088B9D30;
    case 334u: goto L_088B9D54;
    case 335u: goto L_088B9D64;
    case 336u: goto L_088B9D7C;
    case 337u: goto L_088B9D84;
    case 338u: goto L_088B9DC8;
    case 339u: goto L_088B9DD8;
    case 340u: goto L_088B9DEC;
    case 341u: goto L_088B9DFC;
    case 342u: goto L_088B9E18;
    case 343u: goto L_088B9E40;
    case 344u: goto L_088B9E54;
    case 345u: goto L_088B9E68;
    case 346u: goto L_088B9E78;
    case 347u: goto L_088B9E90;
    case 348u: goto L_088B9EAC;
    case 349u: goto L_088B9EDC;
    case 350u: goto L_088B9EE8;
    case 351u: goto L_088B9EEC;
    case 352u: goto L_088B9F08;
    case 353u: goto L_088B9F10;
    case 354u: goto L_088B9F20;
    case 355u: goto L_088B9F54;
    case 356u: goto L_088B9F60;
    case 357u: goto L_088B9F78;
    case 358u: goto L_088B9F94;
    case 359u: goto L_088B9FCC;
    case 360u: goto L_088B9FDC;
    case 361u: goto L_088B9FEC;
    case 362u: goto L_088B9FF4;
    case 363u: goto L_088BA000;
    case 364u: goto L_088BA00C;
    case 365u: goto L_088BA018;
    case 366u: goto L_088BA024;
    case 367u: goto L_088BA02C;
    case 368u: goto L_088BA030;
    case 369u: goto L_088BA040;
    case 370u: goto L_088BA064;
    case 371u: goto L_088BA06C;
    case 372u: goto L_088BA084;
    case 373u: goto L_088BA0A8;
    case 374u: goto L_088BA0C0;
    case 375u: goto L_088BA0C8;
    case 376u: goto L_088BA0D8;
    case 377u: goto L_088BA104;
    case 378u: goto L_088BA10C;
    case 379u: goto L_088BA118;
    case 380u: goto L_088BA120;
    case 381u: goto L_088BA12C;
    case 382u: goto L_088BA134;
    case 383u: goto L_088BA140;
    case 384u: goto L_088BA150;
    case 385u: goto L_088BA164;
    case 386u: goto L_088BA1A4;
    case 387u: goto L_088BA1B4;
    case 388u: goto L_088BA1D0;
    case 389u: goto L_088BA1D8;
    case 390u: goto L_088BA204;
    case 391u: goto L_088BA22C;
    case 392u: goto L_088BA258;
    case 393u: goto L_088BA270;
    case 394u: goto L_088BA278;
    case 395u: goto L_088BA280;
    case 396u: goto L_088BA290;
    case 397u: goto L_088BA298;
    case 398u: goto L_088BA2A8;
    case 399u: goto L_088BA2B8;
    case 400u: goto L_088BA2C0;
    case 401u: goto L_088BA2E4;
    case 402u: goto L_088BA2F4;
    case 403u: goto L_088BA300;
    case 404u: goto L_088BA304;
    case 405u: goto L_088BA318;
    case 406u: goto L_088BA32C;
    case 407u: goto L_088BA344;
    case 408u: goto L_088BA350;
    case 409u: goto L_088BA360;
    case 410u: goto L_088BA370;
    case 411u: goto L_088BA38C;
    case 412u: goto L_088BA39C;
    case 413u: goto L_088BA3B4;
    case 414u: goto L_088BA3C4;
    case 415u: goto L_088BA404;
    case 416u: goto L_088BA40C;
    case 417u: goto L_088BA428;
    case 418u: goto L_088BA474;
    case 419u: goto L_088BA47C;
    case 420u: goto L_088BA494;
    case 421u: goto L_088BA4A4;
    case 422u: goto L_088BA4C8;
    case 423u: goto L_088BA4CC;
    case 424u: goto L_088BA4F4;
    case 425u: goto L_088BA520;
    case 426u: goto L_088BA528;
    case 427u: goto L_088BA538;
    case 428u: goto L_088BA548;
    case 429u: goto L_088BA550;
    case 430u: goto L_088BA560;
    case 431u: goto L_088BA564;
    case 432u: goto L_088BA578;
    case 433u: goto L_088BA5A4;
    case 434u: goto L_088BA5AC;
    case 435u: goto L_088BA5CC;
    case 436u: goto L_088BA608;
    case 437u: goto L_088BA620;
    case 438u: goto L_088BA638;
    case 439u: goto L_088BA64C;
    case 440u: goto L_088BA650;
    case 441u: goto L_088BA65C;
    case 442u: goto L_088BA688;
    case 443u: goto L_088BA6B0;
    case 444u: goto L_088BA6C8;
    case 445u: goto L_088BA6D0;
    case 446u: goto L_088BA6DC;
    case 447u: goto L_088BA6F4;
    case 448u: goto L_088BA6FC;
    case 449u: goto L_088BA738;
    case 450u: goto L_088BA74C;
    case 451u: goto L_088BA794;
    case 452u: goto L_088BA7A4;
    case 453u: goto L_088BA7AC;
    case 454u: goto L_088BA7B4;
    case 455u: goto L_088BA7C0;
    case 456u: goto L_088BA7D8;
    case 457u: goto L_088BA7E0;
    case 458u: goto L_088BA7E8;
    case 459u: goto L_088BA7F0;
    case 460u: goto L_088BA7F4;
    case 461u: goto L_088BA804;
    case 462u: goto L_088BA828;
    case 463u: goto L_088BA834;
    case 464u: goto L_088BA83C;
    case 465u: goto L_088BA848;
    case 466u: goto L_088BA860;
    case 467u: goto L_088BA868;
    case 468u: goto L_088BA870;
    case 469u: goto L_088BA87C;
    case 470u: goto L_088BA884;
    case 471u: goto L_088BA894;
    case 472u: goto L_088BA89C;
    case 473u: goto L_088BA8A8;
    case 474u: goto L_088BA8B0;
    case 475u: goto L_088BA8BC;
    case 476u: goto L_088BA8C4;
    case 477u: goto L_088BA8EC;
    case 478u: goto L_088BA8F4;
    case 479u: goto L_088BA8FC;
    case 480u: goto L_088BA904;
    case 481u: goto L_088BA90C;
    case 482u: goto L_088BA914;
    case 483u: goto L_088BA91C;
    case 484u: goto L_088BA924;
    case 485u: goto L_088BA92C;
    case 486u: goto L_088BA964;
    case 487u: goto L_088BA978;
    case 488u: goto L_088BA984;
    case 489u: goto L_088BA990;
    case 490u: goto L_088BA99C;
    case 491u: goto L_088BA9A0;
    case 492u: goto L_088BA9A8;
    case 493u: goto L_088BA9CC;
    case 494u: goto L_088BA9D8;
    case 495u: goto L_088BA9E4;
    case 496u: goto L_088BA9EC;
    case 497u: goto L_088BA9FC;
    case 498u: goto L_088BAA08;
    case 499u: goto L_088BAA10;
    case 500u: goto L_088BAA18;
    case 501u: goto L_088BAA20;
    case 502u: goto L_088BAA28;
    case 503u: goto L_088BAA30;
    case 504u: goto L_088BAA38;
    case 505u: goto L_088BAA40;
    case 506u: goto L_088BAA58;
    case 507u: goto L_088BAA6C;
    case 508u: goto L_088BAA70;
    case 509u: goto L_088BAA84;
    case 510u: goto L_088BAAA0;
    case 511u: goto L_088BAAAC;
    case 512u: goto L_088BAAB8;
    case 513u: goto L_088BAAC8;
    case 514u: goto L_088BAAD4;
    case 515u: goto L_088BAAF4;
    case 516u: goto L_088BAAFC;
    case 517u: goto L_088BAB0C;
    case 518u: goto L_088BAB28;
    case 519u: goto L_088BAB34;
    case 520u: goto L_088BAB40;
    case 521u: goto L_088BAB50;
    case 522u: goto L_088BAB58;
    case 523u: goto L_088BAB60;
    case 524u: goto L_088BAB68;
    case 525u: goto L_088BAB70;
    case 526u: goto L_088BAB78;
    case 527u: goto L_088BAB80;
    case 528u: goto L_088BAB88;
    case 529u: goto L_088BAB90;
    case 530u: goto L_088BABA0;
    case 531u: goto L_088BABDC;
    case 532u: goto L_088BABE4;
    case 533u: goto L_088BABE8;
    case 534u: goto L_088BABF0;
    case 535u: goto L_088BABF8;
    case 536u: goto L_088BAC00;
    case 537u: goto L_088BAC08;
    case 538u: goto L_088BAC10;
    case 539u: goto L_088BAC18;
    case 540u: goto L_088BAC24;
    case 541u: goto L_088BAC2C;
    case 542u: goto L_088BAC30;
    case 543u: goto L_088BAC38;
    case 544u: goto L_088BAC44;
    case 545u: goto L_088BAC4C;
    case 546u: goto L_088BAC58;
    case 547u: goto L_088BAC64;
    case 548u: goto L_088BAC6C;
    case 549u: goto L_088BAC78;
    case 550u: goto L_088BAC80;
    case 551u: goto L_088BAC8C;
    case 552u: goto L_088BAC94;
    case 553u: goto L_088BACB4;
    case 554u: goto L_088BACC0;
    case 555u: goto L_088BACCC;
    case 556u: goto L_088BACD4;
    case 557u: goto L_088BACDC;
    case 558u: goto L_088BACEC;
    case 559u: goto L_088BACF4;
    case 560u: goto L_088BAD04;
    case 561u: goto L_088BAD18;
    case 562u: goto L_088BAD20;
    case 563u: goto L_088BAD30;
    case 564u: goto L_088BAD38;
    case 565u: goto L_088BAD4C;
    case 566u: goto L_088BAD58;
    case 567u: goto L_088BAD64;
    case 568u: goto L_088BAD70;
    case 569u: goto L_088BAD90;
    case 570u: goto L_088BAD98;
    case 571u: goto L_088BADA4;
    case 572u: goto L_088BADAC;
    case 573u: goto L_088BADB0;
    case 574u: goto L_088BADD4;
    case 575u: goto L_088BADF4;
    case 576u: goto L_088BADFC;
    case 577u: goto L_088BAE10;
    case 578u: goto L_088BAE1C;
    case 579u: goto L_088BAE28;
    case 580u: goto L_088BAE34;
    case 581u: goto L_088BAE50;
    case 582u: goto L_088BAE58;
    case 583u: goto L_088BAE64;
    case 584u: goto L_088BAE6C;
    case 585u: goto L_088BAE70;
    case 586u: goto L_088BAE94;
    case 587u: goto L_088BAEB4;
    case 588u: goto L_088BAEBC;
    case 589u: goto L_088BAEDC;
    case 590u: goto L_088BAEE8;
    case 591u: goto L_088BAEF4;
    case 592u: goto L_088BAF04;
    case 593u: goto L_088BAF10;
    case 594u: goto L_088BAF18;
    case 595u: goto L_088BAF2C;
    case 596u: goto L_088BAF34;
    case 597u: goto L_088BAF3C;
    case 598u: goto L_088BAF44;
    case 599u: goto L_088BAF4C;
    case 600u: goto L_088BAF60;
    case 601u: goto L_088BAF6C;
    case 602u: goto L_088BAF78;
    case 603u: goto L_088BAF8C;
    case 604u: goto L_088BAFB0;
    case 605u: goto L_088BAFB4;
    case 606u: goto L_088BAFBC;
    case 607u: goto L_088BAFDC;
    case 608u: goto L_088BAFE4;
    case 609u: goto L_088BAFEC;
    case 610u: goto L_088BAFF8;
    case 611u: goto L_088BB004;
    case 612u: goto L_088BB010;
    case 613u: goto L_088BB018;
    case 614u: goto L_088BB020;
    case 615u: goto L_088BB028;
    case 616u: goto L_088BB038;
    case 617u: goto L_088BB040;
    case 618u: goto L_088BB048;
    case 619u: goto L_088BB058;
    case 620u: goto L_088BB060;
    case 621u: goto L_088BB068;
    case 622u: goto L_088BB070;
    case 623u: goto L_088BB078;
    case 624u: goto L_088BB080;
    case 625u: goto L_088BB090;
    case 626u: goto L_088BB098;
    case 627u: goto L_088BB0A0;
    case 628u: goto L_088BB0B0;
    case 629u: goto L_088BB0B8;
    case 630u: goto L_088BB0C0;
    case 631u: goto L_088BB0C4;
    case 632u: goto L_088BB0D8;
    case 633u: goto L_088BB100;
    case 634u: goto L_088BB108;
    case 635u: goto L_088BB110;
    case 636u: goto L_088BB11C;
    case 637u: goto L_088BB128;
    case 638u: goto L_088BB134;
    case 639u: goto L_088BB13C;
    case 640u: goto L_088BB144;
    case 641u: goto L_088BB14C;
    case 642u: goto L_088BB154;
    case 643u: goto L_088BB15C;
    case 644u: goto L_088BB160;
    case 645u: goto L_088BB178;
    case 646u: goto L_088BB190;
    case 647u: goto L_088BB198;
    case 648u: goto L_088BB1A0;
    case 649u: goto L_088BB1B0;
    case 650u: goto L_088BB1C0;
    case 651u: goto L_088BB1D0;
    case 652u: goto L_088BB1E4;
    case 653u: goto L_088BB1F4;
    case 654u: goto L_088BB1FC;
    case 655u: goto L_088BB210;
    case 656u: goto L_088BB220;
    case 657u: goto L_088BB22C;
    case 658u: goto L_088BB234;
    case 659u: goto L_088BB23C;
    case 660u: goto L_088BB244;
    case 661u: goto L_088BB24C;
    case 662u: goto L_088BB254;
    case 663u: goto L_088BB25C;
    case 664u: goto L_088BB26C;
    case 665u: goto L_088BB278;
    case 666u: goto L_088BB28C;
    case 667u: goto L_088BB298;
    case 668u: goto L_088BB2A4;
    case 669u: goto L_088BB2AC;
    case 670u: goto L_088BB2C8;
    case 671u: goto L_088BB2D0;
    case 672u: goto L_088BB2DC;
    case 673u: goto L_088BB2E4;
    case 674u: goto L_088BB2E8;
    case 675u: goto L_088BB2FC;
    case 676u: goto L_088BB308;
    case 677u: goto L_088BB32C;
    case 678u: goto L_088BB338;
    case 679u: goto L_088BB348;
    case 680u: goto L_088BB350;
    case 681u: goto L_088BB358;
    case 682u: goto L_088BB360;
    case 683u: goto L_088BB368;
    case 684u: goto L_088BB374;
    case 685u: goto L_088BB37C;
    case 686u: goto L_088BB384;
    case 687u: goto L_088BB38C;
    case 688u: goto L_088BB394;
    case 689u: goto L_088BB39C;
    case 690u: goto L_088BB3A4;
    case 691u: goto L_088BB3AC;
    case 692u: goto L_088BB3B4;
    case 693u: goto L_088BB3BC;
    case 694u: goto L_088BB3C4;
    case 695u: goto L_088BB3CC;
    case 696u: goto L_088BB3D4;
    case 697u: goto L_088BB3DC;
    case 698u: goto L_088BB3E4;
    case 699u: goto L_088BB3EC;
    case 700u: goto L_088BB3F4;
    case 701u: goto L_088BB414;
    case 702u: goto L_088BB420;
    case 703u: goto L_088BB438;
    case 704u: goto L_088BB440;
    case 705u: goto L_088BB458;
    case 706u: goto L_088BB464;
    case 707u: goto L_088BB474;
    case 708u: goto L_088BB47C;
    case 709u: goto L_088BB490;
    case 710u: goto L_088BB4A8;
    case 711u: goto L_088BB4B0;
    case 712u: goto L_088BB4CC;
    case 713u: goto L_088BB4F4;
    case 714u: goto L_088BB4FC;
    case 715u: goto L_088BB504;
    case 716u: goto L_088BB514;
    case 717u: goto L_088BB540;
    case 718u: goto L_088BB548;
    case 719u: goto L_088BB564;
    case 720u: goto L_088BB56C;
    case 721u: goto L_088BB574;
    case 722u: goto L_088BB57C;
    case 723u: goto L_088BB590;
    case 724u: goto L_088BB598;
    case 725u: goto L_088BB5AC;
    case 726u: goto L_088BB5B4;
    case 727u: goto L_088BB5BC;
    case 728u: goto L_088BB5C4;
    case 729u: goto L_088BB5D4;
    case 730u: goto L_088BB5E4;
    case 731u: goto L_088BB5EC;
    case 732u: goto L_088BB618;
    case 733u: goto L_088BB620;
    case 734u: goto L_088BB628;
    case 735u: goto L_088BB64C;
    case 736u: goto L_088BB654;
    case 737u: goto L_088BB66C;
    case 738u: goto L_088BB680;
    case 739u: goto L_088BB684;
    case 740u: goto L_088BB6A0;
    case 741u: goto L_088BB6C8;
    case 742u: goto L_088BB6E4;
    case 743u: goto L_088BB6F4;
    case 744u: goto L_088BB744;
    case 745u: goto L_088BB750;
    case 746u: goto L_088BB758;
    case 747u: goto L_088BB764;
    case 748u: goto L_088BB770;
    case 749u: goto L_088BB780;
    case 750u: goto L_088BB784;
    case 751u: goto L_088BB78C;
    case 752u: goto L_088BB794;
    case 753u: goto L_088BB7A0;
    case 754u: goto L_088BB7B4;
    case 755u: goto L_088BB7C0;
    case 756u: goto L_088BB7E0;
    case 757u: goto L_088BB7EC;
    case 758u: goto L_088BB7F8;
    case 759u: goto L_088BB804;
    case 760u: goto L_088BB818;
    case 761u: goto L_088BB824;
    case 762u: goto L_088BB830;
    case 763u: goto L_088BB850;
    case 764u: goto L_088BB85C;
    case 765u: goto L_088BB868;
    case 766u: goto L_088BB874;
    case 767u: goto L_088BB880;
    case 768u: goto L_088BB8A0;
    case 769u: goto L_088BB8AC;
    case 770u: goto L_088BB8B4;
    case 771u: goto L_088BB8BC;
    case 772u: goto L_088BB8C8;
    case 773u: goto L_088BB8D4;
    case 774u: goto L_088BB8E0;
    case 775u: goto L_088BB8EC;
    case 776u: goto L_088BB8F8;
    case 777u: goto L_088BB904;
    case 778u: goto L_088BB90C;
    case 779u: goto L_088BB920;
    case 780u: goto L_088BB938;
    case 781u: goto L_088BB948;
    case 782u: goto L_088BB950;
    case 783u: goto L_088BB954;
    case 784u: goto L_088BB960;
    case 785u: goto L_088BB990;
    case 786u: goto L_088BB99C;
    case 787u: goto L_088BB9FC;
    case 788u: goto L_088BBA1C;
    case 789u: goto L_088BBA34;
    case 790u: goto L_088BBA64;
    case 791u: goto L_088BBAC0;
    case 792u: goto L_088BBAF0;
    case 793u: goto L_088BBAF8;
    case 794u: goto L_088BBB04;
    case 795u: goto L_088BBB20;
    case 796u: goto L_088BBB30;
    case 797u: goto L_088BBB40;
    case 798u: goto L_088BBB58;
    case 799u: goto L_088BBB6C;
    case 800u: goto L_088BBB80;
    case 801u: goto L_088BBB84;
    case 802u: goto L_088BBB94;
    case 803u: goto L_088BBB9C;
    case 804u: goto L_088BBBDC;
    case 805u: goto L_088BBBEC;
    case 806u: goto L_088BBBFC;
    case 807u: goto L_088BBC44;
    case 808u: goto L_088BBC54;
    case 809u: goto L_088BBC64;
    case 810u: goto L_088BBCA0;
    case 811u: goto L_088BBCB0;
    case 812u: goto L_088BBCCC;
    case 813u: goto L_088BBCD4;
    case 814u: goto L_088BBD00;
    case 815u: goto L_088BBD08;
    case 816u: goto L_088BBD4C;
    case 817u: goto L_088BBD50;
    case 818u: goto L_088BBD58;
    case 819u: goto L_088BBD60;
    case 820u: goto L_088BBD80;
    case 821u: goto L_088BBD8C;
    case 822u: goto L_088BBD98;
    case 823u: goto L_088BBDA0;
    case 824u: goto L_088BBDAC;
    case 825u: goto L_088BBDB4;
    case 826u: goto L_088BBDC4;
    case 827u: goto L_088BBDCC;
    case 828u: goto L_088BBDD4;
    case 829u: goto L_088BBDDC;
    case 830u: goto L_088BBDE4;
    case 831u: goto L_088BBDE8;
    case 832u: goto L_088BBDF0;
    case 833u: goto L_088BBDF8;
    case 834u: goto L_088BBE08;
    case 835u: goto L_088BBE18;
    case 836u: goto L_088BBE20;
    case 837u: goto L_088BBE28;
    case 838u: goto L_088BBE30;
    case 839u: goto L_088BBE44;
    case 840u: goto L_088BBE64;
    case 841u: goto L_088BBE70;
    case 842u: goto L_088BBE7C;
    case 843u: goto L_088BBE84;
    case 844u: goto L_088BBE90;
    case 845u: goto L_088BBE98;
    case 846u: goto L_088BBEA8;
    case 847u: goto L_088BBEB0;
    case 848u: goto L_088BBEB8;
    case 849u: goto L_088BBEC0;
    case 850u: goto L_088BBEC8;
    case 851u: goto L_088BBECC;
    case 852u: goto L_088BBED4;
    case 853u: goto L_088BBEDC;
    case 854u: goto L_088BBEEC;
    case 855u: goto L_088BBEF4;
    case 856u: goto L_088BBEFC;
    case 857u: goto L_088BBF1C;
    case 858u: goto L_088BBF38;
    case 859u: goto L_088BBF40;
    case 860u: goto L_088BBF50;
    case 861u: goto L_088BBF60;
    case 862u: goto L_088BBF68;
    case 863u: goto L_088BBF70;
    case 864u: goto L_088BBF84;
    case 865u: goto L_088BBF94;
    case 866u: goto L_088BBFA0;
    case 867u: goto L_088BBFAC;
    case 868u: goto L_088BBFB4;
    case 869u: goto L_088BBFBC;
    case 870u: goto L_088BBFC4;
    case 871u: goto L_088BBFCC;
    case 872u: goto L_088BBFD8;
    case 873u: goto L_088BBFE0;
    case 874u: goto L_088BBFE8;
    case 875u: goto L_088BBFF0;
    case 876u: goto L_088BBFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088B8000:
    ctx.execute_vfpu_vdot_ct<74u, 34u, 6u, 4u>();
    ctx.execute_vfpu_vdot_ct<11u, 32u, 7u, 4u>();
    ctx.execute_vfpu_vdot_ct<43u, 33u, 7u, 4u>();
    ctx.execute_vfpu_vdot_ct<75u, 34u, 7u, 4u>();
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-64);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<9u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<10u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<11u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 647u, 0x088B7FCCu>(ctx, &aot_mem); return;
      }
      goto L_088B8030;
    }
L_088B8030:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
      if (branch_taken) {
          goto L_088B8064;
      }
      goto L_088B8038;
    }
L_088B8034:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    goto L_088B8038;
L_088B8038:
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_value); }
    goto L_088B803C;
L_088B803C:
    ctx.execute_vfpu_vdot_ct<8u, 32u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<40u, 33u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<72u, 34u, 4u, 4u>();
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_value); }
    { const bool branch_taken = ctx.gpr[9] != 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
      if (branch_taken) {
          goto L_088B803C;
      }
      goto L_088B8064;
    }
L_088B8064:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8074:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18804)));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18808), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18800)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18812), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18816), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18820), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18828)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18832), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8108:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B81E0;
      }
      goto L_088B811C;
    }
L_088B811C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-25176));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_088B8134;
L_088B8134:
    ctx.gpr[15] = (ctx.gpr[9] | 0u);
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[14] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_088B81B0;
      }
      goto L_088B8148;
    }
L_088B8148:
    ctx.gpr[24] = (ctx.gpr[8] + ctx.gpr[13]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[24] = (ctx.gpr[24] & 2u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B816C;
      }
      goto L_088B815C;
    }
L_088B815C:
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-32));
    ctx.gpr[13] = (ctx.gpr[13] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 24u));
      if (branch_taken) {
          goto L_088B816C;
      }
      goto L_088B816C;
    }
L_088B816C:
    ctx.gpr[24] = (ctx.gpr[8] + ctx.gpr[12]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[24] = (ctx.gpr[24] & 2u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8190;
      }
      goto L_088B8180;
    }
L_088B8180:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-32));
    ctx.gpr[12] = (ctx.gpr[12] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 24u));
      if (branch_taken) {
          goto L_088B8190;
      }
      goto L_088B8190;
    }
L_088B8190:
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[12];
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B81A0;
      }
      goto L_088B8198;
    }
L_088B8198:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (0u | 1u);
      if (branch_taken) {
          goto L_088B81C0;
      }
      goto L_088B81A0;
    }
L_088B81A0:
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_088B8148;
      }
      goto L_088B81B0;
    }
L_088B81B0:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[12] = (0u | 0u);
      if (branch_taken) {
          goto L_088B81C0;
      }
      goto L_088B81B8;
    }
L_088B81B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (0u | 1u);
      if (branch_taken) {
          goto L_088B81C0;
      }
      goto L_088B81C0;
    }
L_088B81C0:
    if (ctx.gpr[12] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
        goto L_088B81E8;
    }
    goto L_088B81C8;
L_088B81C8:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(32));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(32));
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088B8134;
      }
      goto L_088B81E0;
    }
L_088B81E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B8200;
      }
      goto L_088B81E8;
    }
L_088B81E8:
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[11]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088B8200;
L_088B8200:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8208:
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
L_088B8234:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B823C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B8268u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9672));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 385u, 0x08AED584u>(ctx, &aot_mem) && ctx.pc == 0x088B8268u) goto L_088B8268;
    return;
L_088B8268:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088B82B8;
      }
      goto L_088B8270;
    }
L_088B8270:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x088B8280u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9680));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 385u, 0x08AED584u>(ctx, &aot_mem) && ctx.pc == 0x088B8280u) goto L_088B8280;
    return;
L_088B8280:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088B82B8;
      }
      goto L_088B8288;
    }
L_088B8288:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x088B8298u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9688));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 385u, 0x08AED584u>(ctx, &aot_mem) && ctx.pc == 0x088B8298u) goto L_088B8298;
    return;
L_088B8298:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088B82B8;
      }
      goto L_088B82A0;
    }
L_088B82A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x088B82B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9696));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 385u, 0x08AED584u>(ctx, &aot_mem) && ctx.pc == 0x088B82B0u) goto L_088B82B0;
    return;
L_088B82B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B82CC;
      }
      goto L_088B82B8;
    }
L_088B82B8:
    ctx.gpr[31] = (0x088B82C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 448u, 0x08AC70E8u>(ctx, &aot_mem) && ctx.pc == 0x088B82C0u) goto L_088B82C0;
    return;
L_088B82C0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B82DC;
      }
      goto L_088B82CC;
    }
L_088B82CC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B82D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9700));
    goto L_088B8208;
L_088B82D8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088B82DC;
L_088B82DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B82F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B8308u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 452u, 0x08AC7130u>(ctx, &aot_mem) && ctx.pc == 0x088B8308u) goto L_088B8308;
    return;
L_088B8308:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B831C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8324:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B8334u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 468u, 0x08AC7270u>(ctx, &aot_mem) && ctx.pc == 0x088B8334u) goto L_088B8334;
    return;
L_088B8334:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8340:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B8358u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 456u, 0x08AC7178u>(ctx, &aot_mem) && ctx.pc == 0x088B8358u) goto L_088B8358;
    return;
L_088B8358:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8368:
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
L_088B8394:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B83B8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 629u, 0x0892FCC0u>(ctx, &aot_mem) && ctx.pc == 0x088B83B8u) goto L_088B83B8;
    return;
L_088B83B8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B83C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10788));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 586u, 0x0892FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x088B83C4u) goto L_088B83C4;
    return;
L_088B83C4:
    ctx.gpr[31] = (0x088B83CCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC6Cu>(ctx, &aot_mem) && ctx.pc == 0x088B83CCu) goto L_088B83CC;
    return;
L_088B83CC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10800));
    ctx.gpr[31] = (0x088B83DCu);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 109u, 0x08A0D19Cu>(ctx, &aot_mem) && ctx.pc == 0x088B83DCu) goto L_088B83DC;
    return;
L_088B83DC:
    ctx.gpr[31] = (0x088B83E4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 631u, 0x0892FCE4u>(ctx, &aot_mem) && ctx.pc == 0x088B83E4u) goto L_088B83E4;
    return;
L_088B83E4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B83F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B8438;
      }
      goto L_088B8414;
    }
L_088B8414:
    ctx.gpr[31] = (0x088B841Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088B8708;
L_088B841C:
    ctx.gpr[31] = (0x088B8424u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 115u, 0x08A0D1E0u>(ctx, &aot_mem) && ctx.pc == 0x088B8424u) goto L_088B8424;
    return;
L_088B8424:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
      if (branch_taken) {
          goto L_088B8438;
      }
      goto L_088B8430;
    }
L_088B8430:
    ctx.gpr[31] = (0x088B8438u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088B8438u) goto L_088B8438;
    return;
L_088B8438:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B844C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B84A4;
      }
      goto L_088B8470;
    }
L_088B8470:
    ctx.gpr[4] = (17036u << 16u);
    ctx.gpr[31] = (0x088B847Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 162u, 0x0883CBECu>(ctx, &aot_mem) && ctx.pc == 0x088B847Cu) goto L_088B847C;
    return;
L_088B847C:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088B8490u);
    ctx.gpr[4] = (0u | 2064u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 251u, 0x0899DA4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B8490u) goto L_088B8490;
    return;
L_088B8490:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088B84AC;
      }
      goto L_088B849C;
    }
L_088B849C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088B84BC;
      }
      goto L_088B84A4;
    }
L_088B84A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8528;
      }
      goto L_088B84AC;
    }
L_088B84AC:
    ctx.gpr[31] = (0x088B84B4u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 340u, 0x089A5734u>(ctx, &aot_mem) && ctx.pc == 0x088B84B4u) goto L_088B84B4;
    return;
L_088B84B4:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_088B84BC;
L_088B84BC:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088B84E8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x088B84E8u) goto L_088B84E8;
    return;
L_088B84E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088B84FCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x088B84FCu) goto L_088B84FC;
    return;
L_088B84FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27456)));
    ctx.gpr[31] = (0x088B8528u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B85C4;
L_088B8528:
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
L_088B8544:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B8568;
      }
      goto L_088B8560;
    }
L_088B8560:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B85B4;
      }
      goto L_088B8568;
    }
L_088B8568:
    ctx.gpr[31] = (0x088B8570u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.pc = 0x08B0BCBCu;
    return;
L_088B8570:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088B8584u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BCACu;
    return;
L_088B8584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (13702u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088B85B4;
L_088B85B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B85C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B8618;
      }
      goto L_088B85E4;
    }
L_088B85E4:
    ctx.gpr[18] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(27456), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (0u | 119u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(18892));
      if (branch_taken) {
          goto L_088B8620;
      }
      goto L_088B860C;
    }
L_088B860C:
    ctx.gpr[4] = (0u | 118u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B8624;
      }
      goto L_088B8618;
    }
L_088B8618:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B86F0;
      }
      goto L_088B8620;
    }
L_088B8620:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_088B8624;
L_088B8624:
    ctx.gpr[31] = (0x088B862Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 568u, 0x089C66D8u>(ctx, &aot_mem) && ctx.pc == 0x088B862Cu) goto L_088B862C;
    return;
L_088B862C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27456)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088B864Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 90u, 0x08A28CB4u>(ctx, &aot_mem) && ctx.pc == 0x088B864Cu) goto L_088B864C;
    return;
L_088B864C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088B86C0;
      }
      goto L_088B8654;
    }
L_088B8654:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 109 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B86C0;
      }
      goto L_088B865C;
    }
L_088B865C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 120 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B866C;
      }
      goto L_088B8664;
    }
L_088B8664:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B86C0;
      }
      goto L_088B866C;
    }
L_088B866C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_088B8684;
      }
      goto L_088B867C;
    }
L_088B867C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B86E4;
      }
      goto L_088B8684;
    }
L_088B8684:
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B86E4;
      }
      goto L_088B86B0;
    }
L_088B86B0:
    ctx.gpr[31] = (0x088B86B8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x088B86B8u) goto L_088B86B8;
    return;
L_088B86B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088B86E4;
      }
      goto L_088B86C0;
    }
L_088B86C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27456)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088B86E0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 667u, 0x089C6D48u>(ctx, &aot_mem) && ctx.pc == 0x088B86E0u) goto L_088B86E0;
    return;
L_088B86E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_088B86E4;
L_088B86E4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27456)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_088B86F0;
L_088B86F0:
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
L_088B8708:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8738;
      }
      goto L_088B8724;
    }
L_088B8724:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B8740;
      }
      goto L_088B8730;
    }
L_088B8730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B875C;
      }
      goto L_088B8738;
    }
L_088B8738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B878C;
      }
      goto L_088B8740;
    }
L_088B8740:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088B8758u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B8758u) goto L_088B8758;
    return;
L_088B8758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088B875C;
L_088B875C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8780;
      }
      goto L_088B8764;
    }
L_088B8764:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088B8780u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B8780u) goto L_088B8780;
    return;
L_088B8780:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x088B878Cu);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 568u, 0x089C66D8u>(ctx, &aot_mem) && ctx.pc == 0x088B878Cu) goto L_088B878C;
    return;
L_088B878C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B879C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B87FC;
      }
      goto L_088B87D8;
    }
L_088B87D8:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (2225u << 16u);
    ctx.gpr[4] = (17332u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10820));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B8804;
      }
      goto L_088B87FC;
    }
L_088B87FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8AC4;
      }
      goto L_088B8804;
    }
L_088B8804:
    ctx.gpr[31] = (0x088B880Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 914u, 0x089C7BFCu>(ctx, &aot_mem) && ctx.pc == 0x088B880Cu) goto L_088B880C;
    return;
L_088B880C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8824;
      }
      goto L_088B8814;
    }
L_088B8814:
    ctx.gpr[31] = (0x088B881Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088B8368;
L_088B881C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8804;
      }
      goto L_088B8824;
    }
L_088B8824:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[23] = (0u | 7u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (2229u << 16u);
    goto L_088B8838;
L_088B8838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B88D4;
      }
      goto L_088B8844;
    }
L_088B8844:
    ctx.gpr[31] = (0x088B884Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 665u, 0x089C6D0Cu>(ctx, &aot_mem) && ctx.pc == 0x088B884Cu) goto L_088B884C;
    return;
L_088B884C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B88D4;
      }
      goto L_088B8854;
    }
L_088B8854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B88D4;
      }
      goto L_088B8874;
    }
L_088B8874:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[4] & 67u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B88D4;
      }
      goto L_088B8884;
    }
L_088B8884:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088B88A0;
      }
      goto L_088B8894;
    }
L_088B8894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088B88A0;
L_088B88A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B88D4;
      }
      goto L_088B88AC;
    }
L_088B88AC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088B88C0;
      }
      goto L_088B88B4;
    }
L_088B88B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088B88C0;
L_088B88C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088B88D4;
      }
      goto L_088B88CC;
    }
L_088B88CC:
    ctx.gpr[31] = (0x088B88D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x088B88D4u) goto L_088B88D4;
    return;
L_088B88D4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(300) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B8838;
      }
      goto L_088B88E8;
    }
L_088B88E8:
    ctx.gpr[31] = (0x088B88F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 553u, 0x089C65D8u>(ctx, &aot_mem) && ctx.pc == 0x088B88F0u) goto L_088B88F0;
    return;
L_088B88F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088B8944;
      }
      goto L_088B88FC;
    }
L_088B88FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
      if (branch_taken) {
          goto L_088B8930;
      }
      goto L_088B8908;
    }
L_088B8908:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8944;
      }
      goto L_088B8930;
    }
L_088B8930:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088B893Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B85C4;
L_088B893C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_088B8944;
L_088B8944:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B8A9C;
      }
      goto L_088B8950;
    }
L_088B8950:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_088B8A98;
      }
      goto L_088B8964;
    }
L_088B8964:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B8A9C;
      }
      goto L_088B898C;
    }
L_088B898C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B8A04;
      }
      goto L_088B89A4;
    }
L_088B89A4:
    ctx.gpr[31] = (0x088B89ACu);
    // nop
    ctx.pc = 0x08B0BCBCu;
    return;
L_088B89AC:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088B89C0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BCACu;
    return;
L_088B89C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (13702u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B8A9C;
      }
      goto L_088B8A04;
    }
L_088B8A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088B8A34;
      }
      goto L_088B8A14;
    }
L_088B8A14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088B8A2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B8A2Cu) goto L_088B8A2C;
    return;
L_088B8A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088B8A34;
L_088B8A34:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088B8A58u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B8A58u) goto L_088B8A58;
    return;
L_088B8A58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18892));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088B8A8C;
      }
      goto L_088B8A80;
    }
L_088B8A80:
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(744), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088B8A94;
      }
      goto L_088B8A8C;
    }
L_088B8A8C:
    ctx.gpr[5] = (0u | 48u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(744), ctx.gpr[5]);
    goto L_088B8A94;
L_088B8A94:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_088B8A98;
L_088B8A98:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088B8A9C;
L_088B8A9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8124)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[13] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088B8AC4;
      }
      goto L_088B8ABC;
    }
L_088B8ABC:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088B8AC4;
L_088B8AC4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8AF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B8D9C;
      }
      goto L_088B8B20;
    }
L_088B8B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8D94;
      }
      goto L_088B8B30;
    }
L_088B8B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088B8B40u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x088B8B40u) goto L_088B8B40;
    return;
L_088B8B40:
    ctx.gpr[4] = (17307u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15786u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 43691u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 220u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088B8B94u);
    ctx.gpr[8] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 339u, 0x08A264E0u>(ctx, &aot_mem) && ctx.pc == 0x088B8B94u) goto L_088B8B94;
    return;
L_088B8B94:
    ctx.gpr[31] = (0x088B8B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 644u, 0x0887396Cu>(ctx, &aot_mem) && ctx.pc == 0x088B8B9Cu) goto L_088B8B9C;
    return;
L_088B8B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (49008u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 41943u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49300u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088B8C7Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 607u, 0x088735E0u>(ctx, &aot_mem) && ctx.pc == 0x088B8C7Cu) goto L_088B8C7C;
    return;
L_088B8C7C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B8D10u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 303u, 0x08A1DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x088B8D10u) goto L_088B8D10;
    return;
L_088B8D10:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (49844u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B8D28u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 266u, 0x08A1D5B0u>(ctx, &aot_mem) && ctx.pc == 0x088B8D28u) goto L_088B8D28;
    return;
L_088B8D28:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B8D38u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 303u, 0x08A1DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x088B8D38u) goto L_088B8D38;
    return;
L_088B8D38:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B8D4Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 266u, 0x08A1D5B0u>(ctx, &aot_mem) && ctx.pc == 0x088B8D4Cu) goto L_088B8D4C;
    return;
L_088B8D4C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B8D5Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 303u, 0x08A1DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x088B8D5Cu) goto L_088B8D5C;
    return;
L_088B8D5C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B8D6Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 148u, 0x08A5D27Cu>(ctx, &aot_mem) && ctx.pc == 0x088B8D6Cu) goto L_088B8D6C;
    return;
L_088B8D6C:
    ctx.gpr[31] = (0x088B8D74u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x08A5D100u>(ctx, &aot_mem) && ctx.pc == 0x088B8D74u) goto L_088B8D74;
    return;
L_088B8D74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088B8D84u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x088B8D84u) goto L_088B8D84;
    return;
L_088B8D84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8DA4;
      }
      goto L_088B8D8C;
    }
L_088B8D8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B8DD4;
      }
      goto L_088B8D94;
    }
L_088B8D94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8E74;
      }
      goto L_088B8D9C;
    }
L_088B8D9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8E74;
      }
      goto L_088B8DA4;
    }
L_088B8DA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x088B8DB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x088B8DB8u) goto L_088B8DB8;
    return;
L_088B8DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x088B8DD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x088B8DD0u) goto L_088B8DD0;
    return;
L_088B8DD0:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088B8DD4;
L_088B8DD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8124)));
    ctx.gpr[17] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-8144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088B8E10u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B8E10u) goto L_088B8E10;
    return;
L_088B8E10:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-8144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088B8E30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B8E30u) goto L_088B8E30;
    return;
L_088B8E30:
    ctx.gpr[31] = (0x088B8E38u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 413u, 0x088CF2D8u>(ctx, &aot_mem) && ctx.pc == 0x088B8E38u) goto L_088B8E38;
    return;
L_088B8E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(120));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088B8E54u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B8E54u) goto L_088B8E54;
    return;
L_088B8E54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B8E74;
      }
      goto L_088B8E64;
    }
L_088B8E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088B8E74;
L_088B8E74:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8E94:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18860)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(18856)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(18884)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[3] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(18864), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(18872), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(18868), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(18876), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(18880), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(18888), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B8F28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20196)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] | 14571u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20192)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20220)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20200), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[9] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[9] + static_cast<std::uint32_t>(21040));
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(20208), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20204), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (15744u << 16u);
    ctx.gpr[11] = (2227u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[2] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(20212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[3] = (2227u << 16u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B8FD8u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20224), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 239u, 0x08A7D51Cu>(ctx, &aot_mem) && ctx.pc == 0x088B8FD8u) goto L_088B8FD8;
    return;
L_088B8FD8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9724));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[31] = (0x088B8FF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20228));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x088B8FF8u) goto L_088B8FF8;
    return;
L_088B8FF8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 36u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21112));
    ctx.gpr[31] = (0x088B9014u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10880));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 553u, 0x0886AF04u>(ctx, &aot_mem) && ctx.pc == 0x088B9014u) goto L_088B9014;
    return;
L_088B9014:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9024:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B9038u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10896));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 508u, 0x08872EACu>(ctx, &aot_mem) && ctx.pc == 0x088B9038u) goto L_088B9038;
    return;
L_088B9038:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9044:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(21128));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B9070u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20240));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x088B9070u) goto L_088B9070;
    return;
L_088B9070:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B90B8;
      }
      goto L_088B907C;
    }
L_088B907C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B9088u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 407u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088B9088u) goto L_088B9088;
    return;
L_088B9088:
    ctx.gpr[31] = (0x088B9090u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088B9090u) goto L_088B9090;
    return;
L_088B9090:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 92u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B90B8;
      }
      goto L_088B90A8;
    }
L_088B90A8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B90B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10920));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 407u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088B90B8u) goto L_088B90B8;
    return;
L_088B90B8:
    ctx.gpr[31] = (0x088B90C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 508u, 0x08872EACu>(ctx, &aot_mem) && ctx.pc == 0x088B90C0u) goto L_088B90C0;
    return;
L_088B90C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B90D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B9100u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 507u, 0x08872EA0u>(ctx, &aot_mem) && ctx.pc == 0x088B9100u) goto L_088B9100;
    return;
L_088B9100:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088B9114u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B9114u) goto L_088B9114;
    return;
L_088B9114:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B912C;
      }
      goto L_088B9120;
    }
L_088B9120:
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 16384u);
      if (branch_taken) {
          goto L_088B9134;
      }
      goto L_088B912C;
    }
L_088B912C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088B9180;
      }
      goto L_088B9134;
    }
L_088B9134:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 16384u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x088B914Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B914Cu) goto L_088B914C;
    return;
L_088B914C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088B917C;
      }
      goto L_088B9158;
    }
L_088B9158:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B9134;
      }
      goto L_088B9160;
    }
L_088B9160:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088B9174u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B9174u) goto L_088B9174;
    return;
L_088B9174:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088B9180;
      }
      goto L_088B917C;
    }
L_088B917C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088B9180;
L_088B9180:
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
L_088B91A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B91BCu);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 507u, 0x08872EA0u>(ctx, &aot_mem) && ctx.pc == 0x088B91BCu) goto L_088B91BC;
    return;
L_088B91BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088B91CCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B91CCu) goto L_088B91CC;
    return;
L_088B91CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B91E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B9204u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 507u, 0x08872EA0u>(ctx, &aot_mem) && ctx.pc == 0x088B9204u) goto L_088B9204;
    return;
L_088B9204:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x088B921Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B921Cu) goto L_088B921C;
    return;
L_088B921C:
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
L_088B9234:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B9258u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 507u, 0x08872EA0u>(ctx, &aot_mem) && ctx.pc == 0x088B9258u) goto L_088B9258;
    return;
L_088B9258:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088B926Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B926Cu) goto L_088B926C;
    return;
L_088B926C:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
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
L_088B9288:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B929Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 507u, 0x08872EA0u>(ctx, &aot_mem) && ctx.pc == 0x088B929Cu) goto L_088B929C;
    return;
L_088B929C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088B92A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B92A8u) goto L_088B92A8;
    return;
L_088B92A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B92B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B92C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B92C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17235u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18756));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (20527u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14896));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (18271u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20563));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (12101u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19777));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (17490u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21333));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (47u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21065));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B933Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 407u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088B933Cu) goto L_088B933C;
    return;
L_088B933C:
    ctx.gpr[31] = (0x088B9344u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 905u, 0x08AEF368u>(ctx, &aot_mem) && ctx.pc == 0x088B9344u) goto L_088B9344;
    return;
L_088B9344:
    ctx.gpr[31] = (0x088B934Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 118u, 0x08A58AD4u>(ctx, &aot_mem) && ctx.pc == 0x088B934Cu) goto L_088B934C;
    return;
L_088B934C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B9360;
      }
      goto L_088B9358;
    }
L_088B9358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B9374;
      }
      goto L_088B9360;
    }
L_088B9360:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088B9374;
L_088B9374:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B938C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 5u);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088B9404;
      }
      goto L_088B93B4;
    }
L_088B93B4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B93D8;
      }
      goto L_088B93BC;
    }
L_088B93BC:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B9430;
      }
      goto L_088B93C8;
    }
L_088B93C8:
    if (ctx.gpr[5] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_088B9434;
    }
    goto L_088B93D0;
L_088B93D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9454;
      }
      goto L_088B93D8;
    }
L_088B93D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(10944));
    ctx.gpr[31] = (0x088B93ECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088B93ECu) goto L_088B93EC;
    return;
L_088B93EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B93FCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 560u, 0x089171D8u>(ctx, &aot_mem) && ctx.pc == 0x088B93FCu) goto L_088B93FC;
    return;
L_088B93FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088B9454;
      }
      goto L_088B9404;
    }
L_088B9404:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(10964));
    ctx.gpr[31] = (0x088B9418u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088B9418u) goto L_088B9418;
    return;
L_088B9418:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B9428u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 560u, 0x089171D8u>(ctx, &aot_mem) && ctx.pc == 0x088B9428u) goto L_088B9428;
    return;
L_088B9428:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088B9454;
      }
      goto L_088B9430;
    }
L_088B9430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_088B9434;
L_088B9434:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088B9454;
L_088B9454:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
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
L_088B9474:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088B94B0;
      }
      goto L_088B9490;
    }
L_088B9490:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088B94A8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 584u, 0x08AEA830u>(ctx, &aot_mem) && ctx.pc == 0x088B94A8u) goto L_088B94A8;
    return;
L_088B94A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B94CC;
      }
      goto L_088B94B0;
    }
L_088B94B0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088B94C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B94C4u) goto L_088B94C4;
    return;
L_088B94C4:
    ctx.gpr[31] = (0x088B94CCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 242u, 0x08AECC58u>(ctx, &aot_mem) && ctx.pc == 0x088B94CCu) goto L_088B94CC;
    return;
L_088B94CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B94D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[31] = (0x088B9508u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 583u, 0x08AEA7CCu>(ctx, &aot_mem) && ctx.pc == 0x088B9508u) goto L_088B9508;
    return;
L_088B9508:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
        goto L_088B9524;
    }
    goto L_088B9510;
L_088B9510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088B9520u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B9520u) goto L_088B9520;
    return;
L_088B9520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    goto L_088B9524;
L_088B9524:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B953C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4097 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B959C;
      }
      goto L_088B956C;
    }
L_088B956C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (0u | 24u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4096 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B959C;
      }
      goto L_088B9594;
    }
L_088B9594:
    ctx.gpr[31] = (0x088B959Cu);
    ctx.gpr[5] = (0u | 4096u);
    goto L_088B9708;
L_088B959C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B95A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[8] = (ctx.gpr[8] >> 29u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9614;
      }
      goto L_088B95E0;
    }
L_088B95E0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    goto L_088B95E4;
L_088B95E4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 3u));
    ctx.gpr[9] = (ctx.gpr[9] >> 29u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 3u));
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
        goto L_088B95E4;
    }
    goto L_088B9614;
L_088B9614:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B968C;
      }
      goto L_088B9628;
    }
L_088B9628:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_088B962C;
L_088B962C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[9] = (ctx.gpr[9] >> 29u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[9]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[9] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] >> 29u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(24));
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_088B962C;
    }
    goto L_088B968C;
L_088B968C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9698:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B96CCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x088B96CCu) goto L_088B96CC;
    return;
L_088B96CC:
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B96F0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_088B95A8;
L_088B96F0:
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
L_088B9708:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[17] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B9750u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x088B9750u) goto L_088B9750;
    return;
L_088B9750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[18]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
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
L_088B97B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B97D8;
      }
      goto L_088B97C8;
    }
L_088B97C8:
    ctx.gpr[31] = (0x088B97D0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[6]);
    goto L_088B9698;
L_088B97D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B97E4;
      }
      goto L_088B97D8;
    }
L_088B97D8:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088B97E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5));
    goto L_088B9698;
L_088B97E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B97F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4097 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B9818;
      }
      goto L_088B9808;
    }
L_088B9808:
    ctx.gpr[31] = (0x088B9810u);
    ctx.gpr[5] = (0u | 5u);
    goto L_088B9474;
L_088B9810:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9844;
      }
      goto L_088B9818;
    }
L_088B9818:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x088B9824u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    goto L_088B9708;
L_088B9824:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4097 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B9844;
      }
      goto L_088B9838;
    }
L_088B9838:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[31] = (0x088B9844u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10988));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 360u, 0x08A01968u>(ctx, &aot_mem) && ctx.pc == 0x088B9844u) goto L_088B9844;
    return;
L_088B9844:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9850:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B992C;
      }
      goto L_088B9874;
    }
L_088B9874:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(49)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B992C;
      }
      goto L_088B9880;
    }
L_088B9880:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[5] - ctx.gpr[17]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[8] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_088B98B0;
      }
      goto L_088B98A8;
    }
L_088B98A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
      if (branch_taken) {
          goto L_088B98C8;
      }
      goto L_088B98B0;
    }
L_088B98B0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (0u | 24u);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[6]);
    goto L_088B98C8;
L_088B98C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 161 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B98F0;
      }
      goto L_088B98DC;
    }
L_088B98DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B98E8u);
    ctx.gpr[5] = (0u | 20u);
    goto L_088B97B0;
L_088B98E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_088B98F0;
L_088B98F0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(160));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[19];
    ctx.gpr[31] = (0x088B9908u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B9908u) goto L_088B9908;
    return;
L_088B9908:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_088B992C;
L_088B992C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9948:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[7] = (ctx.gpr[7] >> 29u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 3u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B99E4;
      }
      goto L_088B9994;
    }
L_088B9994:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B99BC;
      }
      goto L_088B99B4;
    }
L_088B99B4:
    ctx.gpr[31] = (0x088B99BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B97B0;
L_088B99BC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B99E4;
      }
      goto L_088B99C4;
    }
L_088B99C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B99C4;
      }
      goto L_088B99E4;
    }
L_088B99E4:
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B99F8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 690u, 0x08927FA4u>(ctx, &aot_mem) && ctx.pc == 0x088B99F8u) goto L_088B99F8;
    return;
L_088B99F8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[17] << 3u);
      if (branch_taken) {
          goto L_088B9A5C;
      }
      goto L_088B9A0C;
    }
L_088B9A0C:
    ctx.gpr[20] = (0u | 0u);
    goto L_088B9A10;
L_088B9A10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[19]);
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B9A30u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 80u, 0x08928534u>(ctx, &aot_mem) && ctx.pc == 0x088B9A30u) goto L_088B9A30;
    return;
L_088B9A30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B9A10;
      }
      goto L_088B9A5C;
    }
L_088B9A5C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088B9A7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11004));
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 560u, 0x089171D8u>(ctx, &aot_mem) && ctx.pc == 0x088B9A7Cu) goto L_088B9A7C;
    return;
L_088B9A7C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B9A90u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 69u, 0x08928474u>(ctx, &aot_mem) && ctx.pc == 0x088B9A90u) goto L_088B9A90;
    return;
L_088B9A90:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (0u | 3u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B9AE8;
      }
      goto L_088B9AD4;
    }
L_088B9AD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B9AE0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_088B97B0;
L_088B9AE0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    goto L_088B9AE8;
L_088B9AE8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
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
L_088B9B14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B9B3Cu);
    ctx.gpr[6] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 11u, 0x08AA8148u>(ctx, &aot_mem) && ctx.pc == 0x088B9B3Cu) goto L_088B9B3C;
    return;
L_088B9B3C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[18] = (ctx.gpr[16] - ctx.gpr[18]);
      if (branch_taken) {
          goto L_088B9B68;
      }
      goto L_088B9B54;
    }
L_088B9B54:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B9B68u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11008));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 322u, 0x08A015E8u>(ctx, &aot_mem) && ctx.pc == 0x088B9B68u) goto L_088B9B68;
    return;
L_088B9B68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9BAC;
      }
      goto L_088B9B7C;
    }
L_088B9B7C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088B9B7C;
      }
      goto L_088B9BA8;
    }
L_088B9BA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_088B9BAC;
L_088B9BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B9BD4;
      }
      goto L_088B9BC0;
    }
L_088B9BC0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B9BCCu);
    ctx.gpr[5] = (0u | 1u);
    goto L_088B97B0;
L_088B9BCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    goto L_088B9BD4;
L_088B9BD4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9C18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[18] = (ctx.gpr[5] - ctx.gpr[18]);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B9C5C;
      }
      goto L_088B9C4C;
    }
L_088B9C4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B9C58u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_088B9B14;
L_088B9C58:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_088B9C5C;
L_088B9C5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B9C78;
      }
      goto L_088B9C70;
    }
L_088B9C70:
    ctx.gpr[31] = (0x088B9C78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B97F0;
L_088B9C78:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B9D64;
      }
      goto L_088B9C88;
    }
L_088B9C88:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(70)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9CA8;
      }
      goto L_088B9C98;
    }
L_088B9C98:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(69)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x088B9CA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B9948;
L_088B9CA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(71)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_088B9CD8;
    }
    goto L_088B9CC8;
L_088B9CC8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(71)));
    ctx.gpr[31] = (0x088B9CD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B97B0;
L_088B9CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_088B9CD8;
L_088B9CD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(71)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9D54;
      }
      goto L_088B9D2C;
    }
L_088B9D2C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_088B9D30;
L_088B9D30:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B9D30;
      }
      goto L_088B9D54;
    }
L_088B9D54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B9DFC;
      }
      goto L_088B9D64;
    }
L_088B9D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 161 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088B9D84;
      }
      goto L_088B9D7C;
    }
L_088B9D7C:
    ctx.gpr[31] = (0x088B9D84u);
    ctx.gpr[5] = (0u | 20u);
    goto L_088B97B0;
L_088B9D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(160));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9DD8;
      }
      goto L_088B9DC8;
    }
L_088B9DC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B9DD8u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088B9850;
L_088B9DD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088B9DECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B9DECu) goto L_088B9DEC;
    return;
L_088B9DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[2] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_088B9DFC;
      }
      goto L_088B9DFC;
    }
L_088B9DFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9E18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B9E40u);
    ctx.gpr[5] = (0u | 1u);
    goto L_088B9850;
L_088B9E40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B9E90;
      }
      goto L_088B9E54;
    }
L_088B9E54:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088B9E90;
      }
      goto L_088B9E68;
    }
L_088B9E68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x088B9E78u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088B9850;
L_088B9E78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088B9E68;
      }
      goto L_088B9E90;
    }
L_088B9E90:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9EAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] & 2u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088B9EEC;
      }
      goto L_088B9EDC;
    }
L_088B9EDC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088B9EE8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088B9E18;
L_088B9EE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088B9EEC;
L_088B9EEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    goto L_088B9F08;
L_088B9F08:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9F54;
      }
      goto L_088B9F10;
    }
L_088B9F10:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B9F54;
      }
      goto L_088B9F20;
    }
L_088B9F20:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088B9F08;
      }
      goto L_088B9F54;
    }
L_088B9F54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088B9F78;
      }
      goto L_088B9F60;
    }
L_088B9F60:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088B9F60;
      }
      goto L_088B9F78;
    }
L_088B9F78:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
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
L_088B9F94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(46)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[7] & 65535u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < 200 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088BA00C;
      }
      goto L_088B9FCC;
    }
L_088B9FCC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(46)));
    ctx.gpr[5] = (0u | 200u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B9FF4;
      }
      goto L_088B9FDC;
    }
L_088B9FDC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B9FECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11016));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 360u, 0x08A01968u>(ctx, &aot_mem) && ctx.pc == 0x088B9FECu) goto L_088B9FEC;
    return;
L_088B9FEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA00C;
      }
      goto L_088B9FF4;
    }
L_088B9FF4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 225 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BA00C;
      }
      goto L_088BA000;
    }
L_088BA000:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088BA00Cu);
    ctx.gpr[5] = (0u | 5u);
    goto L_088B9474;
L_088BA00C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088BA018u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088B9C18;
L_088BA018:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BA030;
      }
      goto L_088BA024;
    }
L_088BA024:
    ctx.gpr[31] = (0x088BA02Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 375u, 0x088D2E00u>(ctx, &aot_mem) && ctx.pc == 0x088BA02Cu) goto L_088BA02C;
    return;
L_088BA02C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088BA030;
L_088BA030:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BA040u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_088B9EAC;
L_088BA040:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(46)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BA06C;
      }
      goto L_088BA064;
    }
L_088BA064:
    ctx.gpr[31] = (0x088BA06Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 111u, 0x0891C878u>(ctx, &aot_mem) && ctx.pc == 0x088BA06Cu) goto L_088BA06C;
    return;
L_088BA06C:
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
L_088BA084:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088BA0C8;
      }
      goto L_088BA0A8;
    }
L_088BA0A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    ctx.gpr[31] = (0x088BA0C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B9C18;
L_088BA0C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA12C;
      }
      goto L_088BA0C8;
    }
L_088BA0C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA120;
      }
      goto L_088BA0D8;
    }
L_088BA0D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] >> 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BA104u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088B9EAC;
L_088BA104:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BA118;
      }
      goto L_088BA10C;
    }
L_088BA10C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_088BA118;
L_088BA118:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA12C;
      }
      goto L_088BA120;
    }
L_088BA120:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_088BA12C;
L_088BA12C:
    ctx.gpr[31] = (0x088BA134u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 375u, 0x088D2E00u>(ctx, &aot_mem) && ctx.pc == 0x088BA134u) goto L_088BA134;
    return;
L_088BA134:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA150;
      }
      goto L_088BA140;
    }
L_088BA140:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BA150u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088B9EAC;
L_088BA150:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA164:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    ctx.gpr[31] = (0x088BA1A4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088BA1A4u) goto L_088BA1A4;
    return;
L_088BA1A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BA1B4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 560u, 0x089171D8u>(ctx, &aot_mem) && ctx.pc == 0x088BA1B4u) goto L_088BA1B4;
    return;
L_088BA1B4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088BA1D8;
      }
      goto L_088BA1D0;
    }
L_088BA1D0:
    ctx.gpr[31] = (0x088BA1D8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_088B97B0;
L_088BA1D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA204:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BA298;
      }
      goto L_088BA22C;
    }
L_088BA22C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] >> 29u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA280;
      }
      goto L_088BA258;
    }
L_088BA258:
    ctx.gpr[5] = (2188u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(49)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BA270u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24444));
    goto L_088B94D8;
L_088BA270:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BA2C0;
      }
      goto L_088BA278;
    }
L_088BA278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA304;
      }
      goto L_088BA280;
    }
L_088BA280:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BA290u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11036));
    goto L_088BA164;
L_088BA290:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA304;
      }
      goto L_088BA298;
    }
L_088BA298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BA258;
      }
      goto L_088BA2A8;
    }
L_088BA2A8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BA2B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11068));
    goto L_088BA164;
L_088BA2B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA304;
      }
      goto L_088BA2C0;
    }
L_088BA2C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x088BA2E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 142u, 0x08878BB8u>(ctx, &aot_mem) && ctx.pc == 0x088BA2E4u) goto L_088BA2E4;
    return;
L_088BA2E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BA2F4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_088B938C;
L_088BA2F4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[31] = (0x088BA300u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B953C;
L_088BA300:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_088BA304;
L_088BA304:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA318:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(46)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088BA350;
      }
      goto L_088BA32C;
    }
L_088BA32C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x088BA344u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11108));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 360u, 0x08A01968u>(ctx, &aot_mem) && ctx.pc == 0x088BA344u) goto L_088BA344;
    return;
L_088BA344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_088BA350;
L_088BA350:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA40C;
      }
      goto L_088BA360;
    }
L_088BA360:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-16)));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (ctx.gpr[5] << 3u);
      if (branch_taken) {
          goto L_088BA39C;
      }
      goto L_088BA370;
    }
L_088BA370:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x088BA38Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11160));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 360u, 0x08A01968u>(ctx, &aot_mem) && ctx.pc == 0x088BA38Cu) goto L_088BA38C;
    return;
L_088BA38C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_088BA39C;
L_088BA39C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[9] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA40C;
      }
      goto L_088BA3B4;
    }
L_088BA3B4:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088BA404;
      }
      goto L_088BA3C4;
    }
L_088BA3C4:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[11] = (ctx.gpr[11] - ctx.gpr[8]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[6]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088BA3C4;
      }
      goto L_088BA404;
    }
L_088BA404:
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_088BA40C;
L_088BA40C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA428:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(46)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BA474u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088B94D8;
L_088BA474:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA4CC;
      }
      goto L_088BA47C;
    }
L_088BA47C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088BA494u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 142u, 0x08878BB8u>(ctx, &aot_mem) && ctx.pc == 0x088BA494u) goto L_088BA494;
    return;
L_088BA494:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088BA4A4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_088B938C;
L_088BA4A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[21]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[31] = (0x088BA4C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088B953C;
L_088BA4C8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_088BA4CC;
L_088BA4CC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA4F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088BA528;
      }
      goto L_088BA520;
    }
L_088BA520:
    ctx.gpr[31] = (0x088BA528u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 111u, 0x0891C878u>(ctx, &aot_mem) && ctx.pc == 0x088BA528u) goto L_088BA528;
    return;
L_088BA528:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BA550;
      }
      goto L_088BA538;
    }
L_088BA538:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BA548u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 130u, 0x08A00944u>(ctx, &aot_mem) && ctx.pc == 0x088BA548u) goto L_088BA548;
    return;
L_088BA548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BA564;
      }
      goto L_088BA550;
    }
L_088BA550:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BA560u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 848u, 0x089CF978u>(ctx, &aot_mem) && ctx.pc == 0x088BA560u) goto L_088BA560;
    return;
L_088BA560:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088BA564;
L_088BA564:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BA578u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 130u, 0x08878A9Cu>(ctx, &aot_mem) && ctx.pc == 0x088BA578u) goto L_088BA578;
    return;
L_088BA578:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088BA5AC;
      }
      goto L_088BA5A4;
    }
L_088BA5A4:
    ctx.gpr[31] = (0x088BA5ACu);
    ctx.gpr[5] = (0u | 1u);
    goto L_088B97B0;
L_088BA5AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA5CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (2188u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BA608u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23308));
    goto L_088B94D8;
L_088BA608:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x088BA620u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x088BA620u) goto L_088BA620;
    return;
L_088BA620:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_088BA650;
      }
      goto L_088BA638;
    }
L_088BA638:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088BA64Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_088B938C;
L_088BA64C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_088BA650;
L_088BA650:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA65C:
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
L_088BA688:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BA6D0;
      }
      goto L_088BA6B0;
    }
L_088BA6B0:
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17036u << 16u);
      if (branch_taken) {
          goto L_088BA6DC;
      }
      goto L_088BA6C8;
    }
L_088BA6C8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088BA6F4;
      }
      goto L_088BA6D0;
    }
L_088BA6D0:
    ctx.gpr[4] = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BA6F4;
      }
      goto L_088BA6DC;
    }
L_088BA6DC:
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[15] - ctx.fpr[0];
    goto L_088BA6F4;
L_088BA6F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA6FC:
    ctx.gpr[7] = (0u | 67u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(847), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(848), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_088BA738;
L_088BA738:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BA738;
      }
      goto L_088BA74C;
    }
L_088BA74C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(908), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(912), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(916), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(920), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA794:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_088BA7B4;
      }
      goto L_088BA7A4;
    }
L_088BA7A4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA7B4;
      }
      goto L_088BA7AC;
    }
L_088BA7AC:
    ctx.gpr[31] = (0x088BA7B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088BA7B4u) goto L_088BA7B4;
    return;
L_088BA7B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA7C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088BA7F4;
      }
      goto L_088BA7D8;
    }
L_088BA7D8:
    ctx.gpr[31] = (0x088BA7E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 92u, 0x088BC51Cu>(ctx, &aot_mem) && ctx.pc == 0x088BA7E0u) goto L_088BA7E0;
    return;
L_088BA7E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA7F0;
      }
      goto L_088BA7E8;
    }
L_088BA7E8:
    ctx.gpr[31] = (0x088BA7F0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 83u, 0x088BC4A8u>(ctx, &aot_mem) && ctx.pc == 0x088BA7F0u) goto L_088BA7F0;
    return;
L_088BA7F0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088BA7F4;
L_088BA7F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA804:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA964;
      }
      goto L_088BA828;
    }
L_088BA828:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BA860;
      }
      goto L_088BA834;
    }
L_088BA834:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088BA964;
      }
      goto L_088BA83C;
    }
L_088BA83C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088BA87C;
      }
      goto L_088BA848;
    }
L_088BA848:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(847), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BA964;
      }
      goto L_088BA860;
    }
L_088BA860:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BA89C;
      }
      goto L_088BA868;
    }
L_088BA868:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA964;
      }
      goto L_088BA870;
    }
L_088BA870:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(847), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BA964;
      }
      goto L_088BA87C;
    }
L_088BA87C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(847), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BA894;
      }
      goto L_088BA884;
    }
L_088BA884:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_088BA894;
L_088BA894:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BA964;
      }
      goto L_088BA89C;
    }
L_088BA89C:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x088BA8A8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(847), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 92u, 0x088BC51Cu>(ctx, &aot_mem) && ctx.pc == 0x088BA8A8u) goto L_088BA8A8;
    return;
L_088BA8A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u | 67u);
      if (branch_taken) {
          goto L_088BA8EC;
      }
      goto L_088BA8B0;
    }
L_088BA8B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088BA8EC;
      }
      goto L_088BA8BC;
    }
L_088BA8BC:
    ctx.gpr[31] = (0x088BA8C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 25u, 0x088BC114u>(ctx, &aot_mem) && ctx.pc == 0x088BA8C4u) goto L_088BA8C4;
    return;
L_088BA8C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    goto L_088BA8EC;
L_088BA8EC:
    ctx.gpr[31] = (0x088BA8F4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 83u, 0x088BC4A8u>(ctx, &aot_mem) && ctx.pc == 0x088BA8F4u) goto L_088BA8F4;
    return;
L_088BA8F4:
    ctx.gpr[31] = (0x088BA8FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 92u, 0x088BC51Cu>(ctx, &aot_mem) && ctx.pc == 0x088BA8FCu) goto L_088BA8FC;
    return;
L_088BA8FC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(847)));
        goto L_088BA92C;
    }
    goto L_088BA904;
L_088BA904:
    ctx.gpr[31] = (0x088BA90Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 83u, 0x088BC4A8u>(ctx, &aot_mem) && ctx.pc == 0x088BA90Cu) goto L_088BA90C;
    return;
L_088BA90C:
    ctx.gpr[31] = (0x088BA914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 595u, 0x08AB35BCu>(ctx, &aot_mem) && ctx.pc == 0x088BA914u) goto L_088BA914;
    return;
L_088BA914:
    ctx.gpr[31] = (0x088BA91Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 296u, 0x089C1504u>(ctx, &aot_mem) && ctx.pc == 0x088BA91Cu) goto L_088BA91C;
    return;
L_088BA91C:
    ctx.gpr[31] = (0x088BA924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 132u, 0x089C09C4u>(ctx, &aot_mem) && ctx.pc == 0x088BA924u) goto L_088BA924;
    return;
L_088BA924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA8F4;
      }
      goto L_088BA92C;
    }
L_088BA92C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(858), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(848), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(850), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(851), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(852), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(853), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20556), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BA964;
      }
      goto L_088BA964;
    }
L_088BA964:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA978:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_088BA9A0;
      }
      goto L_088BA984;
    }
L_088BA984:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BA9A0;
      }
      goto L_088BA990;
    }
L_088BA990:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BA9A0;
      }
      goto L_088BA99C;
    }
L_088BA99C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088BA9A0;
L_088BA9A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA9A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BA9CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11192));
    goto L_088BA65C;
L_088BA9CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAA70;
      }
      goto L_088BA9D8;
    }
L_088BA9D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 66 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BAA70;
      }
      goto L_088BA9E4;
    }
L_088BA9E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAA70;
      }
      goto L_088BA9EC;
    }
L_088BA9EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BAA70;
      }
      goto L_088BA9FC;
    }
L_088BA9FC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088BAA08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 406u, 0x08842BACu>(ctx, &aot_mem) && ctx.pc == 0x088BAA08u) goto L_088BAA08;
    return;
L_088BAA08:
    ctx.gpr[31] = (0x088BAA10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 92u, 0x088BC51Cu>(ctx, &aot_mem) && ctx.pc == 0x088BAA10u) goto L_088BAA10;
    return;
L_088BAA10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAA40;
      }
      goto L_088BAA18;
    }
L_088BAA18:
    ctx.gpr[31] = (0x088BAA20u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 83u, 0x088BC4A8u>(ctx, &aot_mem) && ctx.pc == 0x088BAA20u) goto L_088BAA20;
    return;
L_088BAA20:
    ctx.gpr[31] = (0x088BAA28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 595u, 0x08AB35BCu>(ctx, &aot_mem) && ctx.pc == 0x088BAA28u) goto L_088BAA28;
    return;
L_088BAA28:
    ctx.gpr[31] = (0x088BAA30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 296u, 0x089C1504u>(ctx, &aot_mem) && ctx.pc == 0x088BAA30u) goto L_088BAA30;
    return;
L_088BAA30:
    ctx.gpr[31] = (0x088BAA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 132u, 0x089C09C4u>(ctx, &aot_mem) && ctx.pc == 0x088BAA38u) goto L_088BAA38;
    return;
L_088BAA38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAA08;
      }
      goto L_088BAA40;
    }
L_088BAA40:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x088BAA58u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 59u, 0x088BC32Cu>(ctx, &aot_mem) && ctx.pc == 0x088BAA58u) goto L_088BAA58;
    return;
L_088BAA58:
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BAA6Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 93u, 0x088BC530u>(ctx, &aot_mem) && ctx.pc == 0x088BAA6Cu) goto L_088BAA6C;
    return;
L_088BAA6C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_088BAA70;
L_088BAA70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BAA84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BAAA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11220));
    goto L_088BA65C;
L_088BAAA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAAFC;
      }
      goto L_088BAAAC;
    }
L_088BAAAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BAAFC;
      }
      goto L_088BAAB8;
    }
L_088BAAB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BAAFC;
      }
      goto L_088BAAC8;
    }
L_088BAAC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BAAF4;
      }
      goto L_088BAAD4;
    }
L_088BAAD4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20556), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(851), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BAAF4;
L_088BAAF4:
    ctx.gpr[31] = (0x088BAAFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 96u, 0x088BC55Cu>(ctx, &aot_mem) && ctx.pc == 0x088BAAFCu) goto L_088BAAFC;
    return;
L_088BAAFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BAB0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BAB28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11252));
    goto L_088BA65C;
L_088BAB28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAB90;
      }
      goto L_088BAB34;
    }
L_088BAB34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BAB90;
      }
      goto L_088BAB40;
    }
L_088BAB40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BAB90;
      }
      goto L_088BAB50;
    }
L_088BAB50:
    ctx.gpr[31] = (0x088BAB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 92u, 0x088BC51Cu>(ctx, &aot_mem) && ctx.pc == 0x088BAB58u) goto L_088BAB58;
    return;
L_088BAB58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAB88;
      }
      goto L_088BAB60;
    }
L_088BAB60:
    ctx.gpr[31] = (0x088BAB68u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 83u, 0x088BC4A8u>(ctx, &aot_mem) && ctx.pc == 0x088BAB68u) goto L_088BAB68;
    return;
L_088BAB68:
    ctx.gpr[31] = (0x088BAB70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 595u, 0x08AB35BCu>(ctx, &aot_mem) && ctx.pc == 0x088BAB70u) goto L_088BAB70;
    return;
L_088BAB70:
    ctx.gpr[31] = (0x088BAB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 296u, 0x089C1504u>(ctx, &aot_mem) && ctx.pc == 0x088BAB78u) goto L_088BAB78;
    return;
L_088BAB78:
    ctx.gpr[31] = (0x088BAB80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 132u, 0x089C09C4u>(ctx, &aot_mem) && ctx.pc == 0x088BAB80u) goto L_088BAB80;
    return;
L_088BAB80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAB50;
      }
      goto L_088BAB88;
    }
L_088BAB88:
    ctx.gpr[4] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BAB90;
L_088BAB90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BABA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(913), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20904)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    ctx.gpr[17] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_088BABE8;
      }
      goto L_088BABDC;
    }
L_088BABDC:
    ctx.gpr[31] = (0x088BABE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BABE4u) goto L_088BABE4;
    return;
L_088BABE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20904)));
    goto L_088BABE8;
L_088BABE8:
    ctx.gpr[31] = (0x088BABF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x088BABF0u) goto L_088BABF0;
    return;
L_088BABF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAC4C;
      }
      goto L_088BABF8;
    }
L_088BABF8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAC44;
      }
      goto L_088BAC00;
    }
L_088BAC00:
    ctx.gpr[31] = (0x088BAC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 92u, 0x088BC51Cu>(ctx, &aot_mem) && ctx.pc == 0x088BAC08u) goto L_088BAC08;
    return;
L_088BAC08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAC18;
      }
      goto L_088BAC10;
    }
L_088BAC10:
    ctx.gpr[31] = (0x088BAC18u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 83u, 0x088BC4A8u>(ctx, &aot_mem) && ctx.pc == 0x088BAC18u) goto L_088BAC18;
    return;
L_088BAC18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BAC30;
      }
      goto L_088BAC24;
    }
L_088BAC24:
    ctx.gpr[31] = (0x088BAC2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BAC2Cu) goto L_088BAC2C;
    return;
L_088BAC2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20904)));
    goto L_088BAC30;
L_088BAC30:
    ctx.gpr[31] = (0x088BAC38u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 38u, 0x0883822Cu>(ctx, &aot_mem) && ctx.pc == 0x088BAC38u) goto L_088BAC38;
    return;
L_088BAC38:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(913), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BAC4C;
      }
      goto L_088BAC44;
    }
L_088BAC44:
    ctx.gpr[18] = (0u | 65u);
    ctx.gpr[17] = (0u | 0u);
    goto L_088BAC4C;
L_088BAC4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAC94;
      }
      goto L_088BAC58;
    }
L_088BAC58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 66 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BAC94;
      }
      goto L_088BAC64;
    }
L_088BAC64:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAC94;
      }
      goto L_088BAC6C;
    }
L_088BAC6C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(847)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
      if (branch_taken) {
          goto L_088BAC80;
      }
      goto L_088BAC78;
    }
L_088BAC78:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BAC94;
      }
      goto L_088BAC80;
    }
L_088BAC80:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[18]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(849), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088BAC94;
      }
      goto L_088BAC8C;
    }
L_088BAC8C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(860), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BAC94;
L_088BAC94:
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
L_088BACB4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(847)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BACCC;
      }
      goto L_088BACC0;
    }
L_088BACC0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(848)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BACD4;
      }
      goto L_088BACCC;
    }
L_088BACCC:
    ctx.gpr[5] = (0u | 67u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088BACD4;
L_088BACD4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BACDC:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(832), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BACEC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(864));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BACF4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(864)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_088BAD04;
L_088BAD04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(864)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BAD20;
      }
      goto L_088BAD18;
    }
L_088BAD18:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    goto L_088BAD20;
L_088BAD20:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BAD04;
      }
      goto L_088BAD30;
    }
L_088BAD30:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BAD38:
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BADF4;
      }
      goto L_088BAD4C;
    }
L_088BAD4C:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(846)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BADF4;
      }
      goto L_088BAD58;
    }
L_088BAD58:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 41 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 42 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BAD90;
      }
      goto L_088BAD64;
    }
L_088BAD64:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BADF4;
      }
      goto L_088BAD70;
    }
L_088BAD70:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10384));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21924)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(248), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 127u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8640));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088BADF4;
      }
      goto L_088BAD90;
    }
L_088BAD90:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_088BADB0;
      }
      goto L_088BAD98;
    }
L_088BAD98:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 43 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_088BADD4;
      }
      goto L_088BADA4;
    }
L_088BADA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BADF4;
      }
      goto L_088BADAC;
    }
L_088BADAC:
    ctx.gpr[5] = (2233u << 16u);
    goto L_088BADB0;
L_088BADB0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10384));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 127u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24576));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(248), 0u);
      if (branch_taken) {
          goto L_088BADF4;
      }
      goto L_088BADD4;
    }
L_088BADD4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10384));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 127u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-15168));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(248), 0u);
    goto L_088BADF4;
L_088BADF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BADFC:
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BAEB4;
      }
      goto L_088BAE10;
    }
L_088BAE10:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(846)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BAEB4;
      }
      goto L_088BAE1C;
    }
L_088BAE1C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 44 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 45 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BAE50;
      }
      goto L_088BAE28;
    }
L_088BAE28:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 43 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BAEB4;
      }
      goto L_088BAE34;
    }
L_088BAE34:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10384));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21924)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(236), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 127u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(232), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088BAEB4;
      }
      goto L_088BAE50;
    }
L_088BAE50:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_088BAE70;
      }
      goto L_088BAE58;
    }
L_088BAE58:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 46 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_088BAE94;
      }
      goto L_088BAE64;
    }
L_088BAE64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAEB4;
      }
      goto L_088BAE6C;
    }
L_088BAE6C:
    ctx.gpr[5] = (2233u << 16u);
    goto L_088BAE70;
L_088BAE70:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10384));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[6] = (5u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 127u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7480));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(232), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(236), 0u);
      if (branch_taken) {
          goto L_088BAEB4;
      }
      goto L_088BAE94;
    }
L_088BAE94:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10384));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[6] = (10u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 127u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16640));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(232), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(236), 0u);
    goto L_088BAEB4;
L_088BAEB4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BAEBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(845)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 65u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088BAF4C;
      }
      goto L_088BAEDC;
    }
L_088BAEDC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088BAEE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 350u, 0x08A5E138u>(ctx, &aot_mem) && ctx.pc == 0x088BAEE8u) goto L_088BAEE8;
    return;
L_088BAEE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAF04;
      }
      goto L_088BAEF4;
    }
L_088BAEF4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(672)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
      if (branch_taken) {
          goto L_088BAF10;
      }
      goto L_088BAF04;
    }
L_088BAF04:
    ctx.gpr[5] = (0u | 11u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    goto L_088BAF10;
L_088BAF10:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088BAF34;
      }
      goto L_088BAF18;
    }
L_088BAF18:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25791))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
      if (branch_taken) {
          goto L_088BAF34;
      }
      goto L_088BAF2C;
    }
L_088BAF2C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    goto L_088BAF34;
L_088BAF34:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088BAF4C;
      }
      goto L_088BAF3C;
    }
L_088BAF3C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BAF4C;
      }
      goto L_088BAF44;
    }
L_088BAF44:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(845)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088BAF4C;
L_088BAF4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BAF60:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_088BAFB4;
      }
      goto L_088BAF6C;
    }
L_088BAF6C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 67 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAFB4;
      }
      goto L_088BAF78;
    }
L_088BAF78:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(836), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(837), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088BAFB0;
      }
      goto L_088BAF8C;
    }
L_088BAF8C:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(840), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088BAFB4;
      }
      goto L_088BAFB0;
    }
L_088BAFB0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(840), ctx.gpr[7]);
    goto L_088BAFB4;
L_088BAFB4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BAFBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB0C0;
      }
      goto L_088BAFDC;
    }
L_088BAFDC:
    ctx.gpr[31] = (0x088BAFE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088BB178;
L_088BAFE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB0A0;
      }
      goto L_088BAFEC;
    }
L_088BAFEC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088BAFF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 350u, 0x08A5E138u>(ctx, &aot_mem) && ctx.pc == 0x088BAFF8u) goto L_088BAFF8;
    return;
L_088BAFF8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB080;
      }
      goto L_088BB004;
    }
L_088BB004:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BB010u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088BBF84;
L_088BB010:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088BB028;
      }
      goto L_088BB018;
    }
L_088BB018:
    ctx.gpr[31] = (0x088BB020u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 2u, 0x088BC008u>(ctx, &aot_mem) && ctx.pc == 0x088BB020u) goto L_088BB020;
    return;
L_088BB020:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB048;
      }
      goto L_088BB028;
    }
L_088BB028:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BB040;
      }
      goto L_088BB038;
    }
L_088BB038:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB0C4;
      }
      goto L_088BB040;
    }
L_088BB040:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 23u);
      if (branch_taken) {
          goto L_088BB0C4;
      }
      goto L_088BB048;
    }
L_088BB048:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BB060;
      }
      goto L_088BB058;
    }
L_088BB058:
    ctx.gpr[31] = (0x088BB060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BB060u) goto L_088BB060;
    return;
L_088BB060:
    ctx.gpr[31] = (0x088BB068u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20904)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x088BB068u) goto L_088BB068;
    return;
L_088BB068:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB078;
      }
      goto L_088BB070;
    }
L_088BB070:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 65u);
      if (branch_taken) {
          goto L_088BB0C4;
      }
      goto L_088BB078;
    }
L_088BB078:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
      if (branch_taken) {
          goto L_088BB0C4;
      }
      goto L_088BB080;
    }
L_088BB080:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BB098;
      }
      goto L_088BB090;
    }
L_088BB090:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB0C4;
      }
      goto L_088BB098;
    }
L_088BB098:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_088BB0C4;
      }
      goto L_088BB0A0;
    }
L_088BB0A0:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BB0B8;
      }
      goto L_088BB0B0;
    }
L_088BB0B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB0C4;
      }
      goto L_088BB0B8;
    }
L_088BB0B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_088BB0C4;
      }
      goto L_088BB0C0;
    }
L_088BB0C0:
    ctx.gpr[2] = (0u | 0u);
    goto L_088BB0C4;
L_088BB0C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BB0D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB160;
      }
      goto L_088BB100;
    }
L_088BB100:
    ctx.gpr[31] = (0x088BB108u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088BB178;
L_088BB108:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB15C;
      }
      goto L_088BB110;
    }
L_088BB110:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088BB11Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 350u, 0x08A5E138u>(ctx, &aot_mem) && ctx.pc == 0x088BB11Cu) goto L_088BB11C;
    return;
L_088BB11C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB160;
      }
      goto L_088BB128;
    }
L_088BB128:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088BB134u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_088BBF84;
L_088BB134:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088BB154;
      }
      goto L_088BB13C;
    }
L_088BB13C:
    ctx.gpr[31] = (0x088BB144u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 2u, 0x088BC008u>(ctx, &aot_mem) && ctx.pc == 0x088BB144u) goto L_088BB144;
    return;
L_088BB144:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BB154;
      }
      goto L_088BB14C;
    }
L_088BB14C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_088BB160;
      }
      goto L_088BB154;
    }
L_088BB154:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(844), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_088BB160;
      }
      goto L_088BB15C;
    }
L_088BB15C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(844), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_088BB160;
L_088BB160:
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
L_088BB178:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088BB190u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 350u, 0x08A5E138u>(ctx, &aot_mem) && ctx.pc == 0x088BB190u) goto L_088BB190;
    return;
L_088BB190:
    ctx.gpr[31] = (0x088BB198u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB198u) goto L_088BB198;
    return;
L_088BB198:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BB254;
      }
      goto L_088BB1A0;
    }
L_088BB1A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BB23C;
      }
      goto L_088BB1B0;
    }
L_088BB1B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BB23C;
      }
      goto L_088BB1C0;
    }
L_088BB1C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BB23C;
      }
      goto L_088BB1D0;
    }
L_088BB1D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BB23C;
      }
      goto L_088BB1E4;
    }
L_088BB1E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BB23C;
      }
      goto L_088BB1F4;
    }
L_088BB1F4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB22C;
      }
      goto L_088BB1FC;
    }
L_088BB1FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BB234;
      }
      goto L_088BB210;
    }
L_088BB210:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 163 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 197u);
      if (branch_taken) {
          goto L_088BB244;
      }
      goto L_088BB220;
    }
L_088BB220:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 162 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB24C;
      }
      goto L_088BB22C;
    }
L_088BB22C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BB25C;
      }
      goto L_088BB234;
    }
L_088BB234:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088BB25C;
      }
      goto L_088BB23C;
    }
L_088BB23C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088BB25C;
      }
      goto L_088BB244;
    }
L_088BB244:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BB22C;
      }
      goto L_088BB24C;
    }
L_088BB24C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088BB25C;
      }
      goto L_088BB254;
    }
L_088BB254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088BB25C;
      }
      goto L_088BB25C;
    }
L_088BB25C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BB26C:
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB2A4;
      }
      goto L_088BB278;
    }
L_088BB278:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088BB298;
      }
      goto L_088BB28C;
    }
L_088BB28C:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088BB298;
L_088BB298:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(864)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088BB2A4;
L_088BB2A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BB2AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BB2C8u);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 92u, 0x088BC51Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB2C8u) goto L_088BB2C8;
    return;
L_088BB2C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB2E4;
      }
      goto L_088BB2D0;
    }
L_088BB2D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088BB2E4;
      }
      goto L_088BB2DC;
    }
L_088BB2DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BB2E8;
      }
      goto L_088BB2E4;
    }
L_088BB2E4:
    ctx.gpr[2] = (0u | 0u);
    goto L_088BB2E8;
L_088BB2E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BB2FC:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BB308:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BB32Cu);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 92u, 0x088BC51Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB32Cu) goto L_088BB32C;
    return;
L_088BB32C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB348;
      }
      goto L_088BB338;
    }
L_088BB338:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BB358;
      }
      goto L_088BB348;
    }
L_088BB348:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(846)));
        goto L_088BB368;
    }
    goto L_088BB350;
L_088BB350:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB3BC;
      }
      goto L_088BB358;
    }
L_088BB358:
    ctx.gpr[31] = (0x088BB360u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088BAEBC;
L_088BB360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB4B0;
      }
      goto L_088BB368;
    }
L_088BB368:
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BB3BC;
      }
      goto L_088BB374;
    }
L_088BB374:
    ctx.gpr[31] = (0x088BB37Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 83u, 0x088BC4A8u>(ctx, &aot_mem) && ctx.pc == 0x088BB37Cu) goto L_088BB37C;
    return;
L_088BB37C:
    ctx.gpr[31] = (0x088BB384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 92u, 0x088BC51Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB384u) goto L_088BB384;
    return;
L_088BB384:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB3B4;
      }
      goto L_088BB38C;
    }
L_088BB38C:
    ctx.gpr[31] = (0x088BB394u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 83u, 0x088BC4A8u>(ctx, &aot_mem) && ctx.pc == 0x088BB394u) goto L_088BB394;
    return;
L_088BB394:
    ctx.gpr[31] = (0x088BB39Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 595u, 0x08AB35BCu>(ctx, &aot_mem) && ctx.pc == 0x088BB39Cu) goto L_088BB39C;
    return;
L_088BB39C:
    ctx.gpr[31] = (0x088BB3A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 296u, 0x089C1504u>(ctx, &aot_mem) && ctx.pc == 0x088BB3A4u) goto L_088BB3A4;
    return;
L_088BB3A4:
    ctx.gpr[31] = (0x088BB3ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 132u, 0x089C09C4u>(ctx, &aot_mem) && ctx.pc == 0x088BB3ACu) goto L_088BB3AC;
    return;
L_088BB3AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB37C;
      }
      goto L_088BB3B4;
    }
L_088BB3B4:
    ctx.gpr[31] = (0x088BB3BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 129u, 0x088BC6D0u>(ctx, &aot_mem) && ctx.pc == 0x088BB3BCu) goto L_088BB3BC;
    return;
L_088BB3BC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(848)));
      if (branch_taken) {
          goto L_088BB3CC;
      }
      goto L_088BB3C4;
    }
L_088BB3C4:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(850), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(853), static_cast<std::uint8_t>(0u));
    goto L_088BB3CC;
L_088BB3CC:
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_088BB3E4;
    }
    goto L_088BB3D4;
L_088BB3D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BB4B0;
      }
      goto L_088BB3DC;
    }
L_088BB3DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB3F4;
      }
      goto L_088BB3E4;
    }
L_088BB3E4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BB440;
      }
      goto L_088BB3EC;
    }
L_088BB3EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB4B0;
      }
      goto L_088BB3F4;
    }
L_088BB3F4:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-25791))))));
    ctx.gpr[31] = (0x088BB414u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 191u, 0x08864D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB414u) goto L_088BB414;
    return;
L_088BB414:
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB438;
      }
      goto L_088BB420;
    }
L_088BB420:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-25791))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088BB438u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 145u, 0x08864A64u>(ctx, &aot_mem) && ctx.pc == 0x088BB438u) goto L_088BB438;
    return;
L_088BB438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB4B0;
      }
      goto L_088BB440;
    }
L_088BB440:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-25791))))));
    ctx.gpr[31] = (0x088BB458u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 191u, 0x08864D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB458u) goto L_088BB458;
    return;
L_088BB458:
    ctx.gpr[4] = (ctx.gpr[19] | ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB4A8;
      }
      goto L_088BB464;
    }
L_088BB464:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x088BB474u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088BB178;
L_088BB474:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB4A8;
      }
      goto L_088BB47C;
    }
L_088BB47C:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-25791))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[16] & 255u);
    ctx.gpr[31] = (0x088BB490u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088BBD08;
L_088BB490:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BB4A8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 59u, 0x088BC32Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB4A8u) goto L_088BB4A8;
    return;
L_088BB4A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB4B0;
      }
      goto L_088BB4B0;
    }
L_088BB4B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BB4CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088BB5B4;
      }
      goto L_088BB4F4;
    }
L_088BB4F4:
    ctx.gpr[31] = (0x088BB4FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 92u, 0x088BC51Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB4FCu) goto L_088BB4FC;
    return;
L_088BB4FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BB548;
      }
      goto L_088BB504;
    }
L_088BB504:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 67u);
      if (branch_taken) {
          goto L_088BB684;
      }
      goto L_088BB514;
    }
L_088BB514:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BB540u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 93u, 0x088BC530u>(ctx, &aot_mem) && ctx.pc == 0x088BB540u) goto L_088BB540;
    return;
L_088BB540:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB684;
      }
      goto L_088BB548;
    }
L_088BB548:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[5] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(10384));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BB564u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 301u, 0x08A6D50Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB564u) goto L_088BB564;
    return;
L_088BB564:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088BB57C;
      }
      goto L_088BB56C;
    }
L_088BB56C:
    ctx.gpr[31] = (0x088BB574u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 301u, 0x08A6D50Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB574u) goto L_088BB574;
    return;
L_088BB574:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB598;
      }
      goto L_088BB57C;
    }
L_088BB57C:
    ctx.gpr[4] = (0u | 31u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BB590u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 93u, 0x088BC530u>(ctx, &aot_mem) && ctx.pc == 0x088BB590u) goto L_088BB590;
    return;
L_088BB590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB684;
      }
      goto L_088BB598;
    }
L_088BB598:
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BB5ACu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 93u, 0x088BC530u>(ctx, &aot_mem) && ctx.pc == 0x088BB5ACu) goto L_088BB5AC;
    return;
L_088BB5AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB684;
      }
      goto L_088BB5B4;
    }
L_088BB5B4:
    ctx.gpr[31] = (0x088BB5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 92u, 0x088BC51Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB5BCu) goto L_088BB5BC;
    return;
L_088BB5BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB628;
      }
      goto L_088BB5C4;
    }
L_088BB5C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BB618;
      }
      goto L_088BB5D4;
    }
L_088BB5D4:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(20556)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BB618;
      }
      goto L_088BB5E4;
    }
L_088BB5E4:
    ctx.gpr[31] = (0x088BB5ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 25u, 0x088BC114u>(ctx, &aot_mem) && ctx.pc == 0x088BB5ECu) goto L_088BB5EC;
    return;
L_088BB5EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(20556), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_088BB618;
L_088BB618:
    ctx.gpr[31] = (0x088BB620u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 83u, 0x088BC4A8u>(ctx, &aot_mem) && ctx.pc == 0x088BB620u) goto L_088BB620;
    return;
L_088BB620:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(920), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088BB684;
      }
      goto L_088BB628;
    }
L_088BB628:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20556), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 67u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(846), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(851), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB654;
      }
      goto L_088BB64C;
    }
L_088BB64C:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    goto L_088BB654;
L_088BB654:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(851))))));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088BB66Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 59u, 0x088BC32Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB66Cu) goto L_088BB66C;
    return;
L_088BB66C:
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x088BB680u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 93u, 0x088BC530u>(ctx, &aot_mem) && ctx.pc == 0x088BB680u) goto L_088BB680;
    return;
L_088BB680:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_088BB684;
L_088BB684:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BB6A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29520)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(18) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB904;
      }
      goto L_088BB6C8;
    }
L_088BB6C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29520)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(13072)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BB6E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088BB750;
      }
      goto L_088BB6F4;
    }
L_088BB6F4:
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
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20560));
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
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17796u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BB750;
      }
      goto L_088BB744;
    }
L_088BB744:
    ctx.gpr[4] = (0u | 21u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB90C;
      }
      goto L_088BB750;
    }
L_088BB750:
    ctx.gpr[31] = (0x088BB758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 366u, 0x0890E89Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB758u) goto L_088BB758;
    return;
L_088BB758:
    ctx.gpr[4] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[17] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BB780;
      }
      goto L_088BB764;
    }
L_088BB764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20580)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088BB784;
      }
      goto L_088BB770;
    }
L_088BB770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20580)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20580), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088BB784;
      }
      goto L_088BB780;
    }
L_088BB780:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20580), ctx.gpr[4]);
    goto L_088BB784;
L_088BB784:
    ctx.gpr[31] = (0x088BB78Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 366u, 0x0890E89Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB78Cu) goto L_088BB78C;
    return;
L_088BB78C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_088BB7F8;
      }
      goto L_088BB794;
    }
L_088BB794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20580)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB7F8;
      }
      goto L_088BB7A0;
    }
L_088BB7A0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7316))))));
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BB7C0;
      }
      goto L_088BB7B4;
    }
L_088BB7B4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7314))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BB7EC;
      }
      goto L_088BB7C0;
    }
L_088BB7C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7968)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BB7EC;
      }
      goto L_088BB7E0;
    }
L_088BB7E0:
    ctx.gpr[4] = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB8B4;
      }
      goto L_088BB7EC;
    }
L_088BB7EC:
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB8B4;
      }
      goto L_088BB7F8;
    }
L_088BB7F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20580)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BB8B4;
      }
      goto L_088BB804;
    }
L_088BB804:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-30280)));
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BB868;
      }
      goto L_088BB818;
    }
L_088BB818:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7316))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BB830;
      }
      goto L_088BB824;
    }
L_088BB824:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7314))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BB85C;
      }
      goto L_088BB830;
    }
L_088BB830:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7968)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BB85C;
      }
      goto L_088BB850;
    }
L_088BB850:
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB8B4;
      }
      goto L_088BB85C;
    }
L_088BB85C:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB8B4;
      }
      goto L_088BB868;
    }
L_088BB868:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7316))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BB880;
      }
      goto L_088BB874;
    }
L_088BB874:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7314))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BB8AC;
      }
      goto L_088BB880;
    }
L_088BB880:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7968)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BB8AC;
      }
      goto L_088BB8A0;
    }
L_088BB8A0:
    ctx.gpr[4] = (0u | 14u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB8B4;
      }
      goto L_088BB8AC;
    }
L_088BB8AC:
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BB8B4;
L_088BB8B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB90C;
      }
      goto L_088BB8BC;
    }
L_088BB8BC:
    ctx.gpr[4] = (0u | 17u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB90C;
      }
      goto L_088BB8C8;
    }
L_088BB8C8:
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB90C;
      }
      goto L_088BB8D4;
    }
L_088BB8D4:
    ctx.gpr[4] = (0u | 20u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB90C;
      }
      goto L_088BB8E0;
    }
L_088BB8E0:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB90C;
      }
      goto L_088BB8EC;
    }
L_088BB8EC:
    ctx.gpr[4] = (0u | 18u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB90C;
      }
      goto L_088BB8F8;
    }
L_088BB8F8:
    ctx.gpr[4] = (0u | 12u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BB90C;
      }
      goto L_088BB904;
    }
L_088BB904:
    ctx.gpr[4] = (0u | 22u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(845), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BB90C;
L_088BB90C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BB920:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 38u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BB950;
      }
      goto L_088BB938;
    }
L_088BB938:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[31] = (0x088BB948u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 118u, 0x08864868u>(ctx, &aot_mem) && ctx.pc == 0x088BB948u) goto L_088BB948;
    return;
L_088BB948:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BB954;
      }
      goto L_088BB950;
    }
L_088BB950:
    ctx.gpr[2] = (0u | 0u);
    goto L_088BB954;
L_088BB954:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BB960:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] & 255u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BB990u);
    // nop
    goto L_088BA688;
L_088BB990:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-7148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088BBAF0;
      }
      goto L_088BB99C;
    }
L_088BB99C:
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
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20560));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BBAF0;
      }
      goto L_088BB9FC;
    }
L_088BB9FC:
    ctx.gpr[4] = (17796u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17150u << 16u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088BBAC0;
      }
      goto L_088BBA1C;
    }
L_088BBA1C:
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 127u);
      if (branch_taken) {
          goto L_088BBA64;
      }
      goto L_088BBA34;
    }
L_088BBA34:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-7148)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BBCB0;
      }
      goto L_088BBA64;
    }
L_088BBA64:
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16948u << 16u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-7148)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BBCB0;
      }
      goto L_088BBAC0;
    }
L_088BBAC0:
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[4] = (17026u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BBCB0;
      }
      goto L_088BBAF0;
    }
L_088BBAF0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088BBB04;
      }
      goto L_088BBAF8;
    }
L_088BBAF8:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20588), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088BBB84;
      }
      goto L_088BBB04;
    }
L_088BBB04:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20588)));
    ctx.gpr[5] = (17116u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BBB84;
      }
      goto L_088BBB20;
    }
L_088BBB20:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (16362u << 16u);
      if (branch_taken) {
          goto L_088BBB58;
      }
      goto L_088BBB30;
    }
L_088BBB30:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (16362u << 16u);
      if (branch_taken) {
          goto L_088BBB58;
      }
      goto L_088BBB40;
    }
L_088BBB40:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20588)));
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20588), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_088BBB6C;
      }
      goto L_088BBB58;
    }
L_088BBB58:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20588)));
    ctx.gpr[5] = (ctx.gpr[5] | 43691u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20588), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_088BBB6C;
L_088BBB6C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20588)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BBB84;
      }
      goto L_088BBB80;
    }
L_088BBB80:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20588), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088BBB84;
L_088BBB84:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(845)));
    ctx.gpr[6] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BBBEC;
      }
      goto L_088BBB94;
    }
L_088BBB94:
    ctx.gpr[31] = (0x088BBB9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 366u, 0x0890E89Cu>(ctx, &aot_mem) && ctx.pc == 0x088BBB9Cu) goto L_088BBB9C;
    return;
L_088BBB9C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17116u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29520)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BBCB0;
      }
      goto L_088BBBDC;
    }
L_088BBBDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BBCB0;
      }
      goto L_088BBBEC;
    }
L_088BBBEC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(845)));
    ctx.gpr[6] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BBC54;
      }
      goto L_088BBBFC;
    }
L_088BBBFC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20580)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17116u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29520)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088BBCB0;
      }
      goto L_088BBC44;
    }
L_088BBC44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BBCB0;
      }
      goto L_088BBC54;
    }
L_088BBC54:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(845)));
    ctx.gpr[6] = (0u | 19u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20588)));
        goto L_088BBCA0;
    }
    goto L_088BBC64;
L_088BBC64:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20588)));
    ctx.gpr[4] = (16025u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088BBCB0;
      }
      goto L_088BBCA0;
    }
L_088BBCA0:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BBCB0;
L_088BBCB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BBCCC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    goto L_088BBCD4;
L_088BBCD4:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 39 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088BBCD4;
      }
      goto L_088BBD00;
    }
L_088BBD00:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BBD08:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(20000));
      if (branch_taken) {
          goto L_088BBD50;
      }
      goto L_088BBD4C;
    }
L_088BBD4C:
    ctx.gpr[2] = (0u | 0u);
    goto L_088BBD50;
L_088BBD50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBD58;
      }
      goto L_088BBD58;
    }
L_088BBD58:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BBD60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088BBD80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 350u, 0x08A5E138u>(ctx, &aot_mem) && ctx.pc == 0x088BBD80u) goto L_088BBD80;
    return;
L_088BBD80:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBE28;
      }
      goto L_088BBD8C;
    }
L_088BBD8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BBD98u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088BBF84;
L_088BBD98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BBDD4;
      }
      goto L_088BBDA0;
    }
L_088BBDA0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BBDACu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 2u, 0x088BC008u>(ctx, &aot_mem) && ctx.pc == 0x088BBDACu) goto L_088BBDAC;
    return;
L_088BBDAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BBDCC;
      }
      goto L_088BBDB4;
    }
L_088BBDB4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBDDC;
      }
      goto L_088BBDC4;
    }
L_088BBDC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BBDE8;
      }
      goto L_088BBDCC;
    }
L_088BBDCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 24u);
      if (branch_taken) {
          goto L_088BBE30;
      }
      goto L_088BBDD4;
    }
L_088BBDD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_088BBE30;
      }
      goto L_088BBDDC;
    }
L_088BBDDC:
    ctx.gpr[31] = (0x088BBDE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BBDE4u) goto L_088BBDE4;
    return;
L_088BBDE4:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088BBDE8;
L_088BBDE8:
    ctx.gpr[31] = (0x088BBDF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x088BBDF0u) goto L_088BBDF0;
    return;
L_088BBDF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BBE18;
      }
      goto L_088BBDF8;
    }
L_088BBDF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BBE20;
      }
      goto L_088BBE08;
    }
L_088BBE08:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25791))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_088BBE30;
      }
      goto L_088BBE18;
    }
L_088BBE18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 65u);
      if (branch_taken) {
          goto L_088BBE30;
      }
      goto L_088BBE20;
    }
L_088BBE20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
      if (branch_taken) {
          goto L_088BBE30;
      }
      goto L_088BBE28;
    }
L_088BBE28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_088BBE30;
      }
      goto L_088BBE30;
    }
L_088BBE30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BBE44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088BBE64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 350u, 0x08A5E138u>(ctx, &aot_mem) && ctx.pc == 0x088BBE64u) goto L_088BBE64;
    return;
L_088BBE64:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBF68;
      }
      goto L_088BBE70;
    }
L_088BBE70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BBE7Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088BBF84;
L_088BBE7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BBEB8;
      }
      goto L_088BBE84;
    }
L_088BBE84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BBE90u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 2u, 0x088BC008u>(ctx, &aot_mem) && ctx.pc == 0x088BBE90u) goto L_088BBE90;
    return;
L_088BBE90:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BBEB0;
      }
      goto L_088BBE98;
    }
L_088BBE98:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBEC0;
      }
      goto L_088BBEA8;
    }
L_088BBEA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088BBECC;
      }
      goto L_088BBEB0;
    }
L_088BBEB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 24u);
      if (branch_taken) {
          goto L_088BBF70;
      }
      goto L_088BBEB8;
    }
L_088BBEB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_088BBF70;
      }
      goto L_088BBEC0;
    }
L_088BBEC0:
    ctx.gpr[31] = (0x088BBEC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088BBEC8u) goto L_088BBEC8;
    return;
L_088BBEC8:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088BBECC;
L_088BBECC:
    ctx.gpr[31] = (0x088BBED4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x088BBED4u) goto L_088BBED4;
    return;
L_088BBED4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BBEF4;
      }
      goto L_088BBEDC;
    }
L_088BBEDC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20432)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
        goto L_088BBEFC;
    }
    goto L_088BBEEC;
L_088BBEEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBF40;
      }
      goto L_088BBEF4;
    }
L_088BBEF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 65u);
      if (branch_taken) {
          goto L_088BBF70;
      }
      goto L_088BBEFC;
    }
L_088BBEFC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20432)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BBF38;
      }
      goto L_088BBF1C;
    }
L_088BBF1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBF1C;
      }
      goto L_088BBF38;
    }
L_088BBF38:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20432), 0u);
    goto L_088BBF40;
L_088BBF40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BBF60;
      }
      goto L_088BBF50;
    }
L_088BBF50:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25791))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_088BBF70;
      }
      goto L_088BBF60;
    }
L_088BBF60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(672)));
      if (branch_taken) {
          goto L_088BBF70;
      }
      goto L_088BBF68;
    }
L_088BBF68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_088BBF70;
      }
      goto L_088BBF70;
    }
L_088BBF70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BBF84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 147 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 159 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BBFC4;
      }
      goto L_088BBF94;
    }
L_088BBF94:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -981 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 138u);
      if (branch_taken) {
          goto L_088BBFB4;
      }
      goto L_088BBFA0;
    }
L_088BBFA0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -982 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBFF0;
      }
      goto L_088BBFAC;
    }
L_088BBFAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 1u, 0x088BC000u>(ctx, &aot_mem); return;
      }
      goto L_088BBFB4;
    }
L_088BBFB4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BBFAC;
      }
      goto L_088BBFBC;
    }
L_088BBFBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBFF0;
      }
      goto L_088BBFC4;
    }
L_088BBFC4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 196u);
      if (branch_taken) {
          goto L_088BBFE8;
      }
      goto L_088BBFCC;
    }
L_088BBFCC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 149 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 157 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BBFF0;
      }
      goto L_088BBFD8;
    }
L_088BBFD8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BBFAC;
      }
      goto L_088BBFE0;
    }
L_088BBFE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBFF0;
      }
      goto L_088BBFE8;
    }
L_088BBFE8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BBFAC;
      }
      goto L_088BBFF0;
    }
L_088BBFF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 1u, 0x088BC000u>(ctx, &aot_mem); return;
      }
      goto L_088BBFF8;
    }
L_088BBFF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBFF8;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 1u, 0x088BC000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0045(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0045_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_45(Runtime &runtime) {
    runtime.register_generated_unit(45u, 0x088B8000u, 16384u, &recomp_unit_0045, &recomp_unit_0045_entry);
    runtime.register_function(0x088B8000u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8030u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8034u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8038u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B803Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8064u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8074u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8108u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B811Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8134u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8148u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B815Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B816Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8180u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8190u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8198u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B81A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B81B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B81B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B81C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B81C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B81E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B81E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8200u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8208u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8234u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B823Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8268u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8270u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8280u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8288u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8298u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B82A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B82B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B82B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B82C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B82CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B82D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B82DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B82F0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8308u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B831Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8324u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8334u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8340u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8358u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8368u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8394u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B83B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B83C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B83CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B83DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B83E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B83F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8414u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B841Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8424u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8430u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8438u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B844Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8470u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B847Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8490u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B849Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B84A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B84ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B84B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B84BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B84E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B84FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8528u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8544u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8560u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8568u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8570u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8584u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B85B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B85C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B85E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B860Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8618u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8620u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8624u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B862Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B864Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8654u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B865Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8664u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B866Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B867Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8684u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86F0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8708u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8724u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8730u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8738u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8740u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8758u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B875Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8764u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8780u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B878Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B879Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B87D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B87FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8804u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B880Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8814u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B881Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8824u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8838u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8844u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B884Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8854u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8874u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8884u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8894u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88F0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8908u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8930u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B893Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8944u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8950u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8964u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B898Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A04u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A14u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A2Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A34u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A58u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A80u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A8Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A94u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A9Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8ABCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8AC4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8AF8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B20u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B30u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B40u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B94u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B9Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8C7Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D28u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D38u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D5Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D6Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D74u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D84u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D8Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D94u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D9Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8DA4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8DB8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8DD0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8DD4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E30u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E38u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E74u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E94u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F28u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8FD8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8FF8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9014u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9024u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9038u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9044u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9070u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B907Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9088u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9090u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9100u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9114u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9120u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B912Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9134u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B914Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9158u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9160u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9174u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B917Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9180u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B91A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B91BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B91CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B91E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9204u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B921Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9234u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9258u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B926Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9288u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B929Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B92A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B92B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B92C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B92C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B933Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9344u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B934Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9358u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9360u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9374u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B938Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B93B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B93BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B93C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B93D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B93D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B93ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B93FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9404u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9418u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9428u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9430u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9434u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9454u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9474u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9490u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B94A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B94B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B94C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B94CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B94D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9508u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9510u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9520u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9524u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B953Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B956Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9594u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B959Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B95A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B95E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B95E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9614u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9628u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B962Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B968Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9698u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B96CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B96F0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9708u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9750u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B97B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B97C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B97D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B97D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B97E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B97F0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9808u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9810u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9818u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9824u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9838u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9844u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9850u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9874u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9880u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B98A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B98B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B98C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B98DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B98E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B98F0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9908u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B992Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9948u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9994u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B99B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B99BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B99C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B99E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B99F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A0Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A30u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A5Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A7Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9AD4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9AE0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9AE8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B14u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B3Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B68u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B7Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9BA8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9BACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9BC0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9BCCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9BD4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C58u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C5Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C78u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C88u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9CA8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9CC8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9CD4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9CD8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9D2Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9D30u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9D54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9D64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9D7Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9D84u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9DC8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9DD8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9DECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9DFCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9E18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9E40u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9E54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9E68u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9E78u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9E90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9EACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9EDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9EE8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9EECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F08u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F20u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F78u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F94u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9FCCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9FDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9FECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9FF4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA000u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA00Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA018u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA024u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA02Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA030u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA040u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA064u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA06Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA084u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA0A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA0C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA0C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA0D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA104u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA10Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA118u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA120u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA12Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA134u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA140u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA150u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA164u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA204u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA22Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA258u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA270u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA278u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA280u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA290u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA298u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA2A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA2B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA2C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA2E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA2F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA300u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA304u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA318u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA32Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA344u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA350u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA360u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA370u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA38Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA39Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA3B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA3C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA404u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA40Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA428u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA474u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA47Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA494u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA4A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA4C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA4CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA4F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA520u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA528u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA538u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA548u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA550u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA560u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA564u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA578u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA608u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA620u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA638u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA64Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA650u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA65Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA688u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA6B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA6C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA6D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA6DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA6F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA6FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA738u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA74Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA794u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7F0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA804u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA828u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA834u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA83Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA848u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA860u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA868u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA870u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA87Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA884u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA894u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA89Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA8A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA8B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA8BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA8C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA8ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA8F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA8FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA904u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA90Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA914u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA91Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA924u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA92Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA964u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA978u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA984u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA990u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA99Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA08u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA20u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA28u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA30u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA38u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA40u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA58u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA6Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA84u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAB8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAC8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAD4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAF4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAFCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB0Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB28u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB34u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB40u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB58u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB68u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB78u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB80u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB88u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BABA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BABDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BABE4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BABE8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BABF0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BABF8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC00u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC08u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC24u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC2Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC30u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC38u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC58u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC6Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC78u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC80u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC8Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC94u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACB4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACC0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACCCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACD4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACF4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD04u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD20u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD30u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD38u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD58u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BADA4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BADACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BADB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BADD4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BADF4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BADFCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE1Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE28u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE34u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE58u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE6Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE94u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEB4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEBCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEE8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEF4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF04u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF2Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF34u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF3Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF6Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF78u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF8Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAFB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAFB4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAFBCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAFDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAFE4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAFECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAFF8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB004u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB010u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB018u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB020u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB028u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB038u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB040u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB048u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB058u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB060u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB068u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB070u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB078u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB080u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB090u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB098u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB100u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB108u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB110u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB11Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB128u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB134u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB13Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB144u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB14Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB154u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB15Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB160u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB178u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB190u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB198u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB210u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB220u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB22Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB234u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB23Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB244u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB24Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB254u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB25Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB26Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB278u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB28Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB298u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB308u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB32Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB338u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB348u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB350u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB358u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB360u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB368u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB374u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB37Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB384u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB38Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB394u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB39Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB414u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB420u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB438u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB440u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB458u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB464u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB474u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB47Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB490u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB4A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB4B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB4CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB4F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB4FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB504u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB514u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB540u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB548u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB564u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB56Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB574u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB57Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB590u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB598u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB5ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB5B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB5BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB5C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB5D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB5E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB5ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB618u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB620u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB628u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB64Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB654u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB66Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB680u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB684u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB6A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB6C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB6E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB6F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB744u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB750u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB758u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB764u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB770u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB780u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB784u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB78Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB794u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB7A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB7B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB7C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB7E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB7ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB7F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB804u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB818u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB824u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB830u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB850u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB85Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB868u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB874u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB880u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB8A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB8ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB8B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB8BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB8C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB8D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB8E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB8ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB8F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB904u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB90Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB920u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB938u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB948u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB950u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB954u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB960u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB990u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB99Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB9FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBA1Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBA34u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBA64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBAC0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBAF0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBAF8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB04u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB20u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB30u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB40u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB58u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB6Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB80u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB84u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB94u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB9Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBBDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBBECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBBFCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBC44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBC54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBC64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBCA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBCB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBCCCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBCD4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD00u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD08u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD58u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD80u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD8Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDB4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDC4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDCCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDD4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDE4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDE8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDF0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDF8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE08u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE20u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE28u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE30u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE7Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE84u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBEA8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBEB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBEB8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBEC0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBEC8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBECCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBED4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBEDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBEECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBEF4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBEFCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF1Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF38u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF40u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF68u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF84u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF94u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBFA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBFACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBFB4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBFBCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBFC4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBFCCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBFD8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBFE0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBFE8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBFF0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBFF8u, &recomp_unit_0045, "recomp_unit_0045");
}
} // namespace psprecomp
