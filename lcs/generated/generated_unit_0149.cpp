#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0149[4093] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13,
    0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 0, 25, 0, 26, 0,
    27, 0, 0, 0, 28, 0, 29, 0, 0, 30, 0, 31, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0,
    0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 54, 0, 0, 55, 0, 56, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59,
    0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 69, 0, 70, 0, 0, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75,
    0, 0, 0, 0, 76, 0, 0, 77, 0, 78, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 86, 0, 87, 0, 0, 0, 88, 0, 89,
    0, 90, 0, 91, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106,
    0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    112, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 116, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0,
    0, 120, 0, 0, 0, 0, 121, 0, 0, 122, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 127, 0, 128,
    0, 129, 130, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164,
    0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 168, 0, 0, 0, 0, 169, 0, 170, 0, 0, 171, 0, 172, 173, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176,
    0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0,
    0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 188, 0, 189, 0, 0, 0, 190, 0, 0, 191, 0, 192,
    0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0,
    0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0,
    0, 228, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 236,
    0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 241, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0,
    254, 0, 255, 0, 256, 0, 257, 0, 258, 0, 259, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 269,
    0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 276, 0,
    0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    281, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 287,
    0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 291, 292, 0, 293, 0, 0, 294, 295, 0, 296, 0, 0, 0, 297, 0, 0,
    0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0,
    0, 0, 314, 0, 0, 0, 0, 315, 316, 0, 317, 0, 318, 0, 319, 0, 320, 0, 321, 0, 322, 0, 0, 0, 0, 323, 324, 0, 325, 0, 326, 0,
    327, 0, 328, 0, 329, 0, 330, 0, 0, 331, 0, 332, 0, 333, 0, 334, 0, 335, 0, 0, 0, 336, 0, 337, 0, 338, 0, 0, 0, 339, 340, 0,
    341, 0, 342, 0, 0, 343, 0, 344, 0, 345, 346, 0, 347, 0, 348, 0, 0, 349, 0, 350, 0, 351, 352, 0, 353, 0, 354, 0, 0, 0, 0, 0,
    0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 364, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0,
    0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 373, 374, 0, 375, 0, 376, 0, 377, 0, 378, 0, 379, 0, 0, 0, 0, 380, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0,
    385, 0, 0, 0, 0, 0, 0, 0, 386, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 398, 0, 399, 0, 0, 0, 400, 401, 0, 402, 0, 0, 403, 0,
    0, 404, 0, 0, 405, 0, 406, 407, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 411, 0, 0, 412,
    0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 424, 425, 0, 0,
    426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 432, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434,
    0, 0, 0, 435, 0, 0, 436, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 440, 0, 441, 0, 0, 442, 0, 443, 0, 0, 0, 0,
    444, 0, 445, 0, 446, 0, 0, 0, 447, 0, 0, 448, 0, 449, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0,
    456, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 460, 0, 461, 0, 0, 0, 462, 463, 0, 0, 464, 0, 0,
    0, 465, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0,
    0, 0, 477, 478, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 486, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 490, 0, 491, 0, 0, 0, 0, 492, 0, 0, 493, 0, 494, 0,
    0, 495, 0, 496, 0, 0, 497, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0, 501, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 503, 0, 504, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0, 0,
    509, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 513, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0,
    517, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 522, 0, 0, 0,
    0, 523, 0, 524, 525, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 528, 529, 0, 530, 0, 0, 0, 0, 0,
    531, 0, 532, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 539, 0, 0, 0,
    0, 0, 0, 540, 0, 0, 0, 541, 0, 542, 543, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 546, 0, 0, 547, 0, 0,
    548, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 551, 0, 0, 0, 552, 553, 0, 554, 0, 0, 0, 0, 0, 555, 0,
    0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 559, 560, 0, 561, 0, 0, 562, 0, 0, 563, 0, 564, 565, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 576, 577, 0, 578, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0,
    0, 581, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 585, 0, 0, 0, 586, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 593, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 600, 0, 0, 0, 601, 0, 602,
    0, 0, 603, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0,
    0, 0, 606, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 611,
    0, 0, 612, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 617, 0, 618, 619, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 623, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 624, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 627, 628, 0, 0, 629, 630, 0, 0,
    631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 633, 0, 634, 0, 0, 0, 0, 635, 0, 636, 0, 0,
    0, 637, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 641, 0, 0, 642, 0,
    0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 644, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 648, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 650, 0, 651, 0, 652, 0,
    0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 654, 655, 656, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 660, 0, 0, 661, 0, 662, 0, 0, 0, 0, 0, 0, 0, 663, 0, 664, 665, 0, 0,
    0, 0, 0, 0, 0, 0, 666, 667, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 670, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 674, 0, 0, 0, 0, 0,
    0, 0, 0, 675, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 680, 0, 681, 0, 682, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 688, 0, 0, 689, 0, 0,
    690, 0, 0, 0, 0, 0, 0, 0, 691, 692, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 697, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 701,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 704,
};
void recomp_unit_0149_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A58000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0149[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A58000;
    case 2u: goto L_08A5806C;
    case 3u: goto L_08A580FC;
    case 4u: goto L_08A58178;
    case 5u: goto L_08A581A4;
    case 6u: goto L_08A581C8;
    case 7u: goto L_08A581D4;
    case 8u: goto L_08A581E0;
    case 9u: goto L_08A581F0;
    case 10u: goto L_08A58208;
    case 11u: goto L_08A58230;
    case 12u: goto L_08A58254;
    case 13u: goto L_08A5827C;
    case 14u: goto L_08A5829C;
    case 15u: goto L_08A582BC;
    case 16u: goto L_08A582E4;
    case 17u: goto L_08A5830C;
    case 18u: goto L_08A58328;
    case 19u: goto L_08A58350;
    case 20u: goto L_08A58378;
    case 21u: goto L_08A583A0;
    case 22u: goto L_08A583C8;
    case 23u: goto L_08A583D0;
    case 24u: goto L_08A583D8;
    case 25u: goto L_08A583F0;
    case 26u: goto L_08A583F8;
    case 27u: goto L_08A58400;
    case 28u: goto L_08A58410;
    case 29u: goto L_08A58418;
    case 30u: goto L_08A58424;
    case 31u: goto L_08A5842C;
    case 32u: goto L_08A58430;
    case 33u: goto L_08A58438;
    case 34u: goto L_08A5845C;
    case 35u: goto L_08A58468;
    case 36u: goto L_08A58474;
    case 37u: goto L_08A58484;
    case 38u: goto L_08A5849C;
    case 39u: goto L_08A584B4;
    case 40u: goto L_08A584D0;
    case 41u: goto L_08A584F0;
    case 42u: goto L_08A58508;
    case 43u: goto L_08A58520;
    case 44u: goto L_08A58538;
    case 45u: goto L_08A58558;
    case 46u: goto L_08A58578;
    case 47u: goto L_08A5858C;
    case 48u: goto L_08A585AC;
    case 49u: goto L_08A585CC;
    case 50u: goto L_08A585EC;
    case 51u: goto L_08A5860C;
    case 52u: goto L_08A58620;
    case 53u: goto L_08A58630;
    case 54u: goto L_08A58638;
    case 55u: goto L_08A58644;
    case 56u: goto L_08A5864C;
    case 57u: goto L_08A58650;
    case 58u: goto L_08A58658;
    case 59u: goto L_08A5867C;
    case 60u: goto L_08A58688;
    case 61u: goto L_08A58694;
    case 62u: goto L_08A586A8;
    case 63u: goto L_08A586BC;
    case 64u: goto L_08A586CC;
    case 65u: goto L_08A58708;
    case 66u: goto L_08A58714;
    case 67u: goto L_08A58730;
    case 68u: goto L_08A58738;
    case 69u: goto L_08A58744;
    case 70u: goto L_08A5874C;
    case 71u: goto L_08A5875C;
    case 72u: goto L_08A58764;
    case 73u: goto L_08A5876C;
    case 74u: goto L_08A58774;
    case 75u: goto L_08A5877C;
    case 76u: goto L_08A58790;
    case 77u: goto L_08A5879C;
    case 78u: goto L_08A587A4;
    case 79u: goto L_08A587A8;
    case 80u: goto L_08A587B0;
    case 81u: goto L_08A587E0;
    case 82u: goto L_08A5881C;
    case 83u: goto L_08A58824;
    case 84u: goto L_08A58848;
    case 85u: goto L_08A58850;
    case 86u: goto L_08A5885C;
    case 87u: goto L_08A58864;
    case 88u: goto L_08A58874;
    case 89u: goto L_08A5887C;
    case 90u: goto L_08A58884;
    case 91u: goto L_08A5888C;
    case 92u: goto L_08A58894;
    case 93u: goto L_08A588A8;
    case 94u: goto L_08A588B8;
    case 95u: goto L_08A588C0;
    case 96u: goto L_08A588D4;
    case 97u: goto L_08A588E0;
    case 98u: goto L_08A58900;
    case 99u: goto L_08A58908;
    case 100u: goto L_08A58938;
    case 101u: goto L_08A58950;
    case 102u: goto L_08A58964;
    case 103u: goto L_08A5896C;
    case 104u: goto L_08A5898C;
    case 105u: goto L_08A589E8;
    case 106u: goto L_08A589FC;
    case 107u: goto L_08A58A0C;
    case 108u: goto L_08A58A14;
    case 109u: goto L_08A58A38;
    case 110u: goto L_08A58A4C;
    case 111u: goto L_08A58A70;
    case 112u: goto L_08A58A80;
    case 113u: goto L_08A58A88;
    case 114u: goto L_08A58A98;
    case 115u: goto L_08A58AB0;
    case 116u: goto L_08A58AB8;
    case 117u: goto L_08A58ABC;
    case 118u: goto L_08A58AD4;
    case 119u: goto L_08A58AF8;
    case 120u: goto L_08A58B04;
    case 121u: goto L_08A58B18;
    case 122u: goto L_08A58B24;
    case 123u: goto L_08A58B28;
    case 124u: goto L_08A58B54;
    case 125u: goto L_08A58B60;
    case 126u: goto L_08A58B6C;
    case 127u: goto L_08A58B74;
    case 128u: goto L_08A58B7C;
    case 129u: goto L_08A58B84;
    case 130u: goto L_08A58B88;
    case 131u: goto L_08A58BA0;
    case 132u: goto L_08A58BAC;
    case 133u: goto L_08A58BC4;
    case 134u: goto L_08A58BD0;
    case 135u: goto L_08A58BE8;
    case 136u: goto L_08A58C00;
    case 137u: goto L_08A58C34;
    case 138u: goto L_08A58C3C;
    case 139u: goto L_08A58C4C;
    case 140u: goto L_08A58C54;
    case 141u: goto L_08A58C64;
    case 142u: goto L_08A58C80;
    case 143u: goto L_08A58CB4;
    case 144u: goto L_08A58CBC;
    case 145u: goto L_08A58CCC;
    case 146u: goto L_08A58CD4;
    case 147u: goto L_08A58CE4;
    case 148u: goto L_08A58D00;
    case 149u: goto L_08A58D18;
    case 150u: goto L_08A58E3C;
    case 151u: goto L_08A58E50;
    case 152u: goto L_08A58E68;
    case 153u: goto L_08A58ED0;
    case 154u: goto L_08A58F28;
    case 155u: goto L_08A58F30;
    case 156u: goto L_08A58F80;
    case 157u: goto L_08A58F88;
    case 158u: goto L_08A58FCC;
    case 159u: goto L_08A58FD4;
    case 160u: goto L_08A59010;
    case 161u: goto L_08A59018;
    case 162u: goto L_08A5904C;
    case 163u: goto L_08A59054;
    case 164u: goto L_08A5907C;
    case 165u: goto L_08A59084;
    case 166u: goto L_08A59094;
    case 167u: goto L_08A590A0;
    case 168u: goto L_08A590A8;
    case 169u: goto L_08A590BC;
    case 170u: goto L_08A590C4;
    case 171u: goto L_08A590D0;
    case 172u: goto L_08A590D8;
    case 173u: goto L_08A590DC;
    case 174u: goto L_08A59124;
    case 175u: goto L_08A59170;
    case 176u: goto L_08A5917C;
    case 177u: goto L_08A59190;
    case 178u: goto L_08A5919C;
    case 179u: goto L_08A591AC;
    case 180u: goto L_08A591C0;
    case 181u: goto L_08A591C8;
    case 182u: goto L_08A591DC;
    case 183u: goto L_08A591F8;
    case 184u: goto L_08A59204;
    case 185u: goto L_08A5920C;
    case 186u: goto L_08A59228;
    case 187u: goto L_08A5924C;
    case 188u: goto L_08A59250;
    case 189u: goto L_08A59258;
    case 190u: goto L_08A59268;
    case 191u: goto L_08A59274;
    case 192u: goto L_08A5927C;
    case 193u: goto L_08A59284;
    case 194u: goto L_08A5928C;
    case 195u: goto L_08A59294;
    case 196u: goto L_08A5929C;
    case 197u: goto L_08A592A4;
    case 198u: goto L_08A592AC;
    case 199u: goto L_08A592C8;
    case 200u: goto L_08A592D0;
    case 201u: goto L_08A592E4;
    case 202u: goto L_08A592F8;
    case 203u: goto L_08A59308;
    case 204u: goto L_08A59310;
    case 205u: goto L_08A59330;
    case 206u: goto L_08A5933C;
    case 207u: goto L_08A59348;
    case 208u: goto L_08A59370;
    case 209u: goto L_08A59378;
    case 210u: goto L_08A59380;
    case 211u: goto L_08A593A0;
    case 212u: goto L_08A593A8;
    case 213u: goto L_08A593B0;
    case 214u: goto L_08A593B8;
    case 215u: goto L_08A593CC;
    case 216u: goto L_08A59400;
    case 217u: goto L_08A59410;
    case 218u: goto L_08A5942C;
    case 219u: goto L_08A59438;
    case 220u: goto L_08A59440;
    case 221u: goto L_08A5945C;
    case 222u: goto L_08A59490;
    case 223u: goto L_08A5949C;
    case 224u: goto L_08A594CC;
    case 225u: goto L_08A594DC;
    case 226u: goto L_08A594E8;
    case 227u: goto L_08A594F4;
    case 228u: goto L_08A59504;
    case 229u: goto L_08A59518;
    case 230u: goto L_08A59524;
    case 231u: goto L_08A5953C;
    case 232u: goto L_08A59548;
    case 233u: goto L_08A59550;
    case 234u: goto L_08A59564;
    case 235u: goto L_08A59578;
    case 236u: goto L_08A5957C;
    case 237u: goto L_08A5958C;
    case 238u: goto L_08A5959C;
    case 239u: goto L_08A595AC;
    case 240u: goto L_08A595BC;
    case 241u: goto L_08A595C4;
    case 242u: goto L_08A595D0;
    case 243u: goto L_08A595E0;
    case 244u: goto L_08A595FC;
    case 245u: goto L_08A59638;
    case 246u: goto L_08A59644;
    case 247u: goto L_08A59650;
    case 248u: goto L_08A5965C;
    case 249u: goto L_08A59688;
    case 250u: goto L_08A596A4;
    case 251u: goto L_08A596C0;
    case 252u: goto L_08A596DC;
    case 253u: goto L_08A596E4;
    case 254u: goto L_08A59700;
    case 255u: goto L_08A59708;
    case 256u: goto L_08A59710;
    case 257u: goto L_08A59718;
    case 258u: goto L_08A59720;
    case 259u: goto L_08A59728;
    case 260u: goto L_08A59738;
    case 261u: goto L_08A59740;
    case 262u: goto L_08A5975C;
    case 263u: goto L_08A59764;
    case 264u: goto L_08A5979C;
    case 265u: goto L_08A597A4;
    case 266u: goto L_08A597B4;
    case 267u: goto L_08A597E4;
    case 268u: goto L_08A597EC;
    case 269u: goto L_08A597FC;
    case 270u: goto L_08A5980C;
    case 271u: goto L_08A59818;
    case 272u: goto L_08A5983C;
    case 273u: goto L_08A5984C;
    case 274u: goto L_08A59858;
    case 275u: goto L_08A5986C;
    case 276u: goto L_08A59878;
    case 277u: goto L_08A59894;
    case 278u: goto L_08A598B0;
    case 279u: goto L_08A598D0;
    case 280u: goto L_08A59934;
    case 281u: goto L_08A59980;
    case 282u: goto L_08A59984;
    case 283u: goto L_08A599AC;
    case 284u: goto L_08A599BC;
    case 285u: goto L_08A599D0;
    case 286u: goto L_08A599F8;
    case 287u: goto L_08A599FC;
    case 288u: goto L_08A59A0C;
    case 289u: goto L_08A59A1C;
    case 290u: goto L_08A59A38;
    case 291u: goto L_08A59A40;
    case 292u: goto L_08A59A44;
    case 293u: goto L_08A59A4C;
    case 294u: goto L_08A59A58;
    case 295u: goto L_08A59A5C;
    case 296u: goto L_08A59A64;
    case 297u: goto L_08A59A74;
    case 298u: goto L_08A59A84;
    case 299u: goto L_08A59A98;
    case 300u: goto L_08A59AAC;
    case 301u: goto L_08A59AB0;
    case 302u: goto L_08A59AC0;
    case 303u: goto L_08A59AF0;
    case 304u: goto L_08A59B1C;
    case 305u: goto L_08A59B28;
    case 306u: goto L_08A59B3C;
    case 307u: goto L_08A59B54;
    case 308u: goto L_08A59B80;
    case 309u: goto L_08A59BC8;
    case 310u: goto L_08A59C1C;
    case 311u: goto L_08A59C44;
    case 312u: goto L_08A59C5C;
    case 313u: goto L_08A59C74;
    case 314u: goto L_08A59C88;
    case 315u: goto L_08A59C9C;
    case 316u: goto L_08A59CA0;
    case 317u: goto L_08A59CA8;
    case 318u: goto L_08A59CB0;
    case 319u: goto L_08A59CB8;
    case 320u: goto L_08A59CC0;
    case 321u: goto L_08A59CC8;
    case 322u: goto L_08A59CD0;
    case 323u: goto L_08A59CE4;
    case 324u: goto L_08A59CE8;
    case 325u: goto L_08A59CF0;
    case 326u: goto L_08A59CF8;
    case 327u: goto L_08A59D00;
    case 328u: goto L_08A59D08;
    case 329u: goto L_08A59D10;
    case 330u: goto L_08A59D18;
    case 331u: goto L_08A59D24;
    case 332u: goto L_08A59D2C;
    case 333u: goto L_08A59D34;
    case 334u: goto L_08A59D3C;
    case 335u: goto L_08A59D44;
    case 336u: goto L_08A59D54;
    case 337u: goto L_08A59D5C;
    case 338u: goto L_08A59D64;
    case 339u: goto L_08A59D74;
    case 340u: goto L_08A59D78;
    case 341u: goto L_08A59D80;
    case 342u: goto L_08A59D88;
    case 343u: goto L_08A59D94;
    case 344u: goto L_08A59D9C;
    case 345u: goto L_08A59DA4;
    case 346u: goto L_08A59DA8;
    case 347u: goto L_08A59DB0;
    case 348u: goto L_08A59DB8;
    case 349u: goto L_08A59DC4;
    case 350u: goto L_08A59DCC;
    case 351u: goto L_08A59DD4;
    case 352u: goto L_08A59DD8;
    case 353u: goto L_08A59DE0;
    case 354u: goto L_08A59DE8;
    case 355u: goto L_08A59E08;
    case 356u: goto L_08A59E24;
    case 357u: goto L_08A59E2C;
    case 358u: goto L_08A59E70;
    case 359u: goto L_08A59E7C;
    case 360u: goto L_08A59EB4;
    case 361u: goto L_08A59EC8;
    case 362u: goto L_08A59EDC;
    case 363u: goto L_08A59EEC;
    case 364u: goto L_08A59EF8;
    case 365u: goto L_08A59F20;
    case 366u: goto L_08A59F2C;
    case 367u: goto L_08A59F38;
    case 368u: goto L_08A59F40;
    case 369u: goto L_08A59F74;
    case 370u: goto L_08A59F84;
    case 371u: goto L_08A59FA0;
    case 372u: goto L_08A59FA8;
    case 373u: goto L_08A59FB4;
    case 374u: goto L_08A59FB8;
    case 375u: goto L_08A59FC0;
    case 376u: goto L_08A59FC8;
    case 377u: goto L_08A59FD0;
    case 378u: goto L_08A59FD8;
    case 379u: goto L_08A59FE0;
    case 380u: goto L_08A59FF4;
    case 381u: goto L_08A5A020;
    case 382u: goto L_08A5A044;
    case 383u: goto L_08A5A06C;
    case 384u: goto L_08A5A078;
    case 385u: goto L_08A5A080;
    case 386u: goto L_08A5A0A0;
    case 387u: goto L_08A5A0A4;
    case 388u: goto L_08A5A0CC;
    case 389u: goto L_08A5A0D4;
    case 390u: goto L_08A5A0E8;
    case 391u: goto L_08A5A120;
    case 392u: goto L_08A5A128;
    case 393u: goto L_08A5A12C;
    case 394u: goto L_08A5A148;
    case 395u: goto L_08A5A168;
    case 396u: goto L_08A5A1B0;
    case 397u: goto L_08A5A1C0;
    case 398u: goto L_08A5A1C8;
    case 399u: goto L_08A5A1D0;
    case 400u: goto L_08A5A1E0;
    case 401u: goto L_08A5A1E4;
    case 402u: goto L_08A5A1EC;
    case 403u: goto L_08A5A1F8;
    case 404u: goto L_08A5A204;
    case 405u: goto L_08A5A210;
    case 406u: goto L_08A5A218;
    case 407u: goto L_08A5A21C;
    case 408u: goto L_08A5A224;
    case 409u: goto L_08A5A244;
    case 410u: goto L_08A5A26C;
    case 411u: goto L_08A5A270;
    case 412u: goto L_08A5A27C;
    case 413u: goto L_08A5A298;
    case 414u: goto L_08A5A2B4;
    case 415u: goto L_08A5A2BC;
    case 416u: goto L_08A5A2D0;
    case 417u: goto L_08A5A2E8;
    case 418u: goto L_08A5A2F0;
    case 419u: goto L_08A5A320;
    case 420u: goto L_08A5A32C;
    case 421u: goto L_08A5A344;
    case 422u: goto L_08A5A34C;
    case 423u: goto L_08A5A364;
    case 424u: goto L_08A5A370;
    case 425u: goto L_08A5A374;
    case 426u: goto L_08A5A380;
    case 427u: goto L_08A5A3C4;
    case 428u: goto L_08A5A3D4;
    case 429u: goto L_08A5A3FC;
    case 430u: goto L_08A5A430;
    case 431u: goto L_08A5A438;
    case 432u: goto L_08A5A444;
    case 433u: goto L_08A5A44C;
    case 434u: goto L_08A5A47C;
    case 435u: goto L_08A5A48C;
    case 436u: goto L_08A5A498;
    case 437u: goto L_08A5A4A0;
    case 438u: goto L_08A5A4B4;
    case 439u: goto L_08A5A4C4;
    case 440u: goto L_08A5A4D0;
    case 441u: goto L_08A5A4D8;
    case 442u: goto L_08A5A4E4;
    case 443u: goto L_08A5A4EC;
    case 444u: goto L_08A5A500;
    case 445u: goto L_08A5A508;
    case 446u: goto L_08A5A510;
    case 447u: goto L_08A5A520;
    case 448u: goto L_08A5A52C;
    case 449u: goto L_08A5A534;
    case 450u: goto L_08A5A548;
    case 451u: goto L_08A5A554;
    case 452u: goto L_08A5A574;
    case 453u: goto L_08A5A5D4;
    case 454u: goto L_08A5A5E0;
    case 455u: goto L_08A5A5F4;
    case 456u: goto L_08A5A600;
    case 457u: goto L_08A5A620;
    case 458u: goto L_08A5A62C;
    case 459u: goto L_08A5A640;
    case 460u: goto L_08A5A64C;
    case 461u: goto L_08A5A654;
    case 462u: goto L_08A5A664;
    case 463u: goto L_08A5A668;
    case 464u: goto L_08A5A674;
    case 465u: goto L_08A5A684;
    case 466u: goto L_08A5A68C;
    case 467u: goto L_08A5A69C;
    case 468u: goto L_08A5A6B4;
    case 469u: goto L_08A5A6BC;
    case 470u: goto L_08A5A6D8;
    case 471u: goto L_08A5A714;
    case 472u: goto L_08A5A720;
    case 473u: goto L_08A5A73C;
    case 474u: goto L_08A5A748;
    case 475u: goto L_08A5A768;
    case 476u: goto L_08A5A770;
    case 477u: goto L_08A5A788;
    case 478u: goto L_08A5A78C;
    case 479u: goto L_08A5A794;
    case 480u: goto L_08A5A7B0;
    case 481u: goto L_08A5A7CC;
    case 482u: goto L_08A5A7EC;
    case 483u: goto L_08A5A7FC;
    case 484u: goto L_08A5A828;
    case 485u: goto L_08A5A854;
    case 486u: goto L_08A5A894;
    case 487u: goto L_08A5A89C;
    case 488u: goto L_08A5A8B0;
    case 489u: goto L_08A5A8C0;
    case 490u: goto L_08A5A8C8;
    case 491u: goto L_08A5A8D0;
    case 492u: goto L_08A5A8E4;
    case 493u: goto L_08A5A8F0;
    case 494u: goto L_08A5A8F8;
    case 495u: goto L_08A5A904;
    case 496u: goto L_08A5A90C;
    case 497u: goto L_08A5A918;
    case 498u: goto L_08A5A920;
    case 499u: goto L_08A5A964;
    case 500u: goto L_08A5A96C;
    case 501u: goto L_08A5A978;
    case 502u: goto L_08A5A9BC;
    case 503u: goto L_08A5AA08;
    case 504u: goto L_08A5AA10;
    case 505u: goto L_08A5AA18;
    case 506u: goto L_08A5AA48;
    case 507u: goto L_08A5AA5C;
    case 508u: goto L_08A5AA70;
    case 509u: goto L_08A5AA80;
    case 510u: goto L_08A5AA8C;
    case 511u: goto L_08A5AAB4;
    case 512u: goto L_08A5AAC0;
    case 513u: goto L_08A5AACC;
    case 514u: goto L_08A5AAD4;
    case 515u: goto L_08A5AAE8;
    case 516u: goto L_08A5AAF8;
    case 517u: goto L_08A5AB00;
    case 518u: goto L_08A5AB0C;
    case 519u: goto L_08A5AB38;
    case 520u: goto L_08A5AB40;
    case 521u: goto L_08A5AB68;
    case 522u: goto L_08A5AB70;
    case 523u: goto L_08A5AB84;
    case 524u: goto L_08A5AB8C;
    case 525u: goto L_08A5AB90;
    case 526u: goto L_08A5ABB4;
    case 527u: goto L_08A5ABCC;
    case 528u: goto L_08A5ABDC;
    case 529u: goto L_08A5ABE0;
    case 530u: goto L_08A5ABE8;
    case 531u: goto L_08A5AC00;
    case 532u: goto L_08A5AC08;
    case 533u: goto L_08A5AC18;
    case 534u: goto L_08A5AC34;
    case 535u: goto L_08A5AC74;
    case 536u: goto L_08A5ACA8;
    case 537u: goto L_08A5ACD4;
    case 538u: goto L_08A5ACEC;
    case 539u: goto L_08A5ACF0;
    case 540u: goto L_08A5AD0C;
    case 541u: goto L_08A5AD1C;
    case 542u: goto L_08A5AD24;
    case 543u: goto L_08A5AD28;
    case 544u: goto L_08A5AD34;
    case 545u: goto L_08A5AD60;
    case 546u: goto L_08A5AD68;
    case 547u: goto L_08A5AD74;
    case 548u: goto L_08A5AD80;
    case 549u: goto L_08A5AD84;
    case 550u: goto L_08A5ADAC;
    case 551u: goto L_08A5ADC4;
    case 552u: goto L_08A5ADD4;
    case 553u: goto L_08A5ADD8;
    case 554u: goto L_08A5ADE0;
    case 555u: goto L_08A5ADF8;
    case 556u: goto L_08A5AE10;
    case 557u: goto L_08A5AE28;
    case 558u: goto L_08A5AE38;
    case 559u: goto L_08A5AE48;
    case 560u: goto L_08A5AE4C;
    case 561u: goto L_08A5AE54;
    case 562u: goto L_08A5AE60;
    case 563u: goto L_08A5AE6C;
    case 564u: goto L_08A5AE74;
    case 565u: goto L_08A5AE78;
    case 566u: goto L_08A5AEA8;
    case 567u: goto L_08A5AED4;
    case 568u: goto L_08A5AEDC;
    case 569u: goto L_08A5AF5C;
    case 570u: goto L_08A5AFB8;
    case 571u: goto L_08A5AFBC;
    case 572u: goto L_08A5B054;
    case 573u: goto L_08A5B064;
    case 574u: goto L_08A5B08C;
    case 575u: goto L_08A5B0AC;
    case 576u: goto L_08A5B0BC;
    case 577u: goto L_08A5B0C0;
    case 578u: goto L_08A5B0C8;
    case 579u: goto L_08A5B0DC;
    case 580u: goto L_08A5B174;
    case 581u: goto L_08A5B184;
    case 582u: goto L_08A5B1A0;
    case 583u: goto L_08A5B1B4;
    case 584u: goto L_08A5B1D4;
    case 585u: goto L_08A5B1E0;
    case 586u: goto L_08A5B1F0;
    case 587u: goto L_08A5B224;
    case 588u: goto L_08A5B254;
    case 589u: goto L_08A5B284;
    case 590u: goto L_08A5B2A0;
    case 591u: goto L_08A5B2B0;
    case 592u: goto L_08A5B32C;
    case 593u: goto L_08A5B338;
    case 594u: goto L_08A5B340;
    case 595u: goto L_08A5B36C;
    case 596u: goto L_08A5B3F4;
    case 597u: goto L_08A5B438;
    case 598u: goto L_08A5B450;
    case 599u: goto L_08A5B4D8;
    case 600u: goto L_08A5B4E4;
    case 601u: goto L_08A5B4F4;
    case 602u: goto L_08A5B4FC;
    case 603u: goto L_08A5B508;
    case 604u: goto L_08A5B510;
    case 605u: goto L_08A5B568;
    case 606u: goto L_08A5B588;
    case 607u: goto L_08A5B594;
    case 608u: goto L_08A5B5A4;
    case 609u: goto L_08A5B5CC;
    case 610u: goto L_08A5B5DC;
    case 611u: goto L_08A5B5FC;
    case 612u: goto L_08A5B608;
    case 613u: goto L_08A5B618;
    case 614u: goto L_08A5B634;
    case 615u: goto L_08A5B644;
    case 616u: goto L_08A5B664;
    case 617u: goto L_08A5B690;
    case 618u: goto L_08A5B698;
    case 619u: goto L_08A5B69C;
    case 620u: goto L_08A5B6AC;
    case 621u: goto L_08A5B744;
    case 622u: goto L_08A5B758;
    case 623u: goto L_08A5B760;
    case 624u: goto L_08A5B78C;
    case 625u: goto L_08A5B798;
    case 626u: goto L_08A5B7C0;
    case 627u: goto L_08A5B7E0;
    case 628u: goto L_08A5B7E4;
    case 629u: goto L_08A5B7F0;
    case 630u: goto L_08A5B7F4;
    case 631u: goto L_08A5B800;
    case 632u: goto L_08A5B840;
    case 633u: goto L_08A5B850;
    case 634u: goto L_08A5B858;
    case 635u: goto L_08A5B86C;
    case 636u: goto L_08A5B874;
    case 637u: goto L_08A5B884;
    case 638u: goto L_08A5B890;
    case 639u: goto L_08A5B8BC;
    case 640u: goto L_08A5B8DC;
    case 641u: goto L_08A5B8EC;
    case 642u: goto L_08A5B8F8;
    case 643u: goto L_08A5B914;
    case 644u: goto L_08A5B930;
    case 645u: goto L_08A5B93C;
    case 646u: goto L_08A5B96C;
    case 647u: goto L_08A5B9B4;
    case 648u: goto L_08A5B9BC;
    case 649u: goto L_08A5B9D4;
    case 650u: goto L_08A5B9E8;
    case 651u: goto L_08A5B9F0;
    case 652u: goto L_08A5B9F8;
    case 653u: goto L_08A5BA08;
    case 654u: goto L_08A5BA2C;
    case 655u: goto L_08A5BA30;
    case 656u: goto L_08A5BA34;
    case 657u: goto L_08A5BA3C;
    case 658u: goto L_08A5BA84;
    case 659u: goto L_08A5BAAC;
    case 660u: goto L_08A5BAB4;
    case 661u: goto L_08A5BAC0;
    case 662u: goto L_08A5BAC8;
    case 663u: goto L_08A5BAE8;
    case 664u: goto L_08A5BAF0;
    case 665u: goto L_08A5BAF4;
    case 666u: goto L_08A5BB18;
    case 667u: goto L_08A5BB1C;
    case 668u: goto L_08A5BB3C;
    case 669u: goto L_08A5BB68;
    case 670u: goto L_08A5BB70;
    case 671u: goto L_08A5BBB4;
    case 672u: goto L_08A5BBBC;
    case 673u: goto L_08A5BBE0;
    case 674u: goto L_08A5BBE8;
    case 675u: goto L_08A5BC0C;
    case 676u: goto L_08A5BC14;
    case 677u: goto L_08A5BC50;
    case 678u: goto L_08A5BC98;
    case 679u: goto L_08A5BCC4;
    case 680u: goto L_08A5BCD8;
    case 681u: goto L_08A5BCE0;
    case 682u: goto L_08A5BCE8;
    case 683u: goto L_08A5BD14;
    case 684u: goto L_08A5BD40;
    case 685u: goto L_08A5BD5C;
    case 686u: goto L_08A5BDB4;
    case 687u: goto L_08A5BDDC;
    case 688u: goto L_08A5BDE8;
    case 689u: goto L_08A5BDF4;
    case 690u: goto L_08A5BE00;
    case 691u: goto L_08A5BE20;
    case 692u: goto L_08A5BE24;
    case 693u: goto L_08A5BE34;
    case 694u: goto L_08A5BE5C;
    case 695u: goto L_08A5BE98;
    case 696u: goto L_08A5BEE4;
    case 697u: goto L_08A5BEF4;
    case 698u: goto L_08A5BF30;
    case 699u: goto L_08A5BF3C;
    case 700u: goto L_08A5BF78;
    case 701u: goto L_08A5BF7C;
    case 702u: goto L_08A5BFB4;
    case 703u: goto L_08A5BFD4;
    case 704u: goto L_08A5BFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A58000:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = ctx.fpr[22] - ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A58178;
      }
      goto L_08A5806C;
    }
L_08A5806C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[5] = (16896u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.gpr[4] = (16384u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = ctx.fpr[22] - ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A58178;
      }
      goto L_08A580FC;
    }
L_08A580FC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (16896u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (16384u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[18]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = ctx.fpr[22] + ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[18] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A58178;
L_08A58178:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08A581A4:
    ctx.gpr[9] = (2233u << 16u);
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(-5016));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-5016)));
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 126u);
      if (branch_taken) {
          goto L_08A581E0;
      }
      goto L_08A581C8;
    }
L_08A581C8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A581E0;
      }
      goto L_08A581D4;
    }
L_08A581D4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58410;
      }
      goto L_08A581E0;
    }
L_08A581E0:
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-66));
    ctx.gpr[10] = (ctx.gpr[6] < static_cast<std::uint32_t>(56) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58410;
      }
      goto L_08A581F0;
    }
L_08A581F0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(7072)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58208:
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-5016), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 72u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 77u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58410;
      }
      goto L_08A58230;
    }
L_08A58230:
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-5016), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 207u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 133u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58410;
      }
      goto L_08A58254;
    }
L_08A58254:
    ctx.gpr[6] = (0u | 27u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-5016), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 89u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 130u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58410;
      }
      goto L_08A5827C;
    }
L_08A5827C:
    ctx.gpr[6] = (0u | 225u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-5016), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58410;
      }
      goto L_08A5829C;
    }
L_08A5829C:
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-5016), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58410;
      }
      goto L_08A582BC;
    }
L_08A582BC:
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-5016), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 227u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 79u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58410;
      }
      goto L_08A582E4;
    }
L_08A582E4:
    ctx.gpr[6] = (0u | 168u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-5016), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 110u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 252u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58410;
      }
      goto L_08A5830C;
    }
L_08A5830C:
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-5016), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58410;
      }
      goto L_08A58328;
    }
L_08A58328:
    ctx.gpr[6] = (0u | 199u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-5016), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 144u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 203u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58410;
      }
      goto L_08A58350;
    }
L_08A58350:
    ctx.gpr[6] = (0u | 86u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-5016), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 212u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 146u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58410;
      }
      goto L_08A58378;
    }
L_08A58378:
    ctx.gpr[6] = (0u | 229u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-5016), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 125u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 126u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58410;
      }
      goto L_08A583A0;
    }
L_08A583A0:
    ctx.gpr[6] = (0u | 132u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-5016), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 146u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 197u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58410;
      }
      goto L_08A583C8;
    }
L_08A583C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58410;
      }
      goto L_08A583D0;
    }
L_08A583D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58410;
      }
      goto L_08A583D8;
    }
L_08A583D8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(31)));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A583F8;
      }
      goto L_08A583F0;
    }
L_08A583F0:
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08A583F8;
L_08A583F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58410;
      }
      goto L_08A58400;
    }
L_08A58400:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A58410;
L_08A58410:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A58424;
      }
      goto L_08A58418;
    }
L_08A58418:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A58418;
      }
      goto L_08A58424;
    }
L_08A58424:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A58430;
      }
      goto L_08A5842C;
    }
L_08A5842C:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    goto L_08A58430;
L_08A58430:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58438:
    ctx.gpr[8] = (2233u << 16u);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(-5016));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-5016)));
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (0u | 126u);
      if (branch_taken) {
          goto L_08A58474;
      }
      goto L_08A5845C;
    }
L_08A5845C:
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A58474;
      }
      goto L_08A58468;
    }
L_08A58468:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58630;
      }
      goto L_08A58474;
    }
L_08A58474:
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(-66));
    ctx.gpr[11] = (ctx.gpr[10] < static_cast<std::uint32_t>(56) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58630;
      }
      goto L_08A58484;
    }
L_08A58484:
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[10]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(7296)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5849C:
    ctx.gpr[6] = (0u | 174u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58630;
      }
      goto L_08A584B4;
    }
L_08A584B4:
    ctx.gpr[6] = (0u | 75u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[7] = (0u | 151u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58630;
      }
      goto L_08A584D0;
    }
L_08A584D0:
    ctx.gpr[6] = (0u | 77u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 155u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 210u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58630;
      }
      goto L_08A584F0;
    }
L_08A584F0:
    ctx.gpr[6] = (0u | 225u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58630;
      }
      goto L_08A58508;
    }
L_08A58508:
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58630;
      }
      goto L_08A58520;
    }
L_08A58520:
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58630;
      }
      goto L_08A58538;
    }
L_08A58538:
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 227u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 79u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58630;
      }
      goto L_08A58558;
    }
L_08A58558:
    ctx.gpr[6] = (0u | 151u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 82u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 197u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58630;
      }
      goto L_08A58578;
    }
L_08A58578:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58630;
      }
      goto L_08A5858C;
    }
L_08A5858C:
    ctx.gpr[6] = (0u | 199u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 144u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 203u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58630;
      }
      goto L_08A585AC;
    }
L_08A585AC:
    ctx.gpr[6] = (0u | 86u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 212u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 146u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58630;
      }
      goto L_08A585CC;
    }
L_08A585CC:
    ctx.gpr[6] = (0u | 229u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 125u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 126u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58630;
      }
      goto L_08A585EC;
    }
L_08A585EC:
    ctx.gpr[6] = (0u | 132u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 146u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 197u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58630;
      }
      goto L_08A5860C;
    }
L_08A5860C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58630;
      }
      goto L_08A58620;
    }
L_08A58620:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A58630;
L_08A58630:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A58644;
      }
      goto L_08A58638;
    }
L_08A58638:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A58638;
      }
      goto L_08A58644;
    }
L_08A58644:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A58650;
      }
      goto L_08A5864C;
    }
L_08A5864C:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    goto L_08A58650;
L_08A58650:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58658:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22640));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5867Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(14208));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x08A5867Cu) goto L_08A5867C;
    return;
L_08A5867C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A58688u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7360));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x08A58688u) goto L_08A58688;
    return;
L_08A58688:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58694:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A586A8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A586A8u) goto L_08A586A8;
    return;
L_08A586A8:
    ctx.gpr[6] = (1217u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A586BCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(7607));
    goto L_08A58D00;
L_08A586BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A586CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-672));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A58708u);
    ctx.gpr[30] = (0u | 0u);
    ctx.pc = 0x08B0BDA4u;
    return;
L_08A58708:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A58730;
      }
      goto L_08A58714;
    }
L_08A58714:
    ctx.gpr[19] = (2226u << 16u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[21] = (0u | 4096u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(360));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(7520));
      if (branch_taken) {
          goto L_08A58738;
      }
      goto L_08A58730;
    }
L_08A58730:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A587B0;
      }
      goto L_08A58738;
    }
L_08A58738:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A58744u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.pc = 0x08B0BDACu;
    return;
L_08A58744:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A58764;
      }
      goto L_08A5874C;
    }
L_08A5874C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[4] = (ctx.gpr[4] & 61440u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A58774;
      }
      goto L_08A5875C;
    }
L_08A5875C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A587A4;
      }
      goto L_08A58764;
    }
L_08A58764:
    ctx.gpr[31] = (0x08A5876Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.pc = 0x08B0BDB4u;
    return;
L_08A5876C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[30] | 0u);
      if (branch_taken) {
          goto L_08A587B0;
      }
      goto L_08A58774;
    }
L_08A58774:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A587A8;
      }
      goto L_08A5877C;
    }
L_08A5877C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A58790u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A58790u) goto L_08A58790;
    return;
L_08A58790:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5879Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A586CC;
L_08A5879C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[30] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A587A8;
      }
      goto L_08A587A4;
    }
L_08A587A4:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    goto L_08A587A8;
L_08A587A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58738;
      }
      goto L_08A587B0;
    }
L_08A587B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A587E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-672));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5881Cu);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.pc = 0x08B0BDA4u;
    return;
L_08A5881C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A58848;
      }
      goto L_08A58824;
    }
L_08A58824:
    ctx.gpr[23] = (2226u << 16u);
    ctx.gpr[22] = (2226u << 16u);
    ctx.gpr[30] = (0u | 4096u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(7520));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(7528));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A58850;
      }
      goto L_08A58848;
    }
L_08A58848:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A58908;
      }
      goto L_08A58850;
    }
L_08A58850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[31] = (0x08A5885Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.pc = 0x08B0BDACu;
    return;
L_08A5885C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A5887C;
      }
      goto L_08A58864;
    }
L_08A58864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[4] = (ctx.gpr[4] & 61440u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A5888C;
      }
      goto L_08A58874;
    }
L_08A58874:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A588C0;
      }
      goto L_08A5887C;
    }
L_08A5887C:
    ctx.gpr[31] = (0x08A58884u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.pc = 0x08B0BDB4u;
    return;
L_08A58884:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A58908;
      }
      goto L_08A5888C;
    }
L_08A5888C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58900;
      }
      goto L_08A58894;
    }
L_08A58894:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A588A8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A588A8u) goto L_08A588A8;
    return;
L_08A588A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A588B8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08A587E0;
L_08A588B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A58900;
      }
      goto L_08A588C0;
    }
L_08A588C0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A588D4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A588D4u) goto L_08A588D4;
    return;
L_08A588D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7340)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A588E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A588E0u) goto L_08A588E0;
    return;
L_08A588E0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    goto L_08A58900;
L_08A58900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58850;
      }
      goto L_08A58908;
    }
L_08A58908:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58938:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A58A0C;
      }
      goto L_08A58950;
    }
L_08A58950:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A589FC;
      }
      goto L_08A58964;
    }
L_08A58964:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    goto L_08A5896C;
L_08A5896C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[10] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A589E8;
      }
      goto L_08A5898C;
    }
L_08A5898C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_08A589E8;
L_08A589E8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A5896C;
      }
      goto L_08A589FC;
    }
L_08A589FC:
    ctx.gpr[6] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A58950;
      }
      goto L_08A58A0C;
    }
L_08A58A0C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58A14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A58A98;
      }
      goto L_08A58A38;
    }
L_08A58A38:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A58A4Cu);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-24556));
    goto L_08A586CC;
L_08A58A4C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24548));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_08A58A88;
      }
      goto L_08A58A70;
    }
L_08A58A70:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7332)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A58A80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58A80u) goto L_08A58A80;
    return;
L_08A58A80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A58ABC;
      }
      goto L_08A58A88;
    }
L_08A58A88:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A58A98u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A58A98u) goto L_08A58A98;
    return;
L_08A58A98:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7344), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A58AB0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A587E0;
L_08A58AB0:
    ctx.gpr[31] = (0x08A58AB8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A58938;
L_08A58AB8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08A58ABC;
L_08A58ABC:
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
L_08A58AD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7344)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58B84;
      }
      goto L_08A58AF8;
    }
L_08A58AF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58B84;
      }
      goto L_08A58B04;
    }
L_08A58B04:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7340)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A58B18u);
    ctx.gpr[17] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58B18u) goto L_08A58B18;
    return;
L_08A58B18:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A58B84;
      }
      goto L_08A58B24;
    }
L_08A58B24:
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[18]);
    goto L_08A58B28;
L_08A58B28:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A58B6C;
      }
      goto L_08A58B54;
    }
L_08A58B54:
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58B74;
      }
      goto L_08A58B60;
    }
L_08A58B60:
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A58B7C;
      }
      goto L_08A58B6C;
    }
L_08A58B6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A58B88;
      }
      goto L_08A58B74;
    }
L_08A58B74:
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    goto L_08A58B7C;
L_08A58B7C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A58B28;
      }
      goto L_08A58B84;
    }
L_08A58B84:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A58B88;
L_08A58B88:
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
L_08A58BA0:
    ctx.gpr[4] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7344)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58BAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A58BC4u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08A58AD4;
L_08A58BC4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58BE8;
      }
      goto L_08A58BD0;
    }
L_08A58BD0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A58BE8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7536));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A58BE8u) goto L_08A58BE8;
    return;
L_08A58BE8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58C00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-19148));
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A58C34u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A58BAC;
L_08A58C34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58C54;
      }
      goto L_08A58C3C;
    }
L_08A58C3C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A58C4Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B0BDFCu;
    return;
L_08A58C4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58C64;
      }
      goto L_08A58C54;
    }
L_08A58C54:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A58C64u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B0BDFCu;
    return;
L_08A58C64:
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
L_08A58C80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-19084));
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A58CB4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A58BAC;
L_08A58CB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58CD4;
      }
      goto L_08A58CBC;
    }
L_08A58CBC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A58CCCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B0BE04u;
    return;
L_08A58CCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58CE4;
      }
      goto L_08A58CD4;
    }
L_08A58CD4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A58CE4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B0BE04u;
    return;
L_08A58CE4:
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
L_08A58D00:
    ctx.gpr[8] = (40503u << 16u);
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(31161));
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A58E3C;
      }
      goto L_08A58D18;
    }
L_08A58D18:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] << 8u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[2] << 16u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[2] = (ctx.gpr[2] << 24u);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[2]);
    ctx.gpr[11] = (ctx.gpr[11] << 8u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[7]);
    ctx.gpr[10] = (ctx.gpr[3] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[2] << 16u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[2] << 24u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    ctx.gpr[11] = (ctx.gpr[2] << 8u);
    ctx.gpr[11] = (ctx.gpr[3] + ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] << 16u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11)));
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[2] << 24u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[6] >> 13u);
    ctx.gpr[7] = (ctx.gpr[7] ^ ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[10] = (ctx.gpr[7] << 8u);
    ctx.gpr[8] = (ctx.gpr[8] ^ ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[8] >> 13u);
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[6] >> 12u);
    ctx.gpr[7] = (ctx.gpr[7] ^ ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[10] = (ctx.gpr[7] << 16u);
    ctx.gpr[8] = (ctx.gpr[8] ^ ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[8] >> 5u);
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[6] >> 3u);
    ctx.gpr[7] = (ctx.gpr[7] ^ ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[10] = (ctx.gpr[7] << 10u);
    ctx.gpr[8] = (ctx.gpr[8] ^ ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[8] >> 15u);
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-12));
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A58D18;
      }
      goto L_08A58E3C;
    }
L_08A58E3C:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[5] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A590DC;
      }
      goto L_08A58E50;
    }
L_08A58E50:
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[9]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(7568)));
    jump_target = ctx.gpr[1];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58E68:
    ctx.gpr[11] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(10)));
    ctx.gpr[12] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[3] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(1)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(3)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(5)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[13] = (ctx.gpr[6] << 24u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(6)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(7)));
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(9)));
    ctx.gpr[15] = (ctx.gpr[6] << 24u);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[14] << 16u);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[11] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[10] = (ctx.gpr[10] << 8u);
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    ctx.gpr[11] = (ctx.gpr[12] + ctx.gpr[15]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[13]);
      if (branch_taken) {
          goto L_08A58F28;
      }
      goto L_08A58ED0;
    }
L_08A58ED0:
    ctx.gpr[11] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(1)));
    ctx.gpr[12] = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(3)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(5)));
    ctx.gpr[13] = (ctx.gpr[8] << 24u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(6)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(7)));
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(9)));
    ctx.gpr[15] = (ctx.gpr[3] << 24u);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (ctx.gpr[14] << 16u);
    ctx.gpr[3] = (ctx.gpr[6] + ctx.gpr[3]);
    ctx.gpr[6] = (ctx.gpr[11] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[10] = (ctx.gpr[10] << 8u);
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    ctx.gpr[11] = (ctx.gpr[12] + ctx.gpr[15]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[13]);
    goto L_08A58F28;
L_08A58F28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[3] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A58F80;
      }
      goto L_08A58F30;
    }
L_08A58F30:
    ctx.gpr[11] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(1)));
    ctx.gpr[3] = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(3)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(5)));
    ctx.gpr[12] = (ctx.gpr[8] << 24u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(6)));
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(7)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[13] = (ctx.gpr[13] << 24u);
    ctx.gpr[11] = (ctx.gpr[11] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[11]);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[10] = (ctx.gpr[10] << 8u);
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    ctx.gpr[11] = (ctx.gpr[3] + ctx.gpr[13]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[12]);
    goto L_08A58F80;
L_08A58F80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58FCC;
      }
      goto L_08A58F88;
    }
L_08A58F88:
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    ctx.gpr[11] = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(3)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(5)));
    ctx.gpr[3] = (ctx.gpr[8] << 24u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(6)));
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(7)));
    ctx.gpr[10] = (ctx.gpr[2] << 8u);
    ctx.gpr[2] = (ctx.gpr[12] << 16u);
    ctx.gpr[12] = (ctx.gpr[13] << 24u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[12]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[3]);
    goto L_08A58FCC;
L_08A58FCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A59010;
      }
      goto L_08A58FD4;
    }
L_08A58FD4:
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    ctx.gpr[2] = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(3)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(5)));
    ctx.gpr[11] = (ctx.gpr[8] << 24u);
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(6)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[3] << 8u);
    ctx.gpr[3] = (ctx.gpr[12] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[11]);
    goto L_08A59010;
L_08A59010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_08A5904C;
      }
      goto L_08A59018;
    }
L_08A59018:
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    ctx.gpr[11] = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(3)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(5)));
    ctx.gpr[3] = (ctx.gpr[8] << 24u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[2] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[3]);
    goto L_08A5904C;
L_08A5904C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A5907C;
      }
      goto L_08A59054;
    }
L_08A59054:
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(3)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[11] << 24u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[11]);
    goto L_08A5907C;
L_08A5907C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A590A0;
      }
      goto L_08A59084;
    }
L_08A59084:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[9] << 8u);
    goto L_08A59094;
L_08A59094:
    ctx.gpr[9] = (ctx.gpr[10] << 16u);
    ctx.gpr[10] = (ctx.gpr[11] << 24u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    goto L_08A590A0;
L_08A590A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08A590BC;
      }
      goto L_08A590A8;
    }
L_08A590A8:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[9] << 8u);
    ctx.gpr[9] = (ctx.gpr[10] << 16u);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[9]);
    goto L_08A590BC;
L_08A590BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A590D0;
      }
      goto L_08A590C4;
    }
L_08A590C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    goto L_08A590D0;
L_08A590D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A590DC;
      }
      goto L_08A590D8;
    }
L_08A590D8:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_08A590DC;
L_08A590DC:
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] >> 13u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] >> 13u);
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[6] >> 12u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    goto L_08A59124;
L_08A59124:
    ctx.gpr[7] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] >> 5u);
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[6] >> 3u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 10u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] >> 15u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] ^ ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59170:
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A59190;
      }
      goto L_08A5917C;
    }
L_08A5917C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A5917C;
      }
      goto L_08A59190;
    }
L_08A59190:
    ctx.gpr[2] = (ctx.gpr[5] << 3u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5919C:
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A591F8;
      }
      goto L_08A591AC;
    }
L_08A591AC:
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (2229u << 16u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7320));
      if (branch_taken) {
          goto L_08A591DC;
      }
      goto L_08A591C0;
    }
L_08A591C0:
    ctx.gpr[4] = (ctx.gpr[4] >> 24u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A591C8;
L_08A591C8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A59250;
      }
      goto L_08A591DC;
    }
L_08A591DC:
    ctx.gpr[4] = (ctx.gpr[4] >> 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A59250;
      }
      goto L_08A591F8;
    }
L_08A591F8:
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59228;
      }
      goto L_08A59204;
    }
L_08A59204:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5924C;
      }
      goto L_08A5920C;
    }
L_08A5920C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7320));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A59250;
      }
      goto L_08A59228;
    }
L_08A59228:
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7320));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A59250;
      }
      goto L_08A5924C;
    }
L_08A5924C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A59250;
L_08A59250:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59258:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A5927C;
      }
      goto L_08A59268;
    }
L_08A59268:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A59284;
      }
      goto L_08A59274;
    }
L_08A59274:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A5929C;
      }
      goto L_08A5927C;
    }
L_08A5927C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A59308;
      }
      goto L_08A59284;
    }
L_08A59284:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A592F8;
      }
      goto L_08A5928C;
    }
L_08A5928C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A592D0;
      }
      goto L_08A59294;
    }
L_08A59294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A59308;
      }
      goto L_08A5929C;
    }
L_08A5929C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A592E4;
      }
      goto L_08A592A4;
    }
L_08A592A4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A592F8;
      }
      goto L_08A592AC;
    }
L_08A592AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[2] = (0u | 1u);
        goto L_08A592C8;
    }
    goto L_08A592C8;
L_08A592C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59308;
      }
      goto L_08A592D0;
    }
L_08A592D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A59308;
      }
      goto L_08A592E4;
    }
L_08A592E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A59308;
      }
      goto L_08A592F8;
    }
L_08A592F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08A59308;
L_08A59308:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59310:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A59330u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 884u, 0x08AEF264u>(ctx, &aot_mem) && ctx.pc == 0x08A59330u) goto L_08A59330;
    return;
L_08A59330:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A5933Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x08A5933Cu) goto L_08A5933C;
    return;
L_08A5933C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A59378;
      }
      goto L_08A59348;
    }
L_08A59348:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25176));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] & 8u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A59380;
      }
      goto L_08A59370;
    }
L_08A59370:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A593A0;
      }
      goto L_08A59378;
    }
L_08A59378:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A593B8;
      }
      goto L_08A59380;
    }
L_08A59380:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] & 8u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A59380;
      }
      goto L_08A593A0;
    }
L_08A593A0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A593B0;
      }
      goto L_08A593A8;
    }
L_08A593A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A593B8;
      }
      goto L_08A593B0;
    }
L_08A593B0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (0u | 1u);
    goto L_08A593B8;
L_08A593B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A593CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A59400u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A59400u) goto L_08A59400;
    return;
L_08A59400:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A59410u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 560u, 0x089171D8u>(ctx, &aot_mem) && ctx.pc == 0x08A59410u) goto L_08A59410;
    return;
L_08A59410:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A59440;
      }
      goto L_08A5942C;
    }
L_08A5942C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A59438u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 271u, 0x088B97B0u>(ctx, &aot_mem) && ctx.pc == 0x08A59438u) goto L_08A59438;
    return;
L_08A59438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_08A59440;
L_08A59440:
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
L_08A5945C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[6] = (0u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A59490u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08A595FC;
L_08A59490:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5949C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 61u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A594E8;
      }
      goto L_08A594CC;
    }
L_08A594CC:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A594DCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x08A594DCu) goto L_08A594DC;
    return;
L_08A594DC:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A595E0;
      }
      goto L_08A594E8;
    }
L_08A594E8:
    ctx.gpr[5] = (0u | 64u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A59550;
      }
      goto L_08A594F4;
    }
L_08A594F4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(-8));
    ctx.gpr[31] = (0x08A59504u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A59504u) goto L_08A59504;
    return;
L_08A59504:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A59518u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7616));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x08A59518u) goto L_08A59518;
    return;
L_08A59518:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5953C;
      }
      goto L_08A59524;
    }
L_08A59524:
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5953Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7620));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 407u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08A5953Cu) goto L_08A5953C;
    return;
L_08A5953C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A59548u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 407u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08A59548u) goto L_08A59548;
    return;
L_08A59548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A595E0;
      }
      goto L_08A59550;
    }
L_08A59550:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A59564u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7624));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 428u, 0x08AED7E4u>(ctx, &aot_mem) && ctx.pc == 0x08A59564u) goto L_08A59564;
    return;
L_08A59564:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5957C;
      }
      goto L_08A59578;
    }
L_08A59578:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A5957C;
L_08A5957C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5958Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7628));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x08A5958Cu) goto L_08A5958C;
    return;
L_08A5958C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A595C4;
      }
      goto L_08A5959C;
    }
L_08A5959C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A595ACu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 544u, 0x08AEDF68u>(ctx, &aot_mem) && ctx.pc == 0x08A595ACu) goto L_08A595AC;
    return;
L_08A595AC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A595BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7620));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 407u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08A595BCu) goto L_08A595BC;
    return;
L_08A595BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A595D0;
      }
      goto L_08A595C4;
    }
L_08A595C4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A595D0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 407u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08A595D0u) goto L_08A595D0;
    return;
L_08A595D0:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A595E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7640));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 407u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08A595E0u) goto L_08A595E0;
    return;
L_08A595E0:
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
L_08A595FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A59638u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7616));
    goto L_08A593CC;
L_08A59638:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A59644u);
    ctx.gpr[5] = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 412u, 0x08AED718u>(ctx, &aot_mem) && ctx.pc == 0x08A59644u) goto L_08A59644;
    return;
L_08A59644:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A596A4;
      }
      goto L_08A59650;
    }
L_08A59650:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5965Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A593CC;
L_08A5965C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] >> 29u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A59688u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 297u, 0x088D286Cu>(ctx, &aot_mem) && ctx.pc == 0x08A59688u) goto L_08A59688;
    return;
L_08A59688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A59818;
      }
      goto L_08A596A4;
    }
L_08A596A4:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A596C0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 560u, 0x089171D8u>(ctx, &aot_mem) && ctx.pc == 0x08A596C0u) goto L_08A596C0;
    return;
L_08A596C0:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A596E4;
      }
      goto L_08A596DC;
    }
L_08A596DC:
    ctx.gpr[31] = (0x08A596E4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 271u, 0x088B97B0u>(ctx, &aot_mem) && ctx.pc == 0x08A596E4u) goto L_08A596E4;
    return;
L_08A596E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 115u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 102u);
      if (branch_taken) {
          goto L_08A59728;
      }
      goto L_08A59700;
    }
L_08A59700:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 100u);
      if (branch_taken) {
          goto L_08A597B4;
      }
      goto L_08A59708;
    }
L_08A59708:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 99u);
      if (branch_taken) {
          goto L_08A59764;
      }
      goto L_08A59710;
    }
L_08A59710:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 37u);
      if (branch_taken) {
          goto L_08A59740;
      }
      goto L_08A59718;
    }
L_08A59718:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A597FC;
      }
      goto L_08A59720;
    }
L_08A59720:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5980C;
      }
      goto L_08A59728;
    }
L_08A59728:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[31] = (0x08A59738u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A593CC;
L_08A59738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5980C;
      }
      goto L_08A59740;
    }
L_08A59740:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A5975Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A593CC;
L_08A5975C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5980C;
      }
      goto L_08A59764;
    }
L_08A59764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A597A4;
      }
      goto L_08A5979C;
    }
L_08A5979C:
    ctx.gpr[31] = (0x08A597A4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 271u, 0x088B97B0u>(ctx, &aot_mem) && ctx.pc == 0x08A597A4u) goto L_08A597A4;
    return;
L_08A597A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5980C;
      }
      goto L_08A597B4;
    }
L_08A597B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A597EC;
      }
      goto L_08A597E4;
    }
L_08A597E4:
    ctx.gpr[31] = (0x08A597ECu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 271u, 0x088B97B0u>(ctx, &aot_mem) && ctx.pc == 0x08A597ECu) goto L_08A597EC;
    return;
L_08A597EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5980C;
      }
      goto L_08A597FC;
    }
L_08A597FC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5980Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7644));
    goto L_08A593CC;
L_08A5980C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A59638;
      }
      goto L_08A59818;
    }
L_08A59818:
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
L_08A5983C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5984Cu);
    // nop
    goto L_08A59878;
L_08A5984C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59858:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5986Cu);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x08A5986Cu) goto L_08A5986C;
    return;
L_08A5986C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59878:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A598B0;
      }
      goto L_08A59894;
    }
L_08A59894:
    ctx.gpr[7] = (2199u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A598B0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(17664));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 366u, 0x08AF5CA4u>(ctx, &aot_mem) && ctx.pc == 0x08A598B0u) goto L_08A598B0;
    return;
L_08A598B0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A598D0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59934:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A59AC0;
      }
      goto L_08A59980;
    }
L_08A59980:
    ctx.gpr[18] = (0u | 0u);
    goto L_08A59984;
L_08A59984:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[7] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A599BC;
      }
      goto L_08A599AC;
    }
L_08A599AC:
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A599D0;
      }
      goto L_08A599BC;
    }
L_08A599BC:
    ctx.gpr[7] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_08A599D0;
L_08A599D0:
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A599FC;
      }
      goto L_08A599F8;
    }
L_08A599F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A599FC;
L_08A599FC:
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A59AB0;
      }
      goto L_08A59A0C;
    }
L_08A59A0C:
    ctx.gpr[4] = (ctx.gpr[30] << 3u);
    ctx.gpr[22] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[30] << 4u);
    ctx.gpr[22] = (ctx.gpr[30] + ctx.gpr[22]);
    goto L_08A59A1C;
L_08A59A1C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A59A40;
      }
      goto L_08A59A38;
    }
L_08A59A38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08A59A44;
      }
      goto L_08A59A40;
    }
L_08A59A40:
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[22]);
    goto L_08A59A44;
L_08A59A44:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08A59A58;
      }
      goto L_08A59A4C;
    }
L_08A59A4C:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A59A5C;
      }
      goto L_08A59A58;
    }
L_08A59A58:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08A59A5C;
L_08A59A5C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[30] << 3u);
      if (branch_taken) {
          goto L_08A59A74;
      }
      goto L_08A59A64;
    }
L_08A59A64:
    ctx.gpr[4] = (ctx.gpr[30] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A59A84;
      }
      goto L_08A59A74;
    }
L_08A59A74:
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    goto L_08A59A84;
L_08A59A84:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A59A98u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08A598D0;
L_08A59A98:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) > 0;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-10));
      if (branch_taken) {
          goto L_08A59A1C;
      }
      goto L_08A59AAC;
    }
L_08A59AAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    goto L_08A59AB0;
L_08A59AB0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A59984;
      }
      goto L_08A59AC0;
    }
L_08A59AC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59AF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A59B3C;
      }
      goto L_08A59B1C;
    }
L_08A59B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A59B28u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 111u, 0x089746F0u>(ctx, &aot_mem) && ctx.pc == 0x08A59B28u) goto L_08A59B28;
    return;
L_08A59B28:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A59B1C;
      }
      goto L_08A59B3C;
    }
L_08A59B3C:
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
L_08A59B54:
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
L_08A59B80:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59BC8:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59C1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A59DE8;
      }
      goto L_08A59C44;
    }
L_08A59C44:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-30636), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A59C5Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A5A6D8;
L_08A59C5C:
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-30636), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08A59C74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 126u, 0x089C0960u>(ctx, &aot_mem) && ctx.pc == 0x08A59C74u) goto L_08A59C74;
    return;
L_08A59C74:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A59CC8;
      }
      goto L_08A59C88;
    }
L_08A59C88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A59CA8;
      }
      goto L_08A59C9C;
    }
L_08A59C9C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    goto L_08A59CA0;
L_08A59CA0:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A59CA0;
      }
      goto L_08A59CA8;
    }
L_08A59CA8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59CC8;
      }
      goto L_08A59CB0;
    }
L_08A59CB0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59CC8;
      }
      goto L_08A59CB8;
    }
L_08A59CB8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59CC8;
      }
      goto L_08A59CC0;
    }
L_08A59CC0:
    ctx.gpr[31] = (0x08A59CC8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08A59CC8u) goto L_08A59CC8;
    return;
L_08A59CC8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59D10;
      }
      goto L_08A59CD0;
    }
L_08A59CD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A59CF0;
      }
      goto L_08A59CE4;
    }
L_08A59CE4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08A59CE8;
L_08A59CE8:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A59CE8;
      }
      goto L_08A59CF0;
    }
L_08A59CF0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59D10;
      }
      goto L_08A59CF8;
    }
L_08A59CF8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59D10;
      }
      goto L_08A59D00;
    }
L_08A59D00:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59D10;
      }
      goto L_08A59D08;
    }
L_08A59D08:
    ctx.gpr[31] = (0x08A59D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08A59D10u) goto L_08A59D10;
    return;
L_08A59D10:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59D3C;
      }
      goto L_08A59D18;
    }
L_08A59D18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A59D3C;
      }
      goto L_08A59D24;
    }
L_08A59D24:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59D3C;
      }
      goto L_08A59D2C;
    }
L_08A59D2C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59D3C;
      }
      goto L_08A59D34;
    }
L_08A59D34:
    ctx.gpr[31] = (0x08A59D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08A59D3Cu) goto L_08A59D3C;
    return;
L_08A59D3C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08A59DD8;
      }
      goto L_08A59D44;
    }
L_08A59D44:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A59DB0;
      }
      goto L_08A59D54;
    }
L_08A59D54:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A59DA4;
      }
      goto L_08A59D5C;
    }
L_08A59D5C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
        goto L_08A59DA8;
    }
    goto L_08A59D64;
L_08A59D64:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A59D80;
      }
      goto L_08A59D74;
    }
L_08A59D74:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    goto L_08A59D78;
L_08A59D78:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A59D78;
      }
      goto L_08A59D80;
    }
L_08A59D80:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
        goto L_08A59DA8;
    }
    goto L_08A59D88;
L_08A59D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
        goto L_08A59DA8;
    }
    goto L_08A59D94;
L_08A59D94:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
        goto L_08A59DA8;
    }
    goto L_08A59D9C;
L_08A59D9C:
    ctx.gpr[31] = (0x08A59DA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08A59DA4u) goto L_08A59DA4;
    return;
L_08A59DA4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    goto L_08A59DA8;
L_08A59DA8:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A59D54;
      }
      goto L_08A59DB0;
    }
L_08A59DB0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08A59DD8;
      }
      goto L_08A59DB8;
    }
L_08A59DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
        goto L_08A59DD8;
    }
    goto L_08A59DC4;
L_08A59DC4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
        goto L_08A59DD8;
    }
    goto L_08A59DCC;
L_08A59DCC:
    ctx.gpr[31] = (0x08A59DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08A59DD4u) goto L_08A59DD4;
    return;
L_08A59DD4:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    goto L_08A59DD8;
L_08A59DD8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59DE8;
      }
      goto L_08A59DE0;
    }
L_08A59DE0:
    ctx.gpr[31] = (0x08A59DE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08A59DE8u) goto L_08A59DE8;
    return;
L_08A59DE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59E08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A59E24u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A5A380;
L_08A59E24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A59FE0;
      }
      goto L_08A59E2C;
    }
L_08A59E2C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A59F84;
      }
      goto L_08A59E70;
    }
L_08A59E70:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
        goto L_08A59F74;
    }
    goto L_08A59E7C;
L_08A59E7C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A59EF8;
      }
      goto L_08A59EB4;
    }
L_08A59EB4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A59EC8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08A59EC8u) goto L_08A59EC8;
    return;
L_08A59EC8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08A59EF8;
      }
      goto L_08A59EDC;
    }
L_08A59EDC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A59EECu);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08A59EECu) goto L_08A59EEC;
    return;
L_08A59EEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_08A59EF8;
L_08A59EF8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A59F40;
      }
      goto L_08A59F20;
    }
L_08A59F20:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
        goto L_08A59F38;
    }
    goto L_08A59F2C;
L_08A59F2C:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_08A59F38;
L_08A59F38:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A59F20;
      }
      goto L_08A59F40;
    }
L_08A59F40:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(18));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
    goto L_08A59F74;
L_08A59F74:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08A59FA8;
      }
      goto L_08A59F84;
    }
L_08A59F84:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(62));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08A59FA0u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 611u, 0x08B06A18u>(ctx, &aot_mem) && ctx.pc == 0x08A59FA0u) goto L_08A59FA0;
    return;
L_08A59FA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08A59FA8;
L_08A59FA8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A59FC0;
      }
      goto L_08A59FB4;
    }
L_08A59FB4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    goto L_08A59FB8;
L_08A59FB8:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A59FB8;
      }
      goto L_08A59FC0;
    }
L_08A59FC0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59FD8;
      }
      goto L_08A59FC8;
    }
L_08A59FC8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A59FD8;
      }
      goto L_08A59FD0;
    }
L_08A59FD0:
    ctx.gpr[31] = (0x08A59FD8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08A59FD8u) goto L_08A59FD8;
    return;
L_08A59FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08A59FE0;
L_08A59FE0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A59FF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5A020u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7656));
    goto L_08A59B54;
L_08A5A020:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6182))))));
    ctx.gpr[5] = (2214u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5A044u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22548));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 25u, 0x08B0824Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A044u) goto L_08A5A044;
    return;
L_08A5A044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A5A06Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 23u, 0x08B08210u>(ctx, &aot_mem) && ctx.pc == 0x08A5A06Cu) goto L_08A5A06C;
    return;
L_08A5A06C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A5A080;
      }
      goto L_08A5A078;
    }
L_08A5A078:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A5A12C;
      }
      goto L_08A5A080;
    }
L_08A5A080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A5A128;
      }
      goto L_08A5A0A0;
    }
L_08A5A0A0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    goto L_08A5A0A4;
L_08A5A0A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(68))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A5A0CCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5A0CCu) goto L_08A5A0CC;
    return;
L_08A5A0CC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
        goto L_08A5A120;
    }
    goto L_08A5A0D4;
L_08A5A0D4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A5A0E8u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 757u, 0x08B0750Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A0E8u) goto L_08A5A0E8;
    return;
L_08A5A0E8:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(18));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(18));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
    goto L_08A5A120;
L_08A5A120:
    if (ctx.gpr[18] != ctx.gpr[17]) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
        goto L_08A5A0A4;
    }
    goto L_08A5A128;
L_08A5A128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A5A12C;
L_08A5A12C:
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5A1B0;
      }
      goto L_08A5A148;
    }
L_08A5A148:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A5A168u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 757u, 0x08B0750Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A168u) goto L_08A5A168;
    return;
L_08A5A168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(18));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(18));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08A5A148;
      }
      goto L_08A5A1B0;
    }
L_08A5A1B0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5A224;
      }
      goto L_08A5A1C0;
    }
L_08A5A1C0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5A218;
      }
      goto L_08A5A1C8;
    }
L_08A5A1C8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
        goto L_08A5A21C;
    }
    goto L_08A5A1D0;
L_08A5A1D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5A1EC;
      }
      goto L_08A5A1E0;
    }
L_08A5A1E0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_08A5A1E4;
L_08A5A1E4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A5A1E4;
      }
      goto L_08A5A1EC;
    }
L_08A5A1EC:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
        goto L_08A5A21C;
    }
    goto L_08A5A1F8;
L_08A5A1F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
        goto L_08A5A21C;
    }
    goto L_08A5A204;
L_08A5A204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
        goto L_08A5A21C;
    }
    goto L_08A5A210;
L_08A5A210:
    ctx.gpr[31] = (0x08A5A218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08A5A218u) goto L_08A5A218;
    return;
L_08A5A218:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    goto L_08A5A21C;
L_08A5A21C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A5A1C0;
      }
      goto L_08A5A224;
    }
L_08A5A224:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A244:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (0u | 28u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[9] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A5A2D0;
      }
      goto L_08A5A26C;
    }
L_08A5A26C:
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    goto L_08A5A270;
L_08A5A270:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5A298;
      }
      goto L_08A5A27C;
    }
L_08A5A27C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[10] ^ ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A2BC;
      }
      goto L_08A5A298;
    }
L_08A5A298:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(28));
    ctx.gpr[10] = (ctx.lo);
    ctx.gpr[10] = (ctx.gpr[9] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08A5A270;
      }
      goto L_08A5A2B4;
    }
L_08A5A2B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A2D0;
      }
      goto L_08A5A2BC;
    }
L_08A5A2BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[2] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A5A2E8;
      }
      goto L_08A5A2D0;
    }
L_08A5A2D0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[2] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]));
    ctx.gpr[2] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[2]));
    goto L_08A5A2E8;
L_08A5A2E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A2F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (0u | 28u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A364;
      }
      goto L_08A5A320;
    }
L_08A5A320:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5A34C;
      }
      goto L_08A5A32C;
    }
L_08A5A32C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08A5A320;
      }
      goto L_08A5A344;
    }
L_08A5A344:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A364;
      }
      goto L_08A5A34C;
    }
L_08A5A34C:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[5] ^ ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A5A374;
      }
      goto L_08A5A364;
    }
L_08A5A364:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A5A370u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7692));
    goto L_08A59B54;
L_08A5A370:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A5A374;
L_08A5A374:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A380:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6182))))));
    ctx.gpr[5] = (2214u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5A3C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22548));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 25u, 0x08B0824Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A3C4u) goto L_08A5A3C4;
    return;
L_08A5A3C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A5A3D4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 858u, 0x08B07D44u>(ctx, &aot_mem) && ctx.pc == 0x08A5A3D4u) goto L_08A5A3D4;
    return;
L_08A5A3D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[2] ^ ctx.gpr[4]);
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A3FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A5A44C;
      }
      goto L_08A5A430;
    }
L_08A5A430:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5A444;
      }
      goto L_08A5A438;
    }
L_08A5A438:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08A5A444;
L_08A5A444:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5A548;
      }
      goto L_08A5A44C;
    }
L_08A5A44C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A5A48C;
      }
      goto L_08A5A47C;
    }
L_08A5A47C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A5A498;
      }
      goto L_08A5A48C;
    }
L_08A5A48C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_08A5A498;
L_08A5A498:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5A4D8;
      }
      goto L_08A5A4A0;
    }
L_08A5A4A0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A5A4B4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08A5A4B4u) goto L_08A5A4B4;
    return;
L_08A5A4B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08A5A4D8;
      }
      goto L_08A5A4C4;
    }
L_08A5A4C4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A5A4D0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08A5A4D0u) goto L_08A5A4D0;
    return;
L_08A5A4D0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08A5A4D8;
L_08A5A4D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5A4EC;
      }
      goto L_08A5A4E4;
    }
L_08A5A4E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A5A508;
      }
      goto L_08A5A4EC;
    }
L_08A5A4EC:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A5A500u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A5A500u) goto L_08A5A500;
    return;
L_08A5A500:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08A5A508;
L_08A5A508:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5A520;
      }
      goto L_08A5A510;
    }
L_08A5A510:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5A510;
      }
      goto L_08A5A520;
    }
L_08A5A520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5A534;
      }
      goto L_08A5A52C;
    }
L_08A5A52C:
    ctx.gpr[31] = (0x08A5A534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08A5A534u) goto L_08A5A534;
    return;
L_08A5A534:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A5A548;
L_08A5A548:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5A554u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 159u, 0x08AC524Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A554u) goto L_08A5A554;
    return;
L_08A5A554:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A574:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(46)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A5A600;
      }
      goto L_08A5A5D4;
    }
L_08A5A5D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_08A5A5F4;
    }
    goto L_08A5A5E0;
L_08A5A5E0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_08A5A5F4;
L_08A5A5F4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5A620;
      }
      goto L_08A5A600;
    }
L_08A5A600:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08A5A620u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 691u, 0x08B0711Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A620u) goto L_08A5A620;
    return;
L_08A5A620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A5A62Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 159u, 0x08AC524Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A62Cu) goto L_08A5A62C;
    return;
L_08A5A62C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A5A640u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 860u, 0x08B07D80u>(ctx, &aot_mem) && ctx.pc == 0x08A5A640u) goto L_08A5A640;
    return;
L_08A5A640:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A5A654;
      }
      goto L_08A5A64C;
    }
L_08A5A64C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A5A68C;
      }
      goto L_08A5A654;
    }
L_08A5A654:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A5A68C;
      }
      goto L_08A5A664;
    }
L_08A5A664:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A5A668;
L_08A5A668:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08A5A684;
    }
    goto L_08A5A674;
L_08A5A674:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08A5A684;
L_08A5A684:
    if (ctx.gpr[4] != ctx.gpr[17]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08A5A668;
    }
    goto L_08A5A68C;
L_08A5A68C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5A6BC;
      }
      goto L_08A5A69C;
    }
L_08A5A69C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08A5A6B4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A5A6B4u) goto L_08A5A6B4;
    return;
L_08A5A6B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A5A6BC;
      }
      goto L_08A5A6BC;
    }
L_08A5A6BC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A6D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A5A7CC;
      }
      goto L_08A5A714;
    }
L_08A5A714:
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[17] = (0u | 28u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5736));
    goto L_08A5A720;
L_08A5A720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4)));
      if (branch_taken) {
          goto L_08A5A78C;
      }
      goto L_08A5A73C;
    }
L_08A5A73C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(225)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08A5A770;
    }
    goto L_08A5A748;
L_08A5A748:
    ctx.gpr[5] = (ctx.gpr[20] << 5u);
    ctx.gpr[6] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5A768u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 217u, 0x088A8E58u>(ctx, &aot_mem) && ctx.pc == 0x08A5A768u) goto L_08A5A768;
    return;
L_08A5A768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A5A770;
L_08A5A770:
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5A78C;
      }
      goto L_08A5A788;
    }
L_08A5A788:
    ctx.gpr[20] = (0u | 0u);
    goto L_08A5A78C;
L_08A5A78C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A7B0;
      }
      goto L_08A5A794;
    }
L_08A5A794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A5A7B0u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5A7B0u) goto L_08A5A7B0;
    return;
L_08A5A7B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A720;
      }
      goto L_08A5A7CC;
    }
L_08A5A7CC:
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
L_08A5A7EC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A7FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[11]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A828:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[11]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5A854:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-2336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2292), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2296), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20932)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2300), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2304), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2308), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2312), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2316), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2320), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2324), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2328), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A5A89C;
      }
      goto L_08A5A894;
    }
L_08A5A894:
    ctx.gpr[31] = (0x08A5A89Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5A89Cu) goto L_08A5A89C;
    return;
L_08A5A89C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5A8C0;
      }
      goto L_08A5A8B0;
    }
L_08A5A8B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A5A8C8;
      }
      goto L_08A5A8C0;
    }
L_08A5A8C0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A5A8C8;
L_08A5A8C8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A90C;
      }
      goto L_08A5A8D0;
    }
L_08A5A8D0:
    ctx.gpr[22] = (2232u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A8F8;
      }
      goto L_08A5A8E4;
    }
L_08A5A8E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
        goto L_08A5A920;
    }
    goto L_08A5A8F0;
L_08A5A8F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5A964;
      }
      goto L_08A5A8F8;
    }
L_08A5A8F8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A5A904u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7796));
    goto L_08A59B54;
L_08A5A904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B93C;
      }
      goto L_08A5A90C;
    }
L_08A5A90C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A5A918u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7744));
    goto L_08A59B54;
L_08A5A918:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B93C;
      }
      goto L_08A5A920;
    }
L_08A5A920:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(12))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17786u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (17658u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2092), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2096), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A5A964;
L_08A5A964:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2276), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A5A978;
      }
      goto L_08A5A96C;
    }
L_08A5A96C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A5A978u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A5A6D8;
L_08A5A978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (17224u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5AA10;
      }
      goto L_08A5A9BC;
    }
L_08A5A9BC:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(6));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7237)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[16] = (ctx.gpr[21] + static_cast<std::uint32_t>(14));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(34));
      if (branch_taken) {
          goto L_08A5AA18;
      }
      goto L_08A5AA08;
    }
L_08A5AA08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08A5AE78;
      }
      goto L_08A5AA10;
    }
L_08A5AA10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B93C;
      }
      goto L_08A5AA18;
    }
L_08A5AA18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2104), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2108), 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5AA8C;
      }
      goto L_08A5AA48;
    }
L_08A5AA48:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2288), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2280), ctx.gpr[7]);
    ctx.gpr[31] = (0x08A5AA5Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2284), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08A5AA5Cu) goto L_08A5AA5C;
    return;
L_08A5AA5C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2280)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2284)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2288)));
      if (branch_taken) {
          goto L_08A5AA8C;
      }
      goto L_08A5AA70;
    }
L_08A5AA70:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2288), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2280), ctx.gpr[7]);
    ctx.gpr[31] = (0x08A5AA80u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08A5AA80u) goto L_08A5AA80;
    return;
L_08A5AA80:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2280)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2288)));
    goto L_08A5AA8C;
L_08A5AA8C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2104), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2108), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2215), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5AAD4;
      }
      goto L_08A5AAB4;
    }
L_08A5AAB4:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
        goto L_08A5AACC;
    }
    goto L_08A5AAC0;
L_08A5AAC0:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_08A5AACC;
L_08A5AACC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A5AAB4;
      }
      goto L_08A5AAD4;
    }
L_08A5AAD4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2104), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5AC18;
      }
      goto L_08A5AAE8;
    }
L_08A5AAE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2100)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2104)));
    goto L_08A5AAF8;
L_08A5AAF8:
    if (ctx.gpr[5] == ctx.gpr[8]) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A5AB90;
    }
    goto L_08A5AB00;
L_08A5AB00:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[6] == ctx.gpr[8]) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A5AB90;
    }
    goto L_08A5AB0C;
L_08A5AB0C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2152), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2152))))));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < 0 ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
        goto L_08A5AB40;
    }
    goto L_08A5AB38;
L_08A5AB38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A5AB84;
      }
      goto L_08A5AB40;
    }
L_08A5AB40:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2154), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2154))))));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < 0 ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A5AB70;
      }
      goto L_08A5AB68;
    }
L_08A5AB68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5AB84;
      }
      goto L_08A5AB70;
    }
L_08A5AB70:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    goto L_08A5AB84;
L_08A5AB84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2104)));
      if (branch_taken) {
          goto L_08A5AAF8;
      }
      goto L_08A5AB8C;
    }
L_08A5AB8C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08A5AB90;
L_08A5AB90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2104)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2156), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[8] = (ctx.gpr[8] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2157), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5ABCC;
      }
      goto L_08A5ABB4;
    }
L_08A5ABB4:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A5ABB4;
      }
      goto L_08A5ABCC;
    }
L_08A5ABCC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2104)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2158), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5ABE8;
      }
      goto L_08A5ABDC;
    }
L_08A5ABDC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_08A5ABE0;
L_08A5ABE0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A5ABE0;
      }
      goto L_08A5ABE8;
    }
L_08A5ABE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2100)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2104), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A5AC08;
      }
      goto L_08A5AC00;
    }
L_08A5AC00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5AC18;
      }
      goto L_08A5AC08;
    }
L_08A5AC08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5AAE8;
      }
      goto L_08A5AC18;
    }
L_08A5AC18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2104)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5AE38;
      }
      goto L_08A5AC34;
    }
L_08A5AC34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2104)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2160), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2160))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2162), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2162))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 61 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5AD0C;
      }
      goto L_08A5AC74;
    }
L_08A5AC74:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[7] = (2226u << 16u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2164), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2164))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2166), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2166))))));
    ctx.gpr[17] = (ctx.gpr[7] + static_cast<std::uint32_t>(7820));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[31] = (0x08A5ACA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A5A828;
L_08A5ACA8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2168), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2168))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2170), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2170))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[31] = (0x08A5ACD4u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    goto L_08A59B54;
L_08A5ACD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (32768u << 16u);
      if (branch_taken) {
          goto L_08A5AD0C;
      }
      goto L_08A5ACEC;
    }
L_08A5ACEC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_08A5ACF0;
L_08A5ACF0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A5ACF0;
      }
      goto L_08A5AD0C;
    }
L_08A5AD0C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[18] = (2226u << 16u);
      if (branch_taken) {
          goto L_08A5AE38;
      }
      goto L_08A5AD1C;
    }
L_08A5AD1C:
    ctx.gpr[19] = (0u | 28u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(7864));
    goto L_08A5AD24;
L_08A5AD24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08A5AD28;
L_08A5AD28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5AD68;
      }
      goto L_08A5AD34;
    }
L_08A5AD34:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2172), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2172))))));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5AD68;
      }
      goto L_08A5AD60;
    }
L_08A5AD60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A5AD28;
      }
      goto L_08A5AD68;
    }
L_08A5AD68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5AD84;
      }
      goto L_08A5AD74;
    }
L_08A5AD74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5AD84;
      }
      goto L_08A5AD80;
    }
L_08A5AD80:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    goto L_08A5AD84;
L_08A5AD84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2174), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2175), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5ADC4;
      }
      goto L_08A5ADAC;
    }
L_08A5ADAC:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A5ADAC;
      }
      goto L_08A5ADC4;
    }
L_08A5ADC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2176), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5ADE0;
      }
      goto L_08A5ADD4;
    }
L_08A5ADD4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    goto L_08A5ADD8;
L_08A5ADD8:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A5ADD8;
      }
      goto L_08A5ADE0;
    }
L_08A5ADE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A5AE28;
      }
      goto L_08A5ADF8;
    }
L_08A5ADF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x08A5AE10u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A5A828;
L_08A5AE10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x08A5AE28u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A59B54;
L_08A5AE28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5AD24;
      }
      goto L_08A5AE38;
    }
L_08A5AE38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2104)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2177), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5AE54;
      }
      goto L_08A5AE48;
    }
L_08A5AE48:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_08A5AE4C;
L_08A5AE4C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A5AE4C;
      }
      goto L_08A5AE54;
    }
L_08A5AE54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5AE74;
      }
      goto L_08A5AE60;
    }
L_08A5AE60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5AE74;
      }
      goto L_08A5AE6C;
    }
L_08A5AE6C:
    ctx.gpr[31] = (0x08A5AE74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08A5AE74u) goto L_08A5AE74;
    return;
L_08A5AE74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(84)));
    goto L_08A5AE78;
L_08A5AE78:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2272), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2178), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2178))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2088), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A5AEDC;
      }
      goto L_08A5AEA8;
    }
L_08A5AEA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2088))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(14))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2182), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2182))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5AEDC;
      }
      goto L_08A5AED4;
    }
L_08A5AED4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2088), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A5AEDC;
L_08A5AEDC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08A5AF5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7892));
    goto L_08A5A828;
L_08A5AF5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2268), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[17] = (2226u << 16u);
      if (branch_taken) {
          goto L_08A5B064;
      }
      goto L_08A5AFB8;
    }
L_08A5AFB8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(7920));
    goto L_08A5AFBC;
L_08A5AFBC:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[31] = (0x08A5B054u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A5A828;
L_08A5B054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5AFBC;
      }
      goto L_08A5B064;
    }
L_08A5B064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2216), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2217), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5B0AC;
      }
      goto L_08A5B08C;
    }
L_08A5B08C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5B08C;
      }
      goto L_08A5B0AC;
    }
L_08A5B0AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2218), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5B0C8;
      }
      goto L_08A5B0BC;
    }
L_08A5B0BC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_08A5B0C0;
L_08A5B0C0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5B0C0;
      }
      goto L_08A5B0C8;
    }
L_08A5B0C8:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[4];
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08A5B618;
      }
      goto L_08A5B0DC;
    }
L_08A5B0DC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7944));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2264), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7984));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2260), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2256), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8000));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2252), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2248), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8016));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8024));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2244), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2240), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8032));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8040));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2236), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2232), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8048));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2268)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2228), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8072));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8092));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), ctx.gpr[4]);
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (ctx.gpr[20] + ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2220), ctx.gpr[5]);
    goto L_08A5B174;
L_08A5B174:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2088))))));
    ctx.gpr[31] = (0x08A5B184u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 101u, 0x08AC4B84u>(ctx, &aot_mem) && ctx.pc == 0x08A5B184u) goto L_08A5B184;
    return;
L_08A5B184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B608;
      }
      goto L_08A5B1A0;
    }
L_08A5B1A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B608;
      }
      goto L_08A5B1B4;
    }
L_08A5B1B4:
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (0u | 2000u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5B1D4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B1D4u) goto L_08A5B1D4;
    return;
L_08A5B1D4:
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(14));
      if (branch_taken) {
          goto L_08A5B1F0;
      }
      goto L_08A5B1E0;
    }
L_08A5B1E0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    ctx.gpr[17] = (ctx.gpr[4] << 6u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2000));
    goto L_08A5B1F0;
L_08A5B1F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(14))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2184), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2184))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B284;
      }
      goto L_08A5B224;
    }
L_08A5B224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2188), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2188))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B284;
      }
      goto L_08A5B254;
    }
L_08A5B254:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2192), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2192))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2194), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2194))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B450;
      }
      goto L_08A5B284;
    }
L_08A5B284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5B2A0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B2A0u) goto L_08A5B2A0;
    return;
L_08A5B2A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2264)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5B2B0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08A5A828;
L_08A5B2B0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5B32Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B32Cu) goto L_08A5B32C;
    return;
L_08A5B32C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[23];
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08A5B340;
      }
      goto L_08A5B338;
    }
L_08A5B338:
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A5B340;
L_08A5B340:
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[4] & 128u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A5B3F4;
      }
      goto L_08A5B36C;
    }
L_08A5B36C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A5B3F4;
L_08A5B3F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2112), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2112))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2198), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2198))))));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A5B438u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B438u) goto L_08A5B438;
    return;
L_08A5B438:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2202), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2202))))));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A5B4F4;
      }
      goto L_08A5B450;
    }
L_08A5B450:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08A5B4D8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B4D8u) goto L_08A5B4D8;
    return;
L_08A5B4D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B4F4;
      }
      goto L_08A5B4E4;
    }
L_08A5B4E4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2204), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2204))))));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08A5B4F4;
L_08A5B4F4:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2260)));
        goto L_08A5B510;
    }
    goto L_08A5B4FC;
L_08A5B4FC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[31] = (0x08A5B508u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 177u, 0x08AC5380u>(ctx, &aot_mem) && ctx.pc == 0x08A5B508u) goto L_08A5B508;
    return;
L_08A5B508:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08A5B594;
      }
      goto L_08A5B510;
    }
L_08A5B510:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2256)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2252)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2116), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2120), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2244)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2124), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2128), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2236)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2132), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2136), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2140), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2144), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5B568u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5B568u) goto L_08A5B568;
    return;
L_08A5B568:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2116)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[18]);
    ctx.gpr[31] = (0x08A5B588u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A5A828;
L_08A5B588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2224)));
    ctx.gpr[31] = (0x08A5B594u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2088))))));
    goto L_08A5A828;
L_08A5B594:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1025) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B608;
      }
      goto L_08A5B5A4;
    }
L_08A5B5A4:
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(39)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2220)));
    ctx.gpr[31] = (0x08A5B5CCu);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A5A828;
L_08A5B5CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2272)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5B5DCu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A878Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5B5DCu) goto L_08A5B5DC;
    return;
L_08A5B5DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2268)));
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[18]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[16] - ctx.gpr[18]);
    ctx.gpr[31] = (0x08A5B5FCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A5B5FCu) goto L_08A5B5FC;
    return;
L_08A5B5FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(39)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A5B608;
L_08A5B608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5B174;
      }
      goto L_08A5B618;
    }
L_08A5B618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B874;
      }
      goto L_08A5B634;
    }
L_08A5B634:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2272)));
      if (branch_taken) {
          goto L_08A5B800;
      }
      goto L_08A5B644;
    }
L_08A5B644:
    ctx.gpr[23] = (2226u << 16u);
    ctx.gpr[22] = (2226u << 16u);
    ctx.gpr[19] = (2226u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(8124));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(8148));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8156));
    ctx.gpr[18] = (32768u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2088))))));
    goto L_08A5B664;
L_08A5B664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2206), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2206))))));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A5B698;
      }
      goto L_08A5B690;
    }
L_08A5B690:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A5B69C;
      }
      goto L_08A5B698;
    }
L_08A5B698:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A5B69C;
L_08A5B69C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A5B6ACu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08A5A828;
L_08A5B6AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[4] | 32768u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08A5B758;
      }
      goto L_08A5B744;
    }
L_08A5B744:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08A5B758;
L_08A5B758:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B7F0;
      }
      goto L_08A5B760;
    }
L_08A5B760:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2088))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2208), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2208))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B7F0;
      }
      goto L_08A5B78C;
    }
L_08A5B78C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    if (ctx.gpr[17] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
        goto L_08A5B7E4;
    }
    goto L_08A5B798;
L_08A5B798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2210), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] >> 29u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 3u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2211), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5B7E0;
      }
      goto L_08A5B7C0;
    }
L_08A5B7C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A5B7C0;
      }
      goto L_08A5B7E0;
    }
L_08A5B7E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    goto L_08A5B7E4;
L_08A5B7E4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5B7F4;
      }
      goto L_08A5B7F0;
    }
L_08A5B7F0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08A5B7F4;
L_08A5B7F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    if (ctx.gpr[16] != ctx.gpr[4]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2088))))));
        goto L_08A5B664;
    }
    goto L_08A5B800;
L_08A5B800:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(39)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B858;
      }
      goto L_08A5B840;
    }
L_08A5B840:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5B850u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A878Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5B850u) goto L_08A5B850;
    return;
L_08A5B850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B8EC;
      }
      goto L_08A5B858;
    }
L_08A5B858:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A5B86Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A878Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5B86Cu) goto L_08A5B86C;
    return;
L_08A5B86C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B8EC;
      }
      goto L_08A5B874;
    }
L_08A5B874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A5B8EC;
      }
      goto L_08A5B884;
    }
L_08A5B884:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A5B8DC;
      }
      goto L_08A5B890;
    }
L_08A5B890:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    ctx.gpr[9] = (ctx.gpr[9] >> 29u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2212), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2213), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5B8DC;
      }
      goto L_08A5B8BC;
    }
L_08A5B8BC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A5B8BC;
      }
      goto L_08A5B8DC;
    }
L_08A5B8DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A5B884;
      }
      goto L_08A5B8EC;
    }
L_08A5B8EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B93C;
      }
      goto L_08A5B8F8;
    }
L_08A5B8F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B93C;
      }
      goto L_08A5B914;
    }
L_08A5B914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5B93C;
      }
      goto L_08A5B930;
    }
L_08A5B930:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A5B93Cu);
    ctx.gpr[5] = (0u | 3u);
    goto L_08A59C1C;
L_08A5B93C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2292)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2296)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2300)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2304)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2308)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2312)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2316)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2320)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2324)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2328)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(2336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5B96C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-20932)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A5B9BC;
      }
      goto L_08A5B9B4;
    }
L_08A5B9B4:
    ctx.gpr[31] = (0x08A5B9BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5B9BCu) goto L_08A5B9BC;
    return;
L_08A5B9BC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5B9E8;
      }
      goto L_08A5B9D4;
    }
L_08A5B9D4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A5B9F0;
      }
      goto L_08A5B9E8;
    }
L_08A5B9E8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A5B9F0;
L_08A5B9F0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A5BAB4;
      }
      goto L_08A5B9F8;
    }
L_08A5B9F8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5BA30;
      }
      goto L_08A5BA08;
    }
L_08A5BA08:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A5BA34;
      }
      goto L_08A5BA2C;
    }
L_08A5BA2C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A5BA30;
L_08A5BA30:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A5BA34;
L_08A5BA34:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5BAB4;
      }
      goto L_08A5BA3C;
    }
L_08A5BA3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(224))))));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5BA84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8224));
    goto L_08A5A7FC;
L_08A5BA84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5BAC8;
      }
      goto L_08A5BAAC;
    }
L_08A5BAAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A5BB1C;
      }
      goto L_08A5BAB4;
    }
L_08A5BAB4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A5BAC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8160));
    goto L_08A59B54;
L_08A5BAC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 104u, 0x08A5C7A4u>(ctx, &aot_mem); return;
      }
      goto L_08A5BAC8;
    }
L_08A5BAC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08A5BAF4;
    }
    goto L_08A5BAE8;
L_08A5BAE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A5BB1C;
      }
      goto L_08A5BAF0;
    }
L_08A5BAF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A5BAF4;
L_08A5BAF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5BAC8;
      }
      goto L_08A5BB18;
    }
L_08A5BB18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A5BB1C;
L_08A5BB1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08A5BBE8;
    }
    goto L_08A5BB3C;
L_08A5BB3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08A5BB68u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 267u, 0x0886DBB8u>(ctx, &aot_mem) && ctx.pc == 0x08A5BB68u) goto L_08A5BB68;
    return;
L_08A5BB68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5BBBC;
      }
      goto L_08A5BB70;
    }
L_08A5BB70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(224))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(124), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(124))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_08A5BC14;
    }
    goto L_08A5BBB4;
L_08A5BBB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A5BC50;
      }
      goto L_08A5BBBC;
    }
L_08A5BBBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A5BBE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8312));
    goto L_08A59B54;
L_08A5BBE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 104u, 0x08A5C7A4u>(ctx, &aot_mem); return;
      }
      goto L_08A5BBE8;
    }
L_08A5BBE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 28u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[31] = (0x08A5BC0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8256));
    goto L_08A5A7FC;
L_08A5BC0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 104u, 0x08A5C7A4u>(ctx, &aot_mem); return;
      }
      goto L_08A5BC14;
    }
L_08A5BC14:
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(224))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08A5BC50;
L_08A5BC50:
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(126), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & 127u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(224))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(126))))));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5BCE0;
      }
      goto L_08A5BC98;
    }
L_08A5BC98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[19] << 5u);
    ctx.gpr[7] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] << (ctx.gpr[4] & 31u));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5BCE0;
      }
      goto L_08A5BCC4;
    }
L_08A5BCC4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5BCE8;
      }
      goto L_08A5BCD8;
    }
L_08A5BCD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A5BD14;
      }
      goto L_08A5BCE0;
    }
L_08A5BCE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 104u, 0x08A5C7A4u>(ctx, &aot_mem); return;
      }
      goto L_08A5BCE8;
    }
L_08A5BCE8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[19] << 5u);
    ctx.gpr[8] = (ctx.gpr[19] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08A5BD14;
L_08A5BD14:
    ctx.gpr[6] = (ctx.gpr[19] << 5u);
    ctx.gpr[7] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[7] << (ctx.gpr[4] & 31u));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A5BF3C;
      }
      goto L_08A5BD40;
    }
L_08A5BD40:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A5BF3C;
      }
      goto L_08A5BD5C;
    }
L_08A5BD5C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5BF30;
      }
      goto L_08A5BDB4;
    }
L_08A5BDB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A5BE00;
      }
      goto L_08A5BDDC;
    }
L_08A5BDDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08A5BDF4;
    }
    goto L_08A5BDE8;
L_08A5BDE8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08A5BDF4;
L_08A5BDF4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A5BE24;
      }
      goto L_08A5BE00;
    }
L_08A5BE00:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(34));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08A5BE20u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 724u, 0x08B07324u>(ctx, &aot_mem) && ctx.pc == 0x08A5BE20u) goto L_08A5BE20;
    return;
L_08A5BE20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    goto L_08A5BE24;
L_08A5BE24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    goto L_08A5BE34;
L_08A5BE34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5BEE4;
      }
      goto L_08A5BE5C;
    }
L_08A5BE5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(130), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(130))))));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5BEE4;
      }
      goto L_08A5BE98;
    }
L_08A5BE98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(140), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(140))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08A5BE34;
      }
      goto L_08A5BEE4;
    }
L_08A5BEE4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34))))));
    ctx.gpr[31] = (0x08A5BEF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8356));
    goto L_08A5A7FC;
L_08A5BEF4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(146), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(146))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(148))))));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[31] = (0x08A5BF30u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 641u, 0x088A7D84u>(ctx, &aot_mem) && ctx.pc == 0x08A5BF30u) goto L_08A5BF30;
    return;
L_08A5BF30:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A5BD5C;
      }
      goto L_08A5BF3C;
    }
L_08A5BF3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 88u, 0x08A5C67Cu>(ctx, &aot_mem); return;
      }
      goto L_08A5BF78;
    }
L_08A5BF78:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    goto L_08A5BF7C;
L_08A5BF7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[20] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    ctx.gpr[4] = (ctx.gpr[20] & 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 73u, 0x08A5C4CCu>(ctx, &aot_mem); return;
      }
      goto L_08A5BFB4;
    }
L_08A5BFB4:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[20] & 32767u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 4u, 0x08A5C038u>(ctx, &aot_mem); return;
      }
      goto L_08A5BFD4;
    }
L_08A5BFD4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-30636), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5BFF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8364));
    goto L_08A5A7FC;
L_08A5BFF0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C004u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    (void)rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0149(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0149_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_149(Runtime &runtime) {
    runtime.register_generated_unit(149u, 0x08A58000u, 16384u, &recomp_unit_0149, &recomp_unit_0149_entry);
    runtime.register_function(0x08A58000u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5806Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A580FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58178u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A581A4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A581C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A581D4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A581E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A581F0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58208u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58230u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58254u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5827Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5829Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A582BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A582E4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5830Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58328u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58350u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58378u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A583A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A583C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A583D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A583D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A583F0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A583F8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58400u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58410u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58418u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58424u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5842Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58430u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58438u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5845Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58468u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58474u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58484u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5849Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A584B4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A584D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A584F0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58508u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58520u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58538u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58558u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58578u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5858Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A585ACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A585CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A585ECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5860Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58620u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58630u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58638u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58644u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5864Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58650u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58658u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5867Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58688u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58694u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A586A8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A586BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A586CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58708u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58714u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58730u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58738u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58744u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5874Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5875Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58764u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5876Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58774u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5877Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58790u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5879Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A587A4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A587A8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A587B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A587E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5881Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58824u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58848u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58850u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5885Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58864u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58874u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5887Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58884u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5888Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58894u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A588A8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A588B8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A588C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A588D4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A588E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58900u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58908u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58938u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58950u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58964u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5896Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5898Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A589E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A589FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A0Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A14u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A38u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A4Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A70u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A80u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A88u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58A98u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58AB0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58AB8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58ABCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58AD4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58AF8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B04u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B18u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B24u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B28u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B54u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B60u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B6Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B74u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B7Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B84u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58B88u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58BA0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58BACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58BC4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58BD0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58BE8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58C00u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58C34u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58C3Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58C4Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58C54u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58C64u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58C80u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58CB4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58CBCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58CCCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58CD4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58CE4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58D00u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58D18u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58E3Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58E50u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58E68u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58ED0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58F28u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58F30u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58F80u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58F88u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58FCCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A58FD4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59010u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59018u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5904Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59054u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5907Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59084u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59094u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A590A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A590A8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A590BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A590C4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A590D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A590D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A590DCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59124u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59170u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5917Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59190u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5919Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A591ACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A591C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A591C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A591DCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A591F8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59204u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5920Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59228u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5924Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59250u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59258u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59268u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59274u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5927Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59284u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5928Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59294u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5929Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A592A4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A592ACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A592C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A592D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A592E4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A592F8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59308u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59310u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59330u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5933Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59348u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59370u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59378u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59380u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A593A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A593A8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A593B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A593B8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A593CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59400u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59410u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5942Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59438u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59440u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5945Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59490u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5949Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A594CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A594DCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A594E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A594F4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59504u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59518u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59524u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5953Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59548u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59550u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59564u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59578u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5957Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5958Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5959Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A595ACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A595BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A595C4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A595D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A595E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A595FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59638u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59644u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59650u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5965Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59688u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A596A4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A596C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A596DCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A596E4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59700u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59708u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59710u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59718u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59720u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59728u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59738u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59740u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5975Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59764u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5979Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A597A4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A597B4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A597E4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A597ECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A597FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5980Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59818u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5983Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5984Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59858u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5986Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59878u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59894u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A598B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A598D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59934u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59980u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59984u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A599ACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A599BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A599D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A599F8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A599FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59A0Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59A1Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59A38u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59A40u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59A44u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59A4Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59A58u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59A5Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59A64u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59A74u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59A84u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59A98u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59AACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59AB0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59AC0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59AF0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59B1Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59B28u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59B3Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59B54u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59B80u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59BC8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C1Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C44u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C5Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C74u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C88u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59C9Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CA0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CA8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CB0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CB8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CC0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CC8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CD0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CE4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CE8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CF0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59CF8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D00u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D08u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D10u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D18u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D24u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D2Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D34u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D3Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D44u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D54u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D5Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D64u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D74u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D78u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D80u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D88u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D94u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59D9Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59DA4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59DA8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59DB0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59DB8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59DC4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59DCCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59DD4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59DD8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59DE0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59DE8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E08u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E24u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E2Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E70u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59E7Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59EB4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59EC8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59EDCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59EECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59EF8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F20u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F2Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F38u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F40u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F74u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59F84u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59FA0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59FA8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59FB4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59FB8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59FC0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59FC8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59FD0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59FD8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59FE0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A59FF4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A020u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A044u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A06Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A078u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A080u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A0A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A0A4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A0CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A0D4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A0E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A120u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A128u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A12Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A148u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A168u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A1B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A1C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A1C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A1D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A1E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A1E4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A1ECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A1F8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A204u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A210u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A218u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A21Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A224u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A244u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A26Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A270u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A27Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A298u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A2B4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A2BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A2D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A2E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A2F0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A320u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A32Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A344u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A34Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A364u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A370u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A374u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A380u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A3C4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A3D4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A3FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A430u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A438u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A444u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A44Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A47Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A48Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A498u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A4A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A4B4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A4C4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A4D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A4D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A4E4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A4ECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A500u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A508u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A510u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A520u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A52Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A534u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A548u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A554u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A574u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A5D4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A5E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A5F4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A600u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A620u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A62Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A640u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A64Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A654u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A664u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A668u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A674u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A684u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A68Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A69Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A6B4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A6BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A6D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A714u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A720u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A73Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A748u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A768u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A770u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A788u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A78Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A794u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A7B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A7CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A7ECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A7FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A828u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A854u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A894u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A89Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A8B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A8C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A8C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A8D0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A8E4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A8F0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A8F8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A904u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A90Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A918u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A920u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A964u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A96Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A978u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5A9BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA08u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA10u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA18u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA48u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA5Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA70u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA80u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AA8Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AAB4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AAC0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AACCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AAD4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AAE8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AAF8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB00u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB0Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB38u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB40u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB68u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB70u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB84u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB8Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AB90u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ABB4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ABCCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ABDCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ABE0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ABE8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC00u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC08u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC18u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC34u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AC74u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ACA8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ACD4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ACECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ACF0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD0Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD1Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD24u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD28u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD34u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD60u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD68u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD74u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD80u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AD84u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ADACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ADC4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ADD4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ADD8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ADE0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5ADF8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AE10u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AE28u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AE38u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AE48u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AE4Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AE54u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AE60u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AE6Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AE74u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AE78u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AEA8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AED4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AEDCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AF5Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AFB8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5AFBCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B054u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B064u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B08Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B0ACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B0BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B0C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B0C8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B0DCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B174u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B184u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B1A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B1B4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B1D4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B1E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B1F0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B224u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B254u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B284u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B2A0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B2B0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B32Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B338u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B340u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B36Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B3F4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B438u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B450u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B4D8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B4E4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B4F4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B4FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B508u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B510u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B568u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B588u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B594u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B5A4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B5CCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B5DCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B5FCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B608u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B618u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B634u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B644u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B664u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B690u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B698u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B69Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B6ACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B744u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B758u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B760u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B78Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B798u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B7C0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B7E0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B7E4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B7F0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B7F4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B800u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B840u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B850u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B858u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B86Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B874u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B884u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B890u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B8BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B8DCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B8ECu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B8F8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B914u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B930u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B93Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B96Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B9B4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B9BCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B9D4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B9E8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B9F0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5B9F8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BA08u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BA2Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BA30u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BA34u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BA3Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BA84u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BAACu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BAB4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BAC0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BAC8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BAE8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BAF0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BAF4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BB18u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BB1Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BB3Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BB68u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BB70u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BBB4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BBBCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BBE0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BBE8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BC0Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BC14u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BC50u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BC98u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BCC4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BCD8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BCE0u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BCE8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BD14u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BD40u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BD5Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BDB4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BDDCu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BDE8u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BDF4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BE00u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BE20u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BE24u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BE34u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BE5Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BE98u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BEE4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BEF4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BF30u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BF3Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BF78u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BF7Cu, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BFB4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BFD4u, &recomp_unit_0149, "recomp_unit_0149");
    runtime.register_function(0x08A5BFF0u, &recomp_unit_0149, "recomp_unit_0149");
}
} // namespace psprecomp
