#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0150[4093] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 11, 0,
    12, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 18, 19, 0, 20, 0, 0, 0, 0, 21, 0,
    0, 22, 0, 0, 23, 0, 24, 25, 0, 26, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 30, 31, 0, 32, 0, 0, 0, 0, 33, 0,
    0, 34, 0, 0, 35, 0, 36, 37, 0, 38, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 42, 43, 0, 44, 0, 0, 0, 0, 45, 0,
    0, 46, 0, 0, 47, 0, 48, 49, 0, 50, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 54, 55, 0, 56, 0, 57, 0, 0, 0, 0,
    0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0,
    68, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 71, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 79, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 91, 0, 92, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 118, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 124, 0, 125, 0, 126, 127, 0, 0, 0, 0, 0, 0, 128,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 131, 0, 0, 0, 132, 0, 133, 0, 134,
    0, 135, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 141, 0,
    0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0,
    156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 163,
    0, 0, 0, 164, 165, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 0,
    172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 176, 0, 0, 177, 0, 178, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0,
    187, 0, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 195, 0,
    0, 0, 0, 0, 196, 0, 0, 197, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 208, 0, 0, 209, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 215, 0, 0, 0, 0, 0,
    0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0,
    224, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 230, 0, 231,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 244, 0, 245, 0,
    0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 251, 0, 252, 0, 0, 0, 253, 0, 254, 0,
    255, 0, 256, 0, 0, 0, 257, 0, 258, 259, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0,
    0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0,
    265, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 272, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0,
    0, 284, 0, 285, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0,
    0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 300,
    0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0,
    309, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 317, 0, 0,
    0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0,
    0, 0, 322, 0, 0, 323, 0, 324, 0, 0, 325, 0, 0, 326, 0, 327, 0, 0, 328, 0, 0, 329, 0, 330, 0, 0, 331, 0, 0, 332, 0, 333,
    0, 0, 334, 0, 0, 335, 0, 336, 0, 0, 337, 0, 0, 338, 0, 339, 0, 0, 340, 0, 0, 341, 0, 342, 0, 0, 343, 0, 0, 344, 0, 345,
    0, 0, 346, 0, 0, 347, 0, 348, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 351, 0, 352, 0, 353, 0, 354, 0, 0, 355, 0, 0, 0, 0,
    0, 0, 356, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0,
    362, 0, 0, 0, 363, 0, 364, 0, 0, 365, 0, 0, 0, 366, 0, 367, 0, 0, 368, 0, 0, 0, 369, 0, 370, 0, 0, 371, 0, 0, 0, 372,
    0, 373, 0, 0, 374, 0, 0, 0, 375, 0, 376, 0, 0, 0, 377, 0, 378, 0, 379, 0, 380, 0, 0, 381, 0, 382, 0, 383, 0, 0, 384, 0,
    385, 0, 386, 0, 0, 387, 0, 388, 0, 389, 0, 0, 390, 0, 391, 0, 392, 0, 0, 393, 0, 394, 0, 395, 0, 0, 396, 0, 397, 0, 398, 0,
    0, 399, 0, 0, 0, 400, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 406, 0,
    407, 0, 408, 0, 409, 0, 410, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 415, 0, 416, 0, 417, 0, 0, 418, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 422, 0, 423, 0, 424, 425, 0, 0, 0, 0,
    0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 430, 0, 431, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0,
    438, 0, 439, 0, 0, 0, 440, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 444, 445, 0, 446, 0, 0, 0,
    447, 0, 0, 448, 0, 0, 449, 0, 0, 450, 0, 0, 451, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    454, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 459, 0, 0, 0, 460, 461, 0, 0, 462, 0, 0, 0, 0,
    463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 466, 0, 467, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0,
    471, 0, 472, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0,
    479, 0, 0, 0, 0, 480, 481, 0, 0, 0, 482, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 493, 494, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 497, 498, 0, 0, 0, 0, 0, 0, 499, 0,
    0, 0, 500, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0, 514, 0, 0,
    515, 0, 516, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 520, 0, 521, 0, 0, 0, 0, 522,
    0, 0, 0, 523, 0, 524, 0, 525, 0, 526, 0, 0, 527, 0, 0, 0, 0, 528, 0, 529, 0, 530, 0, 0, 531, 0, 532, 0, 533, 0, 0, 0,
    0, 534, 0, 0, 535, 0, 0, 536, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0,
    0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 542, 0, 543, 544, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 548, 549, 0, 0, 0, 0, 0,
    0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0,
    0, 0, 0, 555, 0, 556, 557, 0, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 562, 563, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 571, 0, 0, 0,
    0, 0, 572, 0, 0, 0, 573, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0,
    0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 580, 0, 0, 0, 0, 581, 0, 582, 583, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 586, 0, 0, 587, 0, 588, 0, 589, 0, 590, 0, 0, 0, 591, 0, 0,
    0, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0, 594, 595, 0, 596, 0, 0, 0, 0, 597, 0, 598, 0, 599, 0, 0, 600, 0, 601,
    0, 602, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0,
    0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 610, 611, 0, 612, 0, 0, 0, 0, 0,
    0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 616, 0, 0, 0, 0, 0, 617,
    0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 621, 0, 0, 0, 622, 0,
    0, 0, 0, 0, 623, 0, 624, 625, 0, 626, 0, 0, 0, 627, 0, 628, 0, 629, 630, 0, 0, 631, 0, 0, 0, 0, 0, 0, 632, 0, 633, 0,
    634, 0, 635, 0, 636, 0, 637, 638, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 641, 0, 0,
    0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 643, 644, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 652, 0, 653, 654, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0, 0, 0, 657, 0, 658, 659, 0,
    660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0,
    664, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 667, 0, 668, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0,
    0, 671, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 0, 674, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 676, 0, 677, 678, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 0,
    682, 0, 683, 0, 0, 0, 684, 0, 0, 0, 685, 0, 686, 0, 687, 0, 0, 688, 0, 689, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 691, 0,
    0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 695, 696, 0,
    0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 699, 0, 0, 0, 700, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 707, 708, 0, 0, 0, 0, 0, 709, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 710, 0, 711, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 713, 0, 714, 0, 715, 0, 716, 0, 0,
    717, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 723, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 728,
};
void recomp_unit_0150_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A5C004u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0150[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A5C004;
    case 2u: goto L_08A5C010;
    case 3u: goto L_08A5C02C;
    case 4u: goto L_08A5C038;
    case 5u: goto L_08A5C044;
    case 6u: goto L_08A5C0A4;
    case 7u: goto L_08A5C0B8;
    case 8u: goto L_08A5C0C4;
    case 9u: goto L_08A5C0E0;
    case 10u: goto L_08A5C0E8;
    case 11u: goto L_08A5C0FC;
    case 12u: goto L_08A5C104;
    case 13u: goto L_08A5C110;
    case 14u: goto L_08A5C128;
    case 15u: goto L_08A5C13C;
    case 16u: goto L_08A5C148;
    case 17u: goto L_08A5C154;
    case 18u: goto L_08A5C15C;
    case 19u: goto L_08A5C160;
    case 20u: goto L_08A5C168;
    case 21u: goto L_08A5C17C;
    case 22u: goto L_08A5C188;
    case 23u: goto L_08A5C194;
    case 24u: goto L_08A5C19C;
    case 25u: goto L_08A5C1A0;
    case 26u: goto L_08A5C1A8;
    case 27u: goto L_08A5C1BC;
    case 28u: goto L_08A5C1C8;
    case 29u: goto L_08A5C1D4;
    case 30u: goto L_08A5C1DC;
    case 31u: goto L_08A5C1E0;
    case 32u: goto L_08A5C1E8;
    case 33u: goto L_08A5C1FC;
    case 34u: goto L_08A5C208;
    case 35u: goto L_08A5C214;
    case 36u: goto L_08A5C21C;
    case 37u: goto L_08A5C220;
    case 38u: goto L_08A5C228;
    case 39u: goto L_08A5C23C;
    case 40u: goto L_08A5C248;
    case 41u: goto L_08A5C254;
    case 42u: goto L_08A5C25C;
    case 43u: goto L_08A5C260;
    case 44u: goto L_08A5C268;
    case 45u: goto L_08A5C27C;
    case 46u: goto L_08A5C288;
    case 47u: goto L_08A5C294;
    case 48u: goto L_08A5C29C;
    case 49u: goto L_08A5C2A0;
    case 50u: goto L_08A5C2A8;
    case 51u: goto L_08A5C2BC;
    case 52u: goto L_08A5C2C8;
    case 53u: goto L_08A5C2D4;
    case 54u: goto L_08A5C2DC;
    case 55u: goto L_08A5C2E0;
    case 56u: goto L_08A5C2E8;
    case 57u: goto L_08A5C2F0;
    case 58u: goto L_08A5C310;
    case 59u: goto L_08A5C32C;
    case 60u: goto L_08A5C354;
    case 61u: goto L_08A5C368;
    case 62u: goto L_08A5C3EC;
    case 63u: goto L_08A5C410;
    case 64u: goto L_08A5C438;
    case 65u: goto L_08A5C450;
    case 66u: goto L_08A5C460;
    case 67u: goto L_08A5C478;
    case 68u: goto L_08A5C484;
    case 69u: goto L_08A5C49C;
    case 70u: goto L_08A5C4A8;
    case 71u: goto L_08A5C4B8;
    case 72u: goto L_08A5C4C4;
    case 73u: goto L_08A5C4CC;
    case 74u: goto L_08A5C4E4;
    case 75u: goto L_08A5C4F0;
    case 76u: goto L_08A5C504;
    case 77u: goto L_08A5C518;
    case 78u: goto L_08A5C528;
    case 79u: goto L_08A5C530;
    case 80u: goto L_08A5C534;
    case 81u: goto L_08A5C550;
    case 82u: goto L_08A5C574;
    case 83u: goto L_08A5C588;
    case 84u: goto L_08A5C60C;
    case 85u: goto L_08A5C630;
    case 86u: goto L_08A5C658;
    case 87u: goto L_08A5C660;
    case 88u: goto L_08A5C67C;
    case 89u: goto L_08A5C6A0;
    case 90u: goto L_08A5C6B0;
    case 91u: goto L_08A5C6B8;
    case 92u: goto L_08A5C6C0;
    case 93u: goto L_08A5C6CC;
    case 94u: goto L_08A5C6D4;
    case 95u: goto L_08A5C6E4;
    case 96u: goto L_08A5C6F0;
    case 97u: goto L_08A5C718;
    case 98u: goto L_08A5C724;
    case 99u: goto L_08A5C73C;
    case 100u: goto L_08A5C748;
    case 101u: goto L_08A5C768;
    case 102u: goto L_08A5C770;
    case 103u: goto L_08A5C798;
    case 104u: goto L_08A5C7A4;
    case 105u: goto L_08A5C7D4;
    case 106u: goto L_08A5C89C;
    case 107u: goto L_08A5CAE0;
    case 108u: goto L_08A5CC64;
    case 109u: goto L_08A5CC94;
    case 110u: goto L_08A5CCA4;
    case 111u: goto L_08A5CCE8;
    case 112u: goto L_08A5CCF0;
    case 113u: goto L_08A5CD94;
    case 114u: goto L_08A5CED4;
    case 115u: goto L_08A5CFAC;
    case 116u: goto L_08A5CFE0;
    case 117u: goto L_08A5CFF4;
    case 118u: goto L_08A5CFF8;
    case 119u: goto L_08A5D020;
    case 120u: goto L_08A5D034;
    case 121u: goto L_08A5D08C;
    case 122u: goto L_08A5D0B8;
    case 123u: goto L_08A5D0C8;
    case 124u: goto L_08A5D0D0;
    case 125u: goto L_08A5D0D8;
    case 126u: goto L_08A5D0E0;
    case 127u: goto L_08A5D0E4;
    case 128u: goto L_08A5D100;
    case 129u: goto L_08A5D124;
    case 130u: goto L_08A5D15C;
    case 131u: goto L_08A5D160;
    case 132u: goto L_08A5D170;
    case 133u: goto L_08A5D178;
    case 134u: goto L_08A5D180;
    case 135u: goto L_08A5D188;
    case 136u: goto L_08A5D18C;
    case 137u: goto L_08A5D1B0;
    case 138u: goto L_08A5D1D0;
    case 139u: goto L_08A5D1DC;
    case 140u: goto L_08A5D1E8;
    case 141u: goto L_08A5D1FC;
    case 142u: goto L_08A5D21C;
    case 143u: goto L_08A5D224;
    case 144u: goto L_08A5D240;
    case 145u: goto L_08A5D250;
    case 146u: goto L_08A5D25C;
    case 147u: goto L_08A5D264;
    case 148u: goto L_08A5D27C;
    case 149u: goto L_08A5D294;
    case 150u: goto L_08A5D29C;
    case 151u: goto L_08A5D2B0;
    case 152u: goto L_08A5D2C8;
    case 153u: goto L_08A5D2D0;
    case 154u: goto L_08A5D2E4;
    case 155u: goto L_08A5D2FC;
    case 156u: goto L_08A5D304;
    case 157u: goto L_08A5D318;
    case 158u: goto L_08A5D330;
    case 159u: goto L_08A5D338;
    case 160u: goto L_08A5D34C;
    case 161u: goto L_08A5D36C;
    case 162u: goto L_08A5D374;
    case 163u: goto L_08A5D380;
    case 164u: goto L_08A5D390;
    case 165u: goto L_08A5D394;
    case 166u: goto L_08A5D3A8;
    case 167u: goto L_08A5D3B0;
    case 168u: goto L_08A5D3C4;
    case 169u: goto L_08A5D3E4;
    case 170u: goto L_08A5D3F0;
    case 171u: goto L_08A5D3F8;
    case 172u: goto L_08A5D404;
    case 173u: goto L_08A5D414;
    case 174u: goto L_08A5D424;
    case 175u: goto L_08A5D434;
    case 176u: goto L_08A5D438;
    case 177u: goto L_08A5D444;
    case 178u: goto L_08A5D44C;
    case 179u: goto L_08A5D460;
    case 180u: goto L_08A5D468;
    case 181u: goto L_08A5D490;
    case 182u: goto L_08A5D49C;
    case 183u: goto L_08A5D4B4;
    case 184u: goto L_08A5D4C8;
    case 185u: goto L_08A5D4D0;
    case 186u: goto L_08A5D4F8;
    case 187u: goto L_08A5D504;
    case 188u: goto L_08A5D510;
    case 189u: goto L_08A5D524;
    case 190u: goto L_08A5D52C;
    case 191u: goto L_08A5D544;
    case 192u: goto L_08A5D550;
    case 193u: goto L_08A5D564;
    case 194u: goto L_08A5D56C;
    case 195u: goto L_08A5D57C;
    case 196u: goto L_08A5D594;
    case 197u: goto L_08A5D5A0;
    case 198u: goto L_08A5D5A8;
    case 199u: goto L_08A5D5B4;
    case 200u: goto L_08A5D5BC;
    case 201u: goto L_08A5D5D0;
    case 202u: goto L_08A5D5E0;
    case 203u: goto L_08A5D5F0;
    case 204u: goto L_08A5D620;
    case 205u: goto L_08A5D628;
    case 206u: goto L_08A5D62C;
    case 207u: goto L_08A5D704;
    case 208u: goto L_08A5D710;
    case 209u: goto L_08A5D71C;
    case 210u: goto L_08A5D724;
    case 211u: goto L_08A5D72C;
    case 212u: goto L_08A5D748;
    case 213u: goto L_08A5D758;
    case 214u: goto L_08A5D768;
    case 215u: goto L_08A5D76C;
    case 216u: goto L_08A5D78C;
    case 217u: goto L_08A5D7A0;
    case 218u: goto L_08A5D7AC;
    case 219u: goto L_08A5D7C4;
    case 220u: goto L_08A5D7D8;
    case 221u: goto L_08A5D7EC;
    case 222u: goto L_08A5D7F4;
    case 223u: goto L_08A5D7FC;
    case 224u: goto L_08A5D804;
    case 225u: goto L_08A5D810;
    case 226u: goto L_08A5D820;
    case 227u: goto L_08A5D838;
    case 228u: goto L_08A5D86C;
    case 229u: goto L_08A5D874;
    case 230u: goto L_08A5D878;
    case 231u: goto L_08A5D880;
    case 232u: goto L_08A5D8B4;
    case 233u: goto L_08A5D8C0;
    case 234u: goto L_08A5D8C8;
    case 235u: goto L_08A5D8E8;
    case 236u: goto L_08A5D900;
    case 237u: goto L_08A5D914;
    case 238u: goto L_08A5D930;
    case 239u: goto L_08A5D9F4;
    case 240u: goto L_08A5DA0C;
    case 241u: goto L_08A5DA40;
    case 242u: goto L_08A5DA58;
    case 243u: goto L_08A5DA60;
    case 244u: goto L_08A5DA74;
    case 245u: goto L_08A5DA7C;
    case 246u: goto L_08A5DA8C;
    case 247u: goto L_08A5DAA0;
    case 248u: goto L_08A5DAB0;
    case 249u: goto L_08A5DAC4;
    case 250u: goto L_08A5DAD4;
    case 251u: goto L_08A5DADC;
    case 252u: goto L_08A5DAE4;
    case 253u: goto L_08A5DAF4;
    case 254u: goto L_08A5DAFC;
    case 255u: goto L_08A5DB04;
    case 256u: goto L_08A5DB0C;
    case 257u: goto L_08A5DB1C;
    case 258u: goto L_08A5DB24;
    case 259u: goto L_08A5DB28;
    case 260u: goto L_08A5DB30;
    case 261u: goto L_08A5DB78;
    case 262u: goto L_08A5DB98;
    case 263u: goto L_08A5DBD0;
    case 264u: goto L_08A5DBE0;
    case 265u: goto L_08A5DC04;
    case 266u: goto L_08A5DC0C;
    case 267u: goto L_08A5DC14;
    case 268u: goto L_08A5DC30;
    case 269u: goto L_08A5DC54;
    case 270u: goto L_08A5DC68;
    case 271u: goto L_08A5DC84;
    case 272u: goto L_08A5DC98;
    case 273u: goto L_08A5DC9C;
    case 274u: goto L_08A5DCB8;
    case 275u: goto L_08A5DCE4;
    case 276u: goto L_08A5DCEC;
    case 277u: goto L_08A5DD0C;
    case 278u: goto L_08A5DD2C;
    case 279u: goto L_08A5DD44;
    case 280u: goto L_08A5DD58;
    case 281u: goto L_08A5DD64;
    case 282u: goto L_08A5DD70;
    case 283u: goto L_08A5DD7C;
    case 284u: goto L_08A5DD88;
    case 285u: goto L_08A5DD90;
    case 286u: goto L_08A5DD9C;
    case 287u: goto L_08A5DDB0;
    case 288u: goto L_08A5DDBC;
    case 289u: goto L_08A5DDCC;
    case 290u: goto L_08A5DDD4;
    case 291u: goto L_08A5DDF8;
    case 292u: goto L_08A5DE08;
    case 293u: goto L_08A5DE18;
    case 294u: goto L_08A5DE28;
    case 295u: goto L_08A5DE34;
    case 296u: goto L_08A5DE44;
    case 297u: goto L_08A5DE54;
    case 298u: goto L_08A5DE60;
    case 299u: goto L_08A5DE70;
    case 300u: goto L_08A5DE80;
    case 301u: goto L_08A5DE8C;
    case 302u: goto L_08A5DE9C;
    case 303u: goto L_08A5DEAC;
    case 304u: goto L_08A5DEB8;
    case 305u: goto L_08A5DEC8;
    case 306u: goto L_08A5DED8;
    case 307u: goto L_08A5DEE4;
    case 308u: goto L_08A5DEF4;
    case 309u: goto L_08A5DF04;
    case 310u: goto L_08A5DF10;
    case 311u: goto L_08A5DF20;
    case 312u: goto L_08A5DF30;
    case 313u: goto L_08A5DF3C;
    case 314u: goto L_08A5DF4C;
    case 315u: goto L_08A5DF5C;
    case 316u: goto L_08A5DF68;
    case 317u: goto L_08A5DF78;
    case 318u: goto L_08A5DF8C;
    case 319u: goto L_08A5DFC0;
    case 320u: goto L_08A5DFD0;
    case 321u: goto L_08A5DFF0;
    case 322u: goto L_08A5E00C;
    case 323u: goto L_08A5E018;
    case 324u: goto L_08A5E020;
    case 325u: goto L_08A5E02C;
    case 326u: goto L_08A5E038;
    case 327u: goto L_08A5E040;
    case 328u: goto L_08A5E04C;
    case 329u: goto L_08A5E058;
    case 330u: goto L_08A5E060;
    case 331u: goto L_08A5E06C;
    case 332u: goto L_08A5E078;
    case 333u: goto L_08A5E080;
    case 334u: goto L_08A5E08C;
    case 335u: goto L_08A5E098;
    case 336u: goto L_08A5E0A0;
    case 337u: goto L_08A5E0AC;
    case 338u: goto L_08A5E0B8;
    case 339u: goto L_08A5E0C0;
    case 340u: goto L_08A5E0CC;
    case 341u: goto L_08A5E0D8;
    case 342u: goto L_08A5E0E0;
    case 343u: goto L_08A5E0EC;
    case 344u: goto L_08A5E0F8;
    case 345u: goto L_08A5E100;
    case 346u: goto L_08A5E10C;
    case 347u: goto L_08A5E118;
    case 348u: goto L_08A5E120;
    case 349u: goto L_08A5E130;
    case 350u: goto L_08A5E138;
    case 351u: goto L_08A5E14C;
    case 352u: goto L_08A5E154;
    case 353u: goto L_08A5E15C;
    case 354u: goto L_08A5E164;
    case 355u: goto L_08A5E170;
    case 356u: goto L_08A5E18C;
    case 357u: goto L_08A5E190;
    case 358u: goto L_08A5E1A4;
    case 359u: goto L_08A5E1D0;
    case 360u: goto L_08A5E1E0;
    case 361u: goto L_08A5E1F8;
    case 362u: goto L_08A5E204;
    case 363u: goto L_08A5E214;
    case 364u: goto L_08A5E21C;
    case 365u: goto L_08A5E228;
    case 366u: goto L_08A5E238;
    case 367u: goto L_08A5E240;
    case 368u: goto L_08A5E24C;
    case 369u: goto L_08A5E25C;
    case 370u: goto L_08A5E264;
    case 371u: goto L_08A5E270;
    case 372u: goto L_08A5E280;
    case 373u: goto L_08A5E288;
    case 374u: goto L_08A5E294;
    case 375u: goto L_08A5E2A4;
    case 376u: goto L_08A5E2AC;
    case 377u: goto L_08A5E2BC;
    case 378u: goto L_08A5E2C4;
    case 379u: goto L_08A5E2CC;
    case 380u: goto L_08A5E2D4;
    case 381u: goto L_08A5E2E0;
    case 382u: goto L_08A5E2E8;
    case 383u: goto L_08A5E2F0;
    case 384u: goto L_08A5E2FC;
    case 385u: goto L_08A5E304;
    case 386u: goto L_08A5E30C;
    case 387u: goto L_08A5E318;
    case 388u: goto L_08A5E320;
    case 389u: goto L_08A5E328;
    case 390u: goto L_08A5E334;
    case 391u: goto L_08A5E33C;
    case 392u: goto L_08A5E344;
    case 393u: goto L_08A5E350;
    case 394u: goto L_08A5E358;
    case 395u: goto L_08A5E360;
    case 396u: goto L_08A5E36C;
    case 397u: goto L_08A5E374;
    case 398u: goto L_08A5E37C;
    case 399u: goto L_08A5E388;
    case 400u: goto L_08A5E398;
    case 401u: goto L_08A5E3A0;
    case 402u: goto L_08A5E3AC;
    case 403u: goto L_08A5E3D0;
    case 404u: goto L_08A5E3E8;
    case 405u: goto L_08A5E3F4;
    case 406u: goto L_08A5E3FC;
    case 407u: goto L_08A5E404;
    case 408u: goto L_08A5E40C;
    case 409u: goto L_08A5E414;
    case 410u: goto L_08A5E41C;
    case 411u: goto L_08A5E424;
    case 412u: goto L_08A5E42C;
    case 413u: goto L_08A5E448;
    case 414u: goto L_08A5E450;
    case 415u: goto L_08A5E458;
    case 416u: goto L_08A5E460;
    case 417u: goto L_08A5E468;
    case 418u: goto L_08A5E474;
    case 419u: goto L_08A5E4A8;
    case 420u: goto L_08A5E4CC;
    case 421u: goto L_08A5E4D4;
    case 422u: goto L_08A5E4DC;
    case 423u: goto L_08A5E4E4;
    case 424u: goto L_08A5E4EC;
    case 425u: goto L_08A5E4F0;
    case 426u: goto L_08A5E510;
    case 427u: goto L_08A5E524;
    case 428u: goto L_08A5E558;
    case 429u: goto L_08A5E568;
    case 430u: goto L_08A5E570;
    case 431u: goto L_08A5E578;
    case 432u: goto L_08A5E5A0;
    case 433u: goto L_08A5E5AC;
    case 434u: goto L_08A5E608;
    case 435u: goto L_08A5E624;
    case 436u: goto L_08A5E668;
    case 437u: goto L_08A5E678;
    case 438u: goto L_08A5E684;
    case 439u: goto L_08A5E68C;
    case 440u: goto L_08A5E69C;
    case 441u: goto L_08A5E6A4;
    case 442u: goto L_08A5E6AC;
    case 443u: goto L_08A5E6E0;
    case 444u: goto L_08A5E6E8;
    case 445u: goto L_08A5E6EC;
    case 446u: goto L_08A5E6F4;
    case 447u: goto L_08A5E704;
    case 448u: goto L_08A5E710;
    case 449u: goto L_08A5E71C;
    case 450u: goto L_08A5E728;
    case 451u: goto L_08A5E734;
    case 452u: goto L_08A5E744;
    case 453u: goto L_08A5E750;
    case 454u: goto L_08A5E784;
    case 455u: goto L_08A5E794;
    case 456u: goto L_08A5E7A4;
    case 457u: goto L_08A5E7B8;
    case 458u: goto L_08A5E7C8;
    case 459u: goto L_08A5E7D0;
    case 460u: goto L_08A5E7E0;
    case 461u: goto L_08A5E7E4;
    case 462u: goto L_08A5E7F0;
    case 463u: goto L_08A5E804;
    case 464u: goto L_08A5E814;
    case 465u: goto L_08A5E86C;
    case 466u: goto L_08A5E874;
    case 467u: goto L_08A5E87C;
    case 468u: goto L_08A5E8A4;
    case 469u: goto L_08A5E8E0;
    case 470u: goto L_08A5E8F4;
    case 471u: goto L_08A5E904;
    case 472u: goto L_08A5E90C;
    case 473u: goto L_08A5E914;
    case 474u: goto L_08A5E92C;
    case 475u: goto L_08A5E938;
    case 476u: goto L_08A5E948;
    case 477u: goto L_08A5E960;
    case 478u: goto L_08A5E978;
    case 479u: goto L_08A5E984;
    case 480u: goto L_08A5E998;
    case 481u: goto L_08A5E99C;
    case 482u: goto L_08A5E9AC;
    case 483u: goto L_08A5E9B0;
    case 484u: goto L_08A5E9D4;
    case 485u: goto L_08A5E9E4;
    case 486u: goto L_08A5EA10;
    case 487u: goto L_08A5EA24;
    case 488u: goto L_08A5EA34;
    case 489u: goto L_08A5EA4C;
    case 490u: goto L_08A5EA5C;
    case 491u: goto L_08A5EA74;
    case 492u: goto L_08A5EAAC;
    case 493u: goto L_08A5EAB4;
    case 494u: goto L_08A5EAB8;
    case 495u: goto L_08A5EADC;
    case 496u: goto L_08A5EB38;
    case 497u: goto L_08A5EB5C;
    case 498u: goto L_08A5EB60;
    case 499u: goto L_08A5EB7C;
    case 500u: goto L_08A5EB8C;
    case 501u: goto L_08A5EB94;
    case 502u: goto L_08A5EBBC;
    case 503u: goto L_08A5EBE8;
    case 504u: goto L_08A5EC1C;
    case 505u: goto L_08A5EC2C;
    case 506u: goto L_08A5EC48;
    case 507u: goto L_08A5EC58;
    case 508u: goto L_08A5ECB0;
    case 509u: goto L_08A5ECD0;
    case 510u: goto L_08A5ECEC;
    case 511u: goto L_08A5ECFC;
    case 512u: goto L_08A5ED54;
    case 513u: goto L_08A5ED6C;
    case 514u: goto L_08A5ED78;
    case 515u: goto L_08A5ED84;
    case 516u: goto L_08A5ED8C;
    case 517u: goto L_08A5ED94;
    case 518u: goto L_08A5EDC8;
    case 519u: goto L_08A5EDD8;
    case 520u: goto L_08A5EDE4;
    case 521u: goto L_08A5EDEC;
    case 522u: goto L_08A5EE00;
    case 523u: goto L_08A5EE10;
    case 524u: goto L_08A5EE18;
    case 525u: goto L_08A5EE20;
    case 526u: goto L_08A5EE28;
    case 527u: goto L_08A5EE34;
    case 528u: goto L_08A5EE48;
    case 529u: goto L_08A5EE50;
    case 530u: goto L_08A5EE58;
    case 531u: goto L_08A5EE64;
    case 532u: goto L_08A5EE6C;
    case 533u: goto L_08A5EE74;
    case 534u: goto L_08A5EE88;
    case 535u: goto L_08A5EE94;
    case 536u: goto L_08A5EEA0;
    case 537u: goto L_08A5EEAC;
    case 538u: goto L_08A5EECC;
    case 539u: goto L_08A5EEFC;
    case 540u: goto L_08A5EF0C;
    case 541u: goto L_08A5EF24;
    case 542u: goto L_08A5EF2C;
    case 543u: goto L_08A5EF34;
    case 544u: goto L_08A5EF38;
    case 545u: goto L_08A5EF4C;
    case 546u: goto L_08A5EF5C;
    case 547u: goto L_08A5EFE0;
    case 548u: goto L_08A5EFE8;
    case 549u: goto L_08A5EFEC;
    case 550u: goto L_08A5F008;
    case 551u: goto L_08A5F03C;
    case 552u: goto L_08A5F050;
    case 553u: goto L_08A5F068;
    case 554u: goto L_08A5F078;
    case 555u: goto L_08A5F090;
    case 556u: goto L_08A5F098;
    case 557u: goto L_08A5F09C;
    case 558u: goto L_08A5F0B0;
    case 559u: goto L_08A5F0C0;
    case 560u: goto L_08A5F0EC;
    case 561u: goto L_08A5F140;
    case 562u: goto L_08A5F148;
    case 563u: goto L_08A5F14C;
    case 564u: goto L_08A5F164;
    case 565u: goto L_08A5F1C0;
    case 566u: goto L_08A5F1D4;
    case 567u: goto L_08A5F230;
    case 568u: goto L_08A5F23C;
    case 569u: goto L_08A5F248;
    case 570u: goto L_08A5F26C;
    case 571u: goto L_08A5F274;
    case 572u: goto L_08A5F28C;
    case 573u: goto L_08A5F29C;
    case 574u: goto L_08A5F2A4;
    case 575u: goto L_08A5F2C4;
    case 576u: goto L_08A5F2D4;
    case 577u: goto L_08A5F2FC;
    case 578u: goto L_08A5F30C;
    case 579u: goto L_08A5F340;
    case 580u: goto L_08A5F344;
    case 581u: goto L_08A5F358;
    case 582u: goto L_08A5F360;
    case 583u: goto L_08A5F364;
    case 584u: goto L_08A5F3A8;
    case 585u: goto L_08A5F3BC;
    case 586u: goto L_08A5F3C4;
    case 587u: goto L_08A5F3D0;
    case 588u: goto L_08A5F3D8;
    case 589u: goto L_08A5F3E0;
    case 590u: goto L_08A5F3E8;
    case 591u: goto L_08A5F3F8;
    case 592u: goto L_08A5F418;
    case 593u: goto L_08A5F420;
    case 594u: goto L_08A5F43C;
    case 595u: goto L_08A5F440;
    case 596u: goto L_08A5F448;
    case 597u: goto L_08A5F45C;
    case 598u: goto L_08A5F464;
    case 599u: goto L_08A5F46C;
    case 600u: goto L_08A5F478;
    case 601u: goto L_08A5F480;
    case 602u: goto L_08A5F488;
    case 603u: goto L_08A5F4A4;
    case 604u: goto L_08A5F4CC;
    case 605u: goto L_08A5F4D4;
    case 606u: goto L_08A5F4F0;
    case 607u: goto L_08A5F510;
    case 608u: goto L_08A5F530;
    case 609u: goto L_08A5F550;
    case 610u: goto L_08A5F560;
    case 611u: goto L_08A5F564;
    case 612u: goto L_08A5F56C;
    case 613u: goto L_08A5F590;
    case 614u: goto L_08A5F5CC;
    case 615u: goto L_08A5F5E0;
    case 616u: goto L_08A5F5E8;
    case 617u: goto L_08A5F600;
    case 618u: goto L_08A5F61C;
    case 619u: goto L_08A5F650;
    case 620u: goto L_08A5F664;
    case 621u: goto L_08A5F66C;
    case 622u: goto L_08A5F67C;
    case 623u: goto L_08A5F694;
    case 624u: goto L_08A5F69C;
    case 625u: goto L_08A5F6A0;
    case 626u: goto L_08A5F6A8;
    case 627u: goto L_08A5F6B8;
    case 628u: goto L_08A5F6C0;
    case 629u: goto L_08A5F6C8;
    case 630u: goto L_08A5F6CC;
    case 631u: goto L_08A5F6D8;
    case 632u: goto L_08A5F6F4;
    case 633u: goto L_08A5F6FC;
    case 634u: goto L_08A5F704;
    case 635u: goto L_08A5F70C;
    case 636u: goto L_08A5F714;
    case 637u: goto L_08A5F71C;
    case 638u: goto L_08A5F720;
    case 639u: goto L_08A5F72C;
    case 640u: goto L_08A5F764;
    case 641u: goto L_08A5F778;
    case 642u: goto L_08A5F798;
    case 643u: goto L_08A5F7AC;
    case 644u: goto L_08A5F7B0;
    case 645u: goto L_08A5F7CC;
    case 646u: goto L_08A5F7E0;
    case 647u: goto L_08A5F7F0;
    case 648u: goto L_08A5F820;
    case 649u: goto L_08A5F830;
    case 650u: goto L_08A5F84C;
    case 651u: goto L_08A5F860;
    case 652u: goto L_08A5F89C;
    case 653u: goto L_08A5F8A4;
    case 654u: goto L_08A5F8A8;
    case 655u: goto L_08A5F8C8;
    case 656u: goto L_08A5F8D8;
    case 657u: goto L_08A5F8F0;
    case 658u: goto L_08A5F8F8;
    case 659u: goto L_08A5F8FC;
    case 660u: goto L_08A5F904;
    case 661u: goto L_08A5F93C;
    case 662u: goto L_08A5F950;
    case 663u: goto L_08A5F968;
    case 664u: goto L_08A5F984;
    case 665u: goto L_08A5F9A4;
    case 666u: goto L_08A5F9C4;
    case 667u: goto L_08A5F9D0;
    case 668u: goto L_08A5F9D8;
    case 669u: goto L_08A5F9E0;
    case 670u: goto L_08A5F9FC;
    case 671u: goto L_08A5FA08;
    case 672u: goto L_08A5FA1C;
    case 673u: goto L_08A5FA24;
    case 674u: goto L_08A5FA38;
    case 675u: goto L_08A5FA48;
    case 676u: goto L_08A5FA88;
    case 677u: goto L_08A5FA90;
    case 678u: goto L_08A5FA94;
    case 679u: goto L_08A5FAB4;
    case 680u: goto L_08A5FAE4;
    case 681u: goto L_08A5FAF8;
    case 682u: goto L_08A5FB04;
    case 683u: goto L_08A5FB0C;
    case 684u: goto L_08A5FB1C;
    case 685u: goto L_08A5FB2C;
    case 686u: goto L_08A5FB34;
    case 687u: goto L_08A5FB3C;
    case 688u: goto L_08A5FB48;
    case 689u: goto L_08A5FB50;
    case 690u: goto L_08A5FB60;
    case 691u: goto L_08A5FB7C;
    case 692u: goto L_08A5FB8C;
    case 693u: goto L_08A5FBB8;
    case 694u: goto L_08A5FBF0;
    case 695u: goto L_08A5FBF8;
    case 696u: goto L_08A5FBFC;
    case 697u: goto L_08A5FC14;
    case 698u: goto L_08A5FC48;
    case 699u: goto L_08A5FC60;
    case 700u: goto L_08A5FC70;
    case 701u: goto L_08A5FCA0;
    case 702u: goto L_08A5FCB4;
    case 703u: goto L_08A5FCE0;
    case 704u: goto L_08A5FCF0;
    case 705u: goto L_08A5FD1C;
    case 706u: goto L_08A5FD54;
    case 707u: goto L_08A5FD5C;
    case 708u: goto L_08A5FD60;
    case 709u: goto L_08A5FD78;
    case 710u: goto L_08A5FDA0;
    case 711u: goto L_08A5FDA8;
    case 712u: goto L_08A5FDC8;
    case 713u: goto L_08A5FDE0;
    case 714u: goto L_08A5FDE8;
    case 715u: goto L_08A5FDF0;
    case 716u: goto L_08A5FDF8;
    case 717u: goto L_08A5FE04;
    case 718u: goto L_08A5FE18;
    case 719u: goto L_08A5FE44;
    case 720u: goto L_08A5FE70;
    case 721u: goto L_08A5FED8;
    case 722u: goto L_08A5FF4C;
    case 723u: goto L_08A5FF50;
    case 724u: goto L_08A5FF6C;
    case 725u: goto L_08A5FFA0;
    case 726u: goto L_08A5FFC8;
    case 727u: goto L_08A5FFD8;
    case 728u: goto L_08A5FFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A5C004:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C02C;
      }
      goto L_08A5C010;
    }
L_08A5C010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A5C02Cu);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C02Cu) goto L_08A5C02C;
    return;
L_08A5C02C:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-30636), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A5C660;
      }
      goto L_08A5C038;
    }
L_08A5C038:
    ctx.gpr[4] = (ctx.gpr[23] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5C0E8;
      }
      goto L_08A5C044;
    }
L_08A5C044:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[22] = (ctx.gpr[6] | ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-30636), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[22] = (ctx.gpr[22] & 65535u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] & 127u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A5C0A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8376));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 483u, 0x08A5A7FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C0A4u) goto L_08A5C0A4;
    return;
L_08A5C0A4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A5C0B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C0B8u) goto L_08A5C0B8;
    return;
L_08A5C0B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C0E0;
      }
      goto L_08A5C0C4;
    }
L_08A5C0C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5C0E0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C0E0u) goto L_08A5C0E0;
    return;
L_08A5C0E0:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-30636), static_cast<std::uint8_t>(0u));
    goto L_08A5C0E8;
L_08A5C0E8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C0FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C0FCu) goto L_08A5C0FC;
    return;
L_08A5C0FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C4CC;
      }
      goto L_08A5C104;
    }
L_08A5C104:
    ctx.gpr[4] = (ctx.gpr[23] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C2E8;
      }
      goto L_08A5C110;
    }
L_08A5C110:
    ctx.gpr[23] = (ctx.gpr[23] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[23]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(8776)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5C128:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C13Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8412));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 483u, 0x08A5A7FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C13Cu) goto L_08A5C13C;
    return;
L_08A5C13C:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A5C148u);
    ctx.gpr[4] = (0u | 224u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A5C148u) goto L_08A5C148;
    return;
L_08A5C148:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C160;
      }
      goto L_08A5C154;
    }
L_08A5C154:
    ctx.gpr[31] = (0x08A5C15Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 45u, 0x08A3444Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C15Cu) goto L_08A5C15C;
    return;
L_08A5C15C:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_08A5C160;
L_08A5C160:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C2F0;
      }
      goto L_08A5C168;
    }
L_08A5C168:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C17Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8444));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 483u, 0x08A5A7FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C17Cu) goto L_08A5C17C;
    return;
L_08A5C17C:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A5C188u);
    ctx.gpr[4] = (0u | 364u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A5C188u) goto L_08A5C188;
    return;
L_08A5C188:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C1A0;
      }
      goto L_08A5C194;
    }
L_08A5C194:
    ctx.gpr[31] = (0x08A5C19Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 252u, 0x08ABD808u>(ctx, &aot_mem) && ctx.pc == 0x08A5C19Cu) goto L_08A5C19C;
    return;
L_08A5C19C:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_08A5C1A0;
L_08A5C1A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C2F0;
      }
      goto L_08A5C1A8;
    }
L_08A5C1A8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C1BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8472));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 483u, 0x08A5A7FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C1BCu) goto L_08A5C1BC;
    return;
L_08A5C1BC:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A5C1C8u);
    ctx.gpr[4] = (0u | 240u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A5C1C8u) goto L_08A5C1C8;
    return;
L_08A5C1C8:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C1E0;
      }
      goto L_08A5C1D4;
    }
L_08A5C1D4:
    ctx.gpr[31] = (0x08A5C1DCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 390u, 0x089D9FF8u>(ctx, &aot_mem) && ctx.pc == 0x08A5C1DCu) goto L_08A5C1DC;
    return;
L_08A5C1DC:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_08A5C1E0;
L_08A5C1E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C2F0;
      }
      goto L_08A5C1E8;
    }
L_08A5C1E8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C1FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8500));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 483u, 0x08A5A7FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C1FCu) goto L_08A5C1FC;
    return;
L_08A5C1FC:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A5C208u);
    ctx.gpr[4] = (0u | 224u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A5C208u) goto L_08A5C208;
    return;
L_08A5C208:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C220;
      }
      goto L_08A5C214;
    }
L_08A5C214:
    ctx.gpr[31] = (0x08A5C21Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 759u, 0x0897FE3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C21Cu) goto L_08A5C21C;
    return;
L_08A5C21C:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_08A5C220;
L_08A5C220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C2F0;
      }
      goto L_08A5C228;
    }
L_08A5C228:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C23Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8528));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 483u, 0x08A5A7FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C23Cu) goto L_08A5C23C;
    return;
L_08A5C23C:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A5C248u);
    ctx.gpr[4] = (0u | 116u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A5C248u) goto L_08A5C248;
    return;
L_08A5C248:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C260;
      }
      goto L_08A5C254;
    }
L_08A5C254:
    ctx.gpr[31] = (0x08A5C25Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 820u, 0x08A0BC10u>(ctx, &aot_mem) && ctx.pc == 0x08A5C25Cu) goto L_08A5C25C;
    return;
L_08A5C25C:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_08A5C260;
L_08A5C260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C2F0;
      }
      goto L_08A5C268;
    }
L_08A5C268:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C27Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8556));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 483u, 0x08A5A7FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C27Cu) goto L_08A5C27C;
    return;
L_08A5C27C:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A5C288u);
    ctx.gpr[4] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A5C288u) goto L_08A5C288;
    return;
L_08A5C288:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C2A0;
      }
      goto L_08A5C294;
    }
L_08A5C294:
    ctx.gpr[31] = (0x08A5C29Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 597u, 0x089369C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5C29Cu) goto L_08A5C29C;
    return;
L_08A5C29C:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_08A5C2A0;
L_08A5C2A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C2F0;
      }
      goto L_08A5C2A8;
    }
L_08A5C2A8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C2BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8592));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 483u, 0x08A5A7FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C2BCu) goto L_08A5C2BC;
    return;
L_08A5C2BC:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A5C2C8u);
    ctx.gpr[4] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A5C2C8u) goto L_08A5C2C8;
    return;
L_08A5C2C8:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C2E0;
      }
      goto L_08A5C2D4;
    }
L_08A5C2D4:
    ctx.gpr[31] = (0x08A5C2DCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 417u, 0x08919934u>(ctx, &aot_mem) && ctx.pc == 0x08A5C2DCu) goto L_08A5C2DC;
    return;
L_08A5C2DC:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_08A5C2E0;
L_08A5C2E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C2F0;
      }
      goto L_08A5C2E8;
    }
L_08A5C2E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C7A4;
      }
      goto L_08A5C2F0;
    }
L_08A5C2F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[17] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A5C310u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C310u) goto L_08A5C310;
    return;
L_08A5C310:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A5C32Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 190u, 0x08A4CC3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C32Cu) goto L_08A5C32C;
    return;
L_08A5C32C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(224))))));
    ctx.gpr[21] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5C354u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 84u, 0x08AC48F0u>(ctx, &aot_mem) && ctx.pc == 0x08A5C354u) goto L_08A5C354;
    return;
L_08A5C354:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A5C368u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C368u) goto L_08A5C368;
    return;
L_08A5C368:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7984));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8000));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8016));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8024));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8032));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8040));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[5] = (2226u << 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5C3ECu);
    ctx.gpr[22] = (ctx.gpr[5] + static_cast<std::uint32_t>(8624));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C3ECu) goto L_08A5C3EC;
    return;
L_08A5C3EC:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[30]);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C410u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 483u, 0x08A5A7FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C410u) goto L_08A5C410;
    return;
L_08A5C410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A5C438u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(96))))));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C438u) goto L_08A5C438;
    return;
L_08A5C438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5C450u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C450u) goto L_08A5C450;
    return;
L_08A5C450:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
      if (branch_taken) {
          goto L_08A5C4A8;
      }
      goto L_08A5C460;
    }
L_08A5C460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5C478u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C478u) goto L_08A5C478;
    return;
L_08A5C478:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5C4A8;
      }
      goto L_08A5C484;
    }
L_08A5C484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5C49Cu);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C49Cu) goto L_08A5C49C;
    return;
L_08A5C49C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5C4C4;
      }
      goto L_08A5C4A8;
    }
L_08A5C4A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(327)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C4C4;
      }
      goto L_08A5C4B8;
    }
L_08A5C4B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08A5C4C4u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 228u, 0x08969548u>(ctx, &aot_mem) && ctx.pc == 0x08A5C4C4u) goto L_08A5C4C4;
    return;
L_08A5C4C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C660;
      }
      goto L_08A5C4CC;
    }
L_08A5C4CC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C4E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C4E4u) goto L_08A5C4E4;
    return;
L_08A5C4E4:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[30] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[21]);
        goto L_08A5C550;
    }
    goto L_08A5C4F0;
L_08A5C4F0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C504u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8664));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 483u, 0x08A5A7FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C504u) goto L_08A5C504;
    return;
L_08A5C504:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C518u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8720));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 307u, 0x08A59B54u>(ctx, &aot_mem) && ctx.pc == 0x08A5C518u) goto L_08A5C518;
    return;
L_08A5C518:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A5C534;
      }
      goto L_08A5C528;
    }
L_08A5C528:
    ctx.gpr[31] = (0x08A5C530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C530u) goto L_08A5C530;
    return;
L_08A5C530:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08A5C534;
L_08A5C534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C7A4;
      }
      goto L_08A5C550;
    }
L_08A5C550:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(224))))));
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[21] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A5C574u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 84u, 0x08AC48F0u>(ctx, &aot_mem) && ctx.pc == 0x08A5C574u) goto L_08A5C574;
    return;
L_08A5C574:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A5C588u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C588u) goto L_08A5C588;
    return;
L_08A5C588:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7984));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8000));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8016));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8024));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8032));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8040));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(108)));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.gpr[5] = (2226u << 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5C60Cu);
    ctx.gpr[22] = (ctx.gpr[5] + static_cast<std::uint32_t>(8624));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C60Cu) goto L_08A5C60C;
    return;
L_08A5C60C:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5C630u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 483u, 0x08A5A7FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5C630u) goto L_08A5C630;
    return;
L_08A5C630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A5C658u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(96))))));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5C658u) goto L_08A5C658;
    return;
L_08A5C658:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    goto L_08A5C660;
L_08A5C660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 701u, 0x08A5BF7Cu>(ctx, &aot_mem); return;
      }
      goto L_08A5C67C;
    }
L_08A5C67C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5C6B8;
      }
      goto L_08A5C6A0;
    }
L_08A5C6A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5C6C0;
      }
      goto L_08A5C6B0;
    }
L_08A5C6B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C6E4;
      }
      goto L_08A5C6B8;
    }
L_08A5C6B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C7A4;
      }
      goto L_08A5C6C0;
    }
L_08A5C6C0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A5C6D4;
      }
      goto L_08A5C6CC;
    }
L_08A5C6CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C6E4;
      }
      goto L_08A5C6D4;
    }
L_08A5C6D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5C6C0;
      }
      goto L_08A5C6E4;
    }
L_08A5C6E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(224))))));
        goto L_08A5C770;
    }
    goto L_08A5C6F0;
L_08A5C6F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(224))))));
    ctx.gpr[5] = (ctx.gpr[17] & 255u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(158), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(158))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(122), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5C748;
      }
      goto L_08A5C718;
    }
L_08A5C718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_08A5C73C;
    }
    goto L_08A5C724;
L_08A5C724:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(122))))));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_08A5C73C;
L_08A5C73C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5C768;
      }
      goto L_08A5C748;
    }
L_08A5C748:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08A5C768u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 789u, 0x08B0779Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5C768u) goto L_08A5C768;
    return;
L_08A5C768:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C7A4;
      }
      goto L_08A5C770;
    }
L_08A5C770:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(162), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(162))))));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5C7A4;
      }
      goto L_08A5C798;
    }
L_08A5C798:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(224))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08A5C7A4;
L_08A5C7A4:
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
L_08A5C7D4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7060)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7064)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7032)));
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[14] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[15] = (2229u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[3] = (2229u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[9] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-7056), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-7036)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-7028), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-7020), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (16281u << 16u);
    ctx.gpr[8] = (16268u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] | 39322u);
    ctx.gpr[13] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[7] = (ctx.gpr[8] | 52429u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[24] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-7048), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-7052), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-7044), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-7040), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7024), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-7016), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5C89C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[7] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[10] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (ctx.gpr[7] >> 16u);
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[7] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[10] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (ctx.gpr[7] >> 16u);
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[6] >> 16u);
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5CAE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[7] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[10] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (ctx.gpr[7] >> 16u);
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[6] >> 16u);
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5CC64:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08A5CC94;
L_08A5CC94:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A5CCE8;
      }
      goto L_08A5CCA4;
    }
L_08A5CCA4:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A5CCA4;
      }
      goto L_08A5CCE8;
    }
L_08A5CCE8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5CCF0:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5CD94:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[7] = (ctx.gpr[8] | ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[7] = (ctx.gpr[8] | ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (ctx.gpr[8] | ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5CED4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[7] = (ctx.gpr[8] | ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (ctx.gpr[8] | ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5CFAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A5CFE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 305u, 0x08AF95F8u>(ctx, &aot_mem) && ctx.pc == 0x08A5CFE0u) goto L_08A5CFE0;
    return;
L_08A5CFE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5D020;
      }
      goto L_08A5CFF4;
    }
L_08A5CFF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A5CFF8;
L_08A5CFF8:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A5CFF8;
    }
    goto L_08A5D020;
L_08A5D020:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D034:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D08C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A5D0E0;
      }
      goto L_08A5D0B8;
    }
L_08A5D0B8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x08A5D0C8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5D0C8u) goto L_08A5D0C8;
    return;
L_08A5D0C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D0D8;
      }
      goto L_08A5D0D0;
    }
L_08A5D0D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5D0E4;
      }
      goto L_08A5D0D8;
    }
L_08A5D0D8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D0B8;
      }
      goto L_08A5D0E0;
    }
L_08A5D0E0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08A5D0E4;
L_08A5D0E4:
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
L_08A5D100:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] | 3u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[5] | 12u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D124:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[21];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A5D188;
      }
      goto L_08A5D15C;
    }
L_08A5D15C:
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(8));
    goto L_08A5D160;
L_08A5D160:
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[19]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x08A5D170u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5D170u) goto L_08A5D170;
    return;
L_08A5D170:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D180;
      }
      goto L_08A5D178;
    }
L_08A5D178:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5D18C;
      }
      goto L_08A5D180;
    }
L_08A5D180:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A5D160;
      }
      goto L_08A5D188;
    }
L_08A5D188:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08A5D18C;
L_08A5D18C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D1B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5D1E8;
      }
      goto L_08A5D1D0;
    }
L_08A5D1D0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5D1DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A5D1B0;
L_08A5D1DC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D1D0;
      }
      goto L_08A5D1E8;
    }
L_08A5D1E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D1FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5D224;
      }
      goto L_08A5D21C;
    }
L_08A5D21C:
    ctx.gpr[31] = (0x08A5D224u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5D34C;
L_08A5D224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (0x08A5D240u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5D1B0;
L_08A5D240:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D25C;
      }
      goto L_08A5D250;
    }
L_08A5D250:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A5D25C;
L_08A5D25C:
    ctx.gpr[31] = (0x08A5D264u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5D100;
L_08A5D264:
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
L_08A5D27C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5D294u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 273u, 0x08A1D6B8u>(ctx, &aot_mem) && ctx.pc == 0x08A5D294u) goto L_08A5D294;
    return;
L_08A5D294:
    ctx.gpr[31] = (0x08A5D29Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5D100;
L_08A5D29C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D2B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5D2C8u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 303u, 0x08A1DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5D2C8u) goto L_08A5D2C8;
    return;
L_08A5D2C8:
    ctx.gpr[31] = (0x08A5D2D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5D100;
L_08A5D2D0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D2E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5D2FCu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 266u, 0x08A1D5B0u>(ctx, &aot_mem) && ctx.pc == 0x08A5D2FCu) goto L_08A5D2FC;
    return;
L_08A5D2FC:
    ctx.gpr[31] = (0x08A5D304u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5D100;
L_08A5D304:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D318:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5D330u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 285u, 0x08A1D944u>(ctx, &aot_mem) && ctx.pc == 0x08A5D330u) goto L_08A5D330;
    return;
L_08A5D330:
    ctx.gpr[31] = (0x08A5D338u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5D100;
L_08A5D338:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D34C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
      if (branch_taken) {
          goto L_08A5D374;
      }
      goto L_08A5D36C;
    }
L_08A5D36C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5D394;
      }
      goto L_08A5D374;
    }
L_08A5D374:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A5D390;
      }
      goto L_08A5D380;
    }
L_08A5D380:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A5D380;
      }
      goto L_08A5D390;
    }
L_08A5D390:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    goto L_08A5D394;
L_08A5D394:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5D3A8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A5D1B0;
L_08A5D3A8:
    ctx.gpr[31] = (0x08A5D3B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5D100;
L_08A5D3B0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D3C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5D3E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7008));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 336u, 0x08A36104u>(ctx, &aot_mem) && ctx.pc == 0x08A5D3E4u) goto L_08A5D3E4;
    return;
L_08A5D3E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D3F8;
      }
      goto L_08A5D3F0;
    }
L_08A5D3F0:
    ctx.gpr[31] = (0x08A5D3F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5D34C;
L_08A5D3F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D414;
      }
      goto L_08A5D404;
    }
L_08A5D404:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D404;
      }
      goto L_08A5D414;
    }
L_08A5D414:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A5D444;
      }
      goto L_08A5D424;
    }
L_08A5D424:
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D438;
      }
      goto L_08A5D434;
    }
L_08A5D434:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A5D438;
L_08A5D438:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A5D424;
      }
      goto L_08A5D444;
    }
L_08A5D444:
    ctx.gpr[31] = (0x08A5D44Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 669u, 0x08AA31FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D44Cu) goto L_08A5D44C;
    return;
L_08A5D44C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D460:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D468:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5D490u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7008));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 296u, 0x08A35E54u>(ctx, &aot_mem) && ctx.pc == 0x08A5D490u) goto L_08A5D490;
    return;
L_08A5D490:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D49C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D4C8;
      }
      goto L_08A5D4B4;
    }
L_08A5D4B4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    goto L_08A5D4C8;
L_08A5D4C8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A5D4F8;
      }
      goto L_08A5D4D0;
    }
L_08A5D4D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[31] = (0x08A5D4F8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08A5D100;
L_08A5D4F8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D504:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D524;
      }
      goto L_08A5D510;
    }
L_08A5D510:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08A5D524;
L_08A5D524:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D52C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5D544u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7008));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 336u, 0x08A36104u>(ctx, &aot_mem) && ctx.pc == 0x08A5D544u) goto L_08A5D544;
    return;
L_08A5D544:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D550:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5D564u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A5D52C;
L_08A5D564:
    ctx.gpr[31] = (0x08A5D56Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 669u, 0x08AA31FCu>(ctx, &aot_mem) && ctx.pc == 0x08A5D56Cu) goto L_08A5D56C;
    return;
L_08A5D56C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D57C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A5D5BC;
      }
      goto L_08A5D594;
    }
L_08A5D594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D5B4;
      }
      goto L_08A5D5A0;
    }
L_08A5D5A0:
    ctx.gpr[31] = (0x08A5D5A8u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    goto L_08A5D57C;
L_08A5D5A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D5A0;
      }
      goto L_08A5D5B4;
    }
L_08A5D5B4:
    ctx.gpr[31] = (0x08A5D5BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5D550;
L_08A5D5BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D5D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5D5E0u);
    // nop
    goto L_08A5D57C;
L_08A5D5E0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D5F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5D620u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7008)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 665u, 0x08AA31B4u>(ctx, &aot_mem) && ctx.pc == 0x08A5D620u) goto L_08A5D620;
    return;
L_08A5D620:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A5D62C;
      }
      goto L_08A5D628;
    }
L_08A5D628:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08A5D62C;
L_08A5D62C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(144), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(148), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(152), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D748;
      }
      goto L_08A5D704;
    }
L_08A5D704:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5D710u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A5D5F0;
L_08A5D710:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D72C;
      }
      goto L_08A5D71C;
    }
L_08A5D71C:
    ctx.gpr[31] = (0x08A5D724u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A5D5D0;
L_08A5D724:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5D76C;
      }
      goto L_08A5D72C;
    }
L_08A5D72C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D704;
      }
      goto L_08A5D748;
    }
L_08A5D748:
    ctx.gpr[16] = (ctx.gpr[20] + static_cast<std::uint32_t>(-7008));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5D758u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 326u, 0x08A36068u>(ctx, &aot_mem) && ctx.pc == 0x08A5D758u) goto L_08A5D758;
    return;
L_08A5D758:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A5D768u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 340u, 0x08A36164u>(ctx, &aot_mem) && ctx.pc == 0x08A5D768u) goto L_08A5D768;
    return;
L_08A5D768:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08A5D76C;
L_08A5D76C:
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
L_08A5D78C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5D7A0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A5D5F0;
L_08A5D7A0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D7C4;
      }
      goto L_08A5D7AC;
    }
L_08A5D7AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A5D7C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5D100;
L_08A5D7C4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D7D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D7FC;
      }
      goto L_08A5D7EC;
    }
L_08A5D7EC:
    ctx.gpr[31] = (0x08A5D7F4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    goto L_08A5D1B0;
L_08A5D7F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D804;
      }
      goto L_08A5D7FC;
    }
L_08A5D7FC:
    ctx.gpr[31] = (0x08A5D804u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08A5D1B0;
L_08A5D804:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D810:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 3u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[9] = (ctx.gpr[8] & 15u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    { const bool signed_ok = ctx.execute_signed_sub(8u, 8u, 9u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A5D834u, 0x01094022u); return; } }
      if (branch_taken) {
          goto L_08A5D878;
      }
      goto L_08A5D838;
    }
L_08A5D838:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<35u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(80);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(96);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(112);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(128);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[31] | 0u);
      if (branch_taken) {
          goto L_08A5D878;
      }
      goto L_08A5D86C;
    }
L_08A5D86C:
    ctx.gpr[31] = (0x08A5D874u);
    // nop
    goto L_08A5D880;
L_08A5D874:
    ctx.gpr[31] = (ctx.gpr[7] | 0u);
    goto L_08A5D878;
L_08A5D878:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D880:
    // PSP CACHE is a no-op in coherent host memory.
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 4u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 4u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 32u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 40u, 4u);
      ctx.eat_vfpu_prefixes(); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(80);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<9u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(96);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<10u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(112);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[6] != 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<11u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(128);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
      if (branch_taken) {
          goto L_08A5D8C8;
      }
      goto L_08A5D8B4;
    }
L_08A5D8B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5D880;
      }
      goto L_08A5D8C0;
    }
L_08A5D8C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5D8C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.execute_vfpu_vmmov(32u, 40u, 4u);
    ctx.gpr[4] = (ctx.gpr[5] + 0u);
    ctx.gpr[31] = (0x08A5D8E8u);
    ctx.gpr[5] = (ctx.gpr[6] + 0u);
    goto L_08A5D880;
L_08A5D8E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A5D8C0;
      }
      goto L_08A5D900;
    }
L_08A5D900:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const bool branch_taken = 0u == 0u;
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
      if (branch_taken) {
          goto L_08A5D880;
      }
      goto L_08A5D914;
    }
L_08A5D914:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[31] = (0x08A5D930u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7008)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 665u, 0x08AA31B4u>(ctx, &aot_mem) && ctx.pc == 0x08A5D930u) goto L_08A5D930;
    return;
L_08A5D930:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(144), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(148), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(152), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7008));
    ctx.gpr[31] = (0x08A5D9F4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 326u, 0x08A36068u>(ctx, &aot_mem) && ctx.pc == 0x08A5D9F4u) goto L_08A5D9F4;
    return;
L_08A5D9F4:
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
L_08A5DA0C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[5] = (0u | 6u);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(3));
    // nop
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DA58;
      }
      goto L_08A5DA40;
    }
L_08A5DA40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[5] = (0u | 60u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11001), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A5DA58;
L_08A5DA58:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5DA60:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6916));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A5DB1C;
      }
      goto L_08A5DA74;
    }
L_08A5DA74:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25176));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A5DA7C;
L_08A5DA7C:
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A5DAF4;
      }
      goto L_08A5DA8C;
    }
L_08A5DA8C:
    ctx.gpr[11] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (ctx.gpr[11] & 2u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DAB0;
      }
      goto L_08A5DAA0;
    }
L_08A5DAA0:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-32));
    ctx.gpr[10] = (ctx.gpr[10] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 24u));
      if (branch_taken) {
          goto L_08A5DAB0;
      }
      goto L_08A5DAB0;
    }
L_08A5DAB0:
    ctx.gpr[11] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (ctx.gpr[11] & 2u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DAD4;
      }
      goto L_08A5DAC4;
    }
L_08A5DAC4:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[7] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 24u));
      if (branch_taken) {
          goto L_08A5DAD4;
      }
      goto L_08A5DAD4;
    }
L_08A5DAD4:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[7];
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A5DAE4;
      }
      goto L_08A5DADC;
    }
L_08A5DADC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5DB04;
      }
      goto L_08A5DAE4;
    }
L_08A5DAE4:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A5DA8C;
      }
      goto L_08A5DAF4;
    }
L_08A5DAF4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5DB04;
      }
      goto L_08A5DAFC;
    }
L_08A5DAFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5DB04;
      }
      goto L_08A5DB04;
    }
L_08A5DB04:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DB24;
      }
      goto L_08A5DB0C;
    }
L_08A5DB0C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DA7C;
      }
      goto L_08A5DB1C;
    }
L_08A5DB1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A5DB28;
      }
      goto L_08A5DB24;
    }
L_08A5DB24:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    goto L_08A5DB28;
L_08A5DB28:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5DB30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (ctx.gpr[17] << 6u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    ctx.gpr[7] = (0u - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5DB98;
      }
      goto L_08A5DB78;
    }
L_08A5DB78:
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[16]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[17] << 4u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1960), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A5DBD0;
      }
      goto L_08A5DB98;
    }
L_08A5DB98:
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1939)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DC0C;
      }
      goto L_08A5DBD0;
    }
L_08A5DBD0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A5DBE0u);
    ctx.gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08A5DBE0u) goto L_08A5DBE0;
    return;
L_08A5DBE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5DC14;
      }
      goto L_08A5DC04;
    }
L_08A5DC04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DC98;
      }
      goto L_08A5DC0C;
    }
L_08A5DC0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DC9C;
      }
      goto L_08A5DC14;
    }
L_08A5DC14:
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[7] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    goto L_08A5DC30;
L_08A5DC30:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[8] = (ctx.gpr[8] << 4u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DC84;
      }
      goto L_08A5DC54;
    }
L_08A5DC54:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1921));
    ctx.gpr[7] = (0u | 19u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1920));
    ctx.gpr[31] = (0x08A5DC68u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A5DC68u) goto L_08A5DC68;
    return;
L_08A5DC68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1962)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A5DC98;
      }
      goto L_08A5DC84;
    }
L_08A5DC84:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A5DC30;
      }
      goto L_08A5DC98;
    }
L_08A5DC98:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1920), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08A5DC9C;
L_08A5DC9C:
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
L_08A5DCB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16952)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25456));
      if (branch_taken) {
          goto L_08A5DD58;
      }
      goto L_08A5DCE4;
    }
L_08A5DCE4:
    ctx.gpr[6] = (0u | 3000u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08A5DCEC;
L_08A5DCEC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(15952)));
    ctx.gpr[9] = (ctx.gpr[7] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(5952)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DD44;
      }
      goto L_08A5DD0C;
    }
L_08A5DD0C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(5956)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(68)));
    ctx.gpr[9] = (ctx.gpr[9] & 14u);
    ctx.gpr[9] = (ctx.gpr[9] ^ 6u);
    ctx.gpr[9] = (ctx.gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DD44;
      }
      goto L_08A5DD2C;
    }
L_08A5DD2C:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(1992), ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[9]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[9] = (ctx.hi);
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(1996), ctx.gpr[9]);
    goto L_08A5DD44;
L_08A5DD44:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16952)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5DCEC;
      }
      goto L_08A5DD58;
    }
L_08A5DD58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DD64u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 294u, 0x08A6D488u>(ctx, &aot_mem) && ctx.pc == 0x08A5DD64u) goto L_08A5DD64;
    return;
L_08A5DD64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DD70u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 294u, 0x08A6D488u>(ctx, &aot_mem) && ctx.pc == 0x08A5DD70u) goto L_08A5DD70;
    return;
L_08A5DD70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DD90;
      }
      goto L_08A5DD7C;
    }
L_08A5DD7C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5DD88u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 368u, 0x088B61B8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DD88u) goto L_08A5DD88;
    return;
L_08A5DD88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DD9C;
      }
      goto L_08A5DD90;
    }
L_08A5DD90:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5DD9Cu);
    ctx.gpr[5] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 368u, 0x088B61B8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DD9Cu) goto L_08A5DD9C;
    return;
L_08A5DD9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5DDB0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5DDCC;
      }
      goto L_08A5DDBC;
    }
L_08A5DDBC:
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A5DDCC;
L_08A5DDCC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5DDD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5DDF8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25056));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 735u, 0x08A9A744u>(ctx, &aot_mem) && ctx.pc == 0x08A5DDF8u) goto L_08A5DDF8;
    return;
L_08A5DDF8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19216), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5DE18;
      }
      goto L_08A5DE08;
    }
L_08A5DE08:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DE18u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 761u, 0x08A9A8E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DE18u) goto L_08A5DE18;
    return;
L_08A5DE18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x08A5DE28u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 735u, 0x08A9A744u>(ctx, &aot_mem) && ctx.pc == 0x08A5DE28u) goto L_08A5DE28;
    return;
L_08A5DE28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19956), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A5DE44;
      }
      goto L_08A5DE34;
    }
L_08A5DE34:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DE44u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 761u, 0x08A9A8E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DE44u) goto L_08A5DE44;
    return;
L_08A5DE44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x08A5DE54u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 735u, 0x08A9A744u>(ctx, &aot_mem) && ctx.pc == 0x08A5DE54u) goto L_08A5DE54;
    return;
L_08A5DE54:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19952), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A5DE70;
      }
      goto L_08A5DE60;
    }
L_08A5DE60:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DE70u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 761u, 0x08A9A8E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DE70u) goto L_08A5DE70;
    return;
L_08A5DE70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08A5DE80u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 735u, 0x08A9A744u>(ctx, &aot_mem) && ctx.pc == 0x08A5DE80u) goto L_08A5DE80;
    return;
L_08A5DE80:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21840), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A5DE9C;
      }
      goto L_08A5DE8C;
    }
L_08A5DE8C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DE9Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 761u, 0x08A9A8E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DE9Cu) goto L_08A5DE9C;
    return;
L_08A5DE9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[31] = (0x08A5DEACu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 735u, 0x08A9A744u>(ctx, &aot_mem) && ctx.pc == 0x08A5DEACu) goto L_08A5DEAC;
    return;
L_08A5DEAC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19220), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A5DEC8;
      }
      goto L_08A5DEB8;
    }
L_08A5DEB8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DEC8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 761u, 0x08A9A8E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DEC8u) goto L_08A5DEC8;
    return;
L_08A5DEC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[31] = (0x08A5DED8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 735u, 0x08A9A744u>(ctx, &aot_mem) && ctx.pc == 0x08A5DED8u) goto L_08A5DED8;
    return;
L_08A5DED8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19224), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A5DEF4;
      }
      goto L_08A5DEE4;
    }
L_08A5DEE4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DEF4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 761u, 0x08A9A8E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DEF4u) goto L_08A5DEF4;
    return;
L_08A5DEF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[31] = (0x08A5DF04u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 735u, 0x08A9A744u>(ctx, &aot_mem) && ctx.pc == 0x08A5DF04u) goto L_08A5DF04;
    return;
L_08A5DF04:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21844), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A5DF20;
      }
      goto L_08A5DF10;
    }
L_08A5DF10:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DF20u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 761u, 0x08A9A8E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DF20u) goto L_08A5DF20;
    return;
L_08A5DF20:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[31] = (0x08A5DF30u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 735u, 0x08A9A744u>(ctx, &aot_mem) && ctx.pc == 0x08A5DF30u) goto L_08A5DF30;
    return;
L_08A5DF30:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21848), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A5DF4C;
      }
      goto L_08A5DF3C;
    }
L_08A5DF3C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DF4Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 761u, 0x08A9A8E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DF4Cu) goto L_08A5DF4C;
    return;
L_08A5DF4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08A5DF5Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 735u, 0x08A9A744u>(ctx, &aot_mem) && ctx.pc == 0x08A5DF5Cu) goto L_08A5DF5C;
    return;
L_08A5DF5C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21852), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A5DF78;
      }
      goto L_08A5DF68;
    }
L_08A5DF68:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5DF78u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 761u, 0x08A9A8E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5DF78u) goto L_08A5DF78;
    return;
L_08A5DF78:
    ctx.gpr[6] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21920), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 5662u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A5DF8C;
L_08A5DF8C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(21892), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21900), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21902), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21904), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21916), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21888), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(21908), 0u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(21918), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5DF8C;
      }
      goto L_08A5DFC0;
    }
L_08A5DFC0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[31] = (0x08A5DFD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5DCB8;
L_08A5DFD0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17224), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17225), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17228), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5DFF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5E020;
      }
      goto L_08A5E00C;
    }
L_08A5E00C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A5E018u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 749u, 0x08A9A80Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E018u) goto L_08A5E018;
    return;
L_08A5E018:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21852), ctx.gpr[4]);
    goto L_08A5E020;
L_08A5E020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21844)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5E040;
      }
      goto L_08A5E02C;
    }
L_08A5E02C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A5E038u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 749u, 0x08A9A80Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E038u) goto L_08A5E038;
    return;
L_08A5E038:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21844), ctx.gpr[4]);
    goto L_08A5E040;
L_08A5E040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21848)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5E060;
      }
      goto L_08A5E04C;
    }
L_08A5E04C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A5E058u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 749u, 0x08A9A80Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E058u) goto L_08A5E058;
    return;
L_08A5E058:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21848), ctx.gpr[4]);
    goto L_08A5E060;
L_08A5E060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19224)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5E080;
      }
      goto L_08A5E06C;
    }
L_08A5E06C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A5E078u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 749u, 0x08A9A80Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E078u) goto L_08A5E078;
    return;
L_08A5E078:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19224), ctx.gpr[4]);
    goto L_08A5E080;
L_08A5E080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19220)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5E0A0;
      }
      goto L_08A5E08C;
    }
L_08A5E08C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A5E098u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 749u, 0x08A9A80Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E098u) goto L_08A5E098;
    return;
L_08A5E098:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19220), ctx.gpr[4]);
    goto L_08A5E0A0;
L_08A5E0A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19216)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5E0C0;
      }
      goto L_08A5E0AC;
    }
L_08A5E0AC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A5E0B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 749u, 0x08A9A80Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E0B8u) goto L_08A5E0B8;
    return;
L_08A5E0B8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19216), ctx.gpr[4]);
    goto L_08A5E0C0;
L_08A5E0C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19956)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5E0E0;
      }
      goto L_08A5E0CC;
    }
L_08A5E0CC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A5E0D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 749u, 0x08A9A80Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E0D8u) goto L_08A5E0D8;
    return;
L_08A5E0D8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19956), ctx.gpr[4]);
    goto L_08A5E0E0;
L_08A5E0E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19952)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5E100;
      }
      goto L_08A5E0EC;
    }
L_08A5E0EC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A5E0F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 749u, 0x08A9A80Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E0F8u) goto L_08A5E0F8;
    return;
L_08A5E0F8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19952), ctx.gpr[4]);
    goto L_08A5E100;
L_08A5E100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21840)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5E120;
      }
      goto L_08A5E10C;
    }
L_08A5E10C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A5E118u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 749u, 0x08A9A80Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E118u) goto L_08A5E118;
    return;
L_08A5E118:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21840), ctx.gpr[4]);
    goto L_08A5E120;
L_08A5E120:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E130:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E138:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5E14Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A5E14Cu) goto L_08A5E14C;
    return;
L_08A5E14C:
    ctx.gpr[31] = (0x08A5E154u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E154u) goto L_08A5E154;
    return;
L_08A5E154:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A5E190;
      }
      goto L_08A5E15C;
    }
L_08A5E15C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E190;
      }
      goto L_08A5E164;
    }
L_08A5E164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E190;
      }
      goto L_08A5E170;
    }
L_08A5E170:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 4u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E190;
      }
      goto L_08A5E18C;
    }
L_08A5E18C:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A5E190;
L_08A5E190:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E1A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] << 5u);
    ctx.gpr[6] = (ctx.gpr[7] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(5961)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A5E3A0;
      }
      goto L_08A5E1D0;
    }
L_08A5E1D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(5952)));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5E3A0;
      }
      goto L_08A5E1E0;
    }
L_08A5E1E0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(23840)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E1F8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E214;
      }
      goto L_08A5E204;
    }
L_08A5E204:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A5E214u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A5E3AC;
L_08A5E214:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E3A0;
      }
      goto L_08A5E21C;
    }
L_08A5E21C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E238;
      }
      goto L_08A5E228;
    }
L_08A5E228:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A5E238u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 422u, 0x08A79630u>(ctx, &aot_mem) && ctx.pc == 0x08A5E238u) goto L_08A5E238;
    return;
L_08A5E238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E3A0;
      }
      goto L_08A5E240;
    }
L_08A5E240:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E25C;
      }
      goto L_08A5E24C;
    }
L_08A5E24C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A5E25Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 450u, 0x08A798ECu>(ctx, &aot_mem) && ctx.pc == 0x08A5E25Cu) goto L_08A5E25C;
    return;
L_08A5E25C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E3A0;
      }
      goto L_08A5E264;
    }
L_08A5E264:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E280;
      }
      goto L_08A5E270;
    }
L_08A5E270:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A5E280u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 231u, 0x08A6CFA4u>(ctx, &aot_mem) && ctx.pc == 0x08A5E280u) goto L_08A5E280;
    return;
L_08A5E280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E3A0;
      }
      goto L_08A5E288;
    }
L_08A5E288:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E2BC;
      }
      goto L_08A5E294;
    }
L_08A5E294:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29520)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (0u | 13u);
      if (branch_taken) {
          goto L_08A5E2AC;
      }
      goto L_08A5E2A4;
    }
L_08A5E2A4:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A5E2BC;
      }
      goto L_08A5E2AC;
    }
L_08A5E2AC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A5E2BCu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 608u, 0x08A7B0C8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E2BCu) goto L_08A5E2BC;
    return;
L_08A5E2BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E3A0;
      }
      goto L_08A5E2C4;
    }
L_08A5E2C4:
    ctx.gpr[31] = (0x08A5E2CCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 703u, 0x08A7B9F8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E2CCu) goto L_08A5E2CC;
    return;
L_08A5E2CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E3A0;
      }
      goto L_08A5E2D4;
    }
L_08A5E2D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E2E8;
      }
      goto L_08A5E2E0;
    }
L_08A5E2E0:
    ctx.gpr[31] = (0x08A5E2E8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 6u, 0x08A7C094u>(ctx, &aot_mem) && ctx.pc == 0x08A5E2E8u) goto L_08A5E2E8;
    return;
L_08A5E2E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E3A0;
      }
      goto L_08A5E2F0;
    }
L_08A5E2F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E304;
      }
      goto L_08A5E2FC;
    }
L_08A5E2FC:
    ctx.gpr[31] = (0x08A5E304u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 247u, 0x08A6D154u>(ctx, &aot_mem) && ctx.pc == 0x08A5E304u) goto L_08A5E304;
    return;
L_08A5E304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E3A0;
      }
      goto L_08A5E30C;
    }
L_08A5E30C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E320;
      }
      goto L_08A5E318;
    }
L_08A5E318:
    ctx.gpr[31] = (0x08A5E320u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 27u, 0x08A7C328u>(ctx, &aot_mem) && ctx.pc == 0x08A5E320u) goto L_08A5E320;
    return;
L_08A5E320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E3A0;
      }
      goto L_08A5E328;
    }
L_08A5E328:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E33C;
      }
      goto L_08A5E334;
    }
L_08A5E334:
    ctx.gpr[31] = (0x08A5E33Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 248u, 0x08A6D15Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E33Cu) goto L_08A5E33C;
    return;
L_08A5E33C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E3A0;
      }
      goto L_08A5E344;
    }
L_08A5E344:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E358;
      }
      goto L_08A5E350;
    }
L_08A5E350:
    ctx.gpr[31] = (0x08A5E358u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 648u, 0x08A7B514u>(ctx, &aot_mem) && ctx.pc == 0x08A5E358u) goto L_08A5E358;
    return;
L_08A5E358:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E3A0;
      }
      goto L_08A5E360;
    }
L_08A5E360:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E374;
      }
      goto L_08A5E36C;
    }
L_08A5E36C:
    ctx.gpr[31] = (0x08A5E374u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 240u, 0x08A6D044u>(ctx, &aot_mem) && ctx.pc == 0x08A5E374u) goto L_08A5E374;
    return;
L_08A5E374:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E3A0;
      }
      goto L_08A5E37C;
    }
L_08A5E37C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E398;
      }
      goto L_08A5E388;
    }
L_08A5E388:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A5E398u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 222u, 0x08A6CE10u>(ctx, &aot_mem) && ctx.pc == 0x08A5E398u) goto L_08A5E398;
    return;
L_08A5E398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E3A0;
      }
      goto L_08A5E3A0;
    }
L_08A5E3A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E3AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(5956)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E468;
      }
      goto L_08A5E3D0;
    }
L_08A5E3D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] >> 1u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 6u);
      if (branch_taken) {
          goto L_08A5E40C;
      }
      goto L_08A5E3E8;
    }
L_08A5E3E8:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A5E468;
      }
      goto L_08A5E3F4;
    }
L_08A5E3F4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E41C;
      }
      goto L_08A5E3FC;
    }
L_08A5E3FC:
    ctx.gpr[31] = (0x08A5E404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 436u, 0x08A6DF20u>(ctx, &aot_mem) && ctx.pc == 0x08A5E404u) goto L_08A5E404;
    return;
L_08A5E404:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E468;
      }
      goto L_08A5E40C;
    }
L_08A5E40C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A5E42C;
      }
      goto L_08A5E414;
    }
L_08A5E414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E468;
      }
      goto L_08A5E41C;
    }
L_08A5E41C:
    ctx.gpr[31] = (0x08A5E424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 144u, 0x08A60E08u>(ctx, &aot_mem) && ctx.pc == 0x08A5E424u) goto L_08A5E424;
    return;
L_08A5E424:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E468;
      }
      goto L_08A5E42C;
    }
L_08A5E42C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E458;
      }
      goto L_08A5E448;
    }
L_08A5E448:
    ctx.gpr[31] = (0x08A5E450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 192u, 0x08A1CF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5E450u) goto L_08A5E450;
    return;
L_08A5E450:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E460;
      }
      goto L_08A5E458;
    }
L_08A5E458:
    ctx.gpr[31] = (0x08A5E460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 147u, 0x08A60E80u>(ctx, &aot_mem) && ctx.pc == 0x08A5E460u) goto L_08A5E460;
    return;
L_08A5E460:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E468;
      }
      goto L_08A5E468;
    }
L_08A5E468:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E474:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17394u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5E608;
      }
      goto L_08A5E4A8;
    }
L_08A5E4A8:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (15395u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8088)));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5E608;
      }
      goto L_08A5E4CC;
    }
L_08A5E4CC:
    ctx.gpr[31] = (0x08A5E4D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 436u, 0x08ACA9D8u>(ctx, &aot_mem) && ctx.pc == 0x08A5E4D4u) goto L_08A5E4D4;
    return;
L_08A5E4D4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08A5E4F0;
    }
    goto L_08A5E4DC;
L_08A5E4DC:
    ctx.gpr[31] = (0x08A5E4E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 440u, 0x08ACAA00u>(ctx, &aot_mem) && ctx.pc == 0x08A5E4E4u) goto L_08A5E4E4;
    return;
L_08A5E4E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E608;
      }
      goto L_08A5E4EC;
    }
L_08A5E4EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08A5E4F0;
L_08A5E4F0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(673)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(673), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(673)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E570;
      }
      goto L_08A5E510;
    }
L_08A5E510:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(673), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A5E524u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A5DDB0;
L_08A5E524:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8088)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16816u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5E558u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5E558u) goto L_08A5E558;
    return;
L_08A5E558:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08A5E578;
    }
    goto L_08A5E568;
L_08A5E568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E608;
      }
      goto L_08A5E570;
    }
L_08A5E570:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E608;
      }
      goto L_08A5E578;
    }
L_08A5E578:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(674));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(674)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21928)));
        goto L_08A5E5AC;
    }
    goto L_08A5E5A0;
L_08A5E5A0:
    ctx.gpr[5] = (0u | 68u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(674), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21928)));
    goto L_08A5E5AC;
L_08A5E5AC:
    ctx.gpr[5] = (0u | 4000u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(10384));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(28000));
    ctx.gpr[31] = (0x08A5E608u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5E608u) goto L_08A5E608;
    return;
L_08A5E608:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_08A5E624:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (17561u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5E87C;
      }
      goto L_08A5E668;
    }
L_08A5E668:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x08A5E678u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 304u, 0x088B5DD4u>(ctx, &aot_mem) && ctx.pc == 0x08A5E678u) goto L_08A5E678;
    return;
L_08A5E678:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5E6A4;
      }
      goto L_08A5E684;
    }
L_08A5E684:
    ctx.gpr[31] = (0x08A5E68Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A5E68Cu) goto L_08A5E68C;
    return;
L_08A5E68C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16908u << 16u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5E6AC;
      }
      goto L_08A5E69C;
    }
L_08A5E69C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5E6EC;
      }
      goto L_08A5E6A4;
    }
L_08A5E6A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E87C;
      }
      goto L_08A5E6AC;
    }
L_08A5E6AC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E6E8;
      }
      goto L_08A5E6E0;
    }
L_08A5E6E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5E6EC;
      }
      goto L_08A5E6E8;
    }
L_08A5E6E8:
    ctx.gpr[18] = (0u | 0u);
    goto L_08A5E6EC;
L_08A5E6EC:
    if (ctx.gpr[18] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(588)));
        goto L_08A5E750;
    }
    goto L_08A5E6F4;
L_08A5E6F4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25440));
    ctx.gpr[31] = (0x08A5E704u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 27u, 0x08A980DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5E704u) goto L_08A5E704;
    return;
L_08A5E704:
    ctx.gpr[19] = (ctx.gpr[2] & 65535u);
    ctx.gpr[31] = (0x08A5E710u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1088u, 0x08A97F64u>(ctx, &aot_mem) && ctx.pc == 0x08A5E710u) goto L_08A5E710;
    return;
L_08A5E710:
    ctx.gpr[20] = (ctx.gpr[2] & 65535u);
    ctx.gpr[31] = (0x08A5E71Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 846u, 0x08A974B0u>(ctx, &aot_mem) && ctx.pc == 0x08A5E71Cu) goto L_08A5E71C;
    return;
L_08A5E71C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A5E734;
      }
      goto L_08A5E728;
    }
L_08A5E728:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    goto L_08A5E734;
L_08A5E734:
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
        goto L_08A5E744;
    }
    goto L_08A5E744;
L_08A5E744:
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A5E784;
      }
      goto L_08A5E750;
    }
L_08A5E750:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_08A5E784;
L_08A5E784:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A5E794;
    }
    goto L_08A5E794;
L_08A5E794:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
      if (branch_taken) {
          goto L_08A5E7E4;
      }
      goto L_08A5E7A4;
    }
L_08A5E7A4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11044)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E7D0;
      }
      goto L_08A5E7B8;
    }
L_08A5E7B8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30));
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
        goto L_08A5E7C8;
    }
    goto L_08A5E7C8;
L_08A5E7C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A5E7E4;
      }
      goto L_08A5E7D0;
    }
L_08A5E7D0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
        goto L_08A5E7E0;
    }
    goto L_08A5E7E0;
L_08A5E7E0:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_08A5E7E4;
L_08A5E7E4:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A5E7F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5DDB0;
L_08A5E7F0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5E804u);
    ctx.gpr[5] = (0u | 70u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5E804u) goto L_08A5E804;
    return;
L_08A5E804:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08A5E86C;
      }
      goto L_08A5E814;
    }
L_08A5E814:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5565u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5E86Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5E86Cu) goto L_08A5E86C;
    return;
L_08A5E86C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E87C;
      }
      goto L_08A5E874;
    }
L_08A5E874:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(11044), ctx.gpr[19]);
    goto L_08A5E87C;
L_08A5E87C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5E8A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17505u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5EAB4;
      }
      goto L_08A5E8E0;
    }
L_08A5E8E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-999));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5E90C;
      }
      goto L_08A5E8F4;
    }
L_08A5E8F4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5E914;
      }
      goto L_08A5E904;
    }
L_08A5E904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EAAC;
      }
      goto L_08A5E90C;
    }
L_08A5E90C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5EAB8;
      }
      goto L_08A5E914;
    }
L_08A5E914:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(588)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5E938;
      }
      goto L_08A5E92C;
    }
L_08A5E92C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EAAC;
      }
      goto L_08A5E938;
    }
L_08A5E938:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A5E948u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5DDB0;
L_08A5E948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1729)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A5E978;
      }
      goto L_08A5E960;
    }
L_08A5E960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08A5E99C;
      }
      goto L_08A5E978;
    }
L_08A5E978:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1730)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1732)));
      if (branch_taken) {
          goto L_08A5E998;
      }
      goto L_08A5E984;
    }
L_08A5E984:
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1732), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A5E998;
L_08A5E998:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    goto L_08A5E99C;
L_08A5E99C:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16832u << 16u);
      if (branch_taken) {
          goto L_08A5E9B0;
      }
      goto L_08A5E9AC;
    }
L_08A5E9AC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    goto L_08A5E9B0;
L_08A5E9B0:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A5E9D4u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5E9D4u) goto L_08A5E9D4;
    return;
L_08A5E9D4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A5EAAC;
      }
      goto L_08A5E9E4;
    }
L_08A5E9E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (17851u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(588)));
    ctx.gpr[4] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5EA24;
      }
      goto L_08A5EA10;
    }
L_08A5EA10:
    ctx.gpr[4] = (0u | 61u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 260u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5EA34;
      }
      goto L_08A5EA24;
    }
L_08A5EA24:
    ctx.gpr[4] = (0u | 62u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 261u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A5EA34;
L_08A5EA34:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5EA5C;
      }
      goto L_08A5EA4C;
    }
L_08A5EA4C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7000));
      if (branch_taken) {
          goto L_08A5EA74;
      }
      goto L_08A5EA5C;
    }
L_08A5EA5C:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7000));
    goto L_08A5EA74;
L_08A5EA74:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5EAACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5EAACu) goto L_08A5EAAC;
    return;
L_08A5EAAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5EAB8;
      }
      goto L_08A5EAB4;
    }
L_08A5EAB4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5EAB8;
L_08A5EAB8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5EADC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (16916u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[11] | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[21] = (ctx.gpr[8] & 255u);
    ctx.gpr[20] = (ctx.gpr[9] & 255u);
    ctx.gpr[19] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5EB38u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5EB38u) goto L_08A5EB38;
    return;
L_08A5EB38:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (17579u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5EB60;
      }
      goto L_08A5EB5C;
    }
L_08A5EB5C:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    goto L_08A5EB60;
L_08A5EB60:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A5EB8C;
      }
      goto L_08A5EB7C;
    }
L_08A5EB7C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5EB94;
      }
      goto L_08A5EB8C;
    }
L_08A5EB8C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    goto L_08A5EB94;
L_08A5EB94:
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5EBBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5EBBCu) goto L_08A5EBBC;
    return;
L_08A5EBBC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5EBE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (18204u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5ED54;
      }
      goto L_08A5EC1C;
    }
L_08A5EC1C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5EC2Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A5DDB0;
L_08A5EC2C:
    ctx.gpr[6] = (17224u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5EC48u);
    ctx.gpr[5] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5EC48u) goto L_08A5EC48;
    return;
L_08A5EC48:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 52u);
      if (branch_taken) {
          goto L_08A5ECB0;
      }
      goto L_08A5EC58;
    }
L_08A5EC58:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 97u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 12500u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5ECB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5ECB0u) goto L_08A5ECB0;
    return;
L_08A5ECB0:
    ctx.gpr[4] = (17917u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5ED54;
      }
      goto L_08A5ECD0;
    }
L_08A5ECD0:
    ctx.gpr[6] = (17076u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5ECECu);
    ctx.gpr[5] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5ECECu) goto L_08A5ECEC;
    return;
L_08A5ECEC:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08A5ED54;
      }
      goto L_08A5ECFC;
    }
L_08A5ECFC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 98u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 25000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5ED54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5ED54u) goto L_08A5ED54;
    return;
L_08A5ED54:
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
L_08A5ED6C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5ED84;
      }
      goto L_08A5ED78;
    }
L_08A5ED78:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10648), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A5ED84;
L_08A5ED84:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ED8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5ED94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17608u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5EFE8;
      }
      goto L_08A5EDC8;
    }
L_08A5EDC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(685)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5EDEC;
      }
      goto L_08A5EDD8;
    }
L_08A5EDD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5EDE4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A5F6D8;
L_08A5EDE4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EE20;
      }
      goto L_08A5EDEC;
    }
L_08A5EDEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 154u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5EE18;
      }
      goto L_08A5EE00;
    }
L_08A5EE00:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5EE28;
      }
      goto L_08A5EE10;
    }
L_08A5EE10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A5EE50;
      }
      goto L_08A5EE18;
    }
L_08A5EE18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5EFEC;
      }
      goto L_08A5EE20;
    }
L_08A5EE20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5EFEC;
      }
      goto L_08A5EE28;
    }
L_08A5EE28:
    ctx.gpr[8] = (0u | 65535u);
    if (ctx.gpr[7] == ctx.gpr[8]) {
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
        goto L_08A5EE50;
    }
    goto L_08A5EE34;
L_08A5EE34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (0u | 80u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A5EE50;
      }
      goto L_08A5EE48;
    }
L_08A5EE48:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    goto L_08A5EE50;
L_08A5EE50:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EE6C;
      }
      goto L_08A5EE58;
    }
L_08A5EE58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EE74;
      }
      goto L_08A5EE64;
    }
L_08A5EE64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EFE0;
      }
      goto L_08A5EE6C;
    }
L_08A5EE6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5EFEC;
      }
      goto L_08A5EE74;
    }
L_08A5EE74:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 496u);
    ctx.gpr[6] = (ctx.gpr[6] >> 4u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EEFC;
      }
      goto L_08A5EE88;
    }
L_08A5EE88:
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(45) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (0u | 44u);
      if (branch_taken) {
          goto L_08A5EEA0;
      }
      goto L_08A5EE94;
    }
L_08A5EE94:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(680), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    goto L_08A5EEA0;
L_08A5EEA0:
    ctx.gpr[7] = (0u | 44u);
    if (ctx.gpr[5] != ctx.gpr[7]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(684)));
        goto L_08A5EECC;
    }
    goto L_08A5EEAC;
L_08A5EEAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(684), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(684)));
    goto L_08A5EECC;
L_08A5EECC:
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10649));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5EF2C;
      }
      goto L_08A5EEFC;
    }
L_08A5EEFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A5EF0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5DDB0;
L_08A5EF0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (16928u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A5EF34;
      }
      goto L_08A5EF24;
    }
L_08A5EF24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 20u);
      if (branch_taken) {
          goto L_08A5EF38;
      }
      goto L_08A5EF2C;
    }
L_08A5EF2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5EFEC;
      }
      goto L_08A5EF34;
    }
L_08A5EF34:
    ctx.gpr[4] = (0u | 80u);
    goto L_08A5EF38;
L_08A5EF38:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08A5EF4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5EF4Cu) goto L_08A5EF4C;
    return;
L_08A5EF4C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08A5EFE0;
      }
      goto L_08A5EF5C;
    }
L_08A5EF5C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8020));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5EFE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5EFE0u) goto L_08A5EFE0;
    return;
L_08A5EFE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5EFEC;
      }
      goto L_08A5EFE8;
    }
L_08A5EFE8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5EFEC;
L_08A5EFEC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_08A5F008:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (17692u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5F148;
      }
      goto L_08A5F03C;
    }
L_08A5F03C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F140;
      }
      goto L_08A5F050;
    }
L_08A5F050:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(588)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5F140;
      }
      goto L_08A5F068;
    }
L_08A5F068:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5F078u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5DDB0;
L_08A5F078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A5F098;
      }
      goto L_08A5F090;
    }
L_08A5F090:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 15u);
      if (branch_taken) {
          goto L_08A5F09C;
      }
      goto L_08A5F098;
    }
L_08A5F098:
    ctx.gpr[4] = (0u | 60u);
    goto L_08A5F09C;
L_08A5F09C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08A5F0B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5F0B0u) goto L_08A5F0B0;
    return;
L_08A5F0B0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 12u);
      if (branch_taken) {
          goto L_08A5F140;
      }
      goto L_08A5F0C0;
    }
L_08A5F0C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 262u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 262u);
    ctx.gpr[31] = (0x08A5F0ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A5F0ECu) goto L_08A5F0EC;
    return;
L_08A5F0EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 1023u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5F140u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5F140u) goto L_08A5F140;
    return;
L_08A5F140:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5F14C;
      }
      goto L_08A5F148;
    }
L_08A5F148:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5F14C;
L_08A5F14C:
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
L_08A5F164:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5F360;
      }
      goto L_08A5F1C0;
    }
L_08A5F1C0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A5F1D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5DDB0;
L_08A5F1D4:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(848));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (15205u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 24642u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (2233u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (2233u << 16u);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[19] = (0u | 2u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (0u | 6u);
    ctx.gpr[22] = (0u | 10u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-25456));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(10384));
    goto L_08A5F230;
L_08A5F230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A5F23Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 215u, 0x08A293C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5F23Cu) goto L_08A5F23C;
    return;
L_08A5F23C:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A5F344;
      }
      goto L_08A5F248;
    }
L_08A5F248:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(880));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A5F274;
      }
      goto L_08A5F26C;
    }
L_08A5F26C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A5F344;
      }
      goto L_08A5F274;
    }
L_08A5F274:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5F344;
      }
      goto L_08A5F28C;
    }
L_08A5F28C:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
        goto L_08A5F2A4;
    }
    goto L_08A5F29C;
L_08A5F29C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08A5F2A4;
L_08A5F2A4:
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A5F2C4u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5F2C4u) goto L_08A5F2C4;
    return;
L_08A5F2C4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A5F344;
      }
      goto L_08A5F2D4;
    }
L_08A5F2D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[30]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x08A5F2FCu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A5F2FCu) goto L_08A5F2FC;
    return;
L_08A5F2FC:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5F30Cu);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A5F30Cu) goto L_08A5F30C;
    return;
L_08A5F30C:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A5F340u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5F340u) goto L_08A5F340;
    return;
L_08A5F340:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08A5F344;
L_08A5F344:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F230;
      }
      goto L_08A5F358;
    }
L_08A5F358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5F364;
      }
      goto L_08A5F360;
    }
L_08A5F360:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5F364;
L_08A5F364:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F3A8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(588)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[6] = (0u | 5u);
      if (branch_taken) {
          goto L_08A5F3D8;
      }
      goto L_08A5F3BC;
    }
L_08A5F3BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5F3D0;
      }
      goto L_08A5F3C4;
    }
L_08A5F3C4:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1732));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A5F3E8;
      }
      goto L_08A5F3D0;
    }
L_08A5F3D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F440;
      }
      goto L_08A5F3D8;
    }
L_08A5F3D8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A5F3D0;
      }
      goto L_08A5F3E0;
    }
L_08A5F3E0:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1448));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A5F3E8;
L_08A5F3E8:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (15759u << 16u);
      if (branch_taken) {
          goto L_08A5F420;
      }
      goto L_08A5F3F8;
    }
L_08A5F3F8:
    ctx.gpr[5] = (15800u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 20972u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A5F418;
    }
    goto L_08A5F418;
L_08A5F418:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A5F440;
      }
      goto L_08A5F420;
    }
L_08A5F420:
    ctx.gpr[5] = (ctx.gpr[5] | 23593u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A5F43C;
    }
    goto L_08A5F43C;
L_08A5F43C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A5F440;
L_08A5F440:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F448:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A5F46C;
      }
      goto L_08A5F45C;
    }
L_08A5F45C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A5F590;
      }
      goto L_08A5F464;
    }
L_08A5F464:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F488;
      }
      goto L_08A5F46C;
    }
L_08A5F46C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A5F56C;
      }
      goto L_08A5F478;
    }
L_08A5F478:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F4D4;
      }
      goto L_08A5F480;
    }
L_08A5F480:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F590;
      }
      goto L_08A5F488;
    }
L_08A5F488:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16076u << 16u);
      if (branch_taken) {
          goto L_08A5F4CC;
      }
      goto L_08A5F4A4;
    }
L_08A5F4A4:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16153u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    goto L_08A5F4CC;
L_08A5F4CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F590;
      }
      goto L_08A5F4D4;
    }
L_08A5F4D4:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5F510;
      }
      goto L_08A5F4F0;
    }
L_08A5F4F0:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16153u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    goto L_08A5F510;
L_08A5F510:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5F550;
      }
      goto L_08A5F530;
    }
L_08A5F530:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A5F550;
    }
    goto L_08A5F550;
L_08A5F550:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5F564;
      }
      goto L_08A5F560;
    }
L_08A5F560:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5F564;
L_08A5F564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F590;
      }
      goto L_08A5F56C;
    }
L_08A5F56C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A5F590;
    }
    goto L_08A5F590;
L_08A5F590:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A5F5CC;
    }
    goto L_08A5F5CC;
L_08A5F5CC:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08A5F5E0;
    }
    goto L_08A5F5E0;
L_08A5F5E0:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F5E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A5F61C;
      }
      goto L_08A5F600;
    }
L_08A5F600:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(84)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08A5F61C;
    }
    goto L_08A5F61C;
L_08A5F61C:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
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
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08A5F650;
    }
    goto L_08A5F650;
L_08A5F650:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A5F664;
    }
    goto L_08A5F664;
L_08A5F664:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F66C:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(46) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F69C;
      }
      goto L_08A5F67C;
    }
L_08A5F67C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(23896)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F694:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5F6A0;
      }
      goto L_08A5F69C;
    }
L_08A5F69C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5F6A0;
L_08A5F6A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F6A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5F6B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 834u, 0x0889FDC8u>(ctx, &aot_mem) && ctx.pc == 0x08A5F6B8u) goto L_08A5F6B8;
    return;
L_08A5F6B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F6C8;
      }
      goto L_08A5F6C0;
    }
L_08A5F6C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5F6CC;
      }
      goto L_08A5F6C8;
    }
L_08A5F6C8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5F6CC;
L_08A5F6CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F6D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 24u);
      if (branch_taken) {
          goto L_08A5F714;
      }
      goto L_08A5F6F4;
    }
L_08A5F6F4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A5F714;
      }
      goto L_08A5F6FC;
    }
L_08A5F6FC:
    ctx.gpr[31] = (0x08A5F704u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 834u, 0x0889FDC8u>(ctx, &aot_mem) && ctx.pc == 0x08A5F704u) goto L_08A5F704;
    return;
L_08A5F704:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F71C;
      }
      goto L_08A5F70C;
    }
L_08A5F70C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5F720;
      }
      goto L_08A5F714;
    }
L_08A5F714:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5F720;
      }
      goto L_08A5F71C;
    }
L_08A5F71C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5F720;
L_08A5F720:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F72C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17505u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5F8A4;
      }
      goto L_08A5F764;
    }
L_08A5F764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5F89C;
      }
      goto L_08A5F778;
    }
L_08A5F778:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1580)));
    ctx.gpr[4] = (15564u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (48332u << 16u);
      if (branch_taken) {
          goto L_08A5F7B0;
      }
      goto L_08A5F798;
    }
L_08A5F798:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5F7E0;
      }
      goto L_08A5F7AC;
    }
L_08A5F7AC:
    ctx.gpr[4] = (48332u << 16u);
    goto L_08A5F7B0;
L_08A5F7B0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5F89C;
      }
      goto L_08A5F7CC;
    }
L_08A5F7CC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5F89C;
      }
      goto L_08A5F7E0;
    }
L_08A5F7E0:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5F7F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5DDB0;
L_08A5F7F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[18] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(70));
    ctx.gpr[31] = (0x08A5F820u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5F820u) goto L_08A5F820;
    return;
L_08A5F820:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A5F89C;
      }
      goto L_08A5F830;
    }
L_08A5F830:
    ctx.gpr[4] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5F84Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A5F84Cu) goto L_08A5F84C;
    return;
L_08A5F84C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[19] >> 4u);
    ctx.gpr[31] = (0x08A5F860u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A5F860u) goto L_08A5F860;
    return;
L_08A5F860:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5F89Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5F89Cu) goto L_08A5F89C;
    return;
L_08A5F89C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A5F8A8;
      }
      goto L_08A5F8A4;
    }
L_08A5F8A4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5F8A8;
L_08A5F8A8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F8C8:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(46) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5F8F8;
      }
      goto L_08A5F8D8;
    }
L_08A5F8D8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(24080)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F8F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5F8FC;
      }
      goto L_08A5F8F8;
    }
L_08A5F8F8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5F8FC;
L_08A5F8FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5F904:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17505u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5FA90;
      }
      goto L_08A5F93C;
    }
L_08A5F93C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-999));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5F9D8;
      }
      goto L_08A5F950;
    }
L_08A5F950:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A5F9D0;
      }
      goto L_08A5F968;
    }
L_08A5F968:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17347u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5F9D0;
      }
      goto L_08A5F984;
    }
L_08A5F984:
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.gpr[4] = (0u | 7u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A5F9E0;
      }
      goto L_08A5F9A4;
    }
L_08A5F9A4:
    ctx.gpr[5] = (0u | 71u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[19] = (0u | 60u);
    ctx.gpr[5] = (0u | 71u);
    ctx.gpr[31] = (0x08A5F9C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A5F9C4u) goto L_08A5F9C4;
    return;
L_08A5F9C4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A5F9FC;
      }
      goto L_08A5F9D0;
    }
L_08A5F9D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5FA94;
      }
      goto L_08A5F9D8;
    }
L_08A5F9D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5FA94;
      }
      goto L_08A5F9E0;
    }
L_08A5F9E0:
    ctx.gpr[5] = (0u | 232u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 27000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[19] = (0u | 30u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08A5F9FC;
L_08A5F9FC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A5FA08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A5DDB0;
L_08A5FA08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FA24;
      }
      goto L_08A5FA1C;
    }
L_08A5FA1C:
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 2u));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    goto L_08A5FA24;
L_08A5FA24:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5FA38u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5FA38u) goto L_08A5FA38;
    return;
L_08A5FA38:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 28u);
      if (branch_taken) {
          goto L_08A5FA88;
      }
      goto L_08A5FA48;
    }
L_08A5FA48:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5FA88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5FA88u) goto L_08A5FA88;
    return;
L_08A5FA88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A5FA94;
      }
      goto L_08A5FA90;
    }
L_08A5FA90:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5FA94;
L_08A5FA94:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5FAB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5FBF8;
      }
      goto L_08A5FAE4;
    }
L_08A5FAE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[6] = (ctx.gpr[6] & 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5FBF0;
      }
      goto L_08A5FAF8;
    }
L_08A5FAF8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[7] = (0u | 5u);
      if (branch_taken) {
          goto L_08A5FB34;
      }
      goto L_08A5FB04;
    }
L_08A5FB04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5FB1C;
      }
      goto L_08A5FB0C;
    }
L_08A5FB0C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 7u);
      if (branch_taken) {
          goto L_08A5FB48;
      }
      goto L_08A5FB1C;
    }
L_08A5FB1C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A5FB2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23472));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5FB2Cu) goto L_08A5FB2C;
    return;
L_08A5FB2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A5FBFC;
      }
      goto L_08A5FB34;
    }
L_08A5FB34:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A5FB1C;
      }
      goto L_08A5FB3C;
    }
L_08A5FB3C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (ctx.gpr[6] & 7u);
    goto L_08A5FB48;
L_08A5FB48:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5FBF0;
      }
      goto L_08A5FB50;
    }
L_08A5FB50:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5FB60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A5DDB0;
L_08A5FB60:
    ctx.gpr[6] = (16928u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5FB7Cu);
    ctx.gpr[5] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5FB7Cu) goto L_08A5FB7C;
    return;
L_08A5FB7C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A5FBF0;
      }
      goto L_08A5FB8C;
    }
L_08A5FB8C:
    ctx.gpr[4] = (0u | 35u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 153u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[5] = (0u | 153u);
    ctx.gpr[31] = (0x08A5FBB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A5FBB8u) goto L_08A5FBB8;
    return;
L_08A5FBB8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5FBF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5FBF0u) goto L_08A5FBF0;
    return;
L_08A5FBF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A5FBFC;
      }
      goto L_08A5FBF8;
    }
L_08A5FBF8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5FBFC;
L_08A5FBFC:
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
L_08A5FC14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (18073u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A5FD5C;
      }
      goto L_08A5FC48;
    }
L_08A5FC48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5FD54;
      }
      goto L_08A5FC60;
    }
L_08A5FC60:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A5FC70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A5DDB0;
L_08A5FC70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (15952u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 58720u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A5FCA0;
    }
    goto L_08A5FCA0;
L_08A5FCA0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17036u << 16u);
      if (branch_taken) {
          goto L_08A5FD54;
      }
      goto L_08A5FCB4;
    }
L_08A5FCB4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17164u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5FCE0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5FCE0u) goto L_08A5FCE0;
    return;
L_08A5FCE0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_08A5FD54;
      }
      goto L_08A5FCF0;
    }
L_08A5FCF0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 297u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 297u);
    ctx.gpr[31] = (0x08A5FD1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A5FD1Cu) goto L_08A5FD1C;
    return;
L_08A5FD1C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5FD54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5FD54u) goto L_08A5FD54;
    return;
L_08A5FD54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5FD60;
      }
      goto L_08A5FD5C;
    }
L_08A5FD5C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A5FD60;
L_08A5FD60:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5FD78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5FDA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 743u, 0x0896F9A4u>(ctx, &aot_mem) && ctx.pc == 0x08A5FDA0u) goto L_08A5FDA0;
    return;
L_08A5FDA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FDF0;
      }
      goto L_08A5FDA8;
    }
L_08A5FDA8:
    ctx.gpr[4] = (17817u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5FDE8;
      }
      goto L_08A5FDC8;
    }
L_08A5FDC8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5FDF8;
      }
      goto L_08A5FDE0;
    }
L_08A5FDE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5FF4C;
      }
      goto L_08A5FDE8;
    }
L_08A5FDE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5FF50;
      }
      goto L_08A5FDF0;
    }
L_08A5FDF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5FF50;
      }
      goto L_08A5FDF8;
    }
L_08A5FDF8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A5FE04u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A5DDB0;
L_08A5FE04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5FF4C;
      }
      goto L_08A5FE18;
    }
L_08A5FE18:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 33u);
      if (branch_taken) {
          goto L_08A5FF4C;
      }
      goto L_08A5FE44;
    }
L_08A5FE44:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x08A5FE70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A5FE70u) goto L_08A5FE70;
    return;
L_08A5FE70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 987u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (16576u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17036u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08A5FED8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5FED8u) goto L_08A5FED8;
    return;
L_08A5FED8:
    ctx.gpr[4] = (16948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 40u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17184u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A5FF4Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A5FF4Cu) goto L_08A5FF4C;
    return;
L_08A5FF4C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A5FF50;
L_08A5FF50:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_08A5FF6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (17692u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 9u, 0x08A600F4u>(ctx, &aot_mem); return;
      }
      goto L_08A5FFA0;
    }
L_08A5FFA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[6] = (14851u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4719u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 8u, 0x08A600ECu>(ctx, &aot_mem); return;
      }
      goto L_08A5FFC8;
    }
L_08A5FFC8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 8u, 0x08A600ECu>(ctx, &aot_mem); return;
      }
      goto L_08A5FFD8;
    }
L_08A5FFD8:
    ctx.gpr[5] = (16192u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16968u << 16u);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08A5FFF4;
    }
    goto L_08A5FFF4;
L_08A5FFF4:
    ctx.gpr[5] = (16191u << 16u);
    ctx.fpr[20] = ctx.fpr[13] - ctx.fpr[20];
    ctx.gpr[5] = (ctx.gpr[5] | 57147u);
    ctx.pc = 0x08A60000u; return;
}

void recomp_unit_0150(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0150_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_150(Runtime &runtime) {
    runtime.register_generated_unit(150u, 0x08A5C000u, 16384u, &recomp_unit_0150, &recomp_unit_0150_entry);
    runtime.register_function(0x08A5C004u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C010u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C02Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C038u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C044u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C0FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C104u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C110u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C128u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C13Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C148u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C154u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C15Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C160u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C168u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C17Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C188u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C194u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C19Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C1FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C208u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C214u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C21Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C220u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C228u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C23Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C248u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C254u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C25Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C260u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C268u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C27Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C288u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C294u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C29Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C2A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C2A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C2BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C2C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C2D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C2DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C2E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C2E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C2F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C310u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C32Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C354u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C368u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C3ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C410u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C438u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C450u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C460u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C478u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C484u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C49Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C4A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C4B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C4C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C4CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C4E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C4F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C504u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C518u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C528u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C530u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C534u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C550u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C574u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C588u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C60Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C630u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C658u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C660u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C67Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C6A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C6B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C6B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C6C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C6CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C6D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C6E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C6F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C718u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C724u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C73Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C748u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C768u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C770u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C798u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C7A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C7D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5C89Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CAE0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CC64u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CC94u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CCA4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CCE8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CCF0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CD94u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CED4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CFACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CFE0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CFF4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5CFF8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D020u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D034u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D08Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D0B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D0C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D0D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D0D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D0E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D0E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D100u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D124u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D15Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D160u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D170u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D178u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D180u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D188u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D18Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D1B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D1D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D1DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D1E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D1FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D21Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D224u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D240u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D250u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D25Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D264u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D27Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D294u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D29Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D2B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D2C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D2D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D2E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D2FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D304u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D318u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D330u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D338u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D34Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D36Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D374u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D380u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D390u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D394u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D3A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D3B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D3C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D3E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D3F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D3F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D404u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D414u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D424u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D434u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D438u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D444u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D44Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D460u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D468u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D490u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D49Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D4B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D4C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D4D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D4F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D504u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D510u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D524u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D52Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D544u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D550u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D564u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D56Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D57Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D594u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D5F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D620u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D628u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D62Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D704u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D710u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D71Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D724u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D72Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D748u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D758u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D768u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D76Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D78Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D7FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D804u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D810u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D820u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D838u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D86Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D874u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D878u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D880u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D8B4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D8C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D8C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D8E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D900u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D914u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D930u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5D9F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA0Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA40u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA58u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA74u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA7Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DA8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DAA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DAB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DAC4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DAD4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DADCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DAE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DAF4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DAFCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB04u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB0Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB1Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB28u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB30u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB78u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DB98u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DBD0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DBE0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC04u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC0Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC30u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC54u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC68u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC84u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC98u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DC9Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DCB8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DCE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DCECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD0Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD2Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD44u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD58u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD64u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD70u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD7Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD88u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD90u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DD9Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DDB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DDBCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DDCCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DDD4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DDF8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE08u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE18u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE28u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE34u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE44u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE54u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE70u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE80u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DE9Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DEACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DEB8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DEC8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DED8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DEE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DEF4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF04u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF10u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF20u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF30u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF3Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF5Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF68u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF78u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DF8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DFC0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DFD0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5DFF0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E00Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E018u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E020u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E02Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E038u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E040u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E04Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E058u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E060u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E06Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E078u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E080u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E08Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E098u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E0F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E100u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E10Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E118u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E120u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E130u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E138u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E14Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E154u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E15Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E164u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E170u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E18Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E190u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E1F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E204u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E214u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E21Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E228u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E238u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E240u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E24Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E25Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E264u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E270u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E280u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E288u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E294u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E2FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E304u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E30Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E318u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E320u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E328u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E334u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E33Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E344u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E350u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E358u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E360u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E36Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E374u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E37Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E388u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E398u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E3FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E404u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E40Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E414u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E41Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E424u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E42Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E448u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E450u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E458u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E460u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E468u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E474u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4DCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E4F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E510u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E524u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E558u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E568u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E570u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E578u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E5A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E5ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E608u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E624u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E668u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E678u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E684u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E68Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E69Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E6A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E6ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E6E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E6E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E6ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E6F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E704u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E710u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E71Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E728u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E734u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E744u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E750u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E784u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E794u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E7F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E804u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E814u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E86Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E874u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E87Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E8A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E8E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E8F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E904u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E90Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E914u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E92Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E938u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E948u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E960u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E978u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E984u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E998u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E99Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E9ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E9B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E9D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5E9E4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA10u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA34u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA5Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EA74u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EAACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EAB4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EAB8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EADCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB38u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB5Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB7Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EB94u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EBBCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EBE8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC1Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC2Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC48u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EC58u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ECB0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ECD0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ECECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ECFCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED54u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED6Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED78u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED84u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5ED94u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EDC8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EDD8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EDE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EDECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE00u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE10u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE18u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE20u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE28u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE34u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE48u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE50u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE58u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE64u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE6Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE74u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE88u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EE94u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EEA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EEACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EECCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EEFCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF0Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF2Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF34u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF38u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EF5Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EFE0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EFE8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5EFECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F008u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F03Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F050u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F068u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F078u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F090u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F098u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F09Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F0B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F0C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F0ECu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F140u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F148u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F14Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F164u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F1C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F1D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F230u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F23Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F248u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F26Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F274u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F28Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F29Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F2A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F2C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F2D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F2FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F30Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F340u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F344u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F358u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F360u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F364u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F3A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F3BCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F3C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F3D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F3D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F3E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F3E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F3F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F418u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F420u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F43Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F440u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F448u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F45Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F464u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F46Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F478u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F480u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F488u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F4A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F4CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F4D4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F4F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F510u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F530u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F550u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F560u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F564u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F56Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F590u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F5CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F5E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F5E8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F600u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F61Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F650u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F664u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F66Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F67Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F694u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F69Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F6A0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F6A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F6B8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F6C0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F6C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F6CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F6D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F6F4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F6FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F704u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F70Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F714u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F71Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F720u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F72Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F764u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F778u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F798u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F7ACu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F7B0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F7CCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F7E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F7F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F820u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F830u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F84Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F860u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F89Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F8A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F8A8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F8C8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F8D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F8F0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F8F8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F8FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F904u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F93Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F950u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F968u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F984u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F9A4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F9C4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F9D0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F9D8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F9E0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5F9FCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA08u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA1Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA24u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA38u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA48u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA88u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA90u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FA94u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FAB4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FAE4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FAF8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB04u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB0Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB1Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB2Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB34u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB3Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB48u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB50u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB7Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FB8Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FBB8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FBF0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FBF8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FBFCu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC14u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC48u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FC70u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FCA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FCB4u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FCE0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FCF0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FD1Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FD54u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FD5Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FD60u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FD78u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FDA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FDA8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FDC8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FDE0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FDE8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FDF0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FDF8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE04u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE18u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE44u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FE70u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FED8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF4Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF50u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FF6Cu, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FFA0u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FFC8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FFD8u, &recomp_unit_0150, "recomp_unit_0150");
    runtime.register_function(0x08A5FFF4u, &recomp_unit_0150, "recomp_unit_0150");
}
} // namespace psprecomp
