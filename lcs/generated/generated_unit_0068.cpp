#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0068[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0,
    0, 13, 0, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 20, 0, 21, 0, 22, 0, 23, 0,
    0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 33, 0, 34, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0,
    0, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0,
    0, 48, 0, 49, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 60, 0, 61, 0, 62, 0, 0, 63, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0,
    75, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87,
    0, 0, 88, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 95, 0, 0, 96,
    0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 102, 0,
    0, 0, 103, 0, 104, 105, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 108, 0, 109, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 113, 114, 0, 0, 115, 0, 0, 116, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 120, 0, 121, 0, 122, 0, 0, 0, 123, 0, 0, 124, 0, 125, 126, 0, 0, 127, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 130, 0, 0, 131, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 138, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0,
    0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0,
    0, 153, 154, 0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 158, 0, 159, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 163,
    0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 168, 0,
    169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0,
    0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0,
    178, 0, 0, 0, 179, 0, 0, 0, 180, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 185,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 193,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0,
    200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0,
    0, 0, 207, 0, 0, 0, 208, 209, 0, 210, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214,
    0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0,
    222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 228, 0, 229, 0, 230, 0, 0,
    0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 235, 236, 0, 237, 0, 0, 238, 0, 0, 239, 0, 240, 0, 0, 241, 0, 0,
    242, 0, 0, 243, 0, 244, 245, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 253, 0,
    254, 0, 255, 0, 256, 0, 257, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 262, 263, 0, 264, 0, 0, 265, 0, 0, 266, 0, 267, 0,
    0, 268, 0, 0, 269, 0, 0, 270, 0, 271, 272, 0, 273, 0, 0, 274, 0, 0, 275, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 280,
    281, 0, 282, 0, 0, 283, 0, 0, 284, 0, 285, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 289, 290, 0, 291, 0, 0, 292, 0, 0, 293, 0,
    294, 0, 295, 0, 296, 0, 297, 0, 298, 0, 299, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 304, 305, 0, 306, 0, 0, 307, 0, 0,
    308, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 313, 314, 0, 315, 0, 0, 316, 0, 0, 317, 0, 318, 0, 0, 319, 0, 0, 320, 0,
    0, 321, 0, 322, 323, 0, 324, 0, 0, 325, 0, 0, 326, 0, 327, 0, 328, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0,
    0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 341, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0,
    0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 349, 0, 0, 0, 350, 0, 0,
    0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 357, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0,
    0, 366, 0, 0, 0, 367, 0, 368, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 372, 0, 373, 0, 374, 0, 375, 0, 376, 0, 377,
    0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0, 0,
    384, 0, 385, 0, 0, 386, 0, 387, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 392, 0, 0, 0,
    0, 393, 0, 0, 394, 0, 0, 0, 0, 395, 0, 396, 0, 0, 397, 0, 398, 0, 399, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 407, 0, 0,
    0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0,
    0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 424, 0, 425, 0, 0, 0, 426,
    0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 432, 0, 0, 433, 0, 0, 0, 0, 434,
    0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0,
    0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 457,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 466, 0, 467, 0, 468, 469, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 472, 0, 0, 473, 0, 474, 0, 0, 475, 0, 0, 476, 0, 0, 477, 0, 0, 478,
    479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 483, 0, 0, 484, 0, 0, 485, 0, 0, 486, 487, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 492, 493, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 0,
    0, 0, 0, 497, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 0,
    0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 511, 512, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 514, 0, 515, 0, 0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 518, 0, 519, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 526, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 529, 0,
    530, 0, 0, 0, 0, 0, 0, 0, 531, 0, 532, 0, 533, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0,
    0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0,
    0, 0, 0, 0, 543, 544, 0, 0, 0, 0, 545, 0, 0, 0, 0, 546, 0, 547, 0, 0, 0, 548, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    550, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0,
    565, 0, 0, 566, 0, 567, 0, 568, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 575, 0, 0, 0, 576,
    0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 581, 0, 0, 0, 582, 583, 0, 0, 584, 0, 0, 0, 0,
    0, 0, 585, 0, 0, 586, 0, 0, 0, 587, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 0, 590, 0, 591, 0, 0, 592, 0, 593, 0, 594,
    0, 0, 595, 0, 596, 0, 597, 0, 598, 0, 599, 0, 600, 0, 601, 0, 0, 602, 0, 603, 0, 604, 0, 605, 0, 606, 0, 607, 0, 608, 609, 0,
    0, 0, 0, 610, 0, 0, 0, 611, 0, 612, 0, 613, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 615, 0, 616, 0, 0, 617, 0, 0, 618, 0,
    619, 0, 0, 620, 0, 621, 0, 0, 0, 622, 0, 623, 0, 0, 624, 0, 625, 0, 626, 0, 627, 0, 628, 0, 629, 0, 630, 0, 631, 0, 632, 0,
    633, 0, 634, 0, 635, 0, 636, 0, 637, 0, 638, 0, 0, 639, 640, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 645, 0, 646, 0, 647,
    0, 648, 0, 649, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 652, 0, 0, 653, 0, 654, 0, 655, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 656, 0, 0, 0, 0, 657, 0, 658, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 661, 0, 0, 0, 0, 662, 0,
    0, 0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 665, 0, 0, 0, 666, 667, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0,
    670, 0, 671, 0, 0, 672, 0, 0, 673, 0, 674, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 677, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    680, 0, 0, 0, 0, 681, 0, 682, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 687, 0, 0, 0, 0, 0, 0, 688, 0, 689, 0, 690, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0, 695,
    0, 696, 697, 698, 0, 0, 0, 699, 0, 0, 0, 0, 0, 700, 0, 0, 0, 701, 0, 702, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0,
    0, 0, 704, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0,
    0, 707, 0, 0, 708, 0, 709, 0, 0, 710, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0,
    0, 713, 0, 0, 714, 0, 715, 716, 0, 717, 0, 0, 0, 718, 0, 719, 0, 0, 720, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 722, 0, 0, 723, 0, 724, 0, 0, 725, 0, 0, 726, 0, 727, 0, 728, 0, 0, 729, 0, 730, 0, 731, 0, 732, 0,
    0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 0, 737,
    0, 0, 0, 0, 738, 0, 739, 0, 740, 0, 0, 0, 0, 741, 0, 742, 0, 0, 0, 0, 743, 0, 744, 0, 0, 745, 0, 746, 0, 0, 747, 0,
    748, 0, 749, 0, 750, 0, 751, 0, 0, 752, 0, 753, 0, 754, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0,
    0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 758, 0, 0, 0, 759, 0, 760, 0, 761, 0, 0, 0, 762, 0, 0, 0, 0, 763, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 766, 0, 0, 767, 0, 768, 769, 770, 0, 0, 0, 771, 0, 772, 0, 0, 773, 774,
};
void recomp_unit_0068_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08914000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0068[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08914000;
    case 2u: goto L_0891402C;
    case 3u: goto L_08914064;
    case 4u: goto L_08914070;
    case 5u: goto L_0891407C;
    case 6u: goto L_08914098;
    case 7u: goto L_089140B4;
    case 8u: goto L_089140C4;
    case 9u: goto L_089140CC;
    case 10u: goto L_089140D4;
    case 11u: goto L_089140F0;
    case 12u: goto L_089140F8;
    case 13u: goto L_08914104;
    case 14u: goto L_08914110;
    case 15u: goto L_08914118;
    case 16u: goto L_0891412C;
    case 17u: goto L_08914134;
    case 18u: goto L_08914140;
    case 19u: goto L_08914154;
    case 20u: goto L_08914160;
    case 21u: goto L_08914168;
    case 22u: goto L_08914170;
    case 23u: goto L_08914178;
    case 24u: goto L_08914188;
    case 25u: goto L_08914190;
    case 26u: goto L_089141A0;
    case 27u: goto L_089141A8;
    case 28u: goto L_089141B8;
    case 29u: goto L_089141C0;
    case 30u: goto L_089141D0;
    case 31u: goto L_089141D8;
    case 32u: goto L_089141E8;
    case 33u: goto L_089141F0;
    case 34u: goto L_089141F8;
    case 35u: goto L_08914224;
    case 36u: goto L_08914238;
    case 37u: goto L_08914240;
    case 38u: goto L_08914254;
    case 39u: goto L_08914274;
    case 40u: goto L_08914288;
    case 41u: goto L_08914290;
    case 42u: goto L_089142A4;
    case 43u: goto L_089142C4;
    case 44u: goto L_089142CC;
    case 45u: goto L_089142D4;
    case 46u: goto L_089142E8;
    case 47u: goto L_089142F4;
    case 48u: goto L_08914304;
    case 49u: goto L_0891430C;
    case 50u: goto L_08914320;
    case 51u: goto L_0891432C;
    case 52u: goto L_0891433C;
    case 53u: goto L_08914344;
    case 54u: goto L_08914358;
    case 55u: goto L_08914360;
    case 56u: goto L_08914370;
    case 57u: goto L_08914380;
    case 58u: goto L_089143A4;
    case 59u: goto L_089143AC;
    case 60u: goto L_089143B8;
    case 61u: goto L_089143C0;
    case 62u: goto L_089143C8;
    case 63u: goto L_089143D4;
    case 64u: goto L_089143E0;
    case 65u: goto L_089143E8;
    case 66u: goto L_08914418;
    case 67u: goto L_089144E0;
    case 68u: goto L_0891450C;
    case 69u: goto L_08914534;
    case 70u: goto L_0891453C;
    case 71u: goto L_0891454C;
    case 72u: goto L_08914554;
    case 73u: goto L_08914564;
    case 74u: goto L_08914578;
    case 75u: goto L_08914580;
    case 76u: goto L_0891458C;
    case 77u: goto L_089145A0;
    case 78u: goto L_089145B0;
    case 79u: goto L_089145B8;
    case 80u: goto L_089145D8;
    case 81u: goto L_089145FC;
    case 82u: goto L_08914610;
    case 83u: goto L_08914624;
    case 84u: goto L_08914664;
    case 85u: goto L_08914748;
    case 86u: goto L_08914764;
    case 87u: goto L_0891477C;
    case 88u: goto L_08914788;
    case 89u: goto L_08914790;
    case 90u: goto L_089147A4;
    case 91u: goto L_089147B4;
    case 92u: goto L_089147C0;
    case 93u: goto L_089147D4;
    case 94u: goto L_089147DC;
    case 95u: goto L_089147F0;
    case 96u: goto L_089147FC;
    case 97u: goto L_0891480C;
    case 98u: goto L_08914818;
    case 99u: goto L_0891484C;
    case 100u: goto L_08914868;
    case 101u: goto L_08914870;
    case 102u: goto L_08914878;
    case 103u: goto L_08914888;
    case 104u: goto L_08914890;
    case 105u: goto L_08914894;
    case 106u: goto L_089148AC;
    case 107u: goto L_089148B8;
    case 108u: goto L_089148C8;
    case 109u: goto L_089148D0;
    case 110u: goto L_089148D4;
    case 111u: goto L_089148EC;
    case 112u: goto L_08914918;
    case 113u: goto L_08914920;
    case 114u: goto L_08914924;
    case 115u: goto L_08914930;
    case 116u: goto L_0891493C;
    case 117u: goto L_08914944;
    case 118u: goto L_0891494C;
    case 119u: goto L_08914970;
    case 120u: goto L_08914984;
    case 121u: goto L_0891498C;
    case 122u: goto L_08914994;
    case 123u: goto L_089149A4;
    case 124u: goto L_089149B0;
    case 125u: goto L_089149B8;
    case 126u: goto L_089149BC;
    case 127u: goto L_089149C8;
    case 128u: goto L_089149D4;
    case 129u: goto L_089149DC;
    case 130u: goto L_08914A04;
    case 131u: goto L_08914A10;
    case 132u: goto L_08914A18;
    case 133u: goto L_08914A24;
    case 134u: goto L_08914A48;
    case 135u: goto L_08914A54;
    case 136u: goto L_08914A5C;
    case 137u: goto L_08914A64;
    case 138u: goto L_08914A78;
    case 139u: goto L_08914AAC;
    case 140u: goto L_08914AC8;
    case 141u: goto L_08914AD4;
    case 142u: goto L_08914B3C;
    case 143u: goto L_08914B5C;
    case 144u: goto L_08914B78;
    case 145u: goto L_08914B88;
    case 146u: goto L_08914BA4;
    case 147u: goto L_08914BB0;
    case 148u: goto L_08914C18;
    case 149u: goto L_08914C38;
    case 150u: goto L_08914C54;
    case 151u: goto L_08914C5C;
    case 152u: goto L_08914C64;
    case 153u: goto L_08914C84;
    case 154u: goto L_08914C88;
    case 155u: goto L_08914C90;
    case 156u: goto L_08914CA8;
    case 157u: goto L_08914CB0;
    case 158u: goto L_08914CBC;
    case 159u: goto L_08914CC4;
    case 160u: goto L_08914CD0;
    case 161u: goto L_08914CE4;
    case 162u: goto L_08914CF4;
    case 163u: goto L_08914CFC;
    case 164u: goto L_08914D04;
    case 165u: goto L_08914D10;
    case 166u: goto L_08914D64;
    case 167u: goto L_08914D70;
    case 168u: goto L_08914D78;
    case 169u: goto L_08914D80;
    case 170u: goto L_08914D98;
    case 171u: goto L_08914DD0;
    case 172u: goto L_08914DF4;
    case 173u: goto L_08914E14;
    case 174u: goto L_08914E3C;
    case 175u: goto L_08914E40;
    case 176u: goto L_08914E68;
    case 177u: goto L_08914E74;
    case 178u: goto L_08914E80;
    case 179u: goto L_08914E90;
    case 180u: goto L_08914EA0;
    case 181u: goto L_08914EA4;
    case 182u: goto L_08914EDC;
    case 183u: goto L_08914EE8;
    case 184u: goto L_08914EF4;
    case 185u: goto L_08914EFC;
    case 186u: goto L_08914F28;
    case 187u: goto L_08914F30;
    case 188u: goto L_08914F94;
    case 189u: goto L_08914F9C;
    case 190u: goto L_08914FA8;
    case 191u: goto L_08914FDC;
    case 192u: goto L_08914FF0;
    case 193u: goto L_08914FFC;
    case 194u: goto L_08915010;
    case 195u: goto L_08915034;
    case 196u: goto L_08915048;
    case 197u: goto L_08915058;
    case 198u: goto L_08915068;
    case 199u: goto L_08915078;
    case 200u: goto L_08915080;
    case 201u: goto L_08915088;
    case 202u: goto L_089150B0;
    case 203u: goto L_089150B8;
    case 204u: goto L_089150C0;
    case 205u: goto L_089150E4;
    case 206u: goto L_089150EC;
    case 207u: goto L_08915108;
    case 208u: goto L_08915118;
    case 209u: goto L_0891511C;
    case 210u: goto L_08915124;
    case 211u: goto L_08915138;
    case 212u: goto L_08915144;
    case 213u: goto L_08915158;
    case 214u: goto L_0891517C;
    case 215u: goto L_08915190;
    case 216u: goto L_089151A0;
    case 217u: goto L_089151B0;
    case 218u: goto L_089151C0;
    case 219u: goto L_089151C8;
    case 220u: goto L_089151D0;
    case 221u: goto L_089151F8;
    case 222u: goto L_08915200;
    case 223u: goto L_08915208;
    case 224u: goto L_0891522C;
    case 225u: goto L_08915234;
    case 226u: goto L_08915250;
    case 227u: goto L_08915260;
    case 228u: goto L_08915264;
    case 229u: goto L_0891526C;
    case 230u: goto L_08915274;
    case 231u: goto L_08915290;
    case 232u: goto L_0891529C;
    case 233u: goto L_089152A8;
    case 234u: goto L_089152B4;
    case 235u: goto L_089152BC;
    case 236u: goto L_089152C0;
    case 237u: goto L_089152C8;
    case 238u: goto L_089152D4;
    case 239u: goto L_089152E0;
    case 240u: goto L_089152E8;
    case 241u: goto L_089152F4;
    case 242u: goto L_08915300;
    case 243u: goto L_0891530C;
    case 244u: goto L_08915314;
    case 245u: goto L_08915318;
    case 246u: goto L_08915320;
    case 247u: goto L_0891532C;
    case 248u: goto L_08915338;
    case 249u: goto L_0891534C;
    case 250u: goto L_08915358;
    case 251u: goto L_08915364;
    case 252u: goto L_08915370;
    case 253u: goto L_08915378;
    case 254u: goto L_08915380;
    case 255u: goto L_08915388;
    case 256u: goto L_08915390;
    case 257u: goto L_08915398;
    case 258u: goto L_089153A0;
    case 259u: goto L_089153AC;
    case 260u: goto L_089153B8;
    case 261u: goto L_089153C4;
    case 262u: goto L_089153CC;
    case 263u: goto L_089153D0;
    case 264u: goto L_089153D8;
    case 265u: goto L_089153E4;
    case 266u: goto L_089153F0;
    case 267u: goto L_089153F8;
    case 268u: goto L_08915404;
    case 269u: goto L_08915410;
    case 270u: goto L_0891541C;
    case 271u: goto L_08915424;
    case 272u: goto L_08915428;
    case 273u: goto L_08915430;
    case 274u: goto L_0891543C;
    case 275u: goto L_08915448;
    case 276u: goto L_08915450;
    case 277u: goto L_0891545C;
    case 278u: goto L_08915468;
    case 279u: goto L_08915474;
    case 280u: goto L_0891547C;
    case 281u: goto L_08915480;
    case 282u: goto L_08915488;
    case 283u: goto L_08915494;
    case 284u: goto L_089154A0;
    case 285u: goto L_089154A8;
    case 286u: goto L_089154B4;
    case 287u: goto L_089154C0;
    case 288u: goto L_089154CC;
    case 289u: goto L_089154D4;
    case 290u: goto L_089154D8;
    case 291u: goto L_089154E0;
    case 292u: goto L_089154EC;
    case 293u: goto L_089154F8;
    case 294u: goto L_08915500;
    case 295u: goto L_08915508;
    case 296u: goto L_08915510;
    case 297u: goto L_08915518;
    case 298u: goto L_08915520;
    case 299u: goto L_08915528;
    case 300u: goto L_08915530;
    case 301u: goto L_0891553C;
    case 302u: goto L_08915548;
    case 303u: goto L_08915554;
    case 304u: goto L_0891555C;
    case 305u: goto L_08915560;
    case 306u: goto L_08915568;
    case 307u: goto L_08915574;
    case 308u: goto L_08915580;
    case 309u: goto L_08915588;
    case 310u: goto L_08915594;
    case 311u: goto L_089155A0;
    case 312u: goto L_089155AC;
    case 313u: goto L_089155B4;
    case 314u: goto L_089155B8;
    case 315u: goto L_089155C0;
    case 316u: goto L_089155CC;
    case 317u: goto L_089155D8;
    case 318u: goto L_089155E0;
    case 319u: goto L_089155EC;
    case 320u: goto L_089155F8;
    case 321u: goto L_08915604;
    case 322u: goto L_0891560C;
    case 323u: goto L_08915610;
    case 324u: goto L_08915618;
    case 325u: goto L_08915624;
    case 326u: goto L_08915630;
    case 327u: goto L_08915638;
    case 328u: goto L_08915640;
    case 329u: goto L_08915648;
    case 330u: goto L_0891565C;
    case 331u: goto L_089156A8;
    case 332u: goto L_089156B0;
    case 333u: goto L_089156F8;
    case 334u: goto L_08915704;
    case 335u: goto L_0891570C;
    case 336u: goto L_08915714;
    case 337u: goto L_0891571C;
    case 338u: goto L_08915724;
    case 339u: goto L_08915740;
    case 340u: goto L_08915748;
    case 341u: goto L_08915750;
    case 342u: goto L_08915768;
    case 343u: goto L_08915770;
    case 344u: goto L_08915788;
    case 345u: goto L_089157A4;
    case 346u: goto L_089157A8;
    case 347u: goto L_089157CC;
    case 348u: goto L_089157D8;
    case 349u: goto L_089157E4;
    case 350u: goto L_089157F4;
    case 351u: goto L_08915804;
    case 352u: goto L_08915834;
    case 353u: goto L_08915840;
    case 354u: goto L_0891584C;
    case 355u: goto L_08915854;
    case 356u: goto L_08915874;
    case 357u: goto L_08915878;
    case 358u: goto L_08915AA4;
    case 359u: goto L_08915AC8;
    case 360u: goto L_08915AE4;
    case 361u: goto L_08915B20;
    case 362u: goto L_08915B28;
    case 363u: goto L_08915B30;
    case 364u: goto L_08915B44;
    case 365u: goto L_08915B60;
    case 366u: goto L_08915B84;
    case 367u: goto L_08915B94;
    case 368u: goto L_08915B9C;
    case 369u: goto L_08915BAC;
    case 370u: goto L_08915BBC;
    case 371u: goto L_08915BCC;
    case 372u: goto L_08915BD4;
    case 373u: goto L_08915BDC;
    case 374u: goto L_08915BE4;
    case 375u: goto L_08915BEC;
    case 376u: goto L_08915BF4;
    case 377u: goto L_08915BFC;
    case 378u: goto L_08915C08;
    case 379u: goto L_08915C30;
    case 380u: goto L_08915C38;
    case 381u: goto L_08915C48;
    case 382u: goto L_08915C5C;
    case 383u: goto L_08915C68;
    case 384u: goto L_08915C80;
    case 385u: goto L_08915C88;
    case 386u: goto L_08915C94;
    case 387u: goto L_08915C9C;
    case 388u: goto L_08915CA4;
    case 389u: goto L_08915CB0;
    case 390u: goto L_08915CD8;
    case 391u: goto L_08915CE0;
    case 392u: goto L_08915CF0;
    case 393u: goto L_08915D04;
    case 394u: goto L_08915D10;
    case 395u: goto L_08915D24;
    case 396u: goto L_08915D2C;
    case 397u: goto L_08915D38;
    case 398u: goto L_08915D40;
    case 399u: goto L_08915D48;
    case 400u: goto L_08915D50;
    case 401u: goto L_08915D58;
    case 402u: goto L_08915D98;
    case 403u: goto L_08915DB4;
    case 404u: goto L_08915DC0;
    case 405u: goto L_08915DE4;
    case 406u: goto L_08915DEC;
    case 407u: goto L_08915DF4;
    case 408u: goto L_08915E14;
    case 409u: goto L_08915E20;
    case 410u: goto L_08915E28;
    case 411u: goto L_08915E34;
    case 412u: goto L_08915E4C;
    case 413u: goto L_08915E58;
    case 414u: goto L_08915E6C;
    case 415u: goto L_08915E98;
    case 416u: goto L_08915EAC;
    case 417u: goto L_08915F10;
    case 418u: goto L_08915F54;
    case 419u: goto L_08915F78;
    case 420u: goto L_08915F98;
    case 421u: goto L_08915FB8;
    case 422u: goto L_08915FCC;
    case 423u: goto L_08915FDC;
    case 424u: goto L_08915FE4;
    case 425u: goto L_08915FEC;
    case 426u: goto L_08915FFC;
    case 427u: goto L_0891600C;
    case 428u: goto L_0891601C;
    case 429u: goto L_0891602C;
    case 430u: goto L_08916044;
    case 431u: goto L_08916050;
    case 432u: goto L_0891605C;
    case 433u: goto L_08916068;
    case 434u: goto L_0891607C;
    case 435u: goto L_0891608C;
    case 436u: goto L_089160D4;
    case 437u: goto L_08916118;
    case 438u: goto L_08916124;
    case 439u: goto L_08916180;
    case 440u: goto L_089161A0;
    case 441u: goto L_089161B8;
    case 442u: goto L_089161E0;
    case 443u: goto L_0891621C;
    case 444u: goto L_08916230;
    case 445u: goto L_08916258;
    case 446u: goto L_08916298;
    case 447u: goto L_089162F4;
    case 448u: goto L_0891630C;
    case 449u: goto L_08916350;
    case 450u: goto L_08916394;
    case 451u: goto L_0891639C;
    case 452u: goto L_089163E0;
    case 453u: goto L_08916424;
    case 454u: goto L_08916430;
    case 455u: goto L_08916448;
    case 456u: goto L_0891645C;
    case 457u: goto L_0891647C;
    case 458u: goto L_089164C4;
    case 459u: goto L_08916528;
    case 460u: goto L_0891656C;
    case 461u: goto L_089165AC;
    case 462u: goto L_089165EC;
    case 463u: goto L_089165FC;
    case 464u: goto L_08916638;
    case 465u: goto L_08916640;
    case 466u: goto L_08916648;
    case 467u: goto L_08916650;
    case 468u: goto L_08916658;
    case 469u: goto L_0891665C;
    case 470u: goto L_089166A0;
    case 471u: goto L_089166B0;
    case 472u: goto L_089166B8;
    case 473u: goto L_089166C4;
    case 474u: goto L_089166CC;
    case 475u: goto L_089166D8;
    case 476u: goto L_089166E4;
    case 477u: goto L_089166F0;
    case 478u: goto L_089166FC;
    case 479u: goto L_08916700;
    case 480u: goto L_08916714;
    case 481u: goto L_08916764;
    case 482u: goto L_08916778;
    case 483u: goto L_0891680C;
    case 484u: goto L_08916818;
    case 485u: goto L_08916824;
    case 486u: goto L_08916830;
    case 487u: goto L_08916834;
    case 488u: goto L_08916848;
    case 489u: goto L_0891689C;
    case 490u: goto L_089168B0;
    case 491u: goto L_089168C0;
    case 492u: goto L_089168E4;
    case 493u: goto L_089168E8;
    case 494u: goto L_08916910;
    case 495u: goto L_08916958;
    case 496u: goto L_08916968;
    case 497u: goto L_0891698C;
    case 498u: goto L_08916990;
    case 499u: goto L_089169B8;
    case 500u: goto L_08916A04;
    case 501u: goto L_08916A3C;
    case 502u: goto L_08916A6C;
    case 503u: goto L_08916AB0;
    case 504u: goto L_08916AB8;
    case 505u: goto L_08916AC0;
    case 506u: goto L_08916AD8;
    case 507u: goto L_08916AF4;
    case 508u: goto L_08916B08;
    case 509u: goto L_08916B20;
    case 510u: goto L_08916B54;
    case 511u: goto L_08916B74;
    case 512u: goto L_08916B78;
    case 513u: goto L_08916BA4;
    case 514u: goto L_08916BB0;
    case 515u: goto L_08916BB8;
    case 516u: goto L_08916BD8;
    case 517u: goto L_08916BE0;
    case 518u: goto L_08916BE8;
    case 519u: goto L_08916BF0;
    case 520u: goto L_08916C44;
    case 521u: goto L_08916CB0;
    case 522u: goto L_08916CC8;
    case 523u: goto L_08916CD0;
    case 524u: goto L_08916CE8;
    case 525u: goto L_08916D1C;
    case 526u: goto L_08916D3C;
    case 527u: goto L_08916D40;
    case 528u: goto L_08916D6C;
    case 529u: goto L_08916D78;
    case 530u: goto L_08916D80;
    case 531u: goto L_08916DA0;
    case 532u: goto L_08916DA8;
    case 533u: goto L_08916DB0;
    case 534u: goto L_08916DB8;
    case 535u: goto L_08916E0C;
    case 536u: goto L_08916E78;
    case 537u: goto L_08916E90;
    case 538u: goto L_08916EB4;
    case 539u: goto L_08916FA8;
    case 540u: goto L_08916FC8;
    case 541u: goto L_08916FD4;
    case 542u: goto L_08916FF4;
    case 543u: goto L_08917010;
    case 544u: goto L_08917014;
    case 545u: goto L_08917028;
    case 546u: goto L_0891703C;
    case 547u: goto L_08917044;
    case 548u: goto L_08917054;
    case 549u: goto L_08917058;
    case 550u: goto L_08917080;
    case 551u: goto L_08917088;
    case 552u: goto L_08917098;
    case 553u: goto L_089170B8;
    case 554u: goto L_089170D8;
    case 555u: goto L_08917114;
    case 556u: goto L_08917144;
    case 557u: goto L_0891719C;
    case 558u: goto L_089171AC;
    case 559u: goto L_089171B4;
    case 560u: goto L_089171D8;
    case 561u: goto L_08917220;
    case 562u: goto L_08917228;
    case 563u: goto L_08917254;
    case 564u: goto L_08917270;
    case 565u: goto L_08917280;
    case 566u: goto L_0891728C;
    case 567u: goto L_08917294;
    case 568u: goto L_0891729C;
    case 569u: goto L_089172A8;
    case 570u: goto L_089172BC;
    case 571u: goto L_089172DC;
    case 572u: goto L_08917304;
    case 573u: goto L_0891734C;
    case 574u: goto L_08917360;
    case 575u: goto L_0891736C;
    case 576u: goto L_0891737C;
    case 577u: goto L_0891738C;
    case 578u: goto L_089173A0;
    case 579u: goto L_089173B0;
    case 580u: goto L_089173C4;
    case 581u: goto L_089173CC;
    case 582u: goto L_089173DC;
    case 583u: goto L_089173E0;
    case 584u: goto L_089173EC;
    case 585u: goto L_08917408;
    case 586u: goto L_08917414;
    case 587u: goto L_08917424;
    case 588u: goto L_08917430;
    case 589u: goto L_08917440;
    case 590u: goto L_08917458;
    case 591u: goto L_08917460;
    case 592u: goto L_0891746C;
    case 593u: goto L_08917474;
    case 594u: goto L_0891747C;
    case 595u: goto L_08917488;
    case 596u: goto L_08917490;
    case 597u: goto L_08917498;
    case 598u: goto L_089174A0;
    case 599u: goto L_089174A8;
    case 600u: goto L_089174B0;
    case 601u: goto L_089174B8;
    case 602u: goto L_089174C4;
    case 603u: goto L_089174CC;
    case 604u: goto L_089174D4;
    case 605u: goto L_089174DC;
    case 606u: goto L_089174E4;
    case 607u: goto L_089174EC;
    case 608u: goto L_089174F4;
    case 609u: goto L_089174F8;
    case 610u: goto L_0891750C;
    case 611u: goto L_0891751C;
    case 612u: goto L_08917524;
    case 613u: goto L_0891752C;
    case 614u: goto L_08917538;
    case 615u: goto L_08917558;
    case 616u: goto L_08917560;
    case 617u: goto L_0891756C;
    case 618u: goto L_08917578;
    case 619u: goto L_08917580;
    case 620u: goto L_0891758C;
    case 621u: goto L_08917594;
    case 622u: goto L_089175A4;
    case 623u: goto L_089175AC;
    case 624u: goto L_089175B8;
    case 625u: goto L_089175C0;
    case 626u: goto L_089175C8;
    case 627u: goto L_089175D0;
    case 628u: goto L_089175D8;
    case 629u: goto L_089175E0;
    case 630u: goto L_089175E8;
    case 631u: goto L_089175F0;
    case 632u: goto L_089175F8;
    case 633u: goto L_08917600;
    case 634u: goto L_08917608;
    case 635u: goto L_08917610;
    case 636u: goto L_08917618;
    case 637u: goto L_08917620;
    case 638u: goto L_08917628;
    case 639u: goto L_08917634;
    case 640u: goto L_08917638;
    case 641u: goto L_08917648;
    case 642u: goto L_089176A0;
    case 643u: goto L_089176AC;
    case 644u: goto L_089176E4;
    case 645u: goto L_089176EC;
    case 646u: goto L_089176F4;
    case 647u: goto L_089176FC;
    case 648u: goto L_08917704;
    case 649u: goto L_0891770C;
    case 650u: goto L_08917714;
    case 651u: goto L_0891773C;
    case 652u: goto L_08917744;
    case 653u: goto L_08917750;
    case 654u: goto L_08917758;
    case 655u: goto L_08917760;
    case 656u: goto L_0891778C;
    case 657u: goto L_089177A0;
    case 658u: goto L_089177A8;
    case 659u: goto L_089177B0;
    case 660u: goto L_089177D8;
    case 661u: goto L_089177E4;
    case 662u: goto L_089177F8;
    case 663u: goto L_08917808;
    case 664u: goto L_08917820;
    case 665u: goto L_0891782C;
    case 666u: goto L_0891783C;
    case 667u: goto L_08917840;
    case 668u: goto L_0891784C;
    case 669u: goto L_0891785C;
    case 670u: goto L_08917880;
    case 671u: goto L_08917888;
    case 672u: goto L_08917894;
    case 673u: goto L_089178A0;
    case 674u: goto L_089178A8;
    case 675u: goto L_089178B8;
    case 676u: goto L_089178CC;
    case 677u: goto L_089178D4;
    case 678u: goto L_089178DC;
    case 679u: goto L_08917904;
    case 680u: goto L_08917980;
    case 681u: goto L_08917994;
    case 682u: goto L_0891799C;
    case 683u: goto L_089179AC;
    case 684u: goto L_089179BC;
    case 685u: goto L_089179D4;
    case 686u: goto L_089179DC;
    case 687u: goto L_08917A04;
    case 688u: goto L_08917A20;
    case 689u: goto L_08917A28;
    case 690u: goto L_08917A30;
    case 691u: goto L_08917A3C;
    case 692u: goto L_08917A4C;
    case 693u: goto L_08917A64;
    case 694u: goto L_08917A70;
    case 695u: goto L_08917A7C;
    case 696u: goto L_08917A84;
    case 697u: goto L_08917A88;
    case 698u: goto L_08917A8C;
    case 699u: goto L_08917A9C;
    case 700u: goto L_08917AB4;
    case 701u: goto L_08917AC4;
    case 702u: goto L_08917ACC;
    case 703u: goto L_08917AE4;
    case 704u: goto L_08917B08;
    case 705u: goto L_08917B14;
    case 706u: goto L_08917B78;
    case 707u: goto L_08917B84;
    case 708u: goto L_08917B90;
    case 709u: goto L_08917B98;
    case 710u: goto L_08917BA4;
    case 711u: goto L_08917BAC;
    case 712u: goto L_08917BF8;
    case 713u: goto L_08917C04;
    case 714u: goto L_08917C10;
    case 715u: goto L_08917C18;
    case 716u: goto L_08917C1C;
    case 717u: goto L_08917C24;
    case 718u: goto L_08917C34;
    case 719u: goto L_08917C3C;
    case 720u: goto L_08917C48;
    case 721u: goto L_08917C4C;
    case 722u: goto L_08917C98;
    case 723u: goto L_08917CA4;
    case 724u: goto L_08917CAC;
    case 725u: goto L_08917CB8;
    case 726u: goto L_08917CC4;
    case 727u: goto L_08917CCC;
    case 728u: goto L_08917CD4;
    case 729u: goto L_08917CE0;
    case 730u: goto L_08917CE8;
    case 731u: goto L_08917CF0;
    case 732u: goto L_08917CF8;
    case 733u: goto L_08917D18;
    case 734u: goto L_08917D2C;
    case 735u: goto L_08917D5C;
    case 736u: goto L_08917D64;
    case 737u: goto L_08917D7C;
    case 738u: goto L_08917D90;
    case 739u: goto L_08917D98;
    case 740u: goto L_08917DA0;
    case 741u: goto L_08917DB4;
    case 742u: goto L_08917DBC;
    case 743u: goto L_08917DD0;
    case 744u: goto L_08917DD8;
    case 745u: goto L_08917DE4;
    case 746u: goto L_08917DEC;
    case 747u: goto L_08917DF8;
    case 748u: goto L_08917E00;
    case 749u: goto L_08917E08;
    case 750u: goto L_08917E10;
    case 751u: goto L_08917E18;
    case 752u: goto L_08917E24;
    case 753u: goto L_08917E2C;
    case 754u: goto L_08917E34;
    case 755u: goto L_08917E54;
    case 756u: goto L_08917E74;
    case 757u: goto L_08917E94;
    case 758u: goto L_08917EA8;
    case 759u: goto L_08917EB8;
    case 760u: goto L_08917EC0;
    case 761u: goto L_08917EC8;
    case 762u: goto L_08917ED8;
    case 763u: goto L_08917EEC;
    case 764u: goto L_08917F1C;
    case 765u: goto L_08917FA8;
    case 766u: goto L_08917FB4;
    case 767u: goto L_08917FC0;
    case 768u: goto L_08917FC8;
    case 769u: goto L_08917FCC;
    case 770u: goto L_08917FD0;
    case 771u: goto L_08917FE0;
    case 772u: goto L_08917FE8;
    case 773u: goto L_08917FF4;
    case 774u: goto L_08917FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08914000:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891402C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[31]);
    ctx.gpr[31] = (0x08914064u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 483u, 0x0887AF60u>(ctx, &aot_mem) && ctx.pc == 0x08914064u) goto L_08914064;
    return;
L_08914064:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08914070u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 347u, 0x08913560u>(ctx, &aot_mem) && ctx.pc == 0x08914070u) goto L_08914070;
    return;
L_08914070:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x0891407Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 381u, 0x0891385Cu>(ctx, &aot_mem) && ctx.pc == 0x0891407Cu) goto L_0891407C;
    return;
L_0891407C:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2444)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_08914098;
L_08914098:
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914098;
      }
      goto L_089140B4;
    }
L_089140B4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    goto L_089140C4;
L_089140C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914118;
      }
      goto L_089140CC;
    }
L_089140CC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914118;
      }
      goto L_089140D4;
    }
L_089140D4:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x089140F0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 418u, 0x08AED750u>(ctx, &aot_mem) && ctx.pc == 0x089140F0u) goto L_089140F0;
    return;
L_089140F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2444)));
      if (branch_taken) {
          goto L_08914104;
      }
      goto L_089140F8;
    }
L_089140F8:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08914110;
      }
      goto L_08914104;
    }
L_08914104:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_08914110;
L_08914110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089140C4;
      }
      goto L_08914118;
    }
L_08914118:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0891412Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17212));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x0891412Cu) goto L_0891412C;
    return;
L_0891412C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089143E8;
      }
      goto L_08914134;
    }
L_08914134:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08914140u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17116));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 189u, 0x088B9044u>(ctx, &aot_mem) && ctx.pc == 0x08914140u) goto L_08914140;
    return;
L_08914140:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25764)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(124));
      if (branch_taken) {
          goto L_089141F0;
      }
      goto L_08914154;
    }
L_08914154:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08914190;
      }
      goto L_08914160;
    }
L_08914160:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089141A8;
      }
      goto L_08914168;
    }
L_08914168:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089141C0;
      }
      goto L_08914170;
    }
L_08914170:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089141D8;
      }
      goto L_08914178;
    }
L_08914178:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08914188u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17124));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08914188u) goto L_08914188;
    return;
L_08914188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089141F0;
      }
      goto L_08914190;
    }
L_08914190:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089141A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17136));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x089141A0u) goto L_089141A0;
    return;
L_089141A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089141F0;
      }
      goto L_089141A8;
    }
L_089141A8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089141B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17148));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x089141B8u) goto L_089141B8;
    return;
L_089141B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089141F0;
      }
      goto L_089141C0;
    }
L_089141C0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089141D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17160));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x089141D0u) goto L_089141D0;
    return;
L_089141D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089141F0;
      }
      goto L_089141D8;
    }
L_089141D8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089141E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17172));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x089141E8u) goto L_089141E8;
    return;
L_089141E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089141F0;
      }
      goto L_089141F0;
    }
L_089141F0:
    ctx.gpr[31] = (0x089141F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 754u, 0x0891B6F8u>(ctx, &aot_mem) && ctx.pc == 0x089141F8u) goto L_089141F8;
    return;
L_089141F8:
    ctx.gpr[4] = (ctx.gpr[16] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08914224u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17184));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 209u, 0x088B91A0u>(ctx, &aot_mem) && ctx.pc == 0x08914224u) goto L_08914224;
    return;
L_08914224:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08914238u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 215u, 0x088B9234u>(ctx, &aot_mem) && ctx.pc == 0x08914238u) goto L_08914238;
    return;
L_08914238:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), 0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_08914240;
L_08914240:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(152));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08914254u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 212u, 0x088B91E0u>(ctx, &aot_mem) && ctx.pc == 0x08914254u) goto L_08914254;
    return;
L_08914254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914240;
      }
      goto L_08914274;
    }
L_08914274:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08914288u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 552u, 0x08AEDFC0u>(ctx, &aot_mem) && ctx.pc == 0x08914288u) goto L_08914288;
    return;
L_08914288:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089142A4;
      }
      goto L_08914290;
    }
L_08914290:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089142A4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17256));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x089142A4u) goto L_089142A4;
    return;
L_089142A4:
    ctx.gpr[23] = (2225u << 16u);
    ctx.gpr[22] = (2225u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(17196));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(17204));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(162)));
    goto L_089142C4;
L_089142C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
      if (branch_taken) {
          goto L_089142D4;
      }
      goto L_089142CC;
    }
L_089142CC:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_089143AC;
      }
      goto L_089142D4;
    }
L_089142D4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089142E8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 402u, 0x08913A6Cu>(ctx, &aot_mem) && ctx.pc == 0x089142E8u) goto L_089142E8;
    return;
L_089142E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089143A4;
      }
      goto L_089142F4;
    }
L_089142F4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08914304u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 552u, 0x08AEDFC0u>(ctx, &aot_mem) && ctx.pc == 0x08914304u) goto L_08914304;
    return;
L_08914304:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891432C;
      }
      goto L_0891430C;
    }
L_0891430C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08914320u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 341u, 0x0891349Cu>(ctx, &aot_mem) && ctx.pc == 0x08914320u) goto L_08914320;
    return;
L_08914320:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089143A4;
      }
      goto L_0891432C;
    }
L_0891432C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0891433Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 552u, 0x08AEDFC0u>(ctx, &aot_mem) && ctx.pc == 0x0891433Cu) goto L_0891433C;
    return;
L_0891433C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08914360;
      }
      goto L_08914344;
    }
L_08914344:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08914358u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 375u, 0x089137A8u>(ctx, &aot_mem) && ctx.pc == 0x08914358u) goto L_08914358;
    return;
L_08914358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (0u | 1u);
      if (branch_taken) {
          goto L_089143A4;
      }
      goto L_08914360;
    }
L_08914360:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089143A4;
      }
      goto L_08914370;
    }
L_08914370:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08914380u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 212u, 0x088B91E0u>(ctx, &aot_mem) && ctx.pc == 0x08914380u) goto L_08914380;
    return;
L_08914380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914370;
      }
      goto L_089143A4;
    }
L_089143A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(162)));
      if (branch_taken) {
          goto L_089142C4;
      }
      goto L_089143AC;
    }
L_089143AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089143B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 351u, 0x0891359Cu>(ctx, &aot_mem) && ctx.pc == 0x089143B8u) goto L_089143B8;
    return;
L_089143B8:
    ctx.gpr[31] = (0x089143C0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 218u, 0x088B9288u>(ctx, &aot_mem) && ctx.pc == 0x089143C0u) goto L_089143C0;
    return;
L_089143C0:
    ctx.gpr[31] = (0x089143C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 756u, 0x0891B71Cu>(ctx, &aot_mem) && ctx.pc == 0x089143C8u) goto L_089143C8;
    return;
L_089143C8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x089143D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17104));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 189u, 0x088B9044u>(ctx, &aot_mem) && ctx.pc == 0x089143D4u) goto L_089143D4;
    return;
L_089143D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x089143E0u);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(35));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x089143E0u) goto L_089143E0;
    return;
L_089143E0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089143E8;
L_089143E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08914418:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24396)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24392)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24424)));
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[14] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[15] = (2227u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[3] = (2227u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[9] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(24400), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(24420)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(24428), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(24436), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (16281u << 16u);
    ctx.gpr[8] = (16268u << 16u);
    ctx.gpr[12] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] | 39322u);
    ctx.gpr[13] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[7] = (ctx.gpr[8] | 52429u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[24] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24408), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24404), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(24412), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(24416), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24432), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(24440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089144E0:
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
L_0891450C:
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
L_08914534:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891453C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08914578;
      }
      goto L_0891454C;
    }
L_0891454C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
      if (branch_taken) {
          goto L_08914578;
      }
      goto L_08914554;
    }
L_08914554:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914578;
      }
      goto L_08914564;
    }
L_08914564:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(540), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089145B0;
      }
      goto L_08914578;
    }
L_08914578:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08914580;
L_08914580:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089145A0;
      }
      goto L_0891458C;
    }
L_0891458C:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(540), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089145B0;
      }
      goto L_089145A0;
    }
L_089145A0:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08914580;
      }
      goto L_089145B0;
    }
L_089145B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089145B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089145D8u);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 166u, 0x088A0D74u>(ctx, &aot_mem) && ctx.pc == 0x089145D8u) goto L_089145D8;
    return;
L_089145D8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19636));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(880));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 24u);
    ctx.gpr[31] = (0x089145FCu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4160));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x089145FCu) goto L_089145FC;
    return;
L_089145FC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08914624;
      }
      goto L_08914610;
    }
L_08914610:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08914624;
L_08914624:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(836), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(66))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24020)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(336), ctx.gpr[5]);
    ctx.gpr[31] = (0x08914664u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089147C0;
L_08914664:
    ctx.gpr[6] = (16204u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(880), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(884), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(888), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (48972u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(890), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(908), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(912), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (19646u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 48160u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(914), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16255u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 55470u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15692u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(864), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(865), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(868), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(544), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(872), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(876), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 96u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
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
L_08914748:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08914790;
      }
      goto L_08914764;
    }
L_08914764:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19636));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891477Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 515u, 0x0889E91Cu>(ctx, &aot_mem) && ctx.pc == 0x0891477Cu) goto L_0891477C;
    return;
L_0891477C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914790;
      }
      goto L_08914788;
    }
L_08914788:
    ctx.gpr[31] = (0x08914790u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 513u, 0x0889E8F8u>(ctx, &aot_mem) && ctx.pc == 0x08914790u) goto L_08914790;
    return;
L_08914790:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089147A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089147B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 819u, 0x08A2FB88u>(ctx, &aot_mem) && ctx.pc == 0x089147B4u) goto L_089147B4;
    return;
L_089147B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089147C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089147D4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 538u, 0x0889EABCu>(ctx, &aot_mem) && ctx.pc == 0x089147D4u) goto L_089147D4;
    return;
L_089147D4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089147DC;
L_089147DC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(928), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089147DC;
      }
      goto L_089147F0;
    }
L_089147F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089147FCu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(928));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 609u, 0x08973D94u>(ctx, &aot_mem) && ctx.pc == 0x089147FCu) goto L_089147FC;
    return;
L_089147FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891480C:
    ctx.gpr[5] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24536), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08914818:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08914870;
      }
      goto L_0891484C;
    }
L_0891484C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(932)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = 0u != 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(880));
      if (branch_taken) {
          goto L_08914878;
      }
      goto L_08914868;
    }
L_08914868:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08914894;
      }
      goto L_08914870;
    }
L_08914870:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089149DC;
      }
      goto L_08914878;
    }
L_08914878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_08914894;
    }
    goto L_08914888;
L_08914888:
    ctx.gpr[31] = (0x08914890u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08914890u) goto L_08914890;
    return;
L_08914890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_08914894;
L_08914894:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x089148ACu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x089148ACu) goto L_089148AC;
    return;
L_089148AC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(936)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
      if (branch_taken) {
          goto L_089148D0;
      }
      goto L_089148B8;
    }
L_089148B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089148D4;
      }
      goto L_089148C8;
    }
L_089148C8:
    ctx.gpr[31] = (0x089148D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089148D0u) goto L_089148D0;
    return;
L_089148D0:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    goto L_089148D4;
L_089148D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[31] = (0x089148ECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x089148ECu) goto L_089148EC;
    return;
L_089148EC:
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08914918u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 603u, 0x08A06FA4u>(ctx, &aot_mem) && ctx.pc == 0x08914918u) goto L_08914918;
    return;
L_08914918:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914924;
      }
      goto L_08914920;
    }
L_08914920:
    ctx.gpr[21] = (0u | 1u);
    goto L_08914924;
L_08914924:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08914930u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 590u, 0x08A06ED8u>(ctx, &aot_mem) && ctx.pc == 0x08914930u) goto L_08914930;
    return;
L_08914930:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(904));
    ctx.gpr[31] = (0x0891493Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 590u, 0x08A06ED8u>(ctx, &aot_mem) && ctx.pc == 0x0891493Cu) goto L_0891493C;
    return;
L_0891493C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891494C;
      }
      goto L_08914944;
    }
L_08914944:
    ctx.gpr[31] = (0x0891494Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 596u, 0x08A06F40u>(ctx, &aot_mem) && ctx.pc == 0x0891494Cu) goto L_0891494C;
    return;
L_0891494C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(892)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(916)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08914970u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x08914970u) goto L_08914970;
    return;
L_08914970:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (0x08914984u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x08914984u) goto L_08914984;
    return;
L_08914984:
    ctx.gpr[31] = (0x0891498Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x0891498Cu) goto L_0891498C;
    return;
L_0891498C:
    ctx.gpr[31] = (0x08914994u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08914994u) goto L_08914994;
    return;
L_08914994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_089149BC;
    }
    goto L_089149A4;
L_089149A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_089149BC;
    }
    goto L_089149B0;
L_089149B0:
    ctx.gpr[31] = (0x089149B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089149B8u) goto L_089149B8;
    return;
L_089149B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_089149BC;
L_089149BC:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089149DC;
      }
      goto L_089149C8;
    }
L_089149C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089149DC;
      }
      goto L_089149D4;
    }
L_089149D4:
    ctx.gpr[31] = (0x089149DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089149DCu) goto L_089149DC;
    return;
L_089149DC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08914A04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (16320u << 16u);
      if (branch_taken) {
          goto L_08914A5C;
      }
      goto L_08914A10;
    }
L_08914A10:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    goto L_08914A18;
L_08914A18:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08914A54;
      }
      goto L_08914A24;
    }
L_08914A24:
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08914A54;
      }
      goto L_08914A48;
    }
L_08914A48:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[8] = (ctx.gpr[8] | 64u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_08914A54;
L_08914A54:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914A18;
      }
      goto L_08914A5C;
    }
L_08914A5C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08914A64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (17948u << 16u);
      if (branch_taken) {
          goto L_08914C84;
      }
      goto L_08914A78;
    }
L_08914A78:
    ctx.gpr[5] = (ctx.gpr[5] | 15360u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(112)));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08914B78;
      }
      goto L_08914AAC;
    }
L_08914AAC:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(112)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08914B78;
      }
      goto L_08914AC8;
    }
L_08914AC8:
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[3] = (0u | 0u);
    goto L_08914AD4;
L_08914AD4:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(112)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(12)));
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[13] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[13]);
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[13] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08914B5C;
      }
      goto L_08914B3C;
    }
L_08914B3C:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[8] = (ctx.gpr[12] | 0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08914B5C;
L_08914B5C:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(112)));
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08914AD4;
      }
      goto L_08914B78;
    }
L_08914B78:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914C54;
      }
      goto L_08914B88;
    }
L_08914B88:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(116)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08914C54;
      }
      goto L_08914BA4;
    }
L_08914BA4:
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[3] = (0u | 0u);
    goto L_08914BB0;
L_08914BB0:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(116)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(12)));
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[13] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[13]);
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[13] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08914C38;
      }
      goto L_08914C18;
    }
L_08914C18:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[8] = (ctx.gpr[12] | 0u);
    ctx.gpr[7] = (0u | 1u);
    goto L_08914C38;
L_08914C38:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(116)));
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08914BB0;
      }
      goto L_08914C54;
    }
L_08914C54:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08914C84;
      }
      goto L_08914C5C;
    }
L_08914C5C:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08914C84;
      }
      goto L_08914C64;
    }
L_08914C64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[5] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[2] = (ctx.gpr[8] << 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08914C88;
      }
      goto L_08914C84;
    }
L_08914C84:
    ctx.gpr[2] = (0u | 0u);
    goto L_08914C88;
L_08914C88:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08914C90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08914CA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17456));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 90u, 0x08A28CB4u>(ctx, &aot_mem) && ctx.pc == 0x08914CA8u) goto L_08914CA8;
    return;
L_08914CA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914CBC;
      }
      goto L_08914CB0;
    }
L_08914CB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08914CBCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08914CBCu) goto L_08914CBC;
    return;
L_08914CBC:
    ctx.gpr[31] = (0x08914CC4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08914CC4u) goto L_08914CC4;
    return;
L_08914CC4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08914CD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08914CE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17464));
    goto L_089144E0;
L_08914CE4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08914CF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17456));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 90u, 0x08A28CB4u>(ctx, &aot_mem) && ctx.pc == 0x08914CF4u) goto L_08914CF4;
    return;
L_08914CF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914D04;
      }
      goto L_08914CFC;
    }
L_08914CFC:
    ctx.gpr[31] = (0x08914D04u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 614u, 0x089C699Cu>(ctx, &aot_mem) && ctx.pc == 0x08914D04u) goto L_08914D04;
    return;
L_08914D04:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08914D10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-560));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-29215)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08914D78;
      }
      goto L_08914D64;
    }
L_08914D64:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(854))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914D98;
      }
      goto L_08914D70;
    }
L_08914D70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(852))))));
      if (branch_taken) {
          goto L_08914D80;
      }
      goto L_08914D78;
    }
L_08914D78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891608C;
      }
      goto L_08914D80;
    }
L_08914D80:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891608C;
      }
      goto L_08914D98;
    }
L_08914D98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[5]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12960));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (2227u << 16u);
      if (branch_taken) {
          goto L_08914DF4;
      }
      goto L_08914DD0;
    }
L_08914DD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(120));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08914E14;
      }
      goto L_08914DF4;
    }
L_08914DF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(136));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(152));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[5]);
    goto L_08914E14;
L_08914E14:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(858))))));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08914E40;
      }
      goto L_08914E3C;
    }
L_08914E3C:
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[24];
    goto L_08914E40;
L_08914E40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08914E74;
      }
      goto L_08914E68;
    }
L_08914E68:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08914E80;
      }
      goto L_08914E74;
    }
L_08914E74:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_08914E80;
L_08914E80:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
        goto L_08914EA4;
    }
    goto L_08914E90;
L_08914E90:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
        goto L_08914EFC;
    }
    goto L_08914EA0;
L_08914EA0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
    goto L_08914EA4;
L_08914EA4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(856), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08914EE8;
      }
      goto L_08914EDC;
    }
L_08914EDC:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08914EF4;
      }
      goto L_08914EE8;
    }
L_08914EE8:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_08914EF4;
L_08914EF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08914E80;
      }
      goto L_08914EFC;
    }
L_08914EFC:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
        goto L_08914F30;
    }
    goto L_08914F28;
L_08914F28:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
    goto L_08914F30;
L_08914F30:
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[12];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[31] = (0x08914F94u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 190u, 0x089D591Cu>(ctx, &aot_mem) && ctx.pc == 0x08914F94u) goto L_08914F94;
    return;
L_08914F94:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08915788;
      }
      goto L_08914F9C;
    }
L_08914F9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7912)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08915788;
      }
      goto L_08914FA8;
    }
L_08914FA8:
    ctx.gpr[6] = (16752u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (18371u << 16u);
    ctx.fpr[16] = ctx.fpr[22] + ctx.fpr[18];
    ctx.gpr[6] = (ctx.gpr[6] | 20467u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[6] = (17302u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08915124;
      }
      goto L_08914FDC;
    }
L_08914FDC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(24520));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    goto L_08914FF0;
L_08914FF0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[18];
      if (branch_taken) {
          goto L_08915034;
      }
      goto L_08914FFC;
    }
L_08914FFC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24520)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915034;
      }
      goto L_08915010;
    }
L_08915010:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(116)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(8))))));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24520)));
    ctx.gpr[10] = (ctx.gpr[10] << 4u);
    ctx.gpr[10] = (ctx.gpr[20] + ctx.gpr[10]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-4)));
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[28];
    goto L_08915034;
L_08915034:
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915068;
      }
      goto L_08915048;
    }
L_08915048:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915068;
      }
      goto L_08915058;
    }
L_08915058:
    ctx.gpr[19] = (ctx.gpr[8] << 24u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 24u));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08915068;
L_08915068:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08914FF0;
      }
      goto L_08915078;
    }
L_08915078:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_08915088;
      }
      goto L_08915080;
    }
L_08915080:
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    goto L_08915088;
L_08915088:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[17];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089150EC;
      }
      goto L_089150B0;
    }
L_089150B0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_089150C0;
      }
      goto L_089150B8;
    }
L_089150B8:
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    goto L_089150C0;
L_089150C0:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089150EC;
      }
      goto L_089150E4;
    }
L_089150E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0891511C;
      }
      goto L_089150EC;
    }
L_089150EC:
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891511C;
      }
      goto L_08915108;
    }
L_08915108:
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891511C;
      }
      goto L_08915118;
    }
L_08915118:
    ctx.gpr[4] = (0u | 1u);
    goto L_0891511C;
L_0891511C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915264;
      }
      goto L_08915124;
    }
L_08915124:
    ctx.gpr[6] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(24508));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    goto L_08915138;
L_08915138:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[18];
      if (branch_taken) {
          goto L_0891517C;
      }
      goto L_08915144;
    }
L_08915144:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24508)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891517C;
      }
      goto L_08915158;
    }
L_08915158:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(112)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(8))))));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24508)));
    ctx.gpr[10] = (ctx.gpr[10] << 4u);
    ctx.gpr[10] = (ctx.gpr[20] + ctx.gpr[10]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-4)));
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[28];
    goto L_0891517C;
L_0891517C:
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089151B0;
      }
      goto L_08915190;
    }
L_08915190:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089151B0;
      }
      goto L_089151A0;
    }
L_089151A0:
    ctx.gpr[19] = (ctx.gpr[5] << 24u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 24u));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_089151B0;
L_089151B0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08915138;
      }
      goto L_089151C0;
    }
L_089151C0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_089151D0;
      }
      goto L_089151C8;
    }
L_089151C8:
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    goto L_089151D0;
L_089151D0:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[17];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915234;
      }
      goto L_089151F8;
    }
L_089151F8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_08915208;
      }
      goto L_08915200;
    }
L_08915200:
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    goto L_08915208;
L_08915208:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915234;
      }
      goto L_0891522C;
    }
L_0891522C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08915264;
      }
      goto L_08915234;
    }
L_08915234:
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915264;
      }
      goto L_08915250;
    }
L_08915250:
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915264;
      }
      goto L_08915260;
    }
L_08915260:
    ctx.gpr[4] = (0u | 1u);
    goto L_08915264;
L_08915264:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08915788;
      }
      goto L_0891526C;
    }
L_0891526C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08915788;
      }
      goto L_08915274;
    }
L_08915274:
    ctx.gpr[5] = (16202u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 49283u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[21] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (2229u << 16u);
      if (branch_taken) {
          goto L_089152E8;
      }
      goto L_08915290;
    }
L_08915290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_089152C8;
      }
      goto L_0891529C;
    }
L_0891529C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089152A8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089152A8u) goto L_089152A8;
    return;
L_089152A8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089152C0;
      }
      goto L_089152B4;
    }
L_089152B4:
    ctx.gpr[31] = (0x089152BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089152BCu) goto L_089152BC;
    return;
L_089152BC:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_089152C0;
L_089152C0:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_089152C8;
L_089152C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x089152D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17512));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089152D4u) goto L_089152D4;
    return;
L_089152D4:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089152E0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54364u>(ctx, &aot_mem) && ctx.pc == 0x089152E0u) goto L_089152E0;
    return;
L_089152E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915338;
      }
      goto L_089152E8;
    }
L_089152E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_08915320;
      }
      goto L_089152F4;
    }
L_089152F4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08915300u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08915300u) goto L_08915300;
    return;
L_08915300:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915318;
      }
      goto L_0891530C;
    }
L_0891530C:
    ctx.gpr[31] = (0x08915314u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08915314u) goto L_08915314;
    return;
L_08915314:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08915318;
L_08915318:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_08915320;
L_08915320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0891532Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17520));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0891532Cu) goto L_0891532C;
    return;
L_0891532C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08915338u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54364u>(ctx, &aot_mem) && ctx.pc == 0x08915338u) goto L_08915338;
    return;
L_08915338:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891534Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17528));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A542E8u>(ctx, &aot_mem) && ctx.pc == 0x0891534Cu) goto L_0891534C;
    return;
L_0891534C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08915358u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 17u, 0x08A54314u>(ctx, &aot_mem) && ctx.pc == 0x08915358u) goto L_08915358;
    return;
L_08915358:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915500;
      }
      goto L_08915364;
    }
L_08915364:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08915388;
      }
      goto L_08915370;
    }
L_08915370:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08915630;
      }
      goto L_08915378;
    }
L_08915378:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089153A0;
      }
      goto L_08915380;
    }
L_08915380:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089153F8;
      }
      goto L_08915388;
    }
L_08915388:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08915450;
      }
      goto L_08915390;
    }
L_08915390:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089154A8;
      }
      goto L_08915398;
    }
L_08915398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915630;
      }
      goto L_089153A0;
    }
L_089153A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_089153D8;
      }
      goto L_089153AC;
    }
L_089153AC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089153B8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089153B8u) goto L_089153B8;
    return;
L_089153B8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089153D0;
      }
      goto L_089153C4;
    }
L_089153C4:
    ctx.gpr[31] = (0x089153CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089153CCu) goto L_089153CC;
    return;
L_089153CC:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_089153D0;
L_089153D0:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_089153D8;
L_089153D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x089153E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17532));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089153E4u) goto L_089153E4;
    return;
L_089153E4:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089153F0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 17u, 0x08A54314u>(ctx, &aot_mem) && ctx.pc == 0x089153F0u) goto L_089153F0;
    return;
L_089153F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915630;
      }
      goto L_089153F8;
    }
L_089153F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_08915430;
      }
      goto L_08915404;
    }
L_08915404:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08915410u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08915410u) goto L_08915410;
    return;
L_08915410:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915428;
      }
      goto L_0891541C;
    }
L_0891541C:
    ctx.gpr[31] = (0x08915424u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08915424u) goto L_08915424;
    return;
L_08915424:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08915428;
L_08915428:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_08915430;
L_08915430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0891543Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17540));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0891543Cu) goto L_0891543C;
    return;
L_0891543C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08915448u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 17u, 0x08A54314u>(ctx, &aot_mem) && ctx.pc == 0x08915448u) goto L_08915448;
    return;
L_08915448:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915630;
      }
      goto L_08915450;
    }
L_08915450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_08915488;
      }
      goto L_0891545C;
    }
L_0891545C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08915468u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08915468u) goto L_08915468;
    return;
L_08915468:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915480;
      }
      goto L_08915474;
    }
L_08915474:
    ctx.gpr[31] = (0x0891547Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0891547Cu) goto L_0891547C;
    return;
L_0891547C:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08915480;
L_08915480:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_08915488;
L_08915488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08915494u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17548));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08915494u) goto L_08915494;
    return;
L_08915494:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089154A0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 17u, 0x08A54314u>(ctx, &aot_mem) && ctx.pc == 0x089154A0u) goto L_089154A0;
    return;
L_089154A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915630;
      }
      goto L_089154A8;
    }
L_089154A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_089154E0;
      }
      goto L_089154B4;
    }
L_089154B4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089154C0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089154C0u) goto L_089154C0;
    return;
L_089154C0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089154D8;
      }
      goto L_089154CC;
    }
L_089154CC:
    ctx.gpr[31] = (0x089154D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089154D4u) goto L_089154D4;
    return;
L_089154D4:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_089154D8;
L_089154D8:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_089154E0;
L_089154E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x089154ECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17556));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089154ECu) goto L_089154EC;
    return;
L_089154EC:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089154F8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 17u, 0x08A54314u>(ctx, &aot_mem) && ctx.pc == 0x089154F8u) goto L_089154F8;
    return;
L_089154F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915630;
      }
      goto L_08915500;
    }
L_08915500:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08915518;
      }
      goto L_08915508;
    }
L_08915508:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08915630;
      }
      goto L_08915510;
    }
L_08915510:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915530;
      }
      goto L_08915518;
    }
L_08915518:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08915588;
      }
      goto L_08915520;
    }
L_08915520:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089155E0;
      }
      goto L_08915528;
    }
L_08915528:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915630;
      }
      goto L_08915530;
    }
L_08915530:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_08915568;
      }
      goto L_0891553C;
    }
L_0891553C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08915548u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08915548u) goto L_08915548;
    return;
L_08915548:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915560;
      }
      goto L_08915554;
    }
L_08915554:
    ctx.gpr[31] = (0x0891555Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0891555Cu) goto L_0891555C;
    return;
L_0891555C:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08915560;
L_08915560:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_08915568;
L_08915568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08915574u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17564));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08915574u) goto L_08915574;
    return;
L_08915574:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08915580u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 17u, 0x08A54314u>(ctx, &aot_mem) && ctx.pc == 0x08915580u) goto L_08915580;
    return;
L_08915580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915630;
      }
      goto L_08915588;
    }
L_08915588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_089155C0;
      }
      goto L_08915594;
    }
L_08915594:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089155A0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089155A0u) goto L_089155A0;
    return;
L_089155A0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089155B8;
      }
      goto L_089155AC;
    }
L_089155AC:
    ctx.gpr[31] = (0x089155B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089155B4u) goto L_089155B4;
    return;
L_089155B4:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_089155B8;
L_089155B8:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_089155C0;
L_089155C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x089155CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17572));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089155CCu) goto L_089155CC;
    return;
L_089155CC:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089155D8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 17u, 0x08A54314u>(ctx, &aot_mem) && ctx.pc == 0x089155D8u) goto L_089155D8;
    return;
L_089155D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915630;
      }
      goto L_089155E0;
    }
L_089155E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_08915618;
      }
      goto L_089155EC;
    }
L_089155EC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089155F8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089155F8u) goto L_089155F8;
    return;
L_089155F8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915610;
      }
      goto L_08915604;
    }
L_08915604:
    ctx.gpr[31] = (0x0891560Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0891560Cu) goto L_0891560C;
    return;
L_0891560C:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08915610;
L_08915610:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_08915618;
L_08915618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08915624u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17580));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08915624u) goto L_08915624;
    return;
L_08915624:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08915630u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 17u, 0x08A54314u>(ctx, &aot_mem) && ctx.pc == 0x08915630u) goto L_08915630;
    return;
L_08915630:
    ctx.gpr[31] = (0x08915638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x08915638u) goto L_08915638;
    return;
L_08915638:
    ctx.gpr[31] = (0x08915640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x08915640u) goto L_08915640;
    return;
L_08915640:
    ctx.gpr[31] = (0x08915648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x08915648u) goto L_08915648;
    return;
L_08915648:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25764)));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089156B0;
      }
      goto L_0891565C;
    }
L_0891565C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[4] = (16056u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20971u);
    ctx.fpr[13] = ctx.fpr[20] / ctx.fpr[13];
    ctx.gpr[31] = (0x089156A8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x089156A8u) goto L_089156A8;
    return;
L_089156A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089156F8;
      }
      goto L_089156B0;
    }
L_089156B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[4] = (16102u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = ctx.fpr[20] / ctx.fpr[13];
    ctx.gpr[31] = (0x089156F8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x089156F8u) goto L_089156F8;
    return;
L_089156F8:
    ctx.gpr[4] = (17392u << 16u);
    ctx.gpr[31] = (0x08915704u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08915704u) goto L_08915704;
    return;
L_08915704:
    ctx.gpr[31] = (0x0891570Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A55028u>(ctx, &aot_mem) && ctx.pc == 0x0891570Cu) goto L_0891570C;
    return;
L_0891570C:
    ctx.gpr[31] = (0x08915714u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A5505Cu>(ctx, &aot_mem) && ctx.pc == 0x08915714u) goto L_08915714;
    return;
L_08915714:
    ctx.gpr[31] = (0x0891571Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55150u>(ctx, &aot_mem) && ctx.pc == 0x0891571Cu) goto L_0891571C;
    return;
L_0891571C:
    ctx.gpr[31] = (0x08915724u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08915724u) goto L_08915724;
    return;
L_08915724:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08915740u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08915740u) goto L_08915740;
    return;
L_08915740:
    ctx.gpr[31] = (0x08915748u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x08915748u) goto L_08915748;
    return;
L_08915748:
    ctx.gpr[31] = (0x08915750u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08915750u) goto L_08915750;
    return;
L_08915750:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08915768u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08915768u) goto L_08915768;
    return;
L_08915768:
    ctx.gpr[31] = (0x08915770u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08915770u) goto L_08915770;
    return;
L_08915770:
    ctx.gpr[5] = (17387u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (17286u << 16u);
    ctx.gpr[31] = (0x08915788u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 79u, 0x08A546D4u>(ctx, &aot_mem) && ctx.pc == 0x08915788u) goto L_08915788;
    return;
L_08915788:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089157A8;
      }
      goto L_089157A4;
    }
L_089157A4:
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[24];
    goto L_089157A8;
L_089157A8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[6] << 16u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089157D8;
      }
      goto L_089157CC;
    }
L_089157CC:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_089157E4;
      }
      goto L_089157D8;
    }
L_089157D8:
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[20] + ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    goto L_089157E4;
L_089157E4:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915804;
      }
      goto L_089157F4;
    }
L_089157F4:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_08915854;
      }
      goto L_08915804;
    }
L_08915804:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[6] << 16u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08915840;
      }
      goto L_08915834;
    }
L_08915834:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_0891584C;
      }
      goto L_08915840;
    }
L_08915840:
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[20] + ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    goto L_0891584C;
L_0891584C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089157E4;
      }
      goto L_08915854;
    }
L_08915854:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915878;
      }
      goto L_08915874;
    }
L_08915874:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    goto L_08915878;
L_08915878:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = ctx.fpr[28] - ctx.fpr[13];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.fpr[15] = ctx.fpr[22] + ctx.fpr[19];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[18];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[17];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = ctx.fpr[22] - ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = ctx.fpr[12] - ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(858))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (15496u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 34953u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(858))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(860), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(858))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915AC8;
      }
      goto L_08915AA4;
    }
L_08915AA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 96u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(865), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(864), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08915AE4;
      }
      goto L_08915AC8;
    }
L_08915AC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 112u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(865), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08915AE4;
L_08915AE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[5] = (18292u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 9216u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915B28;
      }
      goto L_08915B20;
    }
L_08915B20:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(854), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08915B30;
      }
      goto L_08915B28;
    }
L_08915B28:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(854), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08915B30;
L_08915B30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (14545u << 16u);
      if (branch_taken) {
          goto L_08915BAC;
      }
      goto L_08915B44;
    }
L_08915B44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    ctx.gpr[5] = (ctx.gpr[5] | 46871u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08915BAC;
      }
      goto L_08915B60;
    }
L_08915B60:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
        goto L_08915B84;
    }
    goto L_08915B84;
L_08915B84:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915BAC;
      }
      goto L_08915B94;
    }
L_08915B94:
    ctx.gpr[31] = (0x08915B9Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08915B9Cu) goto L_08915B9C;
    return;
L_08915B9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08915BACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 658u, 0x08A96D08u>(ctx, &aot_mem) && ctx.pc == 0x08915BACu) goto L_08915BAC;
    return;
L_08915BAC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
      if (branch_taken) {
          goto L_08915D40;
      }
      goto L_08915BBC;
    }
L_08915BBC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(876))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08915BE4;
      }
      goto L_08915BCC;
    }
L_08915BCC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08915D40;
      }
      goto L_08915BD4;
    }
L_08915BD4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08915BFC;
      }
      goto L_08915BDC;
    }
L_08915BDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915C38;
      }
      goto L_08915BE4;
    }
L_08915BE4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08915CA4;
      }
      goto L_08915BEC;
    }
L_08915BEC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08915CE0;
      }
      goto L_08915BF4;
    }
L_08915BF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915D40;
      }
      goto L_08915BFC;
    }
L_08915BFC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(865)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915C30;
      }
      goto L_08915C08;
    }
L_08915C08:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(876), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 26u);
    ctx.gpr[31] = (0x08915C30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x08915C30u) goto L_08915C30;
    return;
L_08915C30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915D40;
      }
      goto L_08915C38;
    }
L_08915C38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915C88;
      }
      goto L_08915C48;
    }
L_08915C48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08915C68;
      }
      goto L_08915C5C;
    }
L_08915C5C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08915C68;
L_08915C68:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08915C80u);
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[12];
    goto L_08914818;
L_08915C80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915C9C;
      }
      goto L_08915C88;
    }
L_08915C88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08915C94u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_08914818;
L_08915C94:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(876), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08915C9C;
L_08915C9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915D40;
      }
      goto L_08915CA4;
    }
L_08915CA4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(865)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08915CD8;
      }
      goto L_08915CB0;
    }
L_08915CB0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(876), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 27u);
    ctx.gpr[31] = (0x08915CD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x08915CD8u) goto L_08915CD8;
    return;
L_08915CD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915D40;
      }
      goto L_08915CE0;
    }
L_08915CE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915D2C;
      }
      goto L_08915CF0;
    }
L_08915CF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08915D10;
      }
      goto L_08915D04;
    }
L_08915D04:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08915D10;
L_08915D10:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x08915D24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08914818;
L_08915D24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915D40;
      }
      goto L_08915D2C;
    }
L_08915D2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08915D38u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08914818;
L_08915D38:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(876), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(864), static_cast<std::uint8_t>(0u));
    goto L_08915D40;
L_08915D40:
    ctx.gpr[31] = (0x08915D48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08915D48u) goto L_08915D48;
    return;
L_08915D48:
    ctx.gpr[31] = (0x08915D50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x08915D50u) goto L_08915D50;
    return;
L_08915D50:
    ctx.gpr[31] = (0x08915D58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 36u, 0x08A10220u>(ctx, &aot_mem) && ctx.pc == 0x08915D58u) goto L_08915D58;
    return;
L_08915D58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (65535u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.gpr[5] = (65534u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(854))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08915E28;
      }
      goto L_08915D98;
    }
L_08915D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3952)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915DEC;
      }
      goto L_08915DB4;
    }
L_08915DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08915E4C;
      }
      goto L_08915DC0;
    }
L_08915DC0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08915DE4u);
    ctx.gpr[5] = (0u | 197u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08915DE4u) goto L_08915DE4;
    return;
L_08915DE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915E4C;
      }
      goto L_08915DEC;
    }
L_08915DEC:
    ctx.gpr[31] = (0x08915DF4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08915DF4u) goto L_08915DF4;
    return;
L_08915DF4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915E20;
      }
      goto L_08915E14;
    }
L_08915E14:
    ctx.gpr[4] = (0u | 197u);
    ctx.gpr[31] = (0x08915E20u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08915E20u) goto L_08915E20;
    return;
L_08915E20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915E4C;
      }
      goto L_08915E28;
    }
L_08915E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915E4C;
      }
      goto L_08915E34;
    }
L_08915E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08915E4Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08915E4Cu) goto L_08915E4C;
    return;
L_08915E4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(866)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891608C;
      }
      goto L_08915E58;
    }
L_08915E58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891608C;
      }
      goto L_08915E6C;
    }
L_08915E6C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (16928u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16968u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (2227u << 16u);
      if (branch_taken) {
          goto L_08915EAC;
      }
      goto L_08915E98;
    }
L_08915E98:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08915EAC;
L_08915EAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08915F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08915F10u) goto L_08915F10;
    return;
L_08915F10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[14];
    ctx.fpr[14] = ctx.fpr[16] + ctx.fpr[14];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[20];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_08915F54;
    }
    goto L_08915F54;
L_08915F54:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[20];
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_08915F78;
    }
    goto L_08915F78;
L_08915F78:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[19] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_08915F98;
    }
    goto L_08915F98;
L_08915F98:
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[20];
    ctx.gpr[20] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
        goto L_08915FB8;
    }
    goto L_08915FB8;
L_08915FB8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(20720)));
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915FDC;
      }
      goto L_08915FCC;
    }
L_08915FCC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(20720)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(20720), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08915FEC;
      }
      goto L_08915FDC;
    }
L_08915FDC:
    ctx.gpr[31] = (0x08915FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 166u, 0x088C4CA0u>(ctx, &aot_mem) && ctx.pc == 0x08915FE4u) goto L_08915FE4;
    return;
L_08915FE4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(20720), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08915FEC;
L_08915FEC:
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[18] << 5u);
      if (branch_taken) {
          goto L_0891608C;
      }
      goto L_08915FFC;
    }
L_08915FFC:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[22]);
    ctx.gpr[18] = (2227u << 16u);
    goto L_0891600C;
L_0891600C:
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_0891607C;
      }
      goto L_0891601C;
    }
L_0891601C:
    ctx.gpr[30] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[30] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[30] = (ctx.gpr[4] - ctx.gpr[30]);
    goto L_0891602C;
L_0891602C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[22]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[22] = (ctx.gpr[5] + ctx.gpr[30]);
    ctx.gpr[31] = (0x08916044u);
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(20));
    goto L_08914A04;
L_08916044:
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08916050u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08914A04;
L_08916050:
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x0891605Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08914A04;
L_0891605C:
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08916068u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08914A04;
L_08916068:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
      if (branch_taken) {
          goto L_0891602C;
      }
      goto L_0891607C;
    }
L_0891607C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_0891600C;
      }
      goto L_0891608C;
    }
L_0891608C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089160D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[31]);
    ctx.gpr[31] = (0x08916118u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8D0u>(ctx, &aot_mem) && ctx.pc == 0x08916118u) goto L_08916118;
    return;
L_08916118:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(866)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916424;
      }
      goto L_08916124;
    }
L_08916124:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[30]) || std::isnan(ctx.fpr[22])) && ctx.fpr[30] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089161A0;
      }
      goto L_08916180;
    }
L_08916180:
    ctx.fpr[12] = ctx.fpr[28] / ctx.fpr[30];
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089161B8;
      }
      goto L_089161A0;
    }
L_089161A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    goto L_089161B8;
L_089161B8:
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08916424;
      }
      goto L_089161E0;
    }
L_089161E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (17056u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16320u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(10));
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(11));
      if (branch_taken) {
          goto L_08916230;
      }
      goto L_0891621C;
    }
L_0891621C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08916230;
L_08916230:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08916258u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0891450C;
L_08916258:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08916298u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x08916298u) goto L_08916298;
    return;
L_08916298:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[28];
    ctx.gpr[4] = (48998u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
      if (branch_taken) {
          goto L_0891639C;
      }
      goto L_089162F4;
    }
L_089162F4:
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891639C;
      }
      goto L_0891630C;
    }
L_0891630C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 2u);
    ctx.gpr[31] = (0x08916350u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x08916350u) goto L_08916350;
    return;
L_08916350:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 2u);
    ctx.gpr[31] = (0x08916394u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x08916394u) goto L_08916394;
    return;
L_08916394:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916424;
      }
      goto L_0891639C;
    }
L_0891639C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089163E0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x089163E0u) goto L_089163E0;
    return;
L_089163E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08916424u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x08916424u) goto L_08916424;
    return;
L_08916424:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(867)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891656C;
      }
      goto L_08916430;
    }
L_08916430:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0891645C;
      }
      goto L_08916448;
    }
L_08916448:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0891645C;
L_0891645C:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891647Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0891450C;
L_0891647C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089164C4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x089164C4u) goto L_089164C4;
    return;
L_089164C4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17056u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08916528u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x08916528u) goto L_08916528;
    return;
L_08916528:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(13));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x0891656Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x0891656Cu) goto L_0891656C;
    return;
L_0891656C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089165AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[31]);
    ctx.gpr[31] = (0x089165ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17588));
    goto L_089144E0;
L_089165EC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08916640;
      }
      goto L_089165FC;
    }
L_089165FC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24508));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24520));
    ctx.gpr[4] = (16800u << 16u);
    ctx.gpr[30] = (0u | 1u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-497));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08916650;
      }
      goto L_08916638;
    }
L_08916638:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_0891665C;
      }
      goto L_08916640;
    }
L_08916640:
    ctx.gpr[31] = (0x08916648u);
    // nop
    goto L_08914CD0;
L_08916648:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916A04;
      }
      goto L_08916650;
    }
L_08916650:
    ctx.gpr[31] = (0x08916658u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0891480C;
L_08916658:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0891665C;
L_0891665C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[30]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[31] = (0x089166A0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x089166A0u) goto L_089166A0;
    return;
L_089166A0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089166B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17456));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 90u, 0x08A28CB4u>(ctx, &aot_mem) && ctx.pc == 0x089166B0u) goto L_089166B0;
    return;
L_089166B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089166C4;
      }
      goto L_089166B8;
    }
L_089166B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089166C4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089166C4u) goto L_089166C4;
    return;
L_089166C4:
    ctx.gpr[31] = (0x089166CCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x089166CCu) goto L_089166CC;
    return;
L_089166CC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] | 0u);
    goto L_089166D8;
L_089166D8:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x089166E4u);
    ctx.gpr[4] = (0u | 944u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x089166E4u) goto L_089166E4;
    return;
L_089166E4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08916700;
      }
      goto L_089166F0;
    }
L_089166F0:
    ctx.gpr[5] = (0u | 197u);
    ctx.gpr[31] = (0x089166FCu);
    ctx.gpr[6] = (0u | 4u);
    goto L_089145B8;
L_089166FC:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    goto L_08916700;
L_08916700:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08916714u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x08916714u) goto L_08916714;
    return;
L_08916714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(866), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(852), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(867), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(36))))));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(856), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(858), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08916764u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08916764u) goto L_08916764;
    return;
L_08916764:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089166D8;
      }
      goto L_08916778;
    }
L_08916778:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[30]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint16_t>(ctx.gpr[30]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(94), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(98), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(101), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(102), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(103), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(110), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(115), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] | 0u);
    goto L_0891680C;
L_0891680C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08916818u);
    ctx.gpr[4] = (0u | 944u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x08916818u) goto L_08916818;
    return;
L_08916818:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08916834;
      }
      goto L_08916824;
    }
L_08916824:
    ctx.gpr[5] = (0u | 197u);
    ctx.gpr[31] = (0x08916830u);
    ctx.gpr[6] = (0u | 4u);
    goto L_089145B8;
L_08916830:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    goto L_08916834;
L_08916834:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08916848u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x08916848u) goto L_08916848;
    return;
L_08916848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(866), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(852), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(867), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(84))))));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(856), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(858), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(868), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[31] = (0x0891689Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x0891689Cu) goto L_0891689C;
    return;
L_0891689C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0891680C;
      }
      goto L_089168B0;
    }
L_089168B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (0u | 0u);
    goto L_089168C0;
L_089168C0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08916910;
      }
      goto L_089168E4;
    }
L_089168E4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24536)));
    goto L_089168E8;
L_089168E8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24536)));
        goto L_089168E8;
    }
    goto L_08916910;
L_08916910:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(112)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089168C0;
      }
      goto L_08916958;
    }
L_08916958:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (0u | 0u);
    goto L_08916968;
L_08916968:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_089169B8;
      }
      goto L_0891698C;
    }
L_0891698C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24536)));
    goto L_08916990;
L_08916990:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24536)));
        goto L_08916990;
    }
    goto L_089169B8;
L_089169B8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(116)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08916968;
      }
      goto L_08916A04;
    }
L_08916A04:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08916A3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (17224u << 16u);
      if (branch_taken) {
          goto L_08916AB8;
      }
      goto L_08916A6C;
    }
L_08916A6C:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (20352u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_08916AC0;
      }
      goto L_08916AB0;
    }
L_08916AB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916CD0;
      }
      goto L_08916AB8;
    }
L_08916AB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916E90;
      }
      goto L_08916AC0;
    }
L_08916AC0:
    ctx.gpr[5] = (17608u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08916CD0;
      }
      goto L_08916AD8;
    }
L_08916AD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17402u << 16u);
      if (branch_taken) {
          goto L_08916CD0;
      }
      goto L_08916AF4;
    }
L_08916AF4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08916CD0;
      }
      goto L_08916B08;
    }
L_08916B08:
    ctx.gpr[4] = (14080u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24536)));
    goto L_08916B20;
L_08916B20:
    ctx.gpr[5] = (ctx.gpr[10] << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    if (static_cast<std::int32_t>(ctx.gpr[7]) < 0) {
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
        goto L_08916B54;
    }
    goto L_08916B54;
L_08916B54:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08916BA4;
      }
      goto L_08916B74;
    }
L_08916B74:
    ctx.gpr[6] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08916B78;
L_08916B78:
    ctx.gpr[8] = (ctx.gpr[6] << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[7] = (ctx.gpr[8] << 4u);
    ctx.gpr[6] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[6] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_08916B78;
    }
    goto L_08916BA4;
L_08916BA4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08916BD8;
      }
      goto L_08916BB0;
    }
L_08916BB0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08916CB0;
      }
      goto L_08916BB8;
    }
L_08916BB8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[10] << 2u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08916CB0;
      }
      goto L_08916BD8;
    }
L_08916BD8:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08916BF0;
      }
      goto L_08916BE0;
    }
L_08916BE0:
    if (ctx.gpr[5] != 0u) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
        goto L_08916C44;
    }
    goto L_08916BE8;
L_08916BE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916CB0;
      }
      goto L_08916BF0;
    }
L_08916BF0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[10] << 2u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[5]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08916CB0;
      }
      goto L_08916C44;
    }
L_08916C44:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[10] << 2u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[17] + ctx.fpr[15];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(112)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[13];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08916CB0;
L_08916CB0:
    ctx.gpr[5] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[5] << 16u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[10]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24536)));
        goto L_08916B20;
    }
    goto L_08916CC8;
L_08916CC8:
    ctx.gpr[31] = (0x08916CD0u);
    // nop
    goto L_08914534;
L_08916CD0:
    ctx.gpr[5] = (13952u << 16u);
    ctx.gpr[8] = (4u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24536)));
    goto L_08916CE8;
L_08916CE8:
    ctx.gpr[6] = (ctx.gpr[4] << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[8]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
        goto L_08916D1C;
    }
    goto L_08916D1C;
L_08916D1C:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08916D6C;
      }
      goto L_08916D3C;
    }
L_08916D3C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08916D40;
L_08916D40:
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[10] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08916D40;
      }
      goto L_08916D6C;
    }
L_08916D6C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08916DA0;
      }
      goto L_08916D78;
    }
L_08916D78:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08916E78;
      }
      goto L_08916D80;
    }
L_08916D80:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08916E78;
      }
      goto L_08916DA0;
    }
L_08916DA0:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08916DB8;
      }
      goto L_08916DA8;
    }
L_08916DA8:
    if (ctx.gpr[6] != 0u) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
        goto L_08916E0C;
    }
    goto L_08916DB0;
L_08916DB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916E78;
      }
      goto L_08916DB8;
    }
L_08916DB8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08916E78;
      }
      goto L_08916E0C;
    }
L_08916E0C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[17] + ctx.fpr[15];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24536)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[7]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[13];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08916E78;
L_08916E78:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24536)));
        goto L_08916CE8;
    }
    goto L_08916E90;
L_08916E90:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08916EB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24452)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24448)));
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24456), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24476)));
    ctx.gpr[3] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24488)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24484)));
    ctx.gpr[24] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(24492), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24500), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2227u << 16u);
    ctx.gpr[12] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(24464), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(24460), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[11] = (15744u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[11]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[14] = (2227u << 16u);
    ctx.gpr[8] = (16281u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(24468), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[15] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(24480), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[25] = (2227u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(24496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24504), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08916FA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08916FC8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08916FC8u) goto L_08916FC8;
    return;
L_08916FC8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08916FD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08916FF4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08916FF4u) goto L_08916FF4;
    return;
L_08916FF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08917028;
      }
      goto L_08917010;
    }
L_08917010:
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    goto L_08917014;
L_08917014:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08917014;
      }
      goto L_08917028;
    }
L_08917028:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08917098;
      }
      goto L_0891703C;
    }
L_0891703C:
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (0u | 0u);
    goto L_08917044;
L_08917044:
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[3]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917088;
      }
      goto L_08917054;
    }
L_08917054:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    goto L_08917058;
L_08917058:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] & ctx.gpr[9]);
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    ctx.gpr[11] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
        goto L_08917058;
    }
    goto L_08917080;
L_08917080:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08917088;
L_08917088:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08917044;
      }
      goto L_08917098;
    }
L_08917098:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] << 2u);
    ctx.gpr[5] = (ctx.gpr[11] | 0u);
    ctx.gpr[31] = (0x089170B8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089170B8u) goto L_089170B8;
    return;
L_089170B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089170D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(17));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08917114u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08917114u) goto L_08917114;
    return;
L_08917114:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08917144u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08917144u) goto L_08917144;
    return;
L_08917144:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (16384u << 16u);
      if (branch_taken) {
          goto L_089171B4;
      }
      goto L_0891719C;
    }
L_0891719C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089171B4;
      }
      goto L_089171AC;
    }
L_089171AC:
    ctx.gpr[31] = (0x089171B4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    goto L_08916FD4;
L_089171B4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_089171D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[19] >> 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08917254;
      }
      goto L_08917220;
    }
L_08917220:
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[7]);
    goto L_08917228;
L_08917228:
    ctx.gpr[8] = (ctx.gpr[19] << 5u);
    ctx.gpr[9] = (ctx.gpr[19] >> 2u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[10] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[19] = (ctx.gpr[19] ^ ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_08917228;
      }
      goto L_08917254;
    }
L_08917254:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089172A8;
      }
      goto L_08917270;
    }
L_08917270:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891729C;
      }
      goto L_08917280;
    }
L_08917280:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891728Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 385u, 0x08AED584u>(ctx, &aot_mem) && ctx.pc == 0x0891728Cu) goto L_0891728C;
    return;
L_0891728C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891729C;
      }
      goto L_08917294;
    }
L_08917294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089172BC;
      }
      goto L_0891729C;
    }
L_0891729C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08917270;
      }
      goto L_089172A8;
    }
L_089172A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089172BCu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_089170D8;
L_089172BC:
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
L_089172DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08917304u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08917304u) goto L_08917304;
    return;
L_08917304:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891734C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08917360u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 613u, 0x08873630u>(ctx, &aot_mem) && ctx.pc == 0x08917360u) goto L_08917360;
    return;
L_08917360:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891736C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891737Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 609u, 0x088735F0u>(ctx, &aot_mem) && ctx.pc == 0x0891737Cu) goto L_0891737C;
    return;
L_0891737C:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891738C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089173A0u);
    ctx.gpr[4] = (0u | 2u);
    goto L_089173EC;
L_089173A0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089173B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089173C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17648));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 418u, 0x08AED750u>(ctx, &aot_mem) && ctx.pc == 0x089173C4u) goto L_089173C4;
    return;
L_089173C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089173DC;
      }
      goto L_089173CC;
    }
L_089173CC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24544), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089173E0;
      }
      goto L_089173DC;
    }
L_089173DC:
    ctx.gpr[2] = (0u | 0u);
    goto L_089173E0;
L_089173E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089173EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08917408u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 769u, 0x089C3098u>(ctx, &aot_mem) && ctx.pc == 0x08917408u) goto L_08917408;
    return;
L_08917408:
    ctx.gpr[5] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08917424;
      }
      goto L_08917414;
    }
L_08917414:
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2152));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_08917424;
L_08917424:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089174F4;
      }
      goto L_08917430;
    }
L_08917430:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(33) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089174EC;
      }
      goto L_08917440;
    }
L_08917440:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(17664)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08917458:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089174F8;
      }
      goto L_08917460;
    }
L_08917460:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891746Cu);
    ctx.gpr[16] = (0u | 0u);
    goto L_0891738C;
L_0891746C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08917474;
    }
    goto L_08917474;
L_08917474:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089174F8;
      }
      goto L_0891747C;
    }
L_0891747C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08917488u);
    ctx.gpr[16] = (0u | 0u);
    goto L_089173B0;
L_08917488:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08917490;
    }
    goto L_08917490;
L_08917490:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089174F8;
      }
      goto L_08917498;
    }
L_08917498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089174F8;
      }
      goto L_089174A0;
    }
L_089174A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089174F8;
      }
      goto L_089174A8;
    }
L_089174A8:
    ctx.gpr[31] = (0x089174B0u);
    // nop
    goto L_0891750C;
L_089174B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089174F8;
      }
      goto L_089174B8;
    }
L_089174B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089174C4u);
    ctx.gpr[16] = (0u | 0u);
    goto L_08917538;
L_089174C4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_089174CC;
    }
    goto L_089174CC;
L_089174CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089174F8;
      }
      goto L_089174D4;
    }
L_089174D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089174F8;
      }
      goto L_089174DC;
    }
L_089174DC:
    ctx.gpr[31] = (0x089174E4u);
    // nop
    goto L_08917648;
L_089174E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_089174F8;
      }
      goto L_089174EC;
    }
L_089174EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089174F8;
      }
      goto L_089174F4;
    }
L_089174F4:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    goto L_089174F8;
L_089174F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891750C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891751Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 618u, 0x088B7CD8u>(ctx, &aot_mem) && ctx.pc == 0x0891751Cu) goto L_0891751C;
    return;
L_0891751C:
    ctx.gpr[31] = (0x08917524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 619u, 0x088B7CE0u>(ctx, &aot_mem) && ctx.pc == 0x08917524u) goto L_08917524;
    return;
L_08917524:
    ctx.gpr[31] = (0x0891752Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 620u, 0x088B7CE8u>(ctx, &aot_mem) && ctx.pc == 0x0891752Cu) goto L_0891752C;
    return;
L_0891752C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08917538:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08917558u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21672));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 535u, 0x088B7014u>(ctx, &aot_mem) && ctx.pc == 0x08917558u) goto L_08917558;
    return;
L_08917558:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917620;
      }
      goto L_08917560;
    }
L_08917560:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x0891756Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_089173EC;
L_0891756C:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08917578u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089173EC;
L_08917578:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917618;
      }
      goto L_08917580;
    }
L_08917580:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x0891758Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_089173EC;
L_0891758C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917610;
      }
      goto L_08917594;
    }
L_08917594:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089175A4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 539u, 0x088B7078u>(ctx, &aot_mem) && ctx.pc == 0x089175A4u) goto L_089175A4;
    return;
L_089175A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917600;
      }
      goto L_089175AC;
    }
L_089175AC:
    ctx.gpr[4] = (0u | 19u);
    ctx.gpr[31] = (0x089175B8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089173EC;
L_089175B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089175E8;
      }
      goto L_089175C0;
    }
L_089175C0:
    ctx.gpr[31] = (0x089175C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 568u, 0x088B7930u>(ctx, &aot_mem) && ctx.pc == 0x089175C8u) goto L_089175C8;
    return;
L_089175C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08917628;
      }
      goto L_089175D0;
    }
L_089175D0:
    ctx.gpr[31] = (0x089175D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 619u, 0x088B7CE0u>(ctx, &aot_mem) && ctx.pc == 0x089175D8u) goto L_089175D8;
    return;
L_089175D8:
    ctx.gpr[31] = (0x089175E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 620u, 0x088B7CE8u>(ctx, &aot_mem) && ctx.pc == 0x089175E0u) goto L_089175E0;
    return;
L_089175E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08917638;
      }
      goto L_089175E8;
    }
L_089175E8:
    ctx.gpr[31] = (0x089175F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 619u, 0x088B7CE0u>(ctx, &aot_mem) && ctx.pc == 0x089175F0u) goto L_089175F0;
    return;
L_089175F0:
    ctx.gpr[31] = (0x089175F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 620u, 0x088B7CE8u>(ctx, &aot_mem) && ctx.pc == 0x089175F8u) goto L_089175F8;
    return;
L_089175F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08917638;
      }
      goto L_08917600;
    }
L_08917600:
    ctx.gpr[31] = (0x08917608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 620u, 0x088B7CE8u>(ctx, &aot_mem) && ctx.pc == 0x08917608u) goto L_08917608;
    return;
L_08917608:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08917638;
      }
      goto L_08917610;
    }
L_08917610:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08917638;
      }
      goto L_08917618;
    }
L_08917618:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08917638;
      }
      goto L_08917620;
    }
L_08917620:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08917638;
      }
      goto L_08917628;
    }
L_08917628:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08917634u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089173EC;
L_08917634:
    ctx.gpr[2] = (0u | 1u);
    goto L_08917638;
L_08917638:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08917648:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17656));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2152), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 480u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2152));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 272u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089176A0:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-7076), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089176AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-7076)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089176FC;
      }
      goto L_089176E4;
    }
L_089176E4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089178DC;
      }
      goto L_089176EC;
    }
L_089176EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08917714;
      }
      goto L_089176F4;
    }
L_089176F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089178DC;
      }
      goto L_089176FC;
    }
L_089176FC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089178D4;
      }
      goto L_08917704;
    }
L_08917704:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089178DC;
      }
      goto L_0891770C;
    }
L_0891770C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089178DC;
      }
      goto L_08917714;
    }
L_08917714:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7036)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7044)));
    ctx.gpr[19] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    ctx.gpr[20] = (2229u << 16u);
      if (branch_taken) {
          goto L_089177B0;
      }
      goto L_0891773C;
    }
L_0891773C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089177B0;
      }
      goto L_08917744;
    }
L_08917744:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917760;
      }
      goto L_08917750;
    }
L_08917750:
    ctx.gpr[31] = (0x08917758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08917758u) goto L_08917758;
    return;
L_08917758:
    ctx.gpr[31] = (0x08917760u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 361u, 0x0894583Cu>(ctx, &aot_mem) && ctx.pc == 0x08917760u) goto L_08917760;
    return;
L_08917760:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(-7076), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(25812), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-7036), ctx.gpr[6]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7016)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089177A0;
      }
      goto L_0891778C;
    }
L_0891778C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 97u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089177A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x089177A0u) goto L_089177A0;
    return;
L_089177A0:
    ctx.gpr[31] = (0x089177A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 100u, 0x089186ACu>(ctx, &aot_mem) && ctx.pc == 0x089177A8u) goto L_089177A8;
    return;
L_089177A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917840;
      }
      goto L_089177B0;
    }
L_089177B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[21] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-8107));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_089177E4;
      }
      goto L_089177D8;
    }
L_089177D8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089177F8;
      }
      goto L_089177E4;
    }
L_089177E4:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089177F8;
L_089177F8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08917808u);
    ctx.gpr[5] = (0u | 95u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08917808u) goto L_08917808;
    return;
L_08917808:
    ctx.gpr[4] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[19]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7040)));
    ctx.gpr[19] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08917840;
      }
      goto L_08917820;
    }
L_08917820:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891783C;
      }
      goto L_0891782C;
    }
L_0891782C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 167u);
    ctx.gpr[31] = (0x0891783Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x0891783Cu) goto L_0891783C;
    return;
L_0891783C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-7040), ctx.gpr[19]);
    goto L_08917840;
L_08917840:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089178CC;
      }
      goto L_0891784C;
    }
L_0891784C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7052)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_089178CC;
      }
      goto L_0891785C;
    }
L_0891785C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(-7076), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(25812), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7014)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917888;
      }
      goto L_08917880;
    }
L_08917880:
    ctx.gpr[31] = (0x08917888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 182u, 0x08844F3Cu>(ctx, &aot_mem) && ctx.pc == 0x08917888u) goto L_08917888;
    return;
L_08917888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[31] = (0x08917894u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-7036), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08917894u) goto L_08917894;
    return;
L_08917894:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089178A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 213u, 0x08944E84u>(ctx, &aot_mem) && ctx.pc == 0x089178A0u) goto L_089178A0;
    return;
L_089178A0:
    ctx.gpr[31] = (0x089178A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 100u, 0x089186ACu>(ctx, &aot_mem) && ctx.pc == 0x089178A8u) goto L_089178A8;
    return;
L_089178A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7016)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089178CC;
      }
      goto L_089178B8;
    }
L_089178B8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089178CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x089178CCu) goto L_089178CC;
    return;
L_089178CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089178DC;
      }
      goto L_089178D4;
    }
L_089178D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089178DC;
      }
      goto L_089178DC;
    }
L_089178DC:
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
L_08917904:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (0u | 60000u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[7] = (0u | 1000u);
    ctx.gpr[8] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(9176));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17808));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[8]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[31] = (0x08917980u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08917980u) goto L_08917980;
    return;
L_08917980:
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-5392));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08917994u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A542E8u>(ctx, &aot_mem) && ctx.pc == 0x08917994u) goto L_08917994;
    return;
L_08917994:
    ctx.gpr[31] = (0x0891799Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 512u, 0x089870E8u>(ctx, &aot_mem) && ctx.pc == 0x0891799Cu) goto L_0891799C;
    return;
L_0891799C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089179ACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x089179ACu) goto L_089179AC;
    return;
L_089179AC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917A28;
      }
      goto L_089179BC;
    }
L_089179BC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089179D4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089179D4u) goto L_089179D4;
    return;
L_089179D4:
    ctx.gpr[31] = (0x089179DCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x089179DCu) goto L_089179DC;
    return;
L_089179DC:
    ctx.gpr[9] = (17365u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (0u | 45u);
    ctx.gpr[9] = (17042u << 16u);
    ctx.gpr[5] = (0u | 255u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08917A04u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 95u, 0x08968850u>(ctx, &aot_mem) && ctx.pc == 0x08917A04u) goto L_08917A04;
    return;
L_08917A04:
    ctx.gpr[6] = (17387u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (17026u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08917A20u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08917A20u) goto L_08917A20;
    return;
L_08917A20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917AE4;
      }
      goto L_08917A28;
    }
L_08917A28:
    ctx.gpr[31] = (0x08917A30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 226u, 0x08A55174u>(ctx, &aot_mem) && ctx.pc == 0x08917A30u) goto L_08917A30;
    return;
L_08917A30:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08917A3Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08917A3Cu) goto L_08917A3C;
    return;
L_08917A3C:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08917A4Cu);
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x08917A4Cu) goto L_08917A4C;
    return;
L_08917A4C:
    ctx.gpr[4] = (17386u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = ctx.fpr[22] - ctx.fpr[20];
      if (branch_taken) {
          goto L_08917A8C;
      }
      goto L_08917A64;
    }
L_08917A64:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08917A70u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08917A70u) goto L_08917A70;
    return;
L_08917A70:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917A88;
      }
      goto L_08917A7C;
    }
L_08917A7C:
    ctx.gpr[31] = (0x08917A84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08917A84u) goto L_08917A84;
    return;
L_08917A84:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08917A88;
L_08917A88:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    goto L_08917A8C;
L_08917A8C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08917A9Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17816));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08917A9Cu) goto L_08917A9C;
    return;
L_08917A9C:
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08917AB4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08917AB4u) goto L_08917AB4;
    return;
L_08917AB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x08917AC4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08917AC4u) goto L_08917AC4;
    return;
L_08917AC4:
    ctx.gpr[31] = (0x08917ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 226u, 0x08A55174u>(ctx, &aot_mem) && ctx.pc == 0x08917ACCu) goto L_08917ACC;
    return;
L_08917ACC:
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08917AE4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08917AE4u) goto L_08917AE4;
    return;
L_08917AE4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
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
L_08917B08:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-7076)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08917B14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.gpr[22] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[6] & 65535u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    ctx.gpr[6] = (0u | 42u);
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[23] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08917B84;
      }
      goto L_08917B78;
    }
L_08917B78:
    ctx.gpr[21] = (0u | 23u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08917BAC;
      }
      goto L_08917B84;
    }
L_08917B84:
    ctx.gpr[4] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 39u);
      if (branch_taken) {
          goto L_08917B98;
      }
      goto L_08917B90;
    }
L_08917B90:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08917BA4;
      }
      goto L_08917B98;
    }
L_08917B98:
    ctx.gpr[21] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08917BAC;
      }
      goto L_08917BA4;
    }
L_08917BA4:
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[21]) < 37 ? 1u : 0u);
    goto L_08917BAC;
L_08917BAC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-7076), static_cast<std::uint16_t>(ctx.gpr[30]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7072), ctx.gpr[18]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7052), ctx.gpr[19]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7048), ctx.gpr[19]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7068), ctx.gpr[7]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7064), ctx.gpr[9]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7060), ctx.gpr[10]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7056), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-7020), ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08917C24;
      }
      goto L_08917BF8;
    }
L_08917BF8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08917C04u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08917C04u) goto L_08917C04;
    return;
L_08917C04:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917C1C;
      }
      goto L_08917C10;
    }
L_08917C10:
    ctx.gpr[31] = (0x08917C18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08917C18u) goto L_08917C18;
    return;
L_08917C18:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08917C1C;
L_08917C1C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[16] = (2230u << 16u);
    goto L_08917C24;
L_08917C24:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08917C34u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17824));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08917C34u) goto L_08917C34;
    return;
L_08917C34:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08917C48;
      }
      goto L_08917C3C;
    }
L_08917C3C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-7020), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-7014), static_cast<std::uint8_t>(ctx.gpr[30]));
      if (branch_taken) {
          goto L_08917C4C;
      }
      goto L_08917C48;
    }
L_08917C48:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-7014), static_cast<std::uint8_t>(0u));
    goto L_08917C4C;
L_08917C4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-7016), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7015), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7044), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7036), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7040), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08917EC8;
      }
      goto L_08917C98;
    }
L_08917C98:
    ctx.gpr[4] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08917CB8;
      }
      goto L_08917CA4;
    }
L_08917CA4:
    ctx.gpr[31] = (0x08917CACu);
    ctx.gpr[4] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08917CACu) goto L_08917CAC;
    return;
L_08917CAC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08917CF0;
      }
      goto L_08917CB8;
    }
L_08917CB8:
    ctx.gpr[4] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 40u);
      if (branch_taken) {
          goto L_08917CCC;
      }
      goto L_08917CC4;
    }
L_08917CC4:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08917CE0;
      }
      goto L_08917CCC;
    }
L_08917CCC:
    ctx.gpr[31] = (0x08917CD4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08917CD4u) goto L_08917CD4;
    return;
L_08917CD4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08917CF0;
      }
      goto L_08917CE0;
    }
L_08917CE0:
    ctx.gpr[31] = (0x08917CE8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08917CE8u) goto L_08917CE8;
    return;
L_08917CE8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    goto L_08917CF0;
L_08917CF0:
    ctx.gpr[31] = (0x08917CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08917CF8u) goto L_08917CF8;
    return;
L_08917CF8:
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08917D18u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7032), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08917D18u) goto L_08917D18;
    return;
L_08917D18:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x08917D2Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7028), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08917D2Cu) goto L_08917D2C;
    return;
L_08917D2C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7024), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7032)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917D98;
      }
      goto L_08917D5C;
    }
L_08917D5C:
    ctx.gpr[31] = (0x08917D64u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08917D64u) goto L_08917D64;
    return;
L_08917D64:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08917D90;
      }
      goto L_08917D7C;
    }
L_08917D7C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08917D90;
L_08917D90:
    ctx.gpr[31] = (0x08917D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 242u, 0x08A7D590u>(ctx, &aot_mem) && ctx.pc == 0x08917D98u) goto L_08917D98;
    return;
L_08917D98:
    ctx.gpr[31] = (0x08917DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08917DA0u) goto L_08917DA0;
    return;
L_08917DA0:
    ctx.gpr[6] = (50298u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7032)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08917DB4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 460u, 0x088D6300u>(ctx, &aot_mem) && ctx.pc == 0x08917DB4u) goto L_08917DB4;
    return;
L_08917DB4:
    ctx.gpr[31] = (0x08917DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08917DBCu) goto L_08917DBC;
    return;
L_08917DBC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (0u | 30000u);
    ctx.gpr[31] = (0x08917DD0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08917DD0u) goto L_08917DD0;
    return;
L_08917DD0:
    ctx.gpr[31] = (0x08917DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08917DD8u) goto L_08917DD8;
    return;
L_08917DD8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08917DE4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 609u, 0x0899F378u>(ctx, &aot_mem) && ctx.pc == 0x08917DE4u) goto L_08917DE4;
    return;
L_08917DE4:
    ctx.gpr[31] = (0x08917DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08917DECu) goto L_08917DEC;
    return;
L_08917DEC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08917DF8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 19u, 0x08944130u>(ctx, &aot_mem) && ctx.pc == 0x08917DF8u) goto L_08917DF8;
    return;
L_08917DF8:
    ctx.gpr[31] = (0x08917E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08917E00u) goto L_08917E00;
    return;
L_08917E00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917EC8;
      }
      goto L_08917E08;
    }
L_08917E08:
    ctx.gpr[31] = (0x08917E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08917E10u) goto L_08917E10;
    return;
L_08917E10:
    ctx.gpr[31] = (0x08917E18u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08917E18u) goto L_08917E18;
    return;
L_08917E18:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[31] = (0x08917E24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 596u, 0x0899F290u>(ctx, &aot_mem) && ctx.pc == 0x08917E24u) goto L_08917E24;
    return;
L_08917E24:
    ctx.gpr[31] = (0x08917E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08917E2Cu) goto L_08917E2C;
    return;
L_08917E2C:
    ctx.gpr[31] = (0x08917E34u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08917E34u) goto L_08917E34;
    return;
L_08917E34:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08917E54u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08917E54u) goto L_08917E54;
    return;
L_08917E54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08917E74u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08917E74u) goto L_08917E74;
    return;
L_08917E74:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08917E94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08917E94u) goto L_08917E94;
    return;
L_08917E94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08917EA8;
    }
    goto L_08917EA8;
L_08917EA8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08917EB8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 679u, 0x0899F80Cu>(ctx, &aot_mem) && ctx.pc == 0x08917EB8u) goto L_08917EB8;
    return;
L_08917EB8:
    ctx.gpr[31] = (0x08917EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08917EC0u) goto L_08917EC0;
    return;
L_08917EC0:
    ctx.gpr[31] = (0x08917EC8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 207u, 0x08944E30u>(ctx, &aot_mem) && ctx.pc == 0x08917EC8u) goto L_08917EC8;
    return;
L_08917EC8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7016)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917EEC;
      }
      goto L_08917ED8;
    }
L_08917ED8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 94u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08917EECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08917EECu) goto L_08917EEC;
    return;
L_08917EEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08917F1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-7076), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[21] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-7072), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7052), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7068), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7064), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7060), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7056), 0u);
    ctx.gpr[19] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-7020), 0u);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_08917FD0;
      }
      goto L_08917FA8;
    }
L_08917FA8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08917FB4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08917FB4u) goto L_08917FB4;
    return;
L_08917FB4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917FCC;
      }
      goto L_08917FC0;
    }
L_08917FC0:
    ctx.gpr[31] = (0x08917FC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08917FC8u) goto L_08917FC8;
    return;
L_08917FC8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08917FCC;
L_08917FCC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    goto L_08917FD0;
L_08917FD0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08917FE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17824));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08917FE0u) goto L_08917FE0;
    return;
L_08917FE0:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[2];
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7072)));
      if (branch_taken) {
          goto L_08917FF4;
      }
      goto L_08917FE8;
    }
L_08917FE8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-7020), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(-7014), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_08917FF8;
      }
      goto L_08917FF4;
    }
L_08917FF4:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(-7014), static_cast<std::uint8_t>(0u));
    goto L_08917FF8;
L_08917FF8:
    ctx.gpr[4] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[30]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.pc = 0x08918000u; return;
}

void recomp_unit_0068(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0068_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_68(Runtime &runtime) {
    runtime.register_generated_unit(68u, 0x08914000u, 16384u, &recomp_unit_0068, &recomp_unit_0068_entry);
    runtime.register_function(0x08914000u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891402Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914064u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914070u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891407Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914098u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089140B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089140C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089140CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089140D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089140F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089140F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914104u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914110u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914118u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891412Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914134u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914140u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914154u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914160u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914168u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914170u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914178u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914188u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914190u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089141A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089141A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089141B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089141C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089141D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089141D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089141E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089141F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089141F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914224u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914238u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914240u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914254u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914274u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914288u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914290u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089142A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089142C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089142CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089142D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089142E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089142F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914304u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891430Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914320u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891432Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891433Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914344u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914358u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914360u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914370u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914380u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089143A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089143ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089143B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089143C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089143C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089143D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089143E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089143E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914418u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089144E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891450Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914534u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891453Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891454Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914554u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914564u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914578u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914580u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891458Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089145A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089145B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089145B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089145D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089145FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914610u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914624u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914664u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914748u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914764u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891477Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914788u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914790u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891480Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914818u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891484Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914868u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914870u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914878u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914888u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914890u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914894u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089148ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089148B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089148C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089148D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089148D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089148ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914918u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914920u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914924u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914930u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891493Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914944u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891494Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914970u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914984u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891498Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914994u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089149A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089149B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089149B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089149BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089149C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089149D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089149DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A04u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A18u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A24u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A54u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A5Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A64u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A78u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914AACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914AC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914AD4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B5Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B78u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B88u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914BA4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914BB0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C18u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C38u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C54u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C5Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C64u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C84u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C88u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CA8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CB0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CBCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CC4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CD0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CE4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CFCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D04u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D64u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D70u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D78u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D80u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914DD0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914DF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E40u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E68u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E74u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E80u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914EA0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914EA4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914EDCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914EE8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914EF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914EFCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F28u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F94u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F9Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FA8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FDCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FF0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FFCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915010u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915034u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915048u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915058u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915068u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915078u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915080u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915088u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089150B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089150B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089150C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089150E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089150ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915108u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915118u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891511Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915124u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915138u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915144u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915158u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891517Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915190u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915200u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915208u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891522Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915234u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915250u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915260u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915264u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891526Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915274u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915290u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891529Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915300u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891530Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915314u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915318u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915320u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891532Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915338u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891534Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915358u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915364u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915370u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915378u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915380u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915388u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915390u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915398u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915404u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915410u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891541Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915424u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915428u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915430u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891543Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915448u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915450u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891545Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915468u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915474u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891547Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915480u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915488u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915494u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915500u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915508u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915510u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915518u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915520u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915528u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915530u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891553Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915548u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915554u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891555Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915560u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915568u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915574u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915580u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915588u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915594u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915604u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891560Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915610u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915618u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915624u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915630u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915638u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915640u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915648u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891565Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089156A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089156B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089156F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915704u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891570Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915714u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891571Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915724u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915740u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915748u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915750u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915768u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915770u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915788u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089157A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089157A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089157CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089157D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089157E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089157F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915804u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915834u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915840u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891584Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915854u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915874u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915878u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915AA4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915AC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915AE4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B28u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B44u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B60u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B84u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B94u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B9Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915BACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915BBCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915BCCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915BD4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915BDCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915BE4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915BECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915BF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915BFCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C38u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C5Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C68u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C80u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C88u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C94u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C9Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915CA4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915CB0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915CD8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915CE0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915CF0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D04u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D24u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D2Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D38u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D40u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D50u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915DB4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915DC0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915DE4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915DECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915DF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E28u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E34u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E4Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E6Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915EACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F54u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F78u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FCCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FDCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FE4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FFCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891600Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891601Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891602Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916044u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916050u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891605Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916068u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891607Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891608Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089160D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916118u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916124u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916180u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089161A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089161B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089161E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891621Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916230u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916258u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916298u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089162F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891630Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916350u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916394u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891639Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089163E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916424u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916430u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916448u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891645Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891647Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089164C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916528u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891656Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089165ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089165ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089165FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916638u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916640u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916648u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916650u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916658u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891665Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089166A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089166B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089166B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089166C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089166CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089166D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089166E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089166F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089166FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916700u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916714u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916764u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916778u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891680Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916818u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916824u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916830u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916834u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916848u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891689Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089168B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089168C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089168E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089168E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916910u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916958u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916968u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891698Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916990u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089169B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A04u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A6Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916AB0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916AB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916AC0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916AD8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916AF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B54u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B74u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B78u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916BA4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916BB0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916BB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916BD8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916BE0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916BE8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916BF0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916C44u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916CB0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916CC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916CD0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916CE8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D1Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D40u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D6Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D78u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D80u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916DA0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916DA8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916DB0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916DB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E0Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E78u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916EB4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916FA8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916FC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916FD4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916FF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917010u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917014u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917028u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891703Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917044u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917054u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917058u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917080u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917088u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917098u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089170B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089170D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917114u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917144u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891719Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089171ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089171B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089171D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917220u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917228u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917254u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917270u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917280u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891728Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917294u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891729Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089172A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089172BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089172DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917304u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891734Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917360u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891736Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891737Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891738Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917408u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917414u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917424u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917430u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917440u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917458u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917460u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891746Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917474u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891747Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917488u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917490u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917498u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891750Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891751Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917524u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891752Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917538u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917558u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917560u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891756Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917578u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917580u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891758Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917594u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917600u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917608u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917610u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917618u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917620u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917628u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917634u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917638u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917648u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089176A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089176ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089176E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089176ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089176F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089176FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917704u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891770Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917714u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891773Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917744u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917750u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917758u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917760u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891778Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089177A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089177A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089177B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089177D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089177E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089177F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917808u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917820u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891782Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891783Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917840u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891784Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891785Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917880u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917888u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917894u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089178A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089178A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089178B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089178CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089178D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089178DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917904u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917980u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917994u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891799Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089179ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089179BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089179D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089179DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A04u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A28u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A4Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A64u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A70u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A7Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A84u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A88u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A8Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A9Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917AB4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917AC4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917ACCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917AE4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B78u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B84u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917BA4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917BACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917BF8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C04u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C18u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C1Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C24u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C34u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C4Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CA4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CC4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CCCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CD4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CE0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CE8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CF0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CF8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D18u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D2Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D5Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D64u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D7Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917DA0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917DB4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917DBCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917DD0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917DD8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917DE4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917DECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917DF8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E00u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E18u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E24u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E2Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E34u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E54u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E74u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E94u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917EA8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917EB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917EC0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917EC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917ED8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917EECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F1Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FA8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FB4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FC0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FCCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FD0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FE0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FE8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FF8u, &recomp_unit_0068, "recomp_unit_0068");
}
} // namespace psprecomp
