#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0087[4095] = {
    1, 0, 0, 2, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 10, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 17, 0, 18, 0, 0,
    0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 22, 0, 23, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0,
    0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 30, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0,
    38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 42, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0,
    0, 0, 0, 45, 0, 46, 0, 47, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52,
    0, 0, 0, 0, 0, 0, 53, 54, 0, 55, 0, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 62,
    0, 63, 0, 0, 0, 64, 0, 65, 0, 0, 0, 66, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 72,
    0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 77, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 79, 0, 0, 80, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0,
    0, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 97, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 103,
    0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 113, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    0, 119, 120, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0,
    0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129,
    0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135,
    0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 145,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 148, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 155, 156, 0, 157, 0, 0, 158, 0, 159, 160, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 166, 0, 167, 0, 0, 0, 0, 0, 0, 168,
    0, 0, 0, 169, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 175,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 181, 0,
    182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187,
    0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 192, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0,
    0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 200, 0, 201, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0,
    204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 208, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    211, 0, 0, 212, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 215, 0, 216, 0, 217, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0,
    0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 224, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227,
    0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0,
    0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 237,
    0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 241, 0, 242, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0,
    0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 249, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 260,
    0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 264, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0,
    0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 276, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0,
    0, 280, 0, 281, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0,
    0, 0, 287, 288, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 294, 0, 295, 0, 296,
    0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 304, 0,
    0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 312, 0, 0, 0,
    0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 318, 319, 0, 320, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 0, 325, 326, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 330, 331, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 339,
    340, 0, 341, 342, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0,
    352, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 356, 0, 0, 357, 358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0,
    364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0,
    368, 0, 0, 369, 0, 0, 370, 0, 0, 371, 372, 0, 373, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 381, 0, 382,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 385, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387,
    0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0,
    399, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0, 0, 406,
    0, 407, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 412, 0, 0, 413, 0, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0,
    0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0,
    0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 426, 0, 427, 0, 428, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 0, 433, 0, 0, 0,
    0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 437, 0, 438, 439, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0,
    0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 447, 0, 0,
    0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 451, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0,
    0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0,
    0, 0, 0, 469, 0, 470, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 473, 0, 474, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 0, 483, 0,
    0, 484, 0, 0, 485, 0, 486, 0, 0, 487, 0, 488, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 494,
    0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 499, 0, 0, 0,
    0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 503, 504, 0, 505, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 515,
    0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0, 526, 0, 0, 0, 0, 0, 0,
    527, 0, 0, 0, 528, 0, 0, 529, 0, 0, 530, 0, 531, 0, 532, 0, 533, 534, 0, 0, 0, 0, 535, 0, 0, 536, 0, 0, 537, 0, 0, 538,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 540, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 542, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 547, 0, 548, 0, 549, 0, 0, 550, 0, 551, 0,
    0, 0, 0, 0, 0, 552, 0, 0, 553, 0, 0, 554, 0, 0, 555, 0, 0, 0, 556, 0, 0, 557, 0, 558, 0, 0, 559, 0, 560, 0, 561, 0,
    0, 562, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 567, 568, 0, 0, 0, 0, 569, 0, 0, 570, 0, 0, 571, 0, 0,
    572, 0, 0, 0, 0, 0, 0, 0, 573, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0,
    0, 577, 0, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 580, 0, 0, 581, 0, 582, 0, 583, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 0,
    586, 0, 0, 587, 0, 0, 588, 0, 0, 589, 0, 0, 0, 590, 0, 0, 591, 0, 0, 0, 592, 593, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0,
    595, 0, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 598, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0,
    0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 0, 0, 606, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 610, 0, 0, 0, 611,
    0, 0, 0, 0, 0, 612, 0, 0, 613, 0, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0,
    617, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 0, 0, 623, 0,
    0, 624, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 626, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0,
    630, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 635, 0, 636, 0, 0, 0, 0, 0,
    0, 637, 638, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 640, 0, 0, 641, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 643, 0,
    644, 0, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 647, 648, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 650, 0, 651, 0, 652,
    0, 0, 0, 653, 0, 0, 654, 0, 655, 0, 656, 0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 660, 0, 661, 0, 0, 0, 662, 0, 0, 663, 0, 664, 665, 0, 666, 0, 0, 0, 667, 0,
    0, 668, 0, 0, 0, 669, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 672, 0, 0, 673, 0, 0, 674, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 0, 677, 0, 0, 678, 0, 0, 0, 0, 679, 0, 0, 680, 0, 0, 0, 681,
    0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 685, 0, 0, 0, 686, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 689,
    0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 692, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 695, 0, 0, 696, 0, 0, 0, 697, 0, 0,
    0, 698, 0, 0, 699, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0, 0, 702, 0, 0, 703, 0, 0, 0, 704, 0, 0, 0, 705, 0, 0, 0, 706,
    0, 0, 0, 707, 0, 0, 708, 0, 0, 0, 709, 0, 0, 0, 710, 0, 0, 711, 0, 0, 0, 712, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0,
    0, 715, 0, 0, 716, 0, 0, 0, 717, 0, 0, 0, 718, 0, 0, 719, 0, 0, 0, 0, 720, 0, 0, 0, 0, 721, 0, 0, 0, 722, 723, 0,
    0, 0, 0, 0, 0, 724, 0, 0, 0, 725, 726, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 733, 0, 0, 0, 734,
    0, 0, 0, 735, 0, 0, 736, 0, 737, 0, 0, 738, 0, 0, 0, 0, 0, 0, 739, 0, 740, 0, 0, 741, 0, 0, 0, 0, 742, 0, 0, 0,
    0, 743, 0, 0, 0, 0, 744, 0, 0, 745, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0,
    0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 753, 0, 754, 0, 0, 0, 0, 0, 755, 0, 756, 757, 0, 0, 0, 0, 758, 0, 0, 0, 0,
    0, 0, 0, 759, 0, 0, 760, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 763, 0,
    0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 766, 0, 767, 0, 768, 0, 0, 769, 0, 0, 770, 771, 0, 0, 0, 0, 0, 772,
    0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 774, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0,
    0, 0, 777, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 779, 0, 780, 0, 0, 781, 782, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0,
    0, 784, 0, 0, 785, 0, 0, 786, 0, 0, 0, 787, 0, 0, 788, 0, 0, 0, 0, 0, 0, 789, 790, 0, 0, 791, 0, 792, 793, 0, 0, 0,
    0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 796, 0, 0, 797, 0, 0, 0, 798, 0, 0, 799, 0, 0, 0, 800, 801, 0, 0, 802,
    0, 803, 804, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 806, 0, 0, 807, 0, 0, 0, 0, 0, 0, 808, 0, 809, 810, 0, 0, 0, 811,
    0, 0, 0, 0, 0, 0, 0, 812, 0, 0, 813, 0, 0, 814, 0, 0, 0, 815, 0, 0, 816, 0, 0, 817, 0, 0, 0, 818, 0, 0, 819,
};
void recomp_unit_0087_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08960000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0087[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08960000;
    case 2u: goto L_0896000C;
    case 3u: goto L_08960010;
    case 4u: goto L_08960018;
    case 5u: goto L_08960030;
    case 6u: goto L_08960064;
    case 7u: goto L_08960098;
    case 8u: goto L_089600DC;
    case 9u: goto L_089600E4;
    case 10u: goto L_089600EC;
    case 11u: goto L_089600F0;
    case 12u: goto L_08960114;
    case 13u: goto L_0896011C;
    case 14u: goto L_08960138;
    case 15u: goto L_0896014C;
    case 16u: goto L_08960168;
    case 17u: goto L_0896016C;
    case 18u: goto L_08960174;
    case 19u: goto L_0896018C;
    case 20u: goto L_0896019C;
    case 21u: goto L_089601AC;
    case 22u: goto L_089601B8;
    case 23u: goto L_089601C0;
    case 24u: goto L_089601C4;
    case 25u: goto L_089601E8;
    case 26u: goto L_089601F0;
    case 27u: goto L_0896020C;
    case 28u: goto L_08960220;
    case 29u: goto L_0896023C;
    case 30u: goto L_08960240;
    case 31u: goto L_08960248;
    case 32u: goto L_08960260;
    case 33u: goto L_08960294;
    case 34u: goto L_089602C8;
    case 35u: goto L_089602D0;
    case 36u: goto L_089602D4;
    case 37u: goto L_089602F8;
    case 38u: goto L_08960300;
    case 39u: goto L_0896031C;
    case 40u: goto L_08960330;
    case 41u: goto L_0896034C;
    case 42u: goto L_08960350;
    case 43u: goto L_08960358;
    case 44u: goto L_08960374;
    case 45u: goto L_0896038C;
    case 46u: goto L_08960394;
    case 47u: goto L_0896039C;
    case 48u: goto L_089603A0;
    case 49u: goto L_089603C4;
    case 50u: goto L_089603CC;
    case 51u: goto L_089603E8;
    case 52u: goto L_089603FC;
    case 53u: goto L_08960418;
    case 54u: goto L_0896041C;
    case 55u: goto L_08960424;
    case 56u: goto L_08960434;
    case 57u: goto L_0896043C;
    case 58u: goto L_0896044C;
    case 59u: goto L_08960454;
    case 60u: goto L_08960464;
    case 61u: goto L_0896046C;
    case 62u: goto L_0896047C;
    case 63u: goto L_08960484;
    case 64u: goto L_08960494;
    case 65u: goto L_0896049C;
    case 66u: goto L_089604AC;
    case 67u: goto L_089604B4;
    case 68u: goto L_089604C4;
    case 69u: goto L_089604CC;
    case 70u: goto L_089604DC;
    case 71u: goto L_089604E4;
    case 72u: goto L_089604FC;
    case 73u: goto L_08960508;
    case 74u: goto L_08960528;
    case 75u: goto L_08960534;
    case 76u: goto L_08960540;
    case 77u: goto L_0896054C;
    case 78u: goto L_08960550;
    case 79u: goto L_08960584;
    case 80u: goto L_08960590;
    case 81u: goto L_08960594;
    case 82u: goto L_0896059C;
    case 83u: goto L_089605D0;
    case 84u: goto L_089605E4;
    case 85u: goto L_089605EC;
    case 86u: goto L_089605F4;
    case 87u: goto L_0896060C;
    case 88u: goto L_08960614;
    case 89u: goto L_08960624;
    case 90u: goto L_0896063C;
    case 91u: goto L_08960648;
    case 92u: goto L_08960660;
    case 93u: goto L_08960668;
    case 94u: goto L_08960680;
    case 95u: goto L_08960698;
    case 96u: goto L_089606AC;
    case 97u: goto L_089606B8;
    case 98u: goto L_089606C0;
    case 99u: goto L_089606C8;
    case 100u: goto L_089606D0;
    case 101u: goto L_089606D8;
    case 102u: goto L_089606E0;
    case 103u: goto L_089606FC;
    case 104u: goto L_08960708;
    case 105u: goto L_08960720;
    case 106u: goto L_08960728;
    case 107u: goto L_08960744;
    case 108u: goto L_08960780;
    case 109u: goto L_089607A4;
    case 110u: goto L_089607AC;
    case 111u: goto L_089607C8;
    case 112u: goto L_08960800;
    case 113u: goto L_08960808;
    case 114u: goto L_0896080C;
    case 115u: goto L_08960830;
    case 116u: goto L_08960838;
    case 117u: goto L_08960854;
    case 118u: goto L_08960868;
    case 119u: goto L_08960884;
    case 120u: goto L_08960888;
    case 121u: goto L_08960890;
    case 122u: goto L_089608AC;
    case 123u: goto L_089608E8;
    case 124u: goto L_089608F0;
    case 125u: goto L_0896090C;
    case 126u: goto L_08960930;
    case 127u: goto L_0896093C;
    case 128u: goto L_08960944;
    case 129u: goto L_0896097C;
    case 130u: goto L_0896098C;
    case 131u: goto L_089609A0;
    case 132u: goto L_089609A8;
    case 133u: goto L_089609C4;
    case 134u: goto L_089609F4;
    case 135u: goto L_089609FC;
    case 136u: goto L_08960A18;
    case 137u: goto L_08960A48;
    case 138u: goto L_08960A50;
    case 139u: goto L_08960A6C;
    case 140u: goto L_08960AA8;
    case 141u: goto L_08960AB0;
    case 142u: goto L_08960AB4;
    case 143u: goto L_08960AD8;
    case 144u: goto L_08960AE0;
    case 145u: goto L_08960AFC;
    case 146u: goto L_08960B10;
    case 147u: goto L_08960B2C;
    case 148u: goto L_08960B30;
    case 149u: goto L_08960B38;
    case 150u: goto L_08960B50;
    case 151u: goto L_08960B80;
    case 152u: goto L_08960B88;
    case 153u: goto L_08960BA0;
    case 154u: goto L_08960BAC;
    case 155u: goto L_08960BB8;
    case 156u: goto L_08960BBC;
    case 157u: goto L_08960BC4;
    case 158u: goto L_08960BD0;
    case 159u: goto L_08960BD8;
    case 160u: goto L_08960BDC;
    case 161u: goto L_08960C00;
    case 162u: goto L_08960C08;
    case 163u: goto L_08960C24;
    case 164u: goto L_08960C38;
    case 165u: goto L_08960C54;
    case 166u: goto L_08960C58;
    case 167u: goto L_08960C60;
    case 168u: goto L_08960C7C;
    case 169u: goto L_08960C8C;
    case 170u: goto L_08960C9C;
    case 171u: goto L_08960CA4;
    case 172u: goto L_08960CC0;
    case 173u: goto L_08960CF0;
    case 174u: goto L_08960CF8;
    case 175u: goto L_08960CFC;
    case 176u: goto L_08960D20;
    case 177u: goto L_08960D28;
    case 178u: goto L_08960D44;
    case 179u: goto L_08960D58;
    case 180u: goto L_08960D74;
    case 181u: goto L_08960D78;
    case 182u: goto L_08960D80;
    case 183u: goto L_08960D9C;
    case 184u: goto L_08960DCC;
    case 185u: goto L_08960DD4;
    case 186u: goto L_08960DD8;
    case 187u: goto L_08960DFC;
    case 188u: goto L_08960E04;
    case 189u: goto L_08960E20;
    case 190u: goto L_08960E34;
    case 191u: goto L_08960E50;
    case 192u: goto L_08960E54;
    case 193u: goto L_08960E5C;
    case 194u: goto L_08960E74;
    case 195u: goto L_08960E84;
    case 196u: goto L_08960E90;
    case 197u: goto L_08960EA0;
    case 198u: goto L_08960EB0;
    case 199u: goto L_08960EC0;
    case 200u: goto L_08960EC8;
    case 201u: goto L_08960ED0;
    case 202u: goto L_08960ED4;
    case 203u: goto L_08960EF8;
    case 204u: goto L_08960F00;
    case 205u: goto L_08960F1C;
    case 206u: goto L_08960F30;
    case 207u: goto L_08960F4C;
    case 208u: goto L_08960F50;
    case 209u: goto L_08960F58;
    case 210u: goto L_08960F70;
    case 211u: goto L_08960F80;
    case 212u: goto L_08960F8C;
    case 213u: goto L_08960FA0;
    case 214u: goto L_08960FA8;
    case 215u: goto L_08960FB8;
    case 216u: goto L_08960FC0;
    case 217u: goto L_08960FC8;
    case 218u: goto L_08960FCC;
    case 219u: goto L_08960FF0;
    case 220u: goto L_08960FF8;
    case 221u: goto L_08961014;
    case 222u: goto L_08961028;
    case 223u: goto L_08961044;
    case 224u: goto L_08961048;
    case 225u: goto L_08961050;
    case 226u: goto L_0896106C;
    case 227u: goto L_0896107C;
    case 228u: goto L_08961094;
    case 229u: goto L_089610AC;
    case 230u: goto L_089610BC;
    case 231u: goto L_089610E8;
    case 232u: goto L_089610F0;
    case 233u: goto L_08961108;
    case 234u: goto L_0896114C;
    case 235u: goto L_08961160;
    case 236u: goto L_08961170;
    case 237u: goto L_0896117C;
    case 238u: goto L_0896118C;
    case 239u: goto L_089611A8;
    case 240u: goto L_089611B8;
    case 241u: goto L_089611C0;
    case 242u: goto L_089611C8;
    case 243u: goto L_089611CC;
    case 244u: goto L_089611F0;
    case 245u: goto L_089611F8;
    case 246u: goto L_08961214;
    case 247u: goto L_08961228;
    case 248u: goto L_08961244;
    case 249u: goto L_08961248;
    case 250u: goto L_08961250;
    case 251u: goto L_08961268;
    case 252u: goto L_089612A0;
    case 253u: goto L_089612AC;
    case 254u: goto L_089612B4;
    case 255u: goto L_089612BC;
    case 256u: goto L_089612C4;
    case 257u: goto L_089612CC;
    case 258u: goto L_089612D0;
    case 259u: goto L_089612F4;
    case 260u: goto L_089612FC;
    case 261u: goto L_08961318;
    case 262u: goto L_0896132C;
    case 263u: goto L_08961348;
    case 264u: goto L_0896134C;
    case 265u: goto L_08961354;
    case 266u: goto L_08961370;
    case 267u: goto L_08961380;
    case 268u: goto L_089613B8;
    case 269u: goto L_089613C0;
    case 270u: goto L_089613C4;
    case 271u: goto L_089613E8;
    case 272u: goto L_089613F0;
    case 273u: goto L_0896140C;
    case 274u: goto L_08961420;
    case 275u: goto L_0896143C;
    case 276u: goto L_08961440;
    case 277u: goto L_08961448;
    case 278u: goto L_08961460;
    case 279u: goto L_08961470;
    case 280u: goto L_08961484;
    case 281u: goto L_0896148C;
    case 282u: goto L_08961490;
    case 283u: goto L_089614B4;
    case 284u: goto L_089614BC;
    case 285u: goto L_089614D8;
    case 286u: goto L_089614EC;
    case 287u: goto L_08961508;
    case 288u: goto L_0896150C;
    case 289u: goto L_08961514;
    case 290u: goto L_08961530;
    case 291u: goto L_08961540;
    case 292u: goto L_08961558;
    case 293u: goto L_08961564;
    case 294u: goto L_0896156C;
    case 295u: goto L_08961574;
    case 296u: goto L_0896157C;
    case 297u: goto L_08961584;
    case 298u: goto L_0896159C;
    case 299u: goto L_089615A8;
    case 300u: goto L_089615B0;
    case 301u: goto L_089615C8;
    case 302u: goto L_089615D8;
    case 303u: goto L_089615E0;
    case 304u: goto L_089615F8;
    case 305u: goto L_08961608;
    case 306u: goto L_08961610;
    case 307u: goto L_08961628;
    case 308u: goto L_08961638;
    case 309u: goto L_08961640;
    case 310u: goto L_08961658;
    case 311u: goto L_08961668;
    case 312u: goto L_08961670;
    case 313u: goto L_08961688;
    case 314u: goto L_08961698;
    case 315u: goto L_089616B0;
    case 316u: goto L_089616BC;
    case 317u: goto L_089616C8;
    case 318u: goto L_089616DC;
    case 319u: goto L_089616E0;
    case 320u: goto L_089616E8;
    case 321u: goto L_08961700;
    case 322u: goto L_08961714;
    case 323u: goto L_08961720;
    case 324u: goto L_0896172C;
    case 325u: goto L_0896173C;
    case 326u: goto L_08961740;
    case 327u: goto L_08961748;
    case 328u: goto L_08961754;
    case 329u: goto L_08961760;
    case 330u: goto L_08961774;
    case 331u: goto L_08961778;
    case 332u: goto L_089617D4;
    case 333u: goto L_089617E8;
    case 334u: goto L_08961834;
    case 335u: goto L_08961848;
    case 336u: goto L_08961858;
    case 337u: goto L_08961864;
    case 338u: goto L_08961870;
    case 339u: goto L_0896187C;
    case 340u: goto L_08961880;
    case 341u: goto L_08961888;
    case 342u: goto L_0896188C;
    case 343u: goto L_089618A0;
    case 344u: goto L_089618B0;
    case 345u: goto L_089618DC;
    case 346u: goto L_089618E4;
    case 347u: goto L_08961920;
    case 348u: goto L_08961930;
    case 349u: goto L_0896193C;
    case 350u: goto L_0896195C;
    case 351u: goto L_08961974;
    case 352u: goto L_08961980;
    case 353u: goto L_08961998;
    case 354u: goto L_089619A0;
    case 355u: goto L_089619BC;
    case 356u: goto L_08961A04;
    case 357u: goto L_08961A10;
    case 358u: goto L_08961A14;
    case 359u: goto L_08961A24;
    case 360u: goto L_08961A34;
    case 361u: goto L_08961A4C;
    case 362u: goto L_08961A60;
    case 363u: goto L_08961A74;
    case 364u: goto L_08961A80;
    case 365u: goto L_08961AC4;
    case 366u: goto L_08961AD0;
    case 367u: goto L_08961ADC;
    case 368u: goto L_08961B00;
    case 369u: goto L_08961B0C;
    case 370u: goto L_08961B18;
    case 371u: goto L_08961B24;
    case 372u: goto L_08961B28;
    case 373u: goto L_08961B30;
    case 374u: goto L_08961B34;
    case 375u: goto L_08961B84;
    case 376u: goto L_08961B94;
    case 377u: goto L_08961BA8;
    case 378u: goto L_08961BBC;
    case 379u: goto L_08961BE0;
    case 380u: goto L_08961BE8;
    case 381u: goto L_08961BF4;
    case 382u: goto L_08961BFC;
    case 383u: goto L_08961C30;
    case 384u: goto L_08961C48;
    case 385u: goto L_08961C50;
    case 386u: goto L_08961C54;
    case 387u: goto L_08961C7C;
    case 388u: goto L_08961C9C;
    case 389u: goto L_08961CAC;
    case 390u: goto L_08961CC0;
    case 391u: goto L_08961CEC;
    case 392u: goto L_08961D1C;
    case 393u: goto L_08961D24;
    case 394u: goto L_08961D34;
    case 395u: goto L_08961D3C;
    case 396u: goto L_08961D54;
    case 397u: goto L_08961D5C;
    case 398u: goto L_08961D78;
    case 399u: goto L_08961D80;
    case 400u: goto L_08961D9C;
    case 401u: goto L_08961DA4;
    case 402u: goto L_08961DB8;
    case 403u: goto L_08961DC0;
    case 404u: goto L_08961DDC;
    case 405u: goto L_08961DE4;
    case 406u: goto L_08961DFC;
    case 407u: goto L_08961E04;
    case 408u: goto L_08961E08;
    case 409u: goto L_08961E20;
    case 410u: goto L_08961E74;
    case 411u: goto L_08961EBC;
    case 412u: goto L_08961EC4;
    case 413u: goto L_08961ED0;
    case 414u: goto L_08961EE0;
    case 415u: goto L_08961EEC;
    case 416u: goto L_08961EF8;
    case 417u: goto L_08961F04;
    case 418u: goto L_08961F34;
    case 419u: goto L_08961F4C;
    case 420u: goto L_08961F68;
    case 421u: goto L_08961F70;
    case 422u: goto L_08961F84;
    case 423u: goto L_08961F9C;
    case 424u: goto L_08961FB4;
    case 425u: goto L_08961FC0;
    case 426u: goto L_08962014;
    case 427u: goto L_0896201C;
    case 428u: goto L_08962024;
    case 429u: goto L_08962030;
    case 430u: goto L_0896203C;
    case 431u: goto L_0896205C;
    case 432u: goto L_08962064;
    case 433u: goto L_08962070;
    case 434u: goto L_08962084;
    case 435u: goto L_08962098;
    case 436u: goto L_089620AC;
    case 437u: goto L_089620B8;
    case 438u: goto L_089620C0;
    case 439u: goto L_089620C4;
    case 440u: goto L_089620D0;
    case 441u: goto L_089620E0;
    case 442u: goto L_089620F4;
    case 443u: goto L_08962108;
    case 444u: goto L_0896212C;
    case 445u: goto L_08962158;
    case 446u: goto L_0896216C;
    case 447u: goto L_08962174;
    case 448u: goto L_0896218C;
    case 449u: goto L_0896219C;
    case 450u: goto L_089621B0;
    case 451u: goto L_089621B8;
    case 452u: goto L_089621C0;
    case 453u: goto L_089621D8;
    case 454u: goto L_089621EC;
    case 455u: goto L_0896220C;
    case 456u: goto L_08962260;
    case 457u: goto L_0896228C;
    case 458u: goto L_089622D4;
    case 459u: goto L_089622F4;
    case 460u: goto L_08962348;
    case 461u: goto L_08962388;
    case 462u: goto L_0896239C;
    case 463u: goto L_089623B8;
    case 464u: goto L_089623E4;
    case 465u: goto L_08962418;
    case 466u: goto L_0896244C;
    case 467u: goto L_08962464;
    case 468u: goto L_08962470;
    case 469u: goto L_0896248C;
    case 470u: goto L_08962494;
    case 471u: goto L_089624A8;
    case 472u: goto L_089624B4;
    case 473u: goto L_089624C0;
    case 474u: goto L_089624C8;
    case 475u: goto L_089624CC;
    case 476u: goto L_089624E0;
    case 477u: goto L_08962524;
    case 478u: goto L_08962574;
    case 479u: goto L_089625B4;
    case 480u: goto L_089625C8;
    case 481u: goto L_089625D0;
    case 482u: goto L_089625EC;
    case 483u: goto L_089625F8;
    case 484u: goto L_08962604;
    case 485u: goto L_08962610;
    case 486u: goto L_08962618;
    case 487u: goto L_08962624;
    case 488u: goto L_0896262C;
    case 489u: goto L_08962634;
    case 490u: goto L_08962680;
    case 491u: goto L_089626C0;
    case 492u: goto L_08962718;
    case 493u: goto L_08962758;
    case 494u: goto L_0896277C;
    case 495u: goto L_08962790;
    case 496u: goto L_089627AC;
    case 497u: goto L_089627D8;
    case 498u: goto L_089627E8;
    case 499u: goto L_089627F0;
    case 500u: goto L_08962804;
    case 501u: goto L_08962828;
    case 502u: goto L_08962834;
    case 503u: goto L_08962840;
    case 504u: goto L_08962844;
    case 505u: goto L_0896284C;
    case 506u: goto L_08962850;
    case 507u: goto L_08962898;
    case 508u: goto L_089628AC;
    case 509u: goto L_08962910;
    case 510u: goto L_0896294C;
    case 511u: goto L_08962954;
    case 512u: goto L_08962998;
    case 513u: goto L_08962A54;
    case 514u: goto L_08962A70;
    case 515u: goto L_08962A7C;
    case 516u: goto L_08962A90;
    case 517u: goto L_08962A9C;
    case 518u: goto L_08962ABC;
    case 519u: goto L_08962AD0;
    case 520u: goto L_08962ADC;
    case 521u: goto L_08962AF0;
    case 522u: goto L_08962B24;
    case 523u: goto L_08962B34;
    case 524u: goto L_08962B40;
    case 525u: goto L_08962B58;
    case 526u: goto L_08962B64;
    case 527u: goto L_08962B80;
    case 528u: goto L_08962B90;
    case 529u: goto L_08962B9C;
    case 530u: goto L_08962BA8;
    case 531u: goto L_08962BB0;
    case 532u: goto L_08962BB8;
    case 533u: goto L_08962BC0;
    case 534u: goto L_08962BC4;
    case 535u: goto L_08962BD8;
    case 536u: goto L_08962BE4;
    case 537u: goto L_08962BF0;
    case 538u: goto L_08962BFC;
    case 539u: goto L_08962C24;
    case 540u: goto L_08962C28;
    case 541u: goto L_08962C4C;
    case 542u: goto L_08962C84;
    case 543u: goto L_08962C94;
    case 544u: goto L_08962CA0;
    case 545u: goto L_08962CB8;
    case 546u: goto L_08962CC4;
    case 547u: goto L_08962CD4;
    case 548u: goto L_08962CDC;
    case 549u: goto L_08962CE4;
    case 550u: goto L_08962CF0;
    case 551u: goto L_08962CF8;
    case 552u: goto L_08962D14;
    case 553u: goto L_08962D20;
    case 554u: goto L_08962D2C;
    case 555u: goto L_08962D38;
    case 556u: goto L_08962D48;
    case 557u: goto L_08962D54;
    case 558u: goto L_08962D5C;
    case 559u: goto L_08962D68;
    case 560u: goto L_08962D70;
    case 561u: goto L_08962D78;
    case 562u: goto L_08962D84;
    case 563u: goto L_08962D90;
    case 564u: goto L_08962DA4;
    case 565u: goto L_08962DB0;
    case 566u: goto L_08962DBC;
    case 567u: goto L_08962DC4;
    case 568u: goto L_08962DC8;
    case 569u: goto L_08962DDC;
    case 570u: goto L_08962DE8;
    case 571u: goto L_08962DF4;
    case 572u: goto L_08962E00;
    case 573u: goto L_08962E20;
    case 574u: goto L_08962E24;
    case 575u: goto L_08962E4C;
    case 576u: goto L_08962E78;
    case 577u: goto L_08962E84;
    case 578u: goto L_08962E90;
    case 579u: goto L_08962EA8;
    case 580u: goto L_08962EB4;
    case 581u: goto L_08962EC0;
    case 582u: goto L_08962EC8;
    case 583u: goto L_08962ED0;
    case 584u: goto L_08962EDC;
    case 585u: goto L_08962EE4;
    case 586u: goto L_08962F00;
    case 587u: goto L_08962F0C;
    case 588u: goto L_08962F18;
    case 589u: goto L_08962F24;
    case 590u: goto L_08962F34;
    case 591u: goto L_08962F40;
    case 592u: goto L_08962F50;
    case 593u: goto L_08962F54;
    case 594u: goto L_08962F70;
    case 595u: goto L_08962F80;
    case 596u: goto L_08962F9C;
    case 597u: goto L_08962FA8;
    case 598u: goto L_08962FB8;
    case 599u: goto L_08962FC0;
    case 600u: goto L_08962FF8;
    case 601u: goto L_0896301C;
    case 602u: goto L_08963028;
    case 603u: goto L_08963038;
    case 604u: goto L_08963050;
    case 605u: goto L_0896305C;
    case 606u: goto L_08963070;
    case 607u: goto L_089630A4;
    case 608u: goto L_089630BC;
    case 609u: goto L_089630E0;
    case 610u: goto L_089630EC;
    case 611u: goto L_089630FC;
    case 612u: goto L_08963114;
    case 613u: goto L_08963120;
    case 614u: goto L_0896312C;
    case 615u: goto L_08963144;
    case 616u: goto L_08963174;
    case 617u: goto L_08963180;
    case 618u: goto L_0896318C;
    case 619u: goto L_089631A4;
    case 620u: goto L_089631C4;
    case 621u: goto L_089631D0;
    case 622u: goto L_089631E0;
    case 623u: goto L_089631F8;
    case 624u: goto L_08963204;
    case 625u: goto L_08963218;
    case 626u: goto L_08963234;
    case 627u: goto L_08963240;
    case 628u: goto L_08963250;
    case 629u: goto L_0896326C;
    case 630u: goto L_08963280;
    case 631u: goto L_089632A0;
    case 632u: goto L_089632AC;
    case 633u: goto L_089632BC;
    case 634u: goto L_089632D4;
    case 635u: goto L_089632E0;
    case 636u: goto L_089632E8;
    case 637u: goto L_08963304;
    case 638u: goto L_08963308;
    case 639u: goto L_08963320;
    case 640u: goto L_08963338;
    case 641u: goto L_08963344;
    case 642u: goto L_08963358;
    case 643u: goto L_08963378;
    case 644u: goto L_08963380;
    case 645u: goto L_0896338C;
    case 646u: goto L_089633A4;
    case 647u: goto L_089633B8;
    case 648u: goto L_089633BC;
    case 649u: goto L_089633D0;
    case 650u: goto L_089633EC;
    case 651u: goto L_089633F4;
    case 652u: goto L_089633FC;
    case 653u: goto L_0896340C;
    case 654u: goto L_08963418;
    case 655u: goto L_08963420;
    case 656u: goto L_08963428;
    case 657u: goto L_08963434;
    case 658u: goto L_08963444;
    case 659u: goto L_089634A0;
    case 660u: goto L_089634B0;
    case 661u: goto L_089634B8;
    case 662u: goto L_089634C8;
    case 663u: goto L_089634D4;
    case 664u: goto L_089634DC;
    case 665u: goto L_089634E0;
    case 666u: goto L_089634E8;
    case 667u: goto L_089634F8;
    case 668u: goto L_08963504;
    case 669u: goto L_08963514;
    case 670u: goto L_08963524;
    case 671u: goto L_08963540;
    case 672u: goto L_08963550;
    case 673u: goto L_0896355C;
    case 674u: goto L_08963568;
    case 675u: goto L_08963598;
    case 676u: goto L_089635AC;
    case 677u: goto L_089635C0;
    case 678u: goto L_089635CC;
    case 679u: goto L_089635E0;
    case 680u: goto L_089635EC;
    case 681u: goto L_089635FC;
    case 682u: goto L_0896360C;
    case 683u: goto L_0896361C;
    case 684u: goto L_0896362C;
    case 685u: goto L_0896363C;
    case 686u: goto L_0896364C;
    case 687u: goto L_0896365C;
    case 688u: goto L_0896366C;
    case 689u: goto L_0896367C;
    case 690u: goto L_0896368C;
    case 691u: goto L_0896369C;
    case 692u: goto L_089636A8;
    case 693u: goto L_089636B8;
    case 694u: goto L_089636C8;
    case 695u: goto L_089636D8;
    case 696u: goto L_089636E4;
    case 697u: goto L_089636F4;
    case 698u: goto L_08963704;
    case 699u: goto L_08963710;
    case 700u: goto L_08963720;
    case 701u: goto L_08963730;
    case 702u: goto L_08963740;
    case 703u: goto L_0896374C;
    case 704u: goto L_0896375C;
    case 705u: goto L_0896376C;
    case 706u: goto L_0896377C;
    case 707u: goto L_0896378C;
    case 708u: goto L_08963798;
    case 709u: goto L_089637A8;
    case 710u: goto L_089637B8;
    case 711u: goto L_089637C4;
    case 712u: goto L_089637D4;
    case 713u: goto L_089637E4;
    case 714u: goto L_089637F4;
    case 715u: goto L_08963804;
    case 716u: goto L_08963810;
    case 717u: goto L_08963820;
    case 718u: goto L_08963830;
    case 719u: goto L_0896383C;
    case 720u: goto L_08963850;
    case 721u: goto L_08963864;
    case 722u: goto L_08963874;
    case 723u: goto L_08963878;
    case 724u: goto L_08963894;
    case 725u: goto L_089638A4;
    case 726u: goto L_089638A8;
    case 727u: goto L_089638BC;
    case 728u: goto L_089638F4;
    case 729u: goto L_0896396C;
    case 730u: goto L_08963998;
    case 731u: goto L_089639C0;
    case 732u: goto L_089639E0;
    case 733u: goto L_089639EC;
    case 734u: goto L_089639FC;
    case 735u: goto L_08963A0C;
    case 736u: goto L_08963A18;
    case 737u: goto L_08963A20;
    case 738u: goto L_08963A2C;
    case 739u: goto L_08963A48;
    case 740u: goto L_08963A50;
    case 741u: goto L_08963A5C;
    case 742u: goto L_08963A70;
    case 743u: goto L_08963A84;
    case 744u: goto L_08963A98;
    case 745u: goto L_08963AA4;
    case 746u: goto L_08963AB8;
    case 747u: goto L_08963AF8;
    case 748u: goto L_08963B18;
    case 749u: goto L_08963B34;
    case 750u: goto L_08963B44;
    case 751u: goto L_08963B4C;
    case 752u: goto L_08963B90;
    case 753u: goto L_08963BAC;
    case 754u: goto L_08963BB4;
    case 755u: goto L_08963BCC;
    case 756u: goto L_08963BD4;
    case 757u: goto L_08963BD8;
    case 758u: goto L_08963BEC;
    case 759u: goto L_08963C0C;
    case 760u: goto L_08963C18;
    case 761u: goto L_08963C24;
    case 762u: goto L_08963C60;
    case 763u: goto L_08963C78;
    case 764u: goto L_08963C8C;
    case 765u: goto L_08963CA8;
    case 766u: goto L_08963CB8;
    case 767u: goto L_08963CC0;
    case 768u: goto L_08963CC8;
    case 769u: goto L_08963CD4;
    case 770u: goto L_08963CE0;
    case 771u: goto L_08963CE4;
    case 772u: goto L_08963CFC;
    case 773u: goto L_08963D1C;
    case 774u: goto L_08963D28;
    case 775u: goto L_08963D34;
    case 776u: goto L_08963D74;
    case 777u: goto L_08963D88;
    case 778u: goto L_08963DA4;
    case 779u: goto L_08963DB4;
    case 780u: goto L_08963DBC;
    case 781u: goto L_08963DC8;
    case 782u: goto L_08963DCC;
    case 783u: goto L_08963DE4;
    case 784u: goto L_08963E04;
    case 785u: goto L_08963E10;
    case 786u: goto L_08963E1C;
    case 787u: goto L_08963E2C;
    case 788u: goto L_08963E38;
    case 789u: goto L_08963E54;
    case 790u: goto L_08963E58;
    case 791u: goto L_08963E64;
    case 792u: goto L_08963E6C;
    case 793u: goto L_08963E70;
    case 794u: goto L_08963E88;
    case 795u: goto L_08963EA8;
    case 796u: goto L_08963EB4;
    case 797u: goto L_08963EC0;
    case 798u: goto L_08963ED0;
    case 799u: goto L_08963EDC;
    case 800u: goto L_08963EEC;
    case 801u: goto L_08963EF0;
    case 802u: goto L_08963EFC;
    case 803u: goto L_08963F04;
    case 804u: goto L_08963F08;
    case 805u: goto L_08963F20;
    case 806u: goto L_08963F38;
    case 807u: goto L_08963F44;
    case 808u: goto L_08963F60;
    case 809u: goto L_08963F68;
    case 810u: goto L_08963F6C;
    case 811u: goto L_08963F7C;
    case 812u: goto L_08963F9C;
    case 813u: goto L_08963FA8;
    case 814u: goto L_08963FB4;
    case 815u: goto L_08963FC4;
    case 816u: goto L_08963FD0;
    case 817u: goto L_08963FDC;
    case 818u: goto L_08963FEC;
    case 819u: goto L_08963FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08960000:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960010;
      }
      goto L_0896000C;
    }
L_0896000C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08960010;
L_08960010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08960018;
    }
L_08960018:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960030u);
    ctx.gpr[6] = (0u | 2u);
    goto L_08961C7C;
L_08960030:
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089600EC;
      }
      goto L_08960064;
    }
L_08960064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089600EC;
      }
      goto L_08960098;
    }
L_08960098:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089600E4;
      }
      goto L_089600DC;
    }
L_089600DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089600F0;
      }
      goto L_089600E4;
    }
L_089600E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089600F0;
      }
      goto L_089600EC;
    }
L_089600EC:
    ctx.gpr[4] = (0u | 0u);
    goto L_089600F0;
L_089600F0:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0896011C;
      }
      goto L_08960114;
    }
L_08960114:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896016C;
      }
      goto L_0896011C;
    }
L_0896011C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0896014C;
    }
    goto L_08960138;
L_08960138:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896016C;
      }
      goto L_0896014C;
    }
L_0896014C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896016C;
      }
      goto L_08960168;
    }
L_08960168:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0896016C;
L_0896016C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08960174;
    }
L_08960174:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896018Cu);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961C7C;
L_0896018C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x0896019Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0896019Cu) goto L_0896019C;
    return;
L_0896019C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089601C0;
      }
      goto L_089601AC;
    }
L_089601AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089601C0;
      }
      goto L_089601B8;
    }
L_089601B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089601C4;
      }
      goto L_089601C0;
    }
L_089601C0:
    ctx.gpr[4] = (0u | 0u);
    goto L_089601C4;
L_089601C4:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089601F0;
      }
      goto L_089601E8;
    }
L_089601E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960240;
      }
      goto L_089601F0;
    }
L_089601F0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08960220;
    }
    goto L_0896020C;
L_0896020C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960240;
      }
      goto L_08960220;
    }
L_08960220:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960240;
      }
      goto L_0896023C;
    }
L_0896023C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08960240;
L_08960240:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08960248;
    }
L_08960248:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960260u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961C7C;
L_08960260:
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089602D0;
      }
      goto L_08960294;
    }
L_08960294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089602D0;
      }
      goto L_089602C8;
    }
L_089602C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089602D4;
      }
      goto L_089602D0;
    }
L_089602D0:
    ctx.gpr[4] = (0u | 0u);
    goto L_089602D4;
L_089602D4:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08960300;
      }
      goto L_089602F8;
    }
L_089602F8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960350;
      }
      goto L_08960300;
    }
L_08960300:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08960330;
    }
    goto L_0896031C;
L_0896031C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960350;
      }
      goto L_08960330;
    }
L_08960330:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960350;
      }
      goto L_0896034C;
    }
L_0896034C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08960350;
L_08960350:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08960358;
    }
L_08960358:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08960374u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08961C7C;
L_08960374:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x0896038Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 642u, 0x0887BAACu>(ctx, &aot_mem) && ctx.pc == 0x0896038Cu) goto L_0896038C;
    return;
L_0896038C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896039C;
      }
      goto L_08960394;
    }
L_08960394:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089603A0;
      }
      goto L_0896039C;
    }
L_0896039C:
    ctx.gpr[4] = (0u | 0u);
    goto L_089603A0;
L_089603A0:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089603CC;
      }
      goto L_089603C4;
    }
L_089603C4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896041C;
      }
      goto L_089603CC;
    }
L_089603CC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089603FC;
    }
    goto L_089603E8;
L_089603E8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896041C;
      }
      goto L_089603FC;
    }
L_089603FC:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896041C;
      }
      goto L_08960418;
    }
L_08960418:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0896041C;
L_0896041C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08960424;
    }
L_08960424:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08960434u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 222u, 0x0887D1D0u>(ctx, &aot_mem) && ctx.pc == 0x08960434u) goto L_08960434;
    return;
L_08960434:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_0896043C;
    }
L_0896043C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x0896044Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 267u, 0x0887D54Cu>(ctx, &aot_mem) && ctx.pc == 0x0896044Cu) goto L_0896044C;
    return;
L_0896044C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08960454;
    }
L_08960454:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08960464u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 380u, 0x0887DD90u>(ctx, &aot_mem) && ctx.pc == 0x08960464u) goto L_08960464;
    return;
L_08960464:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_0896046C;
    }
L_0896046C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x0896047Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 443u, 0x0887E190u>(ctx, &aot_mem) && ctx.pc == 0x0896047Cu) goto L_0896047C;
    return;
L_0896047C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08960484;
    }
L_08960484:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08960494u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 222u, 0x0887D1D0u>(ctx, &aot_mem) && ctx.pc == 0x08960494u) goto L_08960494;
    return;
L_08960494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_0896049C;
    }
L_0896049C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089604ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 267u, 0x0887D54Cu>(ctx, &aot_mem) && ctx.pc == 0x089604ACu) goto L_089604AC;
    return;
L_089604AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_089604B4;
    }
L_089604B4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089604C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 380u, 0x0887DD90u>(ctx, &aot_mem) && ctx.pc == 0x089604C4u) goto L_089604C4;
    return;
L_089604C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_089604CC;
    }
L_089604CC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089604DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 443u, 0x0887E190u>(ctx, &aot_mem) && ctx.pc == 0x089604DCu) goto L_089604DC;
    return;
L_089604DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_089604E4;
    }
L_089604E4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089604FCu);
    ctx.gpr[6] = (0u | 4u);
    goto L_08961C7C;
L_089604FC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08960528;
      }
      goto L_08960508;
    }
L_08960508:
    ctx.gpr[4] = (0u - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_08960528;
L_08960528:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08960534u);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08960534u) goto L_08960534;
    return;
L_08960534:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08960550;
      }
      goto L_08960540;
    }
L_08960540:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896054Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 194u, 0x0883D0B8u>(ctx, &aot_mem) && ctx.pc == 0x0896054Cu) goto L_0896054C;
    return;
L_0896054C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08960550;
L_08960550:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08960594;
      }
      goto L_08960584;
    }
L_08960584:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08960590u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08960590u) goto L_08960590;
    return;
L_08960590:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08960594;
L_08960594:
    ctx.gpr[31] = (0x0896059Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FD14u>(ctx, &aot_mem) && ctx.pc == 0x0896059Cu) goto L_0896059C;
    return;
L_0896059C:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089605D0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x089605D0u) goto L_089605D0;
    return;
L_089605D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x089605E4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x089605E4u) goto L_089605E4;
    return;
L_089605E4:
    ctx.gpr[31] = (0x089605ECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x089605ECu) goto L_089605EC;
    return;
L_089605EC:
    ctx.gpr[31] = (0x089605F4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x089605F4u) goto L_089605F4;
    return;
L_089605F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x0896060Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 509u, 0x08882624u>(ctx, &aot_mem) && ctx.pc == 0x0896060Cu) goto L_0896060C;
    return;
L_0896060C:
    ctx.gpr[31] = (0x08960614u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08960614u) goto L_08960614;
    return;
L_08960614:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[31] = (0x08960624u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 804u, 0x08AFB74Cu>(ctx, &aot_mem) && ctx.pc == 0x08960624u) goto L_08960624;
    return;
L_08960624:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896063Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0896063Cu) goto L_0896063C;
    return;
L_0896063C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960660;
      }
      goto L_08960648;
    }
L_08960648:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x08960660u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 459u, 0x089571E0u>(ctx, &aot_mem) && ctx.pc == 0x08960660u) goto L_08960660;
    return;
L_08960660:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08960668;
    }
L_08960668:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960680u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961C7C;
L_08960680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8960));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089606C0;
      }
      goto L_08960698;
    }
L_08960698:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[31] = (0x089606ACu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x089606ACu) goto L_089606AC;
    return;
L_089606AC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089606C8;
      }
      goto L_089606B8;
    }
L_089606B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089606FC;
      }
      goto L_089606C0;
    }
L_089606C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_089606C8;
    }
L_089606C8:
    ctx.gpr[31] = (0x089606D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x089606D0u) goto L_089606D0;
    return;
L_089606D0:
    ctx.gpr[31] = (0x089606D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 476u, 0x088C3124u>(ctx, &aot_mem) && ctx.pc == 0x089606D8u) goto L_089606D8;
    return;
L_089606D8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089606FC;
      }
      goto L_089606E0;
    }
L_089606E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089606FCu);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089606FCu) goto L_089606FC;
    return;
L_089606FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960720;
      }
      goto L_08960708;
    }
L_08960708:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x08960720u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 194u, 0x08958B90u>(ctx, &aot_mem) && ctx.pc == 0x08960720u) goto L_08960720;
    return;
L_08960720:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08960728;
    }
L_08960728:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08960744u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08961C7C;
L_08960744:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089607A4;
      }
      goto L_08960780;
    }
L_08960780:
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), 0u);
    goto L_089607A4;
L_089607A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_089607AC;
    }
L_089607AC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089607C8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08961C7C;
L_089607C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960808;
      }
      goto L_08960800;
    }
L_08960800:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0896080C;
      }
      goto L_08960808;
    }
L_08960808:
    ctx.gpr[4] = (0u | 0u);
    goto L_0896080C;
L_0896080C:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08960838;
      }
      goto L_08960830;
    }
L_08960830:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960888;
      }
      goto L_08960838;
    }
L_08960838:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08960868;
    }
    goto L_08960854;
L_08960854:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960888;
      }
      goto L_08960868;
    }
L_08960868:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960888;
      }
      goto L_08960884;
    }
L_08960884:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08960888;
L_08960888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08960890;
    }
L_08960890:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089608ACu);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961C7C;
L_089608AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089608E8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089608E8u) goto L_089608E8;
    return;
L_089608E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_089608F0;
    }
L_089608F0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0896090Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    goto L_08961C7C;
L_0896090C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08960944;
    }
    goto L_08960930;
L_08960930:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0896093Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x0896093Cu) goto L_0896093C;
    return;
L_0896093C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08960944;
L_08960944:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0896097Cu);
    ctx.gpr[4] = (0u | 169u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 152u, 0x088412BCu>(ctx, &aot_mem) && ctx.pc == 0x0896097Cu) goto L_0896097C;
    return;
L_0896097C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0896098Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 530u, 0x08AFE33Cu>(ctx, &aot_mem) && ctx.pc == 0x0896098Cu) goto L_0896098C;
    return;
L_0896098C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089609A0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089609A0u) goto L_089609A0;
    return;
L_089609A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_089609A8;
    }
L_089609A8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089609C4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08961C7C;
L_089609C4:
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
    ctx.gpr[31] = (0x089609F4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 213u, 0x08944E84u>(ctx, &aot_mem) && ctx.pc == 0x089609F4u) goto L_089609F4;
    return;
L_089609F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_089609FC;
    }
L_089609FC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08960A18u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08961C7C;
L_08960A18:
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
    ctx.gpr[31] = (0x08960A48u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 215u, 0x08944EA0u>(ctx, &aot_mem) && ctx.pc == 0x08960A48u) goto L_08960A48;
    return;
L_08960A48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08960A50;
    }
L_08960A50:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08960A6Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08961C7C;
L_08960A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960AB0;
      }
      goto L_08960AA8;
    }
L_08960AA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08960AB4;
      }
      goto L_08960AB0;
    }
L_08960AB0:
    ctx.gpr[4] = (0u | 0u);
    goto L_08960AB4;
L_08960AB4:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08960AE0;
      }
      goto L_08960AD8;
    }
L_08960AD8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960B30;
      }
      goto L_08960AE0;
    }
L_08960AE0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08960B10;
    }
    goto L_08960AFC;
L_08960AFC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960B30;
      }
      goto L_08960B10;
    }
L_08960B10:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960B30;
      }
      goto L_08960B2C;
    }
L_08960B2C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08960B30;
L_08960B30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08960B38;
    }
L_08960B38:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960B50u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961C7C;
L_08960B50:
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
    ctx.gpr[31] = (0x08960B80u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 213u, 0x08944E84u>(ctx, &aot_mem) && ctx.pc == 0x08960B80u) goto L_08960B80;
    return;
L_08960B80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08960B88;
    }
L_08960B88:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960BA0u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961C7C;
L_08960BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960BB8;
      }
      goto L_08960BAC;
    }
L_08960BAC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960BBC;
      }
      goto L_08960BB8;
    }
L_08960BB8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(0u));
    goto L_08960BBC;
L_08960BBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08960BC4;
    }
L_08960BC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(536)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960BD8;
      }
      goto L_08960BD0;
    }
L_08960BD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08960BDC;
      }
      goto L_08960BD8;
    }
L_08960BD8:
    ctx.gpr[4] = (0u | 0u);
    goto L_08960BDC;
L_08960BDC:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08960C08;
      }
      goto L_08960C00;
    }
L_08960C00:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960C58;
      }
      goto L_08960C08;
    }
L_08960C08:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08960C38;
    }
    goto L_08960C24;
L_08960C24:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960C58;
      }
      goto L_08960C38;
    }
L_08960C38:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960C58;
      }
      goto L_08960C54;
    }
L_08960C54:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08960C58;
L_08960C58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08960C60;
    }
L_08960C60:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08960C7Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08961C7C;
L_08960C7C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08960C8Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08960C8Cu) goto L_08960C8C;
    return;
L_08960C8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08960C9Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 665u, 0x0899F71Cu>(ctx, &aot_mem) && ctx.pc == 0x08960C9Cu) goto L_08960C9C;
    return;
L_08960C9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08960CA4;
    }
L_08960CA4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960CC0u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961C7C;
L_08960CC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08960CF8;
      }
      goto L_08960CF0;
    }
L_08960CF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08960CFC;
      }
      goto L_08960CF8;
    }
L_08960CF8:
    ctx.gpr[4] = (0u | 1u);
    goto L_08960CFC;
L_08960CFC:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08960D28;
      }
      goto L_08960D20;
    }
L_08960D20:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960D78;
      }
      goto L_08960D28;
    }
L_08960D28:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08960D58;
    }
    goto L_08960D44;
L_08960D44:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960D78;
      }
      goto L_08960D58;
    }
L_08960D58:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960D78;
      }
      goto L_08960D74;
    }
L_08960D74:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08960D78;
L_08960D78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08960D80;
    }
L_08960D80:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960D9Cu);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961C7C;
L_08960D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08960DD4;
      }
      goto L_08960DCC;
    }
L_08960DCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08960DD8;
      }
      goto L_08960DD4;
    }
L_08960DD4:
    ctx.gpr[4] = (0u | 0u);
    goto L_08960DD8;
L_08960DD8:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08960E04;
      }
      goto L_08960DFC;
    }
L_08960DFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960E54;
      }
      goto L_08960E04;
    }
L_08960E04:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08960E34;
    }
    goto L_08960E20;
L_08960E20:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960E54;
      }
      goto L_08960E34;
    }
L_08960E34:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960E54;
      }
      goto L_08960E50;
    }
L_08960E50:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08960E54;
L_08960E54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08960E5C;
    }
L_08960E5C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960E74u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961C7C;
L_08960E74:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08960E84u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08960E84u) goto L_08960E84;
    return;
L_08960E84:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960ED0;
      }
      goto L_08960E90;
    }
L_08960E90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08960EC0;
      }
      goto L_08960EA0;
    }
L_08960EA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08960EC0;
      }
      goto L_08960EB0;
    }
L_08960EB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 38u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08960EC8;
      }
      goto L_08960EC0;
    }
L_08960EC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08960ED4;
      }
      goto L_08960EC8;
    }
L_08960EC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08960ED4;
      }
      goto L_08960ED0;
    }
L_08960ED0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08960ED4;
L_08960ED4:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08960F00;
      }
      goto L_08960EF8;
    }
L_08960EF8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960F50;
      }
      goto L_08960F00;
    }
L_08960F00:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08960F30;
    }
    goto L_08960F1C;
L_08960F1C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960F50;
      }
      goto L_08960F30;
    }
L_08960F30:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960F50;
      }
      goto L_08960F4C;
    }
L_08960F4C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08960F50;
L_08960F50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08960F58;
    }
L_08960F58:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960F70u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961C7C;
L_08960F70:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x08960F80u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08960F80u) goto L_08960F80;
    return;
L_08960F80:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960FC8;
      }
      goto L_08960F8C;
    }
L_08960F8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    ctx.gpr[6] = (0u | 80u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08960FA8;
      }
      goto L_08960FA0;
    }
L_08960FA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08960FCC;
      }
      goto L_08960FA8;
    }
L_08960FA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960FC0;
      }
      goto L_08960FB8;
    }
L_08960FB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08960FCC;
      }
      goto L_08960FC0;
    }
L_08960FC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08960FCC;
      }
      goto L_08960FC8;
    }
L_08960FC8:
    ctx.gpr[4] = (0u | 1u);
    goto L_08960FCC;
L_08960FCC:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08960FF8;
      }
      goto L_08960FF0;
    }
L_08960FF0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08961048;
      }
      goto L_08960FF8;
    }
L_08960FF8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08961028;
    }
    goto L_08961014;
L_08961014:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08961048;
      }
      goto L_08961028;
    }
L_08961028:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961048;
      }
      goto L_08961044;
    }
L_08961044:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08961048;
L_08961048:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08961050;
    }
L_08961050:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0896106Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08961C7C;
L_0896106C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x0896107Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0896107Cu) goto L_0896107C;
    return;
L_0896107C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(636)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(636), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08961094;
    }
L_08961094:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089610ACu);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961C7C;
L_089610AC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x089610BCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089610BCu) goto L_089610BC;
    return;
L_089610BC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x089610E8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 474u, 0x088868F4u>(ctx, &aot_mem) && ctx.pc == 0x089610E8u) goto L_089610E8;
    return;
L_089610E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_089610F0;
    }
L_089610F0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08961108u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961C7C;
L_08961108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[18] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896114Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x0896114Cu) goto L_0896114C;
    return;
L_0896114C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08961160u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 222u, 0x08871740u>(ctx, &aot_mem) && ctx.pc == 0x08961160u) goto L_08961160;
    return;
L_08961160:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896117C;
      }
      goto L_08961170;
    }
L_08961170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_0896117C;
L_0896117C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0896118Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 299u, 0x089D62A8u>(ctx, &aot_mem) && ctx.pc == 0x0896118Cu) goto L_0896118C;
    return;
L_0896118C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[31] = (0x089611A8u);
    ctx.gpr[5] = (ctx.gpr[17] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 381u, 0x0887240Cu>(ctx, &aot_mem) && ctx.pc == 0x089611A8u) goto L_089611A8;
    return;
L_089611A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089611B8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 213u, 0x088716A8u>(ctx, &aot_mem) && ctx.pc == 0x089611B8u) goto L_089611B8;
    return;
L_089611B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089611C8;
      }
      goto L_089611C0;
    }
L_089611C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089611CC;
      }
      goto L_089611C8;
    }
L_089611C8:
    ctx.gpr[4] = (0u | 0u);
    goto L_089611CC;
L_089611CC:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089611F8;
      }
      goto L_089611F0;
    }
L_089611F0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08961248;
      }
      goto L_089611F8;
    }
L_089611F8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08961228;
    }
    goto L_08961214;
L_08961214:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08961248;
      }
      goto L_08961228;
    }
L_08961228:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961248;
      }
      goto L_08961244;
    }
L_08961244:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08961248;
L_08961248:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08961250;
    }
L_08961250:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08961268u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961C7C;
L_08961268:
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089612CC;
      }
      goto L_089612A0;
    }
L_089612A0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x089612ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x089612ACu) goto L_089612AC;
    return;
L_089612AC:
    ctx.gpr[31] = (0x089612B4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1027u, 0x08A97D38u>(ctx, &aot_mem) && ctx.pc == 0x089612B4u) goto L_089612B4;
    return;
L_089612B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089612C4;
      }
      goto L_089612BC;
    }
L_089612BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089612D0;
      }
      goto L_089612C4;
    }
L_089612C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089612D0;
      }
      goto L_089612CC;
    }
L_089612CC:
    ctx.gpr[4] = (0u | 0u);
    goto L_089612D0;
L_089612D0:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089612FC;
      }
      goto L_089612F4;
    }
L_089612F4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896134C;
      }
      goto L_089612FC;
    }
L_089612FC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0896132C;
    }
    goto L_08961318;
L_08961318:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896134C;
      }
      goto L_0896132C;
    }
L_0896132C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896134C;
      }
      goto L_08961348;
    }
L_08961348:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0896134C;
L_0896134C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08961354;
    }
L_08961354:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08961370u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08961C7C;
L_08961370:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08961380u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08961380u) goto L_08961380;
    return;
L_08961380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089613B8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 310u, 0x0899DDECu>(ctx, &aot_mem) && ctx.pc == 0x089613B8u) goto L_089613B8;
    return;
L_089613B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089613C4;
      }
      goto L_089613C0;
    }
L_089613C0:
    ctx.gpr[17] = (0u | 1u);
    goto L_089613C4;
L_089613C4:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_089613F0;
      }
      goto L_089613E8;
    }
L_089613E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08961440;
      }
      goto L_089613F0;
    }
L_089613F0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08961420;
    }
    goto L_0896140C;
L_0896140C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08961440;
      }
      goto L_08961420;
    }
L_08961420:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961440;
      }
      goto L_0896143C;
    }
L_0896143C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08961440;
L_08961440:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08961448;
    }
L_08961448:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08961460u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961C7C;
L_08961460:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08961470u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08961470u) goto L_08961470;
    return;
L_08961470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896148C;
      }
      goto L_08961484;
    }
L_08961484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08961490;
      }
      goto L_0896148C;
    }
L_0896148C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08961490;
L_08961490:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089614BC;
      }
      goto L_089614B4;
    }
L_089614B4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896150C;
      }
      goto L_089614BC;
    }
L_089614BC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089614EC;
    }
    goto L_089614D8;
L_089614D8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896150C;
      }
      goto L_089614EC;
    }
L_089614EC:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896150C;
      }
      goto L_08961508;
    }
L_08961508:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0896150C;
L_0896150C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08961514;
    }
L_08961514:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08961530u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_08961C7C;
L_08961530:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x08961540u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08961540u) goto L_08961540;
    return;
L_08961540:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08961698;
      }
      goto L_08961558;
    }
L_08961558:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089615B0;
      }
      goto L_08961564;
    }
L_08961564:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089615E0;
      }
      goto L_0896156C;
    }
L_0896156C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08961610;
      }
      goto L_08961574;
    }
L_08961574:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08961640;
      }
      goto L_0896157C;
    }
L_0896157C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08961670;
      }
      goto L_08961584;
    }
L_08961584:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089615A8;
      }
      goto L_0896159C;
    }
L_0896159C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    goto L_089615A8;
L_089615A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961698;
      }
      goto L_089615B0;
    }
L_089615B0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089615D8;
      }
      goto L_089615C8;
    }
L_089615C8:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_089615D8;
L_089615D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961698;
      }
      goto L_089615E0;
    }
L_089615E0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08961608;
      }
      goto L_089615F8;
    }
L_089615F8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08961608;
L_08961608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961698;
      }
      goto L_08961610;
    }
L_08961610:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08961638;
      }
      goto L_08961628;
    }
L_08961628:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08961638;
L_08961638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961698;
      }
      goto L_08961640;
    }
L_08961640:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08961668;
      }
      goto L_08961658;
    }
L_08961658:
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08961668;
L_08961668:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961698;
      }
      goto L_08961670;
    }
L_08961670:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08961698;
      }
      goto L_08961688;
    }
L_08961688:
    ctx.gpr[4] = (0u | 17u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08961698;
L_08961698:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089616E8;
      }
      goto L_089616B0;
    }
L_089616B0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089616BCu);
    ctx.gpr[4] = (0u | 2128u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 251u, 0x0899DA4Cu>(ctx, &aot_mem) && ctx.pc == 0x089616BCu) goto L_089616BC;
    return;
L_089616BC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089616E0;
      }
      goto L_089616C8;
    }
L_089616C8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089616DCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 738u, 0x08A8F7E4u>(ctx, &aot_mem) && ctx.pc == 0x089616DCu) goto L_089616DC;
    return;
L_089616DC:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_089616E0;
L_089616E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961778;
      }
      goto L_089616E8;
    }
L_089616E8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_08961714;
      }
      goto L_08961700;
    }
L_08961700:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08961748;
      }
      goto L_08961714;
    }
L_08961714:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08961720u);
    ctx.gpr[4] = (0u | 2096u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 251u, 0x0899DA4Cu>(ctx, &aot_mem) && ctx.pc == 0x08961720u) goto L_08961720;
    return;
L_08961720:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_08961740;
      }
      goto L_0896172C;
    }
L_0896172C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0896173Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 442u, 0x0894E898u>(ctx, &aot_mem) && ctx.pc == 0x0896173Cu) goto L_0896173C;
    return;
L_0896173C:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_08961740;
L_08961740:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961778;
      }
      goto L_08961748;
    }
L_08961748:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08961754u);
    ctx.gpr[4] = (0u | 2160u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 251u, 0x0899DA4Cu>(ctx, &aot_mem) && ctx.pc == 0x08961754u) goto L_08961754;
    return;
L_08961754:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_08961778;
      }
      goto L_08961760;
    }
L_08961760:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08961774u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 147u, 0x089FD534u>(ctx, &aot_mem) && ctx.pc == 0x08961774u) goto L_08961774;
    return;
L_08961774:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_08961778;
L_08961778:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (65534u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65504u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089617E8;
      }
      goto L_089617D4;
    }
L_089617D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089617E8;
L_089617E8:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08961834u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x08961834u) goto L_08961834;
    return;
L_08961834:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x08961848u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08961848u) goto L_08961848;
    return;
L_08961848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 50u);
      if (branch_taken) {
          goto L_0896188C;
      }
      goto L_08961858;
    }
L_08961858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961880;
      }
      goto L_08961864;
    }
L_08961864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_08961880;
    }
    goto L_08961870;
L_08961870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x0896187Cu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0896187Cu) goto L_0896187C;
    return;
L_0896187C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_08961880;
L_08961880:
    ctx.gpr[31] = (0x08961888u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x08961888u) goto L_08961888;
    return;
L_08961888:
    ctx.gpr[4] = (0u | 50u);
    goto L_0896188C;
L_0896188C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(504), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(504));
    ctx.gpr[31] = (0x089618A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089618A0u) goto L_089618A0;
    return;
L_089618A0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1332), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1332));
    ctx.gpr[31] = (0x089618B0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089618B0u) goto L_089618B0;
    return;
L_089618B0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089618E4;
      }
      goto L_089618DC;
    }
L_089618DC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089618E4;
L_089618E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 9u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08961920u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 728u, 0x08887A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08961920u) goto L_08961920;
    return;
L_08961920:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[31] = (0x08961930u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 282u, 0x08871B18u>(ctx, &aot_mem) && ctx.pc == 0x08961930u) goto L_08961930;
    return;
L_08961930:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(326), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x0896193Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x0896193Cu) goto L_0896193C;
    return;
L_0896193C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300), ctx.gpr[5]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x0896195Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 493u, 0x08AFE0A8u>(ctx, &aot_mem) && ctx.pc == 0x0896195Cu) goto L_0896195C;
    return;
L_0896195C:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08961974u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08961974u) goto L_08961974;
    return;
L_08961974:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961998;
      }
      goto L_08961980;
    }
L_08961980:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x08961998u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 459u, 0x089571E0u>(ctx, &aot_mem) && ctx.pc == 0x08961998u) goto L_08961998;
    return;
L_08961998:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_089619A0;
    }
L_089619A0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089619BCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08961C7C;
L_089619BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08961A14;
      }
      goto L_08961A04;
    }
L_08961A04:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08961A10u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08961A10u) goto L_08961A10;
    return;
L_08961A10:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08961A14;
L_08961A14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961AD0;
      }
      goto L_08961A24;
    }
L_08961A24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961AD0;
      }
      goto L_08961A34;
    }
L_08961A34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961A60;
      }
      goto L_08961A4C;
    }
L_08961A4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    goto L_08961A60;
L_08961A60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08961AC4;
      }
      goto L_08961A74;
    }
L_08961A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08961A80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 735u, 0x0889F878u>(ctx, &aot_mem) && ctx.pc == 0x08961A80u) goto L_08961A80;
    return;
L_08961A80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08961AD0;
      }
      goto L_08961AC4;
    }
L_08961AC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08961AD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 668u, 0x0889F3FCu>(ctx, &aot_mem) && ctx.pc == 0x08961AD0u) goto L_08961AD0;
    return;
L_08961AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08961ADCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 768u, 0x08887CACu>(ctx, &aot_mem) && ctx.pc == 0x08961ADCu) goto L_08961ADC;
    return;
L_08961ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1332), 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08961B34;
      }
      goto L_08961B00;
    }
L_08961B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961B28;
      }
      goto L_08961B0C;
    }
L_08961B0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_08961B28;
    }
    goto L_08961B18;
L_08961B18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08961B24u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08961B24u) goto L_08961B24;
    return;
L_08961B24:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_08961B28;
L_08961B28:
    ctx.gpr[31] = (0x08961B30u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x08961B30u) goto L_08961B30;
    return;
L_08961B30:
    ctx.gpr[4] = (0u | 1u);
    goto L_08961B34;
L_08961B34:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 9u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08961B84u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 717u, 0x0899FA70u>(ctx, &aot_mem) && ctx.pc == 0x08961B84u) goto L_08961B84;
    return;
L_08961B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961BA8;
      }
      goto L_08961B94;
    }
L_08961B94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08961BA8;
L_08961BA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(748), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08961BBCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x08961BBCu) goto L_08961BBC;
    return;
L_08961BBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08961BE0u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x08961BE0u) goto L_08961BE0;
    return;
L_08961BE0:
    ctx.gpr[31] = (0x08961BE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 554u, 0x089A258Cu>(ctx, &aot_mem) && ctx.pc == 0x08961BE8u) goto L_08961BE8;
    return;
L_08961BE8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08961BF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 516u, 0x08A5ED8Cu>(ctx, &aot_mem) && ctx.pc == 0x08961BF4u) goto L_08961BF4;
    return;
L_08961BF4:
    ctx.gpr[31] = (0x08961BFCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FD14u>(ctx, &aot_mem) && ctx.pc == 0x08961BFCu) goto L_08961BFC;
    return;
L_08961BFC:
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[0];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(104));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08961C30u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961C30u) goto L_08961C30;
    return;
L_08961C30:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08961C48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 509u, 0x08882624u>(ctx, &aot_mem) && ctx.pc == 0x08961C48u) goto L_08961C48;
    return;
L_08961C48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961C54;
      }
      goto L_08961C50;
    }
L_08961C50:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08961C54;
L_08961C54:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961C7C:
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<29u>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[12] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29612));
    goto L_08961C9C;
L_08961C9C:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[10] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08961CC0;
      }
      goto L_08961CAC;
    }
L_08961CAC:
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[12]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[10];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961CC0:
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.set_vfpu_scalar_bits_ct<93u>(ctx.gpr[31]);
    ctx.set_vfpu_scalar_bits_ct<92u>(ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<124u>(ctx.gpr[7]);
    ctx.set_vfpu_scalar_bits_ct<30u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<62u>(ctx.gpr[12]);
    ctx.gpr[8] = (ctx.gpr[5] - ctx.gpr[9]);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<29u>());
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[31] = (0x08961CECu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 433u, 0x08956FC8u>(ctx, &aot_mem) && ctx.pc == 0x08961CECu) goto L_08961CEC;
    return;
L_08961CEC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<29u>());
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<92u>());
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<124u>());
    ctx.gpr[9] = (ctx.vfpu_scalar_bits_ct<30u>());
    ctx.gpr[12] = (ctx.vfpu_scalar_bits_ct<62u>());
    ctx.gpr[31] = (ctx.vfpu_scalar_bits_ct<93u>());
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08961C9C;
      }
      goto L_08961D1C;
    }
L_08961D1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961E08;
      }
      goto L_08961D24;
    }
L_08961D24:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), 0u);
      if (branch_taken) {
          goto L_08961C9C;
      }
      goto L_08961D34;
    }
L_08961D34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961E08;
      }
      goto L_08961D3C;
    }
L_08961D3C:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (ctx.gpr[10] << 24u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08961C9C;
      }
      goto L_08961D54;
    }
L_08961D54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961E08;
      }
      goto L_08961D5C;
    }
L_08961D5C:
    ctx.gpr[10] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(1), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[10]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.gpr[10] = (ctx.gpr[10] << 16u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08961C9C;
      }
      goto L_08961D78;
    }
L_08961D78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961E08;
      }
      goto L_08961D80;
    }
L_08961D80:
    ctx.gpr[10] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(1), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[10]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (ctx.gpr[10] << 8u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08961C9C;
      }
      goto L_08961D9C;
    }
L_08961D9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961E08;
      }
      goto L_08961DA4;
    }
L_08961DA4:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08961C9C;
      }
      goto L_08961DB8;
    }
L_08961DB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961E08;
      }
      goto L_08961DC0;
    }
L_08961DC0:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = ((ctx.gpr[10] & ~0xFFFFFF00u) | ((ctx.gpr[11] & 0x00FFFFFFu) << 8u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08961C9C;
      }
      goto L_08961DDC;
    }
L_08961DDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961E08;
      }
      goto L_08961DE4;
    }
L_08961DE4:
    ctx.gpr[10] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(1), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[10]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08961C9C;
      }
      goto L_08961DFC;
    }
L_08961DFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961E08;
      }
      goto L_08961E04;
    }
L_08961E04:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08961E08;
L_08961E08:
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<29u>());
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961E20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[31] = (0x08961E74u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31800));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 432u, 0x08956F9Cu>(ctx, &aot_mem) && ctx.pc == 0x08961E74u) goto L_08961E74;
    return;
L_08961E74:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-7132), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7272), 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27856));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-7132));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[20] = (2269u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4656));
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4912));
    goto L_08961EBC;
L_08961EBC:
    ctx.gpr[31] = (0x08961EC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 546u, 0x08957914u>(ctx, &aot_mem) && ctx.pc == 0x08961EC4u) goto L_08961EC4;
    return;
L_08961EC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08961ED0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 636u, 0x08957D94u>(ctx, &aot_mem) && ctx.pc == 0x08961ED0u) goto L_08961ED0;
    return;
L_08961ED0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(540));
      if (branch_taken) {
          goto L_08961EBC;
      }
      goto L_08961EE0;
    }
L_08961EE0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x08961EECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x089571ACu>(ctx, &aot_mem) && ctx.pc == 0x08961EECu) goto L_08961EEC;
    return;
L_08961EEC:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[31] = (0x08961EF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24272));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 470u, 0x08957304u>(ctx, &aot_mem) && ctx.pc == 0x08961EF8u) goto L_08961EF8;
    return;
L_08961EF8:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[31] = (0x08961F04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24224));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 506u, 0x08957544u>(ctx, &aot_mem) && ctx.pc == 0x08961F04u) goto L_08961F04;
    return;
L_08961F04:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6820), ctx.gpr[22]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6822), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7308), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6828), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7268), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    goto L_08961F34;
L_08961F34:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08961F34;
      }
      goto L_08961F4C;
    }
L_08961F4C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7304), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7124), ctx.gpr[22]);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08961F68;
L_08961F68:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_08961F70;
L_08961F70:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08961F70;
      }
      goto L_08961F84;
    }
L_08961F84:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 305 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08961F68;
      }
      goto L_08961F9C;
    }
L_08961F9C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-7292), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_08961FC0;
      }
      goto L_08961FB4;
    }
L_08961FB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29620)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896201C;
      }
      goto L_08961FC0;
    }
L_08961FC0:
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-26768));
    ctx.gpr[20] = (2231u << 16u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13456));
    ctx.gpr[21] = (2277u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-23456));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[23] = (2274u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(23232));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22688));
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(15016));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0896205C;
      }
      goto L_08962014;
    }
L_08962014:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962064;
      }
      goto L_0896201C;
    }
L_0896201C:
    ctx.gpr[31] = (0x08962024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 152u, 0x08974A98u>(ctx, &aot_mem) && ctx.pc == 0x08962024u) goto L_08962024;
    return;
L_08962024:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08962030u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 215u, 0x08900D14u>(ctx, &aot_mem) && ctx.pc == 0x08962030u) goto L_08962030;
    return;
L_08962030:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x0896203Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 57u, 0x0883C3B4u>(ctx, &aot_mem) && ctx.pc == 0x0896203Cu) goto L_0896203C;
    return;
L_0896203C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6796), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6792), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6788), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[30] | 0u);
      if (branch_taken) {
          goto L_089624E0;
      }
      goto L_0896205C;
    }
L_0896205C:
    ctx.gpr[31] = (0x08962064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 10u, 0x08958100u>(ctx, &aot_mem) && ctx.pc == 0x08962064u) goto L_08962064;
    return;
L_08962064:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08962070u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31780));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 189u, 0x088B9044u>(ctx, &aot_mem) && ctx.pc == 0x08962070u) goto L_08962070;
    return;
L_08962070:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31772));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[31] = (0x08962084u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31760));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 209u, 0x088B91A0u>(ctx, &aot_mem) && ctx.pc == 0x08962084u) goto L_08962084;
    return;
L_08962084:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-7260));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08962098u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 212u, 0x088B91E0u>(ctx, &aot_mem) && ctx.pc == 0x08962098u) goto L_08962098;
    return;
L_08962098:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089620ACu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 212u, 0x088B91E0u>(ctx, &aot_mem) && ctx.pc == 0x089620ACu) goto L_089620AC;
    return;
L_089620AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089620C4;
      }
      goto L_089620B8;
    }
L_089620B8:
    ctx.gpr[31] = (0x089620C0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 778u, 0x08A0B87Cu>(ctx, &aot_mem) && ctx.pc == 0x089620C0u) goto L_089620C0;
    return;
L_089620C0:
    ctx.gpr[4] = (2229u << 16u);
    goto L_089620C4;
L_089620C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896212C;
      }
      goto L_089620D0;
    }
L_089620D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7260)));
    ctx.gpr[31] = (0x089620E0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x089620E0u) goto L_089620E0;
    return;
L_089620E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7260)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089620F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x089620F4u) goto L_089620F4;
    return;
L_089620F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29572), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-29572));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08962108u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AE0u>(ctx, &aot_mem) && ctx.pc == 0x08962108u) goto L_08962108;
    return;
L_08962108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-9392), 0u);
      if (branch_taken) {
          goto L_08962174;
      }
      goto L_0896212C;
    }
L_0896212C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7260)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31756));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08962158u);
    ctx.gpr[9] = (0u | 0u);
    ctx.pc = 0x08B0BC8Cu;
    return;
L_08962158:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-9392), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0896216Cu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BC9Cu;
    return;
L_0896216C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29572), ctx.gpr[4]);
    goto L_08962174;
L_08962174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7260)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x0896218Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x0896218Cu) goto L_0896218C;
    return;
L_0896218C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7260)));
    ctx.gpr[31] = (0x0896219Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 212u, 0x088B91E0u>(ctx, &aot_mem) && ctx.pc == 0x0896219Cu) goto L_0896219C;
    return;
L_0896219C:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29616), ctx.gpr[18]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089621B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31744));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 189u, 0x088B9044u>(ctx, &aot_mem) && ctx.pc == 0x089621B0u) goto L_089621B0;
    return;
L_089621B0:
    ctx.gpr[31] = (0x089621B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 207u, 0x0887CE54u>(ctx, &aot_mem) && ctx.pc == 0x089621B8u) goto L_089621B8;
    return;
L_089621B8:
    ctx.gpr[31] = (0x089621C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 213u, 0x0887CFB8u>(ctx, &aot_mem) && ctx.pc == 0x089621C0u) goto L_089621C0;
    return;
L_089621C0:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7134), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7264), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (0u | 0u);
    goto L_089621D8;
L_089621D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 150 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089621D8;
      }
      goto L_089621EC;
    }
L_089621EC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7284), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-7280), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-7278), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x0896220Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 218u, 0x0887D04Cu>(ctx, &aot_mem) && ctx.pc == 0x0896220Cu) goto L_0896220C;
    return;
L_0896220C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7126), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6812), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7263), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7148), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6816), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (ctx.gpr[7] + ctx.gpr[21]);
    goto L_08962260;
L_08962260:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[30]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08962260;
      }
      goto L_0896228C;
    }
L_0896228C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (16117u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16271u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (17206u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17440u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(8));
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[18]);
    goto L_089622D4;
L_089622D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 225u);
    ctx.gpr[6] = (0u | 225u);
    ctx.gpr[7] = (0u | 225u);
    ctx.gpr[31] = (0x089622F4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089622F4u) goto L_089622F4;
    return;
L_089622F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[7] = (0u | 128u);
    ctx.gpr[31] = (0x08962348u);
    ctx.gpr[8] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08962348u) goto L_08962348;
    return;
L_08962348:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[23]);
    goto L_08962388;
L_08962388:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08962388;
      }
      goto L_0896239C;
    }
L_0896239C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(244));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(244));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(244));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(244));
      if (branch_taken) {
          goto L_089622D4;
      }
      goto L_089623B8;
    }
L_089623B8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-7128), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7135), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_089623E4;
L_089623E4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08962418u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08962418u) goto L_08962418;
    return;
L_08962418:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089623E4;
      }
      goto L_0896244C;
    }
L_0896244C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6824), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896248C;
      }
      goto L_08962464;
    }
L_08962464:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14056));
    goto L_08962470;
L_08962470:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 80 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08962470;
      }
      goto L_0896248C;
    }
L_0896248C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (0u | 0u);
    goto L_08962494;
L_08962494:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 52 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08962494;
      }
      goto L_089624A8;
    }
L_089624A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089624CC;
      }
      goto L_089624B4;
    }
L_089624B4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089624C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31740));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 432u, 0x08956F9Cu>(ctx, &aot_mem) && ctx.pc == 0x089624C0u) goto L_089624C0;
    return;
L_089624C0:
    ctx.gpr[31] = (0x089624C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 136u, 0x088B0D54u>(ctx, &aot_mem) && ctx.pc == 0x089624C8u) goto L_089624C8;
    return;
L_089624C8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_089624CC;
L_089624CC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7384), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7384));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    goto L_089624E0;
L_089624E0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962524:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[31]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089625C8;
      }
      goto L_08962574;
    }
L_08962574:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[30] = (0u | 1u);
      if (branch_taken) {
          goto L_089625D0;
      }
      goto L_089625B4;
    }
L_089625B4:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089625EC;
      }
      goto L_089625C8;
    }
L_089625C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962954;
      }
      goto L_089625D0;
    }
L_089625D0:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[4]);
    goto L_089625EC;
L_089625EC:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[31] = (0x089625F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24272));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 473u, 0x08957338u>(ctx, &aot_mem) && ctx.pc == 0x089625F8u) goto L_089625F8;
    return;
L_089625F8:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[31] = (0x08962604u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24224));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 509u, 0x089575B8u>(ctx, &aot_mem) && ctx.pc == 0x08962604u) goto L_08962604;
    return;
L_08962604:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x08962610u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 95u, 0x089586BCu>(ctx, &aot_mem) && ctx.pc == 0x08962610u) goto L_08962610;
    return;
L_08962610:
    ctx.gpr[31] = (0x08962618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 233u, 0x089E1580u>(ctx, &aot_mem) && ctx.pc == 0x08962618u) goto L_08962618;
    return;
L_08962618:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-7126)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7135)));
      if (branch_taken) {
          goto L_0896262C;
      }
      goto L_08962624;
    }
L_08962624:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-7126), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0896262C;
L_0896262C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_089627F0;
      }
      goto L_08962634;
    }
L_08962634:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (2274u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(23232));
    ctx.gpr[4] = (16117u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16271u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (17206u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17440u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[22] = (0u | 1u);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    goto L_08962680;
L_08962680:
    ctx.gpr[16] = (ctx.gpr[18] << 8u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[21] = (ctx.gpr[16] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 225u);
    ctx.gpr[6] = (0u | 225u);
    ctx.gpr[7] = (0u | 225u);
    ctx.gpr[31] = (0x089626C0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089626C0u) goto L_089626C0;
    return;
L_089626C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[21] = (ctx.gpr[16] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[7] = (0u | 128u);
    ctx.gpr[31] = (0x08962718u);
    ctx.gpr[8] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08962718u) goto L_08962718;
    return;
L_08962718:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    goto L_08962758;
L_08962758:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962758;
      }
      goto L_0896277C;
    }
L_0896277C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 48 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
        goto L_08962680;
    }
    goto L_08962790;
L_08962790:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-7128), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22688));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-7135)));
    goto L_089627AC;
L_089627AC:
    ctx.gpr[8] = (ctx.gpr[5] << 3u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089627AC;
      }
      goto L_089627D8;
    }
L_089627D8:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-6824), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_089627F0;
      }
      goto L_089627E8;
    }
L_089627E8:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-7135), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2228u << 16u);
    goto L_089627F0;
L_089627F0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29564), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7272)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (2228u << 16u);
        goto L_08962850;
    }
    goto L_08962804;
L_08962804:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(512), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(516), ctx.gpr[5]);
    ctx.gpr[31] = (0x08962828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 552u, 0x089579D0u>(ctx, &aot_mem) && ctx.pc == 0x08962828u) goto L_08962828;
    return;
L_08962828:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962844;
      }
      goto L_08962834;
    }
L_08962834:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962844;
      }
      goto L_08962840;
    }
L_08962840:
    ctx.gpr[4] = (0u | 0u);
    goto L_08962844;
L_08962844:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962804;
      }
      goto L_0896284C;
    }
L_0896284C:
    ctx.gpr[4] = (2228u << 16u);
    goto L_08962850;
L_08962850:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29564), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6804)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0896294C;
      }
      goto L_08962898;
    }
L_08962898:
    ctx.gpr[5] = (17377u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_089628AC;
L_089628AC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08962910u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x08962910u) goto L_08962910;
    return;
L_08962910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089628AC;
      }
      goto L_0896294C;
    }
L_0896294C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276), static_cast<std::uint8_t>(0u));
    goto L_08962954;
L_08962954:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962998:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29652)));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29648), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29656)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29644), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29640), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29636), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29632), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29628)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29624), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2276u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-27872), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27872));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x08962A54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 454u, 0x08957184u>(ctx, &aot_mem) && ctx.pc == 0x08962A54u) goto L_08962A54;
    return;
L_08962A54:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22304));
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(14208));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08962A70u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x08962A70u) goto L_08962A70;
    return;
L_08962A70:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08962A7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29544));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x08962A7Cu) goto L_08962A7C;
    return;
L_08962A7C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6804), 0u);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08962A90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29532));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x08962A90u) goto L_08962A90;
    return;
L_08962A90:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962A9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08962ABCu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 97u, 0x0890C828u>(ctx, &aot_mem) && ctx.pc == 0x08962ABCu) goto L_08962ABC;
    return;
L_08962ABC:
    ctx.gpr[5] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08962AD0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30204));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 409u, 0x08A4B4B8u>(ctx, &aot_mem) && ctx.pc == 0x08962AD0u) goto L_08962AD0;
    return;
L_08962AD0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08962ADCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 34u, 0x0890C354u>(ctx, &aot_mem) && ctx.pc == 0x08962ADCu) goto L_08962ADC;
    return;
L_08962ADC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962AF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x08962B24u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 575u, 0x08ACE8B8u>(ctx, &aot_mem) && ctx.pc == 0x08962B24u) goto L_08962B24;
    return;
L_08962B24:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08962B34u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08962B34u) goto L_08962B34;
    return;
L_08962B34:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08962BB0;
      }
      goto L_08962B40;
    }
L_08962B40:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08962B58u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 717u, 0x089BF724u>(ctx, &aot_mem) && ctx.pc == 0x08962B58u) goto L_08962B58;
    return;
L_08962B58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08962B64u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08962B64u) goto L_08962B64;
    return;
L_08962B64:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08962B80u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 828u, 0x08967ED0u>(ctx, &aot_mem) && ctx.pc == 0x08962B80u) goto L_08962B80;
    return;
L_08962B80:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08962B90u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 51u, 0x089683F0u>(ctx, &aot_mem) && ctx.pc == 0x08962B90u) goto L_08962B90;
    return;
L_08962B90:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08962B9Cu);
    ctx.gpr[4] = (0u | 116u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08962B9Cu) goto L_08962B9C;
    return;
L_08962B9C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08962BB8;
      }
      goto L_08962BA8;
    }
L_08962BA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962BC4;
      }
      goto L_08962BB0;
    }
L_08962BB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08962C28;
      }
      goto L_08962BB8;
    }
L_08962BB8:
    ctx.gpr[31] = (0x08962BC0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 822u, 0x08A0BC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08962BC0u) goto L_08962BC0;
    return;
L_08962BC0:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08962BC4;
L_08962BC4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x08962BD8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 75u, 0x089C052Cu>(ctx, &aot_mem) && ctx.pc == 0x08962BD8u) goto L_08962BD8;
    return;
L_08962BD8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08962BE4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 429u, 0x08A5A3FCu>(ctx, &aot_mem) && ctx.pc == 0x08962BE4u) goto L_08962BE4;
    return;
L_08962BE4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08962BF0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 644u, 0x088A7DA8u>(ctx, &aot_mem) && ctx.pc == 0x08962BF0u) goto L_08962BF0;
    return;
L_08962BF0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08962BFCu);
    ctx.gpr[17] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x08962BFCu) goto L_08962BFC;
    return;
L_08962BFC:
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[5] = (ctx.gpr[2] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08962C24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08962A9C;
L_08962C24:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    goto L_08962C28;
L_08962C28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962C4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x08962C84u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 575u, 0x08ACE8B8u>(ctx, &aot_mem) && ctx.pc == 0x08962C84u) goto L_08962C84;
    return;
L_08962C84:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08962C94u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08962C94u) goto L_08962C94;
    return;
L_08962C94:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08962CDC;
      }
      goto L_08962CA0;
    }
L_08962CA0:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08962CB8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 717u, 0x089BF724u>(ctx, &aot_mem) && ctx.pc == 0x08962CB8u) goto L_08962CB8;
    return;
L_08962CB8:
    ctx.gpr[18] = (0u | 5u);
    ctx.gpr[31] = (0x08962CC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08962CC4u) goto L_08962CC4;
    return;
L_08962CC4:
    ctx.gpr[17] = (2277u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-22240));
      if (branch_taken) {
          goto L_08962CE4;
      }
      goto L_08962CD4;
    }
L_08962CD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962CF8;
      }
      goto L_08962CDC;
    }
L_08962CDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08962E24;
      }
      goto L_08962CE4;
    }
L_08962CE4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08962CF0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08962CF0u) goto L_08962CF0;
    return;
L_08962CF0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08962CF8;
L_08962CF8:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08962D14u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 828u, 0x08967ED0u>(ctx, &aot_mem) && ctx.pc == 0x08962D14u) goto L_08962D14;
    return;
L_08962D14:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08962D20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08962D20u) goto L_08962D20;
    return;
L_08962D20:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962D54;
      }
      goto L_08962D2C;
    }
L_08962D2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08962D38u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08962D38u) goto L_08962D38;
    return;
L_08962D38:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08962D48u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 81u, 0x089685DCu>(ctx, &aot_mem) && ctx.pc == 0x08962D48u) goto L_08962D48;
    return;
L_08962D48:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08962D54u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 51u, 0x089683F0u>(ctx, &aot_mem) && ctx.pc == 0x08962D54u) goto L_08962D54;
    return;
L_08962D54:
    ctx.gpr[31] = (0x08962D5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08962D5Cu) goto L_08962D5C;
    return;
L_08962D5C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08962DA4;
      }
      goto L_08962D68;
    }
L_08962D68:
    ctx.gpr[31] = (0x08962D70u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08962D70u) goto L_08962D70;
    return;
L_08962D70:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08962DA4;
      }
      goto L_08962D78;
    }
L_08962D78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08962D84u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x08962D84u) goto L_08962D84;
    return;
L_08962D84:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08962D90u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x08962D90u) goto L_08962D90;
    return;
L_08962D90:
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[5] = (ctx.gpr[2] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08962DA4;
L_08962DA4:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08962DB0u);
    ctx.gpr[4] = (0u | 116u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08962DB0u) goto L_08962DB0;
    return;
L_08962DB0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08962DC8;
      }
      goto L_08962DBC;
    }
L_08962DBC:
    ctx.gpr[31] = (0x08962DC4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 822u, 0x08A0BC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08962DC4u) goto L_08962DC4;
    return;
L_08962DC4:
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    goto L_08962DC8;
L_08962DC8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x08962DDCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 75u, 0x089C052Cu>(ctx, &aot_mem) && ctx.pc == 0x08962DDCu) goto L_08962DDC;
    return;
L_08962DDC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08962DE8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 429u, 0x08A5A3FCu>(ctx, &aot_mem) && ctx.pc == 0x08962DE8u) goto L_08962DE8;
    return;
L_08962DE8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08962DF4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 644u, 0x088A7DA8u>(ctx, &aot_mem) && ctx.pc == 0x08962DF4u) goto L_08962DF4;
    return;
L_08962DF4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08962E00u);
    ctx.gpr[18] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x08962E00u) goto L_08962E00;
    return;
L_08962E00:
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[5] = (ctx.gpr[2] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08962E20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08962A9C;
L_08962E20:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    goto L_08962E24;
L_08962E24:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962E4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08962E78u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 575u, 0x08ACE8B8u>(ctx, &aot_mem) && ctx.pc == 0x08962E78u) goto L_08962E78;
    return;
L_08962E78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08962E84u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08962E84u) goto L_08962E84;
    return;
L_08962E84:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08962EC8;
      }
      goto L_08962E90;
    }
L_08962E90:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08962EA8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 717u, 0x089BF724u>(ctx, &aot_mem) && ctx.pc == 0x08962EA8u) goto L_08962EA8;
    return;
L_08962EA8:
    ctx.gpr[17] = (0u | 5u);
    ctx.gpr[31] = (0x08962EB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08962EB4u) goto L_08962EB4;
    return;
L_08962EB4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962ED0;
      }
      goto L_08962EC0;
    }
L_08962EC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962EE4;
      }
      goto L_08962EC8;
    }
L_08962EC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08962F54;
      }
      goto L_08962ED0;
    }
L_08962ED0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08962EDCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08962EDCu) goto L_08962EDC;
    return;
L_08962EDC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08962EE4;
L_08962EE4:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08962F00u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 828u, 0x08967ED0u>(ctx, &aot_mem) && ctx.pc == 0x08962F00u) goto L_08962F00;
    return;
L_08962F00:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08962F0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08962F0Cu) goto L_08962F0C;
    return;
L_08962F0C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962F40;
      }
      goto L_08962F18;
    }
L_08962F18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08962F24u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08962F24u) goto L_08962F24;
    return;
L_08962F24:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08962F34u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 81u, 0x089685DCu>(ctx, &aot_mem) && ctx.pc == 0x08962F34u) goto L_08962F34;
    return;
L_08962F34:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08962F40u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 51u, 0x089683F0u>(ctx, &aot_mem) && ctx.pc == 0x08962F40u) goto L_08962F40;
    return;
L_08962F40:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08962F50u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08962F50u) goto L_08962F50;
    return;
L_08962F50:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08962F54;
L_08962F54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962F70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08962F80u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08962F80u) goto L_08962F80;
    return;
L_08962F80:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08962FA8;
    }
    goto L_08962F9C;
L_08962F9C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08962FB8;
      }
      goto L_08962FA8;
    }
L_08962FA8:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08962FB8;
L_08962FB8:
    ctx.gpr[31] = (0x08962FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x08962FC0u) goto L_08962FC0;
    return;
L_08962FC0:
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[5] = (ctx.gpr[2] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962FF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896301Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30204));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 412u, 0x08A4B4E8u>(ctx, &aot_mem) && ctx.pc == 0x0896301Cu) goto L_0896301C;
    return;
L_0896301C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089630A4;
      }
      goto L_08963028;
    }
L_08963028:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089630A4;
      }
      goto L_08963038;
    }
L_08963038:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08963050u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08963050u) goto L_08963050;
    return;
L_08963050:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089630A4;
      }
      goto L_0896305C;
    }
L_0896305C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08963070u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 717u, 0x089BF724u>(ctx, &aot_mem) && ctx.pc == 0x08963070u) goto L_08963070;
    return;
L_08963070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089630A4;
L_089630A4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089630BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089630E0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30204));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 412u, 0x08A4B4E8u>(ctx, &aot_mem) && ctx.pc == 0x089630E0u) goto L_089630E0;
    return;
L_089630E0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896318C;
      }
      goto L_089630EC;
    }
L_089630EC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896318C;
      }
      goto L_089630FC;
    }
L_089630FC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08963114u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08963114u) goto L_08963114;
    return;
L_08963114:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896318C;
      }
      goto L_08963120;
    }
L_08963120:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896312Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x0896312Cu) goto L_0896312C;
    return;
L_0896312C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08963144u);
    ctx.gpr[16] = (ctx.gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x08963144u) goto L_08963144;
    return;
L_08963144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(53)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] << (ctx.gpr[16] & 31u));
      if (branch_taken) {
          goto L_08963180;
      }
      goto L_08963174;
    }
L_08963174:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896318C;
      }
      goto L_08963180;
    }
L_08963180:
    ctx.gpr[6] = (~(ctx.gpr[16] | 0u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0896318C;
L_0896318C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089631A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089631C4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30204));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 412u, 0x08A4B4E8u>(ctx, &aot_mem) && ctx.pc == 0x089631C4u) goto L_089631C4;
    return;
L_089631C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896326C;
      }
      goto L_089631D0;
    }
L_089631D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896326C;
      }
      goto L_089631E0;
    }
L_089631E0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x089631F8u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x089631F8u) goto L_089631F8;
    return;
L_089631F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896326C;
      }
      goto L_08963204;
    }
L_08963204:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08963218u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08963218u) goto L_08963218;
    return;
L_08963218:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08963240;
    }
    goto L_08963234;
L_08963234:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08963250;
      }
      goto L_08963240;
    }
L_08963240:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08963250;
L_08963250:
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0896326C;
L_0896326C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963280:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089632A0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30204));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 412u, 0x08A4B4E8u>(ctx, &aot_mem) && ctx.pc == 0x089632A0u) goto L_089632A0;
    return;
L_089632A0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963308;
      }
      goto L_089632AC;
    }
L_089632AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08963308;
      }
      goto L_089632BC;
    }
L_089632BC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x089632D4u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x089632D4u) goto L_089632D4;
    return;
L_089632D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963304;
      }
      goto L_089632E0;
    }
L_089632E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963304;
      }
      goto L_089632E8;
    }
L_089632E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08963304u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08963304u) goto L_08963304;
    return;
L_08963304:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08963308;
L_08963308:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963320:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08963338u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08963338u) goto L_08963338;
    return;
L_08963338:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08963344u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08963344u) goto L_08963344;
    return;
L_08963344:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963358:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08963378u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08963378u) goto L_08963378;
    return;
L_08963378:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089633A4;
      }
      goto L_08963380;
    }
L_08963380:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896338Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x0896338Cu) goto L_0896338C;
    return;
L_0896338C:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7083), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089633BC;
      }
      goto L_089633A4;
    }
L_089633A4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7083)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089633B8u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x089633B8u) goto L_089633B8;
    return;
L_089633B8:
    ctx.gpr[2] = (0u | 1u);
    goto L_089633BC;
L_089633BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089633D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_089633FC;
      }
      goto L_089633EC;
    }
L_089633EC:
    ctx.gpr[31] = (0x089633F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x089633F4u) goto L_089633F4;
    return;
L_089633F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (2228u << 16u);
    goto L_089633FC;
L_089633FC:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29492));
    ctx.gpr[31] = (0x0896340Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30204));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 5u, 0x0883C058u>(ctx, &aot_mem) && ctx.pc == 0x0896340Cu) goto L_0896340C;
    return;
L_0896340C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_08963428;
      }
      goto L_08963418;
    }
L_08963418:
    ctx.gpr[31] = (0x08963420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08963420u) goto L_08963420;
    return;
L_08963420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (2228u << 16u);
    goto L_08963428;
L_08963428:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08963434u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29468));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 787u, 0x0883BFF4u>(ctx, &aot_mem) && ctx.pc == 0x08963434u) goto L_08963434;
    return;
L_08963434:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963444:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[16] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30592));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-29372)));
    ctx.gpr[17] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-9388));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089634B8;
      }
      goto L_089634A0;
    }
L_089634A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089634B0u);
    ctx.gpr[6] = (0u | 1344u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x089634B0u) goto L_089634B0;
    return;
L_089634B0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-29372), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089634B8;
L_089634B8:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[18] = (2228u << 16u);
    goto L_089634C8;
L_089634C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089634E0;
      }
      goto L_089634D4;
    }
L_089634D4:
    ctx.gpr[31] = (0x089634DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 29u, 0x08968270u>(ctx, &aot_mem) && ctx.pc == 0x089634DCu) goto L_089634DC;
    return;
L_089634DC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_089634E0;
L_089634E0:
    ctx.gpr[31] = (0x089634E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089634E8u) goto L_089634E8;
    return;
L_089634E8:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089638A8;
      }
      goto L_089634F8;
    }
L_089634F8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089638A8;
      }
      goto L_08963504;
    }
L_08963504:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    ctx.gpr[6] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08963524;
      }
      goto L_08963514;
    }
L_08963514:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    ctx.gpr[6] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08963568;
      }
      goto L_08963524;
    }
L_08963524:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08963540u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 828u, 0x08967ED0u>(ctx, &aot_mem) && ctx.pc == 0x08963540u) goto L_08963540;
    return;
L_08963540:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08963550u);
    ctx.gpr[5] = (0u | 45u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 81u, 0x089685DCu>(ctx, &aot_mem) && ctx.pc == 0x08963550u) goto L_08963550;
    return;
L_08963550:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896355Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 51u, 0x089683F0u>(ctx, &aot_mem) && ctx.pc == 0x0896355Cu) goto L_0896355C;
    return;
L_0896355C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089638A8;
      }
      goto L_08963568;
    }
L_08963568:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08963598u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08963598u) goto L_08963598;
    return;
L_08963598:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089638A8;
      }
      goto L_089635AC;
    }
L_089635AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[19] = (0u | 2u);
      if (branch_taken) {
          goto L_089635CC;
      }
      goto L_089635C0;
    }
L_089635C0:
    ctx.gpr[4] = (65504u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8193));
      if (branch_taken) {
          goto L_08963878;
      }
      goto L_089635CC;
    }
L_089635CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089635EC;
      }
      goto L_089635E0;
    }
L_089635E0:
    ctx.gpr[4] = (49152u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16385));
      if (branch_taken) {
          goto L_08963878;
      }
      goto L_089635EC;
    }
L_089635EC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 259u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896369C;
      }
      goto L_089635FC;
    }
L_089635FC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 260u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896369C;
      }
      goto L_0896360C;
    }
L_0896360C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 261u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896369C;
      }
      goto L_0896361C;
    }
L_0896361C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 262u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896369C;
      }
      goto L_0896362C;
    }
L_0896362C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 263u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896369C;
      }
      goto L_0896363C;
    }
L_0896363C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 264u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896369C;
      }
      goto L_0896364C;
    }
L_0896364C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 265u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896369C;
      }
      goto L_0896365C;
    }
L_0896365C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 266u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896369C;
      }
      goto L_0896366C;
    }
L_0896366C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 267u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896369C;
      }
      goto L_0896367C;
    }
L_0896367C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 268u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896369C;
      }
      goto L_0896368C;
    }
L_0896368C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 269u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089636A8;
      }
      goto L_0896369C;
    }
L_0896369C:
    ctx.gpr[4] = (53200u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08963878;
      }
      goto L_089636A8;
    }
L_089636A8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 270u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089636D8;
      }
      goto L_089636B8;
    }
L_089636B8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 271u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089636D8;
      }
      goto L_089636C8;
    }
L_089636C8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 272u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089636E4;
      }
      goto L_089636D8;
    }
L_089636D8:
    ctx.gpr[4] = (40864u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08963878;
      }
      goto L_089636E4;
    }
L_089636E4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 274u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963704;
      }
      goto L_089636F4;
    }
L_089636F4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 275u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963710;
      }
      goto L_08963704;
    }
L_08963704:
    ctx.gpr[4] = (53247u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(255));
      if (branch_taken) {
          goto L_08963878;
      }
      goto L_08963710;
    }
L_08963710:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 277u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963740;
      }
      goto L_08963720;
    }
L_08963720:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 278u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963740;
      }
      goto L_08963730;
    }
L_08963730:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 279u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896374C;
      }
      goto L_08963740;
    }
L_08963740:
    ctx.gpr[4] = (32767u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32767));
      if (branch_taken) {
          goto L_08963878;
      }
      goto L_0896374C;
    }
L_0896374C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 281u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896378C;
      }
      goto L_0896375C;
    }
L_0896375C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 282u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896378C;
      }
      goto L_0896376C;
    }
L_0896376C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 283u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896378C;
      }
      goto L_0896377C;
    }
L_0896377C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 284u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963798;
      }
      goto L_0896378C;
    }
L_0896378C:
    ctx.gpr[4] = (65535u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32767));
      if (branch_taken) {
          goto L_08963878;
      }
      goto L_08963798;
    }
L_08963798:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 280u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089637B8;
      }
      goto L_089637A8;
    }
L_089637A8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 276u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089637C4;
      }
      goto L_089637B8;
    }
L_089637B8:
    ctx.gpr[4] = (65487u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32767));
      if (branch_taken) {
          goto L_08963878;
      }
      goto L_089637C4;
    }
L_089637C4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 287u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963804;
      }
      goto L_089637D4;
    }
L_089637D4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 288u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963804;
      }
      goto L_089637E4;
    }
L_089637E4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 289u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963804;
      }
      goto L_089637F4;
    }
L_089637F4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 290u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963810;
      }
      goto L_08963804;
    }
L_08963804:
    ctx.gpr[4] = (65440u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08963878;
      }
      goto L_08963810;
    }
L_08963810:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 285u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963830;
      }
      goto L_08963820;
    }
L_08963820:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 286u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896383C;
      }
      goto L_08963830;
    }
L_08963830:
    ctx.gpr[4] = (65408u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12289));
      if (branch_taken) {
          goto L_08963878;
      }
      goto L_0896383C;
    }
L_0896383C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(278)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08963864;
      }
      goto L_08963850;
    }
L_08963850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08963874;
      }
      goto L_08963864;
    }
L_08963864:
    ctx.gpr[4] = (46588u << 16u);
    ctx.gpr[19] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(255));
      if (branch_taken) {
          goto L_08963878;
      }
      goto L_08963874;
    }
L_08963874:
    ctx.gpr[4] = (0u | 1u);
    goto L_08963878;
L_08963878:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08963894u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 828u, 0x08967ED0u>(ctx, &aot_mem) && ctx.pc == 0x08963894u) goto L_08963894;
    return;
L_08963894:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089638A4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 51u, 0x089683F0u>(ctx, &aot_mem) && ctx.pc == 0x089638A4u) goto L_089638A4;
    return;
L_089638A4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_089638A8;
L_089638A8:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[21] < static_cast<std::uint32_t>(336) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089634C8;
      }
      goto L_089638BC;
    }
L_089638BC:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089638F4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29516)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29520)));
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.gpr[8] = (2228u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2228u << 16u);
    ctx.gpr[11] = (2228u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-29512), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-29504), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-29508), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29500), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896396C:
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
L_08963998:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x089639C0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x089639C0u) goto L_089639C0;
    return;
L_089639C0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089639E0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 717u, 0x089BF724u>(ctx, &aot_mem) && ctx.pc == 0x089639E0u) goto L_089639E0;
    return;
L_089639E0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089639ECu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x089639ECu) goto L_089639EC;
    return;
L_089639EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089639FCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 550u, 0x08AB7624u>(ctx, &aot_mem) && ctx.pc == 0x089639FCu) goto L_089639FC;
    return;
L_089639FC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08963A0Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 136u, 0x08A4C8F0u>(ctx, &aot_mem) && ctx.pc == 0x08963A0Cu) goto L_08963A0C;
    return;
L_08963A0C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08963A18u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B774u>(ctx, &aot_mem) && ctx.pc == 0x08963A18u) goto L_08963A18;
    return;
L_08963A18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963A70;
      }
      goto L_08963A20;
    }
L_08963A20:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08963A2Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08963A2Cu) goto L_08963A2C;
    return;
L_08963A2C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[31] = (0x08963A48u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B774u>(ctx, &aot_mem) && ctx.pc == 0x08963A48u) goto L_08963A48;
    return;
L_08963A48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963AF8;
      }
      goto L_08963A50;
    }
L_08963A50:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08963A5Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08963A5Cu) goto L_08963A5C;
    return;
L_08963A5C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08963AF8;
      }
      goto L_08963A70;
    }
L_08963A70:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08963A98;
      }
      goto L_08963A84;
    }
L_08963A84:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08963A98;
L_08963A98:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08963AA4u);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(384)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08963AA4u) goto L_08963AA4;
    return;
L_08963AA4:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08963AB8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08963AB8u) goto L_08963AB8;
    return;
L_08963AB8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(368));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(376));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08963AF8;
L_08963AF8:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08963B18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08963B34u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08963B34u) goto L_08963B34;
    return;
L_08963B34:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08963B44u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08963B44u) goto L_08963B44;
    return;
L_08963B44:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08963BD4;
      }
      goto L_08963B4C;
    }
L_08963B4C:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7238)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (2232u << 16u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(39), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(42), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963BB4;
      }
      goto L_08963B90;
    }
L_08963B90:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[31] = (0x08963BACu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 850u, 0x088ABB98u>(ctx, &aot_mem) && ctx.pc == 0x08963BACu) goto L_08963BAC;
    return;
L_08963BAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963BCC;
      }
      goto L_08963BB4;
    }
L_08963BB4:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[6]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08963BCCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x08963BCCu) goto L_08963BCC;
    return;
L_08963BCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08963BD8;
      }
      goto L_08963BD4;
    }
L_08963BD4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08963BD8;
L_08963BD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963BEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08963C0Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08963C0Cu) goto L_08963C0C;
    return;
L_08963C0C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963CC8;
      }
      goto L_08963C18;
    }
L_08963C18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08963CC0;
      }
      goto L_08963C24;
    }
L_08963C24:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7208)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(39), ctx.gpr[6]);
    ctx.gpr[4] = (2226u << 16u);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(42), ctx.gpr[6]);
    ctx.gpr[31] = (0x08963C60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29552));
    goto L_0896396C;
L_08963C60:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08963C78u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x08963C78u) goto L_08963C78;
    return;
L_08963C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08963CA8;
      }
      goto L_08963C8C;
    }
L_08963C8C:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[31] = (0x08963CA8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 57u, 0x08A0CD7Cu>(ctx, &aot_mem) && ctx.pc == 0x08963CA8u) goto L_08963CA8;
    return;
L_08963CA8:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08963CB8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08963CB8u) goto L_08963CB8;
    return;
L_08963CB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08963CE4;
      }
      goto L_08963CC0;
    }
L_08963CC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963CD4;
      }
      goto L_08963CC8;
    }
L_08963CC8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08963CD4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29524));
    goto L_0896396C;
L_08963CD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08963CE0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08963CE0u) goto L_08963CE0;
    return;
L_08963CE0:
    ctx.gpr[2] = (0u | 1u);
    goto L_08963CE4;
L_08963CE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963CFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08963D1Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08963D1Cu) goto L_08963D1C;
    return;
L_08963D1C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963DBC;
      }
      goto L_08963D28;
    }
L_08963D28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08963DBC;
      }
      goto L_08963D34;
    }
L_08963D34:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7207)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (2232u << 16u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(5736));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(39), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(42), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08963D74u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x08963D74u) goto L_08963D74;
    return;
L_08963D74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08963DA4;
      }
      goto L_08963D88;
    }
L_08963D88:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[31] = (0x08963DA4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 59u, 0x08A0CDB0u>(ctx, &aot_mem) && ctx.pc == 0x08963DA4u) goto L_08963DA4;
    return;
L_08963DA4:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08963DB4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08963DB4u) goto L_08963DB4;
    return;
L_08963DB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08963DCC;
      }
      goto L_08963DBC;
    }
L_08963DBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08963DC8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08963DC8u) goto L_08963DC8;
    return;
L_08963DC8:
    ctx.gpr[2] = (0u | 1u);
    goto L_08963DCC;
L_08963DCC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963DE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08963E04u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08963E04u) goto L_08963E04;
    return;
L_08963E04:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963E6C;
      }
      goto L_08963E10;
    }
L_08963E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08963E38;
      }
      goto L_08963E1C;
    }
L_08963E1C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08963E2Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08963E2Cu) goto L_08963E2C;
    return;
L_08963E2C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08963E38;
L_08963E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963E58;
      }
      goto L_08963E54;
    }
L_08963E54:
    ctx.gpr[17] = (0u | 1u);
    goto L_08963E58;
L_08963E58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08963E64u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08963E64u) goto L_08963E64;
    return;
L_08963E64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08963E70;
      }
      goto L_08963E6C;
    }
L_08963E6C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08963E70;
L_08963E70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963E88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08963EA8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08963EA8u) goto L_08963EA8;
    return;
L_08963EA8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963F04;
      }
      goto L_08963EB4;
    }
L_08963EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08963EDC;
      }
      goto L_08963EC0;
    }
L_08963EC0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08963ED0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08963ED0u) goto L_08963ED0;
    return;
L_08963ED0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08963EDC;
L_08963EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(206))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08963EF0;
      }
      goto L_08963EEC;
    }
L_08963EEC:
    ctx.gpr[17] = (0u | 1u);
    goto L_08963EF0;
L_08963EF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08963EFCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08963EFCu) goto L_08963EFC;
    return;
L_08963EFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08963F08;
      }
      goto L_08963F04;
    }
L_08963F04:
    ctx.gpr[2] = (0u | 0u);
    goto L_08963F08;
L_08963F08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963F20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08963F38u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08963F38u) goto L_08963F38;
    return;
L_08963F38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963F68;
      }
      goto L_08963F44;
    }
L_08963F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08963F60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 715u, 0x089BF700u>(ctx, &aot_mem) && ctx.pc == 0x08963F60u) goto L_08963F60;
    return;
L_08963F60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08963F6C;
      }
      goto L_08963F68;
    }
L_08963F68:
    ctx.gpr[2] = (0u | 0u);
    goto L_08963F6C;
L_08963F6C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963F7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08963F9Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08963F9Cu) goto L_08963F9C;
    return;
L_08963F9C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 5u, 0x08964024u>(ctx, &aot_mem); return;
      }
      goto L_08963FA8;
    }
L_08963FA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963FD0;
      }
      goto L_08963FB4;
    }
L_08963FB4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08963FC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08963FC4u) goto L_08963FC4;
    return;
L_08963FC4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08963FD0;
L_08963FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
      if (branch_taken) {
          goto L_08963FF8;
      }
      goto L_08963FDC;
    }
L_08963FDC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[31] = (0x08963FECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08963FECu) goto L_08963FEC;
    return;
L_08963FEC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08963FF8;
L_08963FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (0u | 5u);
    ctx.pc = 0x08964000u; return;
}

void recomp_unit_0087(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0087_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_87(Runtime &runtime) {
    runtime.register_generated_unit(87u, 0x08960000u, 16384u, &recomp_unit_0087, &recomp_unit_0087_entry);
    runtime.register_function(0x08960000u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896000Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960010u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960018u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960030u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960064u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960098u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089600DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089600E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089600ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089600F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960114u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896011Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960138u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896014Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960168u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896016Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960174u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896018Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896019Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089601ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089601B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089601C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089601C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089601E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089601F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896020Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960220u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896023Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960240u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960248u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960260u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960294u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089602C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089602D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089602D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089602F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960300u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896031Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960330u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896034Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960350u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960358u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960374u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896038Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960394u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896039Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089603A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089603C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089603CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089603E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089603FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960418u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896041Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960424u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960434u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896043Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896044Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960454u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960464u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896046Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896047Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960484u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960494u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896049Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960508u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960528u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960534u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960540u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896054Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960550u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960584u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960590u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960594u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896059Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089605D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089605E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089605ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089605F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896060Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960614u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960624u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896063Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960648u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960660u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960668u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960680u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960698u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089606ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089606B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089606C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089606C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089606D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089606D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089606E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089606FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960708u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960720u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960728u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960744u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960780u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089607A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089607ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089607C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960800u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960808u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896080Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960830u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960838u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960854u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960868u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960884u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960888u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960890u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089608ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089608E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089608F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896090Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960930u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896093Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960944u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896097Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896098Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089609A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089609A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089609C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089609F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089609FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A48u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A50u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960AA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960AB0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960AB4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960AD8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960AE0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960AFCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B10u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B2Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B30u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B38u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B50u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B80u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B88u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BA0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BB8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BBCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BC4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BD0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BD8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BDCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C00u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C08u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C38u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C58u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C60u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C7Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C9Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CF8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CFCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D20u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D28u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D44u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D58u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D78u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D80u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D9Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DCCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DD4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DD8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DFCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E04u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E20u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E50u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E5Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E84u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E90u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960EA0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960EB0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960EC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960EC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960ED0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960ED4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960EF8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F00u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F1Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F30u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F50u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F58u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F70u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F80u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960FA0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960FA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960FB8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960FC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960FC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960FCCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960FF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960FF8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961014u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961028u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961044u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961048u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961050u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896106Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896107Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961094u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089610ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089610BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089610E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089610F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961108u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896114Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961160u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961170u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896117Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896118Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089611A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089611B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089611C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089611C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089611CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089611F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089611F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961214u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961228u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961244u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961248u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961250u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961268u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089612A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089612ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089612B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089612BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089612C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089612CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089612D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089612F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089612FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961318u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896132Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961348u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896134Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961354u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961370u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961380u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089613B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089613C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089613C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089613E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089613F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896140Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961420u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896143Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961440u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961448u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961460u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961470u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961484u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896148Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961490u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961508u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896150Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961514u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961530u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961540u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961558u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961564u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896156Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961574u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896157Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961584u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896159Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961608u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961610u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961628u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961638u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961640u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961658u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961668u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961670u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961688u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961698u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961700u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961714u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961720u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896172Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896173Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961740u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961748u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961754u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961760u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961774u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961778u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089617D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089617E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961834u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961848u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961858u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961864u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961870u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896187Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961880u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961888u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896188Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089618A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089618B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089618DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089618E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961920u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961930u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896193Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896195Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961974u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961980u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961998u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089619A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089619BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A04u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A10u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A14u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A60u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A80u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961AC4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961AD0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961ADCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B00u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B0Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B28u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B30u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B84u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B94u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961BA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961BBCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961BE0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961BE8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961BF4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961BFCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C30u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C48u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C50u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C7Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C9Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961CACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961CC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961CECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D1Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D3Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D5Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D78u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D80u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D9Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961DA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961DB8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961DC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961DDCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961DE4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961DFCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E04u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E08u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E20u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961EBCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961EC4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961ED0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961EE0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961EECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961EF8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F04u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F68u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F70u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F84u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F9Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961FB4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961FC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962014u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896201Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962024u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962030u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896203Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896205Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962064u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962070u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962084u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962098u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089620ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089620B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089620C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089620C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089620D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089620E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089620F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962108u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896212Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962158u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896216Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962174u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896218Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896219Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089621B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089621B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089621C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089621D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089621ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896220Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962260u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896228Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089622D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089622F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962348u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962388u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896239Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089623B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089623E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962418u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896244Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962464u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962470u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896248Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962494u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089624A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089624B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089624C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089624C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089624CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089624E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962524u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962574u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089625B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089625C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089625D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089625ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089625F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962604u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962610u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962618u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962624u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896262Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962634u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962680u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089626C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962718u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962758u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896277Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962790u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089627ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089627D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089627E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089627F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962804u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962828u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962834u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962840u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962844u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896284Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962850u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962898u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089628ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962910u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896294Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962954u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962998u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A70u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A7Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A90u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A9Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962ABCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962AD0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962ADCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962AF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B40u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B58u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B64u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B80u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B90u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B9Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962BA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962BB0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962BB8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962BC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962BC4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962BD8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962BE4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962BF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962BFCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C28u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C84u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C94u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CA0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CB8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CC4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CD4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CDCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CE4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CF8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D14u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D20u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D2Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D38u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D48u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D5Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D68u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D70u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D78u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D84u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D90u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962DA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962DB0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962DBCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962DC4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962DC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962DDCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962DE8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962DF4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E00u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E20u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E78u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E84u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E90u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962EA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962EB4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962EC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962EC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962ED0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962EDCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962EE4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F00u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F0Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F40u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F50u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F70u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F80u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F9Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962FA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962FB8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962FC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962FF8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896301Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963028u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963038u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963050u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896305Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963070u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089630A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089630BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089630E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089630ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089630FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963114u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963120u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896312Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963144u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963174u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963180u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896318Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963204u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963218u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963234u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963240u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963250u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896326Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963280u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089632A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089632ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089632BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089632D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089632E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089632E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963304u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963308u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963320u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963338u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963344u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963358u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963378u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963380u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896338Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089633A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089633B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089633BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089633D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089633ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089633F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089633FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896340Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963418u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963420u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963428u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963434u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963444u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963504u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963514u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963524u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963540u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963550u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896355Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963568u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963598u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896360Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896361Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896362Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896363Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896364Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896365Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896366Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896367Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896368Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896369Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963704u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963710u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963720u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963730u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963740u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896374Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896375Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896376Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896377Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896378Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963798u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963804u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963810u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963820u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963830u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896383Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963850u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963864u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963874u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963878u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963894u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089638A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089638A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089638BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089638F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896396Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963998u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089639C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089639E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089639ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089639FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A0Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A20u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A2Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A48u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A50u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A5Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A70u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A84u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A98u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963AA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963AB8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963AF8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B44u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B90u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963BACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963BB4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963BCCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963BD4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963BD8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963BECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C0Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C60u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C78u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963CA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963CB8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963CC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963CC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963CD4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963CE0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963CE4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963CFCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D1Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D28u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D88u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963DA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963DB4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963DBCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963DC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963DCCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963DE4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E04u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E10u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E1Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E2Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E38u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E58u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E64u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E70u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E88u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963EA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963EB4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963EC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963ED0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963EDCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963EECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963EF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963EFCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F04u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F08u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F20u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F38u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F44u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F60u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F68u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F7Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F9Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FB4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FC4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FD0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FDCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FF8u, &recomp_unit_0087, "recomp_unit_0087");
}
} // namespace psprecomp
