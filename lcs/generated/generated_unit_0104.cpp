#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0104[4072] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0,
    0, 0, 0, 0, 9, 0, 10, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15,
    0, 16, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 20, 0, 21, 22, 0, 23, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 31, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 34, 0,
    0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0,
    0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0,
    0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 52, 0, 53, 0, 54, 55, 0, 56, 57, 0, 58, 0, 59, 0, 0, 60,
    0, 61, 0, 62, 63, 0, 64, 65, 66, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0,
    0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 89, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 94,
    0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 102,
    103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 108, 0, 0, 0, 109, 0, 110, 0, 111, 0, 112, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 117, 0, 118, 0, 119, 0, 0, 120, 0, 0,
    121, 122, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0,
    0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 135, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 148, 0, 0, 149, 0, 150, 0, 151,
    0, 152, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161,
    0, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 171,
    0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0,
    0, 0, 181, 0, 0, 182, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 188, 0, 189, 0, 0, 0, 0,
    0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194,
    0, 0, 195, 0, 0, 0, 0, 196, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 199, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 0, 205, 0,
    0, 206, 0, 0, 207, 0, 0, 208, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 218, 0, 0,
    0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 225, 0, 226, 227, 0, 228, 0, 0, 0, 0, 229, 0,
    0, 230, 0, 231, 0, 0, 232, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0,
    243, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 247, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253,
    0, 254, 0, 255, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0,
    261, 0, 262, 0, 263, 264, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0,
    0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 271, 0, 272, 0, 273, 0, 0, 274, 0, 0, 0, 0, 275, 0, 276, 0, 0, 277, 0, 0,
    278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 282, 0, 0, 283, 0, 284, 0, 0, 285, 0, 286, 0, 0, 287, 0,
    288, 0, 0, 289, 0, 290, 0, 0, 291, 0, 292, 0, 0, 293, 0, 294, 0, 0, 295, 0, 296, 0, 0, 297, 0, 298, 0, 0, 299, 0, 300, 0,
    0, 301, 0, 302, 0, 0, 303, 0, 304, 0, 0, 305, 0, 306, 0, 0, 307, 0, 308, 0, 0, 309, 0, 310, 0, 0, 311, 0, 312, 0, 0, 313,
    0, 314, 0, 0, 315, 0, 316, 0, 0, 317, 0, 318, 0, 0, 319, 0, 320, 0, 0, 321, 0, 322, 0, 0, 323, 0, 324, 0, 0, 325, 0, 326,
    0, 0, 327, 328, 0, 0, 329, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 332, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352,
    0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0,
    0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0,
    0, 371, 0, 0, 372, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 376, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 380,
    0, 381, 0, 382, 0, 383, 0, 384, 0, 385, 0, 386, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 391, 0, 0, 0,
    0, 392, 393, 0, 394, 0, 395, 0, 396, 0, 397, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 400, 0, 401, 0, 402, 0, 0, 403, 0, 404,
    0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 412, 0, 413, 0, 0, 414, 0,
    415, 0, 416, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0, 419, 0, 0, 420, 0, 421, 422, 0, 423, 0, 0, 424, 0, 0, 0, 425, 0, 0, 426,
    0, 427, 428, 0, 429, 0, 0, 430, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 439,
    0, 0, 0, 440, 0, 0, 441, 0, 0, 442, 0, 0, 0, 0, 443, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 0,
    447, 0, 448, 0, 449, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0,
    0, 0, 455, 0, 456, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0,
    0, 0, 463, 0, 464, 0, 0, 465, 0, 0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 477, 0, 0, 0, 0,
    0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0, 483, 0, 484,
    0, 0, 0, 0, 0, 0, 0, 485, 486, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 491, 0, 0, 492, 0, 0, 0,
    493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 495, 496, 0, 0, 0, 0, 497, 0, 498, 0, 0, 0, 0, 499, 0, 500, 0, 501,
    0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 504, 0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 507, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 513, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 519, 0, 520, 0, 521, 0, 522,
    0, 0, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 526, 0, 527, 0, 0, 528, 0, 529, 0, 530, 0, 0, 531, 0, 0,
    0, 532, 0, 0, 0, 533, 0, 0, 534, 0, 535, 0, 0, 536, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 543, 0, 544, 0, 0, 0, 545, 0,
    0, 546, 0, 547, 0, 548, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0,
    554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 557, 0, 0, 0, 558, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 0, 0, 0, 561,
    0, 0, 0, 562, 0, 563, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 567, 0, 568, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575,
    0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 585, 586, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0,
    588, 0, 589, 0, 590, 0, 591, 0, 592, 0, 593, 0, 594, 0, 0, 0, 0, 595, 0, 596, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 598,
    0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0, 606, 0, 607, 0, 0, 0, 608, 0, 0, 0, 609, 610, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0,
    0, 0, 612, 0, 613, 0, 614, 0, 615, 0, 616, 0, 0, 0, 0, 0, 0, 617, 0, 618, 0, 619, 0, 620, 0, 0, 0, 0, 621, 0, 622, 0,
    623, 0, 624, 0, 0, 0, 625, 0, 626, 0, 0, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 636, 0, 0, 0,
    637, 0, 0, 0, 638, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    640, 0, 641, 0, 0, 0, 0, 0, 642, 0, 0, 0, 643, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 0, 0, 650, 0, 651, 0, 0, 0, 652, 0, 0, 0, 653, 654,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 656, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 659, 0, 0, 660, 0, 0,
    0, 0, 0, 661, 0, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 664, 0, 0, 0, 0, 0, 665, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 675, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 678,
};
void recomp_unit_0104_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089A4000u;
        entry_id = (entry_delta < 16288u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0104[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089A4000;
    case 2u: goto L_089A4008;
    case 3u: goto L_089A4018;
    case 4u: goto L_089A402C;
    case 5u: goto L_089A4038;
    case 6u: goto L_089A4060;
    case 7u: goto L_089A406C;
    case 8u: goto L_089A4078;
    case 9u: goto L_089A4090;
    case 10u: goto L_089A4098;
    case 11u: goto L_089A40A0;
    case 12u: goto L_089A40AC;
    case 13u: goto L_089A40D4;
    case 14u: goto L_089A40F4;
    case 15u: goto L_089A40FC;
    case 16u: goto L_089A4104;
    case 17u: goto L_089A4110;
    case 18u: goto L_089A4120;
    case 19u: goto L_089A412C;
    case 20u: goto L_089A4134;
    case 21u: goto L_089A413C;
    case 22u: goto L_089A4140;
    case 23u: goto L_089A4148;
    case 24u: goto L_089A414C;
    case 25u: goto L_089A4160;
    case 26u: goto L_089A417C;
    case 27u: goto L_089A4188;
    case 28u: goto L_089A41A0;
    case 29u: goto L_089A41B0;
    case 30u: goto L_089A41C4;
    case 31u: goto L_089A41CC;
    case 32u: goto L_089A41D8;
    case 33u: goto L_089A41E0;
    case 34u: goto L_089A41F8;
    case 35u: goto L_089A421C;
    case 36u: goto L_089A4224;
    case 37u: goto L_089A4230;
    case 38u: goto L_089A4238;
    case 39u: goto L_089A4250;
    case 40u: goto L_089A4274;
    case 41u: goto L_089A4284;
    case 42u: goto L_089A42AC;
    case 43u: goto L_089A42B8;
    case 44u: goto L_089A42C4;
    case 45u: goto L_089A42D0;
    case 46u: goto L_089A42D8;
    case 47u: goto L_089A42F4;
    case 48u: goto L_089A430C;
    case 49u: goto L_089A4314;
    case 50u: goto L_089A432C;
    case 51u: goto L_089A4334;
    case 52u: goto L_089A4340;
    case 53u: goto L_089A4348;
    case 54u: goto L_089A4350;
    case 55u: goto L_089A4354;
    case 56u: goto L_089A435C;
    case 57u: goto L_089A4360;
    case 58u: goto L_089A4368;
    case 59u: goto L_089A4370;
    case 60u: goto L_089A437C;
    case 61u: goto L_089A4384;
    case 62u: goto L_089A438C;
    case 63u: goto L_089A4390;
    case 64u: goto L_089A4398;
    case 65u: goto L_089A439C;
    case 66u: goto L_089A43A0;
    case 67u: goto L_089A43B4;
    case 68u: goto L_089A43C4;
    case 69u: goto L_089A43DC;
    case 70u: goto L_089A43E8;
    case 71u: goto L_089A4434;
    case 72u: goto L_089A443C;
    case 73u: goto L_089A4444;
    case 74u: goto L_089A444C;
    case 75u: goto L_089A446C;
    case 76u: goto L_089A448C;
    case 77u: goto L_089A4510;
    case 78u: goto L_089A4518;
    case 79u: goto L_089A4520;
    case 80u: goto L_089A4598;
    case 81u: goto L_089A45BC;
    case 82u: goto L_089A45D8;
    case 83u: goto L_089A4618;
    case 84u: goto L_089A4620;
    case 85u: goto L_089A4640;
    case 86u: goto L_089A465C;
    case 87u: goto L_089A4698;
    case 88u: goto L_089A46A0;
    case 89u: goto L_089A46A8;
    case 90u: goto L_089A46AC;
    case 91u: goto L_089A46CC;
    case 92u: goto L_089A46DC;
    case 93u: goto L_089A46F4;
    case 94u: goto L_089A46FC;
    case 95u: goto L_089A4710;
    case 96u: goto L_089A471C;
    case 97u: goto L_089A4734;
    case 98u: goto L_089A4740;
    case 99u: goto L_089A474C;
    case 100u: goto L_089A4764;
    case 101u: goto L_089A476C;
    case 102u: goto L_089A477C;
    case 103u: goto L_089A4780;
    case 104u: goto L_089A4788;
    case 105u: goto L_089A47A8;
    case 106u: goto L_089A47B8;
    case 107u: goto L_089A47C4;
    case 108u: goto L_089A47CC;
    case 109u: goto L_089A47DC;
    case 110u: goto L_089A47E4;
    case 111u: goto L_089A47EC;
    case 112u: goto L_089A47F4;
    case 113u: goto L_089A4820;
    case 114u: goto L_089A4824;
    case 115u: goto L_089A4840;
    case 116u: goto L_089A4850;
    case 117u: goto L_089A4858;
    case 118u: goto L_089A4860;
    case 119u: goto L_089A4868;
    case 120u: goto L_089A4874;
    case 121u: goto L_089A4880;
    case 122u: goto L_089A4884;
    case 123u: goto L_089A488C;
    case 124u: goto L_089A48A8;
    case 125u: goto L_089A48BC;
    case 126u: goto L_089A48C8;
    case 127u: goto L_089A48E0;
    case 128u: goto L_089A48F8;
    case 129u: goto L_089A4904;
    case 130u: goto L_089A490C;
    case 131u: goto L_089A4988;
    case 132u: goto L_089A49A8;
    case 133u: goto L_089A49BC;
    case 134u: goto L_089A49CC;
    case 135u: goto L_089A49D4;
    case 136u: goto L_089A49E0;
    case 137u: goto L_089A49E8;
    case 138u: goto L_089A4A18;
    case 139u: goto L_089A4A2C;
    case 140u: goto L_089A4A44;
    case 141u: goto L_089A4A54;
    case 142u: goto L_089A4A5C;
    case 143u: goto L_089A4A7C;
    case 144u: goto L_089A4A88;
    case 145u: goto L_089A4ABC;
    case 146u: goto L_089A4AC4;
    case 147u: goto L_089A4ACC;
    case 148u: goto L_089A4AE0;
    case 149u: goto L_089A4AEC;
    case 150u: goto L_089A4AF4;
    case 151u: goto L_089A4AFC;
    case 152u: goto L_089A4B04;
    case 153u: goto L_089A4B0C;
    case 154u: goto L_089A4B1C;
    case 155u: goto L_089A4B2C;
    case 156u: goto L_089A4B38;
    case 157u: goto L_089A4B48;
    case 158u: goto L_089A4B54;
    case 159u: goto L_089A4B5C;
    case 160u: goto L_089A4B6C;
    case 161u: goto L_089A4B7C;
    case 162u: goto L_089A4B88;
    case 163u: goto L_089A4B98;
    case 164u: goto L_089A4BA4;
    case 165u: goto L_089A4BAC;
    case 166u: goto L_089A4BBC;
    case 167u: goto L_089A4BCC;
    case 168u: goto L_089A4BD8;
    case 169u: goto L_089A4BE8;
    case 170u: goto L_089A4BF4;
    case 171u: goto L_089A4BFC;
    case 172u: goto L_089A4C0C;
    case 173u: goto L_089A4C1C;
    case 174u: goto L_089A4C28;
    case 175u: goto L_089A4C38;
    case 176u: goto L_089A4C44;
    case 177u: goto L_089A4C4C;
    case 178u: goto L_089A4C5C;
    case 179u: goto L_089A4C6C;
    case 180u: goto L_089A4C78;
    case 181u: goto L_089A4C88;
    case 182u: goto L_089A4C94;
    case 183u: goto L_089A4C9C;
    case 184u: goto L_089A4CAC;
    case 185u: goto L_089A4CBC;
    case 186u: goto L_089A4CC8;
    case 187u: goto L_089A4CD8;
    case 188u: goto L_089A4CE4;
    case 189u: goto L_089A4CEC;
    case 190u: goto L_089A4D08;
    case 191u: goto L_089A4D44;
    case 192u: goto L_089A4D50;
    case 193u: goto L_089A4D60;
    case 194u: goto L_089A4D7C;
    case 195u: goto L_089A4D88;
    case 196u: goto L_089A4D9C;
    case 197u: goto L_089A4DA4;
    case 198u: goto L_089A4DAC;
    case 199u: goto L_089A4DC8;
    case 200u: goto L_089A4DCC;
    case 201u: goto L_089A4DD4;
    case 202u: goto L_089A4DDC;
    case 203u: goto L_089A4DE4;
    case 204u: goto L_089A4DEC;
    case 205u: goto L_089A4DF8;
    case 206u: goto L_089A4E04;
    case 207u: goto L_089A4E10;
    case 208u: goto L_089A4E1C;
    case 209u: goto L_089A4E20;
    case 210u: goto L_089A4E28;
    case 211u: goto L_089A4E4C;
    case 212u: goto L_089A4E58;
    case 213u: goto L_089A4E80;
    case 214u: goto L_089A4E8C;
    case 215u: goto L_089A4EB4;
    case 216u: goto L_089A4ED8;
    case 217u: goto L_089A4EE0;
    case 218u: goto L_089A4EF4;
    case 219u: goto L_089A4F04;
    case 220u: goto L_089A4F1C;
    case 221u: goto L_089A4F28;
    case 222u: goto L_089A4F34;
    case 223u: goto L_089A4F40;
    case 224u: goto L_089A4F4C;
    case 225u: goto L_089A4F50;
    case 226u: goto L_089A4F58;
    case 227u: goto L_089A4F5C;
    case 228u: goto L_089A4F64;
    case 229u: goto L_089A4F78;
    case 230u: goto L_089A4F84;
    case 231u: goto L_089A4F8C;
    case 232u: goto L_089A4F98;
    case 233u: goto L_089A4F9C;
    case 234u: goto L_089A4FC0;
    case 235u: goto L_089A4FEC;
    case 236u: goto L_089A5078;
    case 237u: goto L_089A5090;
    case 238u: goto L_089A50A0;
    case 239u: goto L_089A50C4;
    case 240u: goto L_089A50E4;
    case 241u: goto L_089A50F0;
    case 242u: goto L_089A50F8;
    case 243u: goto L_089A5100;
    case 244u: goto L_089A5108;
    case 245u: goto L_089A5120;
    case 246u: goto L_089A5130;
    case 247u: goto L_089A5134;
    case 248u: goto L_089A5140;
    case 249u: goto L_089A514C;
    case 250u: goto L_089A5198;
    case 251u: goto L_089A51CC;
    case 252u: goto L_089A51D8;
    case 253u: goto L_089A51FC;
    case 254u: goto L_089A5204;
    case 255u: goto L_089A520C;
    case 256u: goto L_089A5214;
    case 257u: goto L_089A5228;
    case 258u: goto L_089A5254;
    case 259u: goto L_089A5260;
    case 260u: goto L_089A5268;
    case 261u: goto L_089A5280;
    case 262u: goto L_089A5288;
    case 263u: goto L_089A5290;
    case 264u: goto L_089A5294;
    case 265u: goto L_089A52A4;
    case 266u: goto L_089A52AC;
    case 267u: goto L_089A52C4;
    case 268u: goto L_089A52F8;
    case 269u: goto L_089A5318;
    case 270u: goto L_089A5320;
    case 271u: goto L_089A5330;
    case 272u: goto L_089A5338;
    case 273u: goto L_089A5340;
    case 274u: goto L_089A534C;
    case 275u: goto L_089A5360;
    case 276u: goto L_089A5368;
    case 277u: goto L_089A5374;
    case 278u: goto L_089A5380;
    case 279u: goto L_089A5398;
    case 280u: goto L_089A53B0;
    case 281u: goto L_089A53BC;
    case 282u: goto L_089A53C4;
    case 283u: goto L_089A53D0;
    case 284u: goto L_089A53D8;
    case 285u: goto L_089A53E4;
    case 286u: goto L_089A53EC;
    case 287u: goto L_089A53F8;
    case 288u: goto L_089A5400;
    case 289u: goto L_089A540C;
    case 290u: goto L_089A5414;
    case 291u: goto L_089A5420;
    case 292u: goto L_089A5428;
    case 293u: goto L_089A5434;
    case 294u: goto L_089A543C;
    case 295u: goto L_089A5448;
    case 296u: goto L_089A5450;
    case 297u: goto L_089A545C;
    case 298u: goto L_089A5464;
    case 299u: goto L_089A5470;
    case 300u: goto L_089A5478;
    case 301u: goto L_089A5484;
    case 302u: goto L_089A548C;
    case 303u: goto L_089A5498;
    case 304u: goto L_089A54A0;
    case 305u: goto L_089A54AC;
    case 306u: goto L_089A54B4;
    case 307u: goto L_089A54C0;
    case 308u: goto L_089A54C8;
    case 309u: goto L_089A54D4;
    case 310u: goto L_089A54DC;
    case 311u: goto L_089A54E8;
    case 312u: goto L_089A54F0;
    case 313u: goto L_089A54FC;
    case 314u: goto L_089A5504;
    case 315u: goto L_089A5510;
    case 316u: goto L_089A5518;
    case 317u: goto L_089A5524;
    case 318u: goto L_089A552C;
    case 319u: goto L_089A5538;
    case 320u: goto L_089A5540;
    case 321u: goto L_089A554C;
    case 322u: goto L_089A5554;
    case 323u: goto L_089A5560;
    case 324u: goto L_089A5568;
    case 325u: goto L_089A5574;
    case 326u: goto L_089A557C;
    case 327u: goto L_089A5588;
    case 328u: goto L_089A558C;
    case 329u: goto L_089A5598;
    case 330u: goto L_089A55A0;
    case 331u: goto L_089A55AC;
    case 332u: goto L_089A5604;
    case 333u: goto L_089A5610;
    case 334u: goto L_089A5624;
    case 335u: goto L_089A5630;
    case 336u: goto L_089A56C0;
    case 337u: goto L_089A56C8;
    case 338u: goto L_089A56DC;
    case 339u: goto L_089A5718;
    case 340u: goto L_089A5734;
    case 341u: goto L_089A57A4;
    case 342u: goto L_089A57D8;
    case 343u: goto L_089A57F0;
    case 344u: goto L_089A5834;
    case 345u: goto L_089A5A3C;
    case 346u: goto L_089A5A50;
    case 347u: goto L_089A5A80;
    case 348u: goto L_089A5A98;
    case 349u: goto L_089A6144;
    case 350u: goto L_089A6154;
    case 351u: goto L_089A616C;
    case 352u: goto L_089A617C;
    case 353u: goto L_089A6184;
    case 354u: goto L_089A61AC;
    case 355u: goto L_089A61C0;
    case 356u: goto L_089A61D4;
    case 357u: goto L_089A61EC;
    case 358u: goto L_089A6200;
    case 359u: goto L_089A624C;
    case 360u: goto L_089A6274;
    case 361u: goto L_089A6290;
    case 362u: goto L_089A62B4;
    case 363u: goto L_089A62D0;
    case 364u: goto L_089A62E8;
    case 365u: goto L_089A6320;
    case 366u: goto L_089A6344;
    case 367u: goto L_089A6350;
    case 368u: goto L_089A6380;
    case 369u: goto L_089A63D4;
    case 370u: goto L_089A63F0;
    case 371u: goto L_089A6404;
    case 372u: goto L_089A6410;
    case 373u: goto L_089A6418;
    case 374u: goto L_089A6428;
    case 375u: goto L_089A6438;
    case 376u: goto L_089A6444;
    case 377u: goto L_089A6450;
    case 378u: goto L_089A645C;
    case 379u: goto L_089A6470;
    case 380u: goto L_089A647C;
    case 381u: goto L_089A6484;
    case 382u: goto L_089A648C;
    case 383u: goto L_089A6494;
    case 384u: goto L_089A649C;
    case 385u: goto L_089A64A4;
    case 386u: goto L_089A64AC;
    case 387u: goto L_089A64B8;
    case 388u: goto L_089A64C4;
    case 389u: goto L_089A64D8;
    case 390u: goto L_089A64E8;
    case 391u: goto L_089A64F0;
    case 392u: goto L_089A6504;
    case 393u: goto L_089A6508;
    case 394u: goto L_089A6510;
    case 395u: goto L_089A6518;
    case 396u: goto L_089A6520;
    case 397u: goto L_089A6528;
    case 398u: goto L_089A653C;
    case 399u: goto L_089A6548;
    case 400u: goto L_089A6558;
    case 401u: goto L_089A6560;
    case 402u: goto L_089A6568;
    case 403u: goto L_089A6574;
    case 404u: goto L_089A657C;
    case 405u: goto L_089A6584;
    case 406u: goto L_089A6594;
    case 407u: goto L_089A65A8;
    case 408u: goto L_089A65B4;
    case 409u: goto L_089A65C4;
    case 410u: goto L_089A65D0;
    case 411u: goto L_089A65DC;
    case 412u: goto L_089A65E4;
    case 413u: goto L_089A65EC;
    case 414u: goto L_089A65F8;
    case 415u: goto L_089A6600;
    case 416u: goto L_089A6608;
    case 417u: goto L_089A6618;
    case 418u: goto L_089A6624;
    case 419u: goto L_089A6634;
    case 420u: goto L_089A6640;
    case 421u: goto L_089A6648;
    case 422u: goto L_089A664C;
    case 423u: goto L_089A6654;
    case 424u: goto L_089A6660;
    case 425u: goto L_089A6670;
    case 426u: goto L_089A667C;
    case 427u: goto L_089A6684;
    case 428u: goto L_089A6688;
    case 429u: goto L_089A6690;
    case 430u: goto L_089A669C;
    case 431u: goto L_089A66A4;
    case 432u: goto L_089A66B8;
    case 433u: goto L_089A674C;
    case 434u: goto L_089A67B0;
    case 435u: goto L_089A685C;
    case 436u: goto L_089A68AC;
    case 437u: goto L_089A68C0;
    case 438u: goto L_089A68DC;
    case 439u: goto L_089A68FC;
    case 440u: goto L_089A690C;
    case 441u: goto L_089A6918;
    case 442u: goto L_089A6924;
    case 443u: goto L_089A6938;
    case 444u: goto L_089A693C;
    case 445u: goto L_089A6968;
    case 446u: goto L_089A6974;
    case 447u: goto L_089A6980;
    case 448u: goto L_089A6988;
    case 449u: goto L_089A6990;
    case 450u: goto L_089A69A0;
    case 451u: goto L_089A69AC;
    case 452u: goto L_089A69BC;
    case 453u: goto L_089A69DC;
    case 454u: goto L_089A69EC;
    case 455u: goto L_089A6A08;
    case 456u: goto L_089A6A10;
    case 457u: goto L_089A6A18;
    case 458u: goto L_089A6A20;
    case 459u: goto L_089A6A44;
    case 460u: goto L_089A6A50;
    case 461u: goto L_089A6A60;
    case 462u: goto L_089A6A70;
    case 463u: goto L_089A6A88;
    case 464u: goto L_089A6A90;
    case 465u: goto L_089A6A9C;
    case 466u: goto L_089A6AAC;
    case 467u: goto L_089A6AB8;
    case 468u: goto L_089A6ACC;
    case 469u: goto L_089A6ADC;
    case 470u: goto L_089A6AE8;
    case 471u: goto L_089A6B14;
    case 472u: goto L_089A6B20;
    case 473u: goto L_089A6B30;
    case 474u: goto L_089A6B40;
    case 475u: goto L_089A6B4C;
    case 476u: goto L_089A6B60;
    case 477u: goto L_089A6B6C;
    case 478u: goto L_089A6B90;
    case 479u: goto L_089A6BB4;
    case 480u: goto L_089A6BBC;
    case 481u: goto L_089A6BE0;
    case 482u: goto L_089A6BEC;
    case 483u: goto L_089A6BF4;
    case 484u: goto L_089A6BFC;
    case 485u: goto L_089A6C1C;
    case 486u: goto L_089A6C20;
    case 487u: goto L_089A6C30;
    case 488u: goto L_089A6C38;
    case 489u: goto L_089A6C4C;
    case 490u: goto L_089A6C60;
    case 491u: goto L_089A6C64;
    case 492u: goto L_089A6C70;
    case 493u: goto L_089A6C80;
    case 494u: goto L_089A6CA8;
    case 495u: goto L_089A6CB8;
    case 496u: goto L_089A6CBC;
    case 497u: goto L_089A6CD0;
    case 498u: goto L_089A6CD8;
    case 499u: goto L_089A6CEC;
    case 500u: goto L_089A6CF4;
    case 501u: goto L_089A6CFC;
    case 502u: goto L_089A6D04;
    case 503u: goto L_089A6D44;
    case 504u: goto L_089A6D48;
    case 505u: goto L_089A6D50;
    case 506u: goto L_089A6D60;
    case 507u: goto L_089A6D88;
    case 508u: goto L_089A6D9C;
    case 509u: goto L_089A6DA8;
    case 510u: goto L_089A6DB4;
    case 511u: goto L_089A6DF8;
    case 512u: goto L_089A6E34;
    case 513u: goto L_089A6E88;
    case 514u: goto L_089A6E94;
    case 515u: goto L_089A6EA4;
    case 516u: goto L_089A6EB4;
    case 517u: goto L_089A6EC4;
    case 518u: goto L_089A6ED4;
    case 519u: goto L_089A6EE4;
    case 520u: goto L_089A6EEC;
    case 521u: goto L_089A6EF4;
    case 522u: goto L_089A6EFC;
    case 523u: goto L_089A6F14;
    case 524u: goto L_089A6F24;
    case 525u: goto L_089A6F3C;
    case 526u: goto L_089A6F44;
    case 527u: goto L_089A6F4C;
    case 528u: goto L_089A6F58;
    case 529u: goto L_089A6F60;
    case 530u: goto L_089A6F68;
    case 531u: goto L_089A6F74;
    case 532u: goto L_089A6F84;
    case 533u: goto L_089A6F94;
    case 534u: goto L_089A6FA0;
    case 535u: goto L_089A6FA8;
    case 536u: goto L_089A6FB4;
    case 537u: goto L_089A6FBC;
    case 538u: goto L_089A6FD4;
    case 539u: goto L_089A6FE8;
    case 540u: goto L_089A7010;
    case 541u: goto L_089A703C;
    case 542u: goto L_089A7050;
    case 543u: goto L_089A7060;
    case 544u: goto L_089A7068;
    case 545u: goto L_089A7078;
    case 546u: goto L_089A7084;
    case 547u: goto L_089A708C;
    case 548u: goto L_089A7094;
    case 549u: goto L_089A709C;
    case 550u: goto L_089A70CC;
    case 551u: goto L_089A70D4;
    case 552u: goto L_089A70E4;
    case 553u: goto L_089A70F8;
    case 554u: goto L_089A7100;
    case 555u: goto L_089A711C;
    case 556u: goto L_089A7128;
    case 557u: goto L_089A7130;
    case 558u: goto L_089A7140;
    case 559u: goto L_089A7154;
    case 560u: goto L_089A715C;
    case 561u: goto L_089A717C;
    case 562u: goto L_089A718C;
    case 563u: goto L_089A7194;
    case 564u: goto L_089A71B0;
    case 565u: goto L_089A71C4;
    case 566u: goto L_089A71E0;
    case 567u: goto L_089A721C;
    case 568u: goto L_089A7224;
    case 569u: goto L_089A7240;
    case 570u: goto L_089A7254;
    case 571u: goto L_089A7270;
    case 572u: goto L_089A72AC;
    case 573u: goto L_089A72B4;
    case 574u: goto L_089A72D4;
    case 575u: goto L_089A72FC;
    case 576u: goto L_089A7318;
    case 577u: goto L_089A732C;
    case 578u: goto L_089A739C;
    case 579u: goto L_089A73AC;
    case 580u: goto L_089A7418;
    case 581u: goto L_089A7428;
    case 582u: goto L_089A7438;
    case 583u: goto L_089A744C;
    case 584u: goto L_089A745C;
    case 585u: goto L_089A746C;
    case 586u: goto L_089A7470;
    case 587u: goto L_089A74DC;
    case 588u: goto L_089A7500;
    case 589u: goto L_089A7508;
    case 590u: goto L_089A7510;
    case 591u: goto L_089A7518;
    case 592u: goto L_089A7520;
    case 593u: goto L_089A7528;
    case 594u: goto L_089A7530;
    case 595u: goto L_089A7544;
    case 596u: goto L_089A754C;
    case 597u: goto L_089A7560;
    case 598u: goto L_089A757C;
    case 599u: goto L_089A7598;
    case 600u: goto L_089A75AC;
    case 601u: goto L_089A761C;
    case 602u: goto L_089A762C;
    case 603u: goto L_089A7698;
    case 604u: goto L_089A76A8;
    case 605u: goto L_089A76B8;
    case 606u: goto L_089A76CC;
    case 607u: goto L_089A76D4;
    case 608u: goto L_089A76E4;
    case 609u: goto L_089A76F4;
    case 610u: goto L_089A76F8;
    case 611u: goto L_089A7764;
    case 612u: goto L_089A7788;
    case 613u: goto L_089A7790;
    case 614u: goto L_089A7798;
    case 615u: goto L_089A77A0;
    case 616u: goto L_089A77A8;
    case 617u: goto L_089A77C4;
    case 618u: goto L_089A77CC;
    case 619u: goto L_089A77D4;
    case 620u: goto L_089A77DC;
    case 621u: goto L_089A77F0;
    case 622u: goto L_089A77F8;
    case 623u: goto L_089A7800;
    case 624u: goto L_089A7808;
    case 625u: goto L_089A7818;
    case 626u: goto L_089A7820;
    case 627u: goto L_089A7838;
    case 628u: goto L_089A7848;
    case 629u: goto L_089A7854;
    case 630u: goto L_089A78B8;
    case 631u: goto L_089A78C8;
    case 632u: goto L_089A7934;
    case 633u: goto L_089A7944;
    case 634u: goto L_089A7954;
    case 635u: goto L_089A7968;
    case 636u: goto L_089A7970;
    case 637u: goto L_089A7980;
    case 638u: goto L_089A7990;
    case 639u: goto L_089A7994;
    case 640u: goto L_089A7A00;
    case 641u: goto L_089A7A08;
    case 642u: goto L_089A7A20;
    case 643u: goto L_089A7A30;
    case 644u: goto L_089A7A3C;
    case 645u: goto L_089A7AA0;
    case 646u: goto L_089A7AB0;
    case 647u: goto L_089A7B1C;
    case 648u: goto L_089A7B2C;
    case 649u: goto L_089A7B3C;
    case 650u: goto L_089A7B50;
    case 651u: goto L_089A7B58;
    case 652u: goto L_089A7B68;
    case 653u: goto L_089A7B78;
    case 654u: goto L_089A7B7C;
    case 655u: goto L_089A7BE8;
    case 656u: goto L_089A7BF8;
    case 657u: goto L_089A7C3C;
    case 658u: goto L_089A7C50;
    case 659u: goto L_089A7C68;
    case 660u: goto L_089A7C74;
    case 661u: goto L_089A7C8C;
    case 662u: goto L_089A7C98;
    case 663u: goto L_089A7CB4;
    case 664u: goto L_089A7CBC;
    case 665u: goto L_089A7CD4;
    case 666u: goto L_089A7CDC;
    case 667u: goto L_089A7D88;
    case 668u: goto L_089A7DBC;
    case 669u: goto L_089A7DE8;
    case 670u: goto L_089A7E14;
    case 671u: goto L_089A7E24;
    case 672u: goto L_089A7E90;
    case 673u: goto L_089A7EBC;
    case 674u: goto L_089A7ED8;
    case 675u: goto L_089A7EF8;
    case 676u: goto L_089A7F20;
    case 677u: goto L_089A7F68;
    case 678u: goto L_089A7F9C;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089A4000:
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A4018;
      }
      goto L_089A4008;
    }
L_089A4008:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A4038;
      }
      goto L_089A4018;
    }
L_089A4018:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A4038;
      }
      goto L_089A402C;
    }
L_089A402C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A4038;
L_089A4038:
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
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A40AC;
      }
      goto L_089A4060;
    }
L_089A4060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A406Cu);
    ctx.gpr[5] = (0u | 125u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089A406Cu) goto L_089A406C;
    return;
L_089A406C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4090;
      }
      goto L_089A4078;
    }
L_089A4078:
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089A4090;
L_089A4090:
    ctx.gpr[31] = (0x089A4098u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089A4098u) goto L_089A4098;
    return;
L_089A4098:
    ctx.gpr[31] = (0x089A40A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x089A40A0u) goto L_089A40A0;
    return;
L_089A40A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A40ACu);
    ctx.gpr[5] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 533u, 0x08886B9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A40ACu) goto L_089A40AC;
    return;
L_089A40AC:
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
L_089A40D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 29u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A414C;
      }
      goto L_089A40F4;
    }
L_089A40F4:
    ctx.gpr[31] = (0x089A40FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x089A40FCu) goto L_089A40FC;
    return;
L_089A40FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A414C;
      }
      goto L_089A4104;
    }
L_089A4104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A414C;
      }
      goto L_089A4110;
    }
L_089A4110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[17]);
        goto L_089A414C;
    }
    goto L_089A4120;
L_089A4120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4140;
      }
      goto L_089A412C;
    }
L_089A412C:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A4140;
    }
    goto L_089A4134;
L_089A4134:
    ctx.gpr[31] = (0x089A413Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A413Cu) goto L_089A413C;
    return;
L_089A413C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A4140;
L_089A4140:
    ctx.gpr[31] = (0x089A4148u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089A4148u) goto L_089A4148;
    return;
L_089A4148:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[17]);
    goto L_089A414C;
L_089A414C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4160:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4224;
      }
      goto L_089A417C;
    }
L_089A417C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A41CC;
      }
      goto L_089A4188;
    }
L_089A4188:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A41CC;
      }
      goto L_089A41A0;
    }
L_089A41A0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A41B0u);
    ctx.gpr[6] = (0u | 8000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 633u, 0x089A2B30u>(ctx, &aot_mem) && ctx.pc == 0x089A41B0u) goto L_089A41B0;
    return;
L_089A41B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (0x089A41C4u);
    ctx.gpr[6] = (0u | 8000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 633u, 0x089A2B30u>(ctx, &aot_mem) && ctx.pc == 0x089A41C4u) goto L_089A41C4;
    return;
L_089A41C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4274;
      }
      goto L_089A41CC;
    }
L_089A41CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A41D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x089A41D8u) goto L_089A41D8;
    return;
L_089A41D8:
    ctx.gpr[31] = (0x089A41E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089A41E0u) goto L_089A41E0;
    return;
L_089A41E0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28988)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28992)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A41F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089A41F8u) goto L_089A41F8;
    return;
L_089A41F8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x089A421Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x089A421Cu) goto L_089A421C;
    return;
L_089A421C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4274;
      }
      goto L_089A4224;
    }
L_089A4224:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A4230u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x089A4230u) goto L_089A4230;
    return;
L_089A4230:
    ctx.gpr[31] = (0x089A4238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089A4238u) goto L_089A4238;
    return;
L_089A4238:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28988)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28992)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A4250u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089A4250u) goto L_089A4250;
    return;
L_089A4250:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x089A4274u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x089A4274u) goto L_089A4274;
    return;
L_089A4274:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4284:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A43A0;
      }
      goto L_089A42AC;
    }
L_089A42AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A43A0;
      }
      goto L_089A42B8;
    }
L_089A42B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[17] = (0u | 11u);
      if (branch_taken) {
          goto L_089A430C;
      }
      goto L_089A42C4;
    }
L_089A42C4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(504), 0u);
    ctx.gpr[31] = (0x089A42D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089A42D0u) goto L_089A42D0;
    return;
L_089A42D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4314;
      }
      goto L_089A42D8;
    }
L_089A42D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 496u);
    ctx.gpr[6] = (ctx.gpr[6] >> 4u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A4314;
      }
      goto L_089A42F4;
    }
L_089A42F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A4314;
      }
      goto L_089A430C;
    }
L_089A430C:
    ctx.gpr[31] = (0x089A4314u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 668u, 0x0889F3FCu>(ctx, &aot_mem) && ctx.pc == 0x089A4314u) goto L_089A4314;
    return;
L_089A4314:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
      if (branch_taken) {
          goto L_089A4368;
      }
      goto L_089A432C;
    }
L_089A432C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[4] = (0u | 55u);
      if (branch_taken) {
          goto L_089A4360;
      }
      goto L_089A4334;
    }
L_089A4334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4354;
      }
      goto L_089A4340;
    }
L_089A4340:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A4354;
    }
    goto L_089A4348;
L_089A4348:
    ctx.gpr[31] = (0x089A4350u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A4350u) goto L_089A4350;
    return;
L_089A4350:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A4354;
L_089A4354:
    ctx.gpr[31] = (0x089A435Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089A435Cu) goto L_089A435C;
    return;
L_089A435C:
    ctx.gpr[4] = (0u | 55u);
    goto L_089A4360;
L_089A4360:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A439C;
      }
      goto L_089A4368;
    }
L_089A4368:
    if (ctx.gpr[4] != ctx.gpr[17]) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), 0u);
        goto L_089A439C;
    }
    goto L_089A4370;
L_089A4370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4390;
      }
      goto L_089A437C;
    }
L_089A437C:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A4390;
    }
    goto L_089A4384;
L_089A4384:
    ctx.gpr[31] = (0x089A438Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A438Cu) goto L_089A438C;
    return;
L_089A438C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A4390;
L_089A4390:
    ctx.gpr[31] = (0x089A4398u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089A4398u) goto L_089A4398;
    return;
L_089A4398:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), 0u);
    goto L_089A439C;
L_089A439C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), 0u);
    goto L_089A43A0;
L_089A43A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A43B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(628), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A43DC;
      }
      goto L_089A43C4;
    }
L_089A43C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (ctx.gpr[6] | 512u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(408), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(628));
    ctx.gpr[31] = (0x089A43DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(628)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A43DCu) goto L_089A43DC;
    return;
L_089A43DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A43E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(325)));
    ctx.gpr[8] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089A4444;
      }
      goto L_089A4434;
    }
L_089A4434:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A444C;
      }
      goto L_089A443C;
    }
L_089A443C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (15897u << 16u);
      if (branch_taken) {
          goto L_089A4640;
      }
      goto L_089A4444;
    }
L_089A4444:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089A46AC;
      }
      goto L_089A444C;
    }
L_089A444C:
    ctx.gpr[6] = (15918u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 5243u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (15897u << 16u);
        goto L_089A4620;
    }
    goto L_089A446C;
L_089A446C:
    ctx.gpr[6] = (16230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A4518;
      }
      goto L_089A448C;
    }
L_089A448C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (15692u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[17] = (0u | 1u);
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089A4520;
      }
      goto L_089A4510;
    }
L_089A4510:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A45D8;
      }
      goto L_089A4518;
    }
L_089A4518:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A46AC;
      }
      goto L_089A4520;
    }
L_089A4520:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089A4598u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4598u) goto L_089A4598;
    return;
L_089A4598:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[13] / ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089A45BC;
    }
    goto L_089A45BC;
L_089A45BC:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4618;
      }
      goto L_089A45D8;
    }
L_089A45D8:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089A4618u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4618u) goto L_089A4618;
    return;
L_089A4618:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A465C;
      }
      goto L_089A4620;
    }
L_089A4620:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A465C;
      }
      goto L_089A4640;
    }
L_089A4640:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A465C;
L_089A465C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089A4698u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4698u) goto L_089A4698;
    return;
L_089A4698:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A46A8;
      }
      goto L_089A46A0;
    }
L_089A46A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089A46AC;
      }
      goto L_089A46A8;
    }
L_089A46A8:
    ctx.gpr[2] = (0u | 0u);
    goto L_089A46AC;
L_089A46AC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A46CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A46F4;
      }
      goto L_089A46DC;
    }
L_089A46DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[11] = (2230u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[11] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A46FC;
      }
      goto L_089A46F4;
    }
L_089A46F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A4780;
      }
      goto L_089A46FC;
    }
L_089A46FC:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A477C;
      }
      goto L_089A4710;
    }
L_089A4710:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[6] = (0u | 17u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(604)));
    goto L_089A471C;
L_089A471C:
    ctx.gpr[8] = (ctx.gpr[10] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089A474C;
      }
      goto L_089A4734;
    }
L_089A4734:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A474C;
      }
      goto L_089A4740;
    }
L_089A4740:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A476C;
      }
      goto L_089A474C;
    }
L_089A474C:
    ctx.gpr[8] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[8] << 16u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A471C;
      }
      goto L_089A4764;
    }
L_089A4764:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A477C;
      }
      goto L_089A476C;
    }
L_089A476C:
    ctx.gpr[5] = (ctx.gpr[11] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1780), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A4780;
      }
      goto L_089A477C;
    }
L_089A477C:
    ctx.gpr[2] = (0u | 1u);
    goto L_089A4780;
L_089A4780:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4788:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A47EC;
      }
      goto L_089A47A8;
    }
L_089A47A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[17] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089A47EC;
      }
      goto L_089A47B8;
    }
L_089A47B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A47C4u);
    ctx.gpr[5] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089A47C4u) goto L_089A47C4;
    return;
L_089A47C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A47E4;
      }
      goto L_089A47CC;
    }
L_089A47CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089A47F4;
      }
      goto L_089A47DC;
    }
L_089A47DC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
      if (branch_taken) {
          goto L_089A4824;
      }
      goto L_089A47E4;
    }
L_089A47E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A48C8;
      }
      goto L_089A47EC;
    }
L_089A47EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A48C8;
      }
      goto L_089A47F4;
    }
L_089A47F4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
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
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A4858;
      }
      goto L_089A4820;
    }
L_089A4820:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
    goto L_089A4824;
L_089A4824:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1244)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[31] = (0x089A4840u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4840u) goto L_089A4840;
    return;
L_089A4840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
        goto L_089A4860;
    }
    goto L_089A4850;
L_089A4850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A488C;
      }
      goto L_089A4858;
    }
L_089A4858:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A48C8;
      }
      goto L_089A4860;
    }
L_089A4860:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4884;
      }
      goto L_089A4868;
    }
L_089A4868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A4884;
    }
    goto L_089A4874;
L_089A4874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089A4880u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A4880u) goto L_089A4880;
    return;
L_089A4880:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A4884;
L_089A4884:
    ctx.gpr[31] = (0x089A488Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089A488Cu) goto L_089A488C;
    return;
L_089A488C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (16640u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A48A8u);
    ctx.gpr[6] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089A48A8u) goto L_089A48A8;
    return;
L_089A48A8:
    ctx.gpr[5] = (2204u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A48BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10100));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 49u, 0x088B4468u>(ctx, &aot_mem) && ctx.pc == 0x089A48BCu) goto L_089A48BC;
    return;
L_089A48BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A48C8;
L_089A48C8:
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
L_089A48E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(904))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4904;
      }
      goto L_089A48F8;
    }
L_089A48F8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(904))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A490C;
      }
      goto L_089A4904;
    }
L_089A4904:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A49E0;
      }
      goto L_089A490C;
    }
L_089A490C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(872)));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
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
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32016));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-32016)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1340)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A4988;
    }
L_089A4988:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(904))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A49A8;
    }
L_089A49A8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(872)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1080), ctx.gpr[5]);
    goto L_089A49BC;
L_089A49BC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(904))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A49D4;
      }
      goto L_089A49CC;
    }
L_089A49CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A49E0;
      }
      goto L_089A49D4;
    }
L_089A49D4:
    ctx.gpr[2] = (2232u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-32016));
      if (branch_taken) {
          goto L_089A49E0;
      }
      goto L_089A49E0;
    }
L_089A49E0:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A49E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(408)));
    ctx.gpr[7] = (4u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(408), ctx.gpr[6]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(404), ctx.gpr[6]);
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4A18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089A4A44;
      }
      goto L_089A4A2C;
    }
L_089A4A2C:
    ctx.gpr[5] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089A4A44;
L_089A4A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A4A5C;
      }
      goto L_089A4A54;
    }
L_089A4A54:
    ctx.gpr[31] = (0x089A4A5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089A4A5Cu) goto L_089A4A5C;
    return;
L_089A4A5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4A7C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1352)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4A88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089A4AC4;
      }
      goto L_089A4ABC;
    }
L_089A4ABC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1352), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_089A4AC4;
L_089A4AC4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A4CEC;
      }
      goto L_089A4ACC;
    }
L_089A4ACC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[6] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (20224u << 16u);
      if (branch_taken) {
          goto L_089A4CEC;
      }
      goto L_089A4AE0;
    }
L_089A4AE0:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A4B5C;
      }
      goto L_089A4AEC;
    }
L_089A4AEC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089A4BAC;
      }
      goto L_089A4AF4;
    }
L_089A4AF4:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A4BFC;
      }
      goto L_089A4AFC;
    }
L_089A4AFC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089A4C4C;
      }
      goto L_089A4B04;
    }
L_089A4B04:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089A4C9C;
      }
      goto L_089A4B0C;
    }
L_089A4B0C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A4B1Cu);
    ctx.gpr[5] = (0u | 39u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 463u, 0x08886850u>(ctx, &aot_mem) && ctx.pc == 0x089A4B1Cu) goto L_089A4B1C;
    return;
L_089A4B1C:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_089A4B38;
    }
    goto L_089A4B2C;
L_089A4B2C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A4B48;
      }
      goto L_089A4B38;
    }
L_089A4B38:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089A4B48;
L_089A4B48:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089A4B54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 533u, 0x08886B9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4B54u) goto L_089A4B54;
    return;
L_089A4B54:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1356), ctx.gpr[17]);
      if (branch_taken) {
          goto L_089A4CEC;
      }
      goto L_089A4B5C;
    }
L_089A4B5C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A4B6Cu);
    ctx.gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 463u, 0x08886850u>(ctx, &aot_mem) && ctx.pc == 0x089A4B6Cu) goto L_089A4B6C;
    return;
L_089A4B6C:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_089A4B88;
    }
    goto L_089A4B7C;
L_089A4B7C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A4B98;
      }
      goto L_089A4B88;
    }
L_089A4B88:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089A4B98;
L_089A4B98:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089A4BA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 533u, 0x08886B9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4BA4u) goto L_089A4BA4;
    return;
L_089A4BA4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1356), ctx.gpr[17]);
      if (branch_taken) {
          goto L_089A4CEC;
      }
      goto L_089A4BAC;
    }
L_089A4BAC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A4BBCu);
    ctx.gpr[5] = (0u | 43u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 463u, 0x08886850u>(ctx, &aot_mem) && ctx.pc == 0x089A4BBCu) goto L_089A4BBC;
    return;
L_089A4BBC:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_089A4BD8;
    }
    goto L_089A4BCC;
L_089A4BCC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A4BE8;
      }
      goto L_089A4BD8;
    }
L_089A4BD8:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089A4BE8;
L_089A4BE8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089A4BF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 533u, 0x08886B9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4BF4u) goto L_089A4BF4;
    return;
L_089A4BF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1356), ctx.gpr[17]);
      if (branch_taken) {
          goto L_089A4CEC;
      }
      goto L_089A4BFC;
    }
L_089A4BFC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A4C0Cu);
    ctx.gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 463u, 0x08886850u>(ctx, &aot_mem) && ctx.pc == 0x089A4C0Cu) goto L_089A4C0C;
    return;
L_089A4C0C:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_089A4C28;
    }
    goto L_089A4C1C;
L_089A4C1C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A4C38;
      }
      goto L_089A4C28;
    }
L_089A4C28:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089A4C38;
L_089A4C38:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089A4C44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 533u, 0x08886B9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4C44u) goto L_089A4C44;
    return;
L_089A4C44:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1356), ctx.gpr[17]);
      if (branch_taken) {
          goto L_089A4CEC;
      }
      goto L_089A4C4C;
    }
L_089A4C4C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A4C5Cu);
    ctx.gpr[5] = (0u | 45u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 463u, 0x08886850u>(ctx, &aot_mem) && ctx.pc == 0x089A4C5Cu) goto L_089A4C5C;
    return;
L_089A4C5C:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_089A4C78;
    }
    goto L_089A4C6C;
L_089A4C6C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A4C88;
      }
      goto L_089A4C78;
    }
L_089A4C78:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089A4C88;
L_089A4C88:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089A4C94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 533u, 0x08886B9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4C94u) goto L_089A4C94;
    return;
L_089A4C94:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1356), ctx.gpr[17]);
      if (branch_taken) {
          goto L_089A4CEC;
      }
      goto L_089A4C9C;
    }
L_089A4C9C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A4CACu);
    ctx.gpr[5] = (0u | 53u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 463u, 0x08886850u>(ctx, &aot_mem) && ctx.pc == 0x089A4CACu) goto L_089A4CAC;
    return;
L_089A4CAC:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_089A4CC8;
    }
    goto L_089A4CBC;
L_089A4CBC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A4CD8;
      }
      goto L_089A4CC8;
    }
L_089A4CC8:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089A4CD8;
L_089A4CD8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089A4CE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 533u, 0x08886B9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4CE4u) goto L_089A4CE4;
    return;
L_089A4CE4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1356), ctx.gpr[17]);
      if (branch_taken) {
          goto L_089A4CEC;
      }
      goto L_089A4CEC;
    }
L_089A4CEC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4D08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[7] & 65535u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089A4DA4;
      }
      goto L_089A4D44;
    }
L_089A4D44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A4D9C;
      }
      goto L_089A4D50;
    }
L_089A4D50:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1924), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1924));
    ctx.gpr[31] = (0x089A4D60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A4D60u) goto L_089A4D60;
    return;
L_089A4D60:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1936));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(1952), static_cast<std::uint16_t>(ctx.gpr[19]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1956), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089A4D7Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089A4D7Cu) goto L_089A4D7C;
    return;
L_089A4D7C:
    ctx.gpr[20] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[19] = (0u | 45u);
      if (branch_taken) {
          goto L_089A4DAC;
      }
      goto L_089A4D88;
    }
L_089A4D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A4DCC;
      }
      goto L_089A4D9C;
    }
L_089A4D9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A4F9C;
      }
      goto L_089A4DA4;
    }
L_089A4DA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A4F9C;
      }
      goto L_089A4DAC;
    }
L_089A4DAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4DCC;
      }
      goto L_089A4DC8;
    }
L_089A4DC8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1412), ctx.gpr[17]);
    goto L_089A4DCC;
L_089A4DCC:
    ctx.gpr[31] = (0x089A4DD4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089A4DD4u) goto L_089A4DD4;
    return;
L_089A4DD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4DE4;
      }
      goto L_089A4DDC;
    }
L_089A4DDC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(592), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(596), 0u);
    goto L_089A4DE4;
L_089A4DE4:
    ctx.gpr[31] = (0x089A4DECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 727u, 0x0899FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4DECu) goto L_089A4DEC;
    return;
L_089A4DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089A4E28;
      }
      goto L_089A4DF8;
    }
L_089A4DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4E20;
      }
      goto L_089A4E04;
    }
L_089A4E04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A4E20;
    }
    goto L_089A4E10;
L_089A4E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089A4E1Cu);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A4E1Cu) goto L_089A4E1C;
    return;
L_089A4E1C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A4E20;
L_089A4E20:
    ctx.gpr[31] = (0x089A4E28u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089A4E28u) goto L_089A4E28;
    return;
L_089A4E28:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (17530u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089A4E4Cu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089A4E4Cu) goto L_089A4E4C;
    return;
L_089A4E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1708)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089A4E80;
      }
      goto L_089A4E58;
    }
L_089A4E58:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1708), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1960), ctx.gpr[4]);
    goto L_089A4E80;
L_089A4E80:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089A4E8Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 663u, 0x0899F6FCu>(ctx, &aot_mem) && ctx.pc == 0x089A4E8Cu) goto L_089A4E8C;
    return;
L_089A4E8C:
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[5] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1964), ctx.gpr[5]);
    ctx.gpr[31] = (0x089A4EB4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 663u, 0x0899F6FCu>(ctx, &aot_mem) && ctx.pc == 0x089A4EB4u) goto L_089A4EB4;
    return;
L_089A4EB4:
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[5] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089A4ED8u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(1968), static_cast<std::uint16_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089A4ED8u) goto L_089A4ED8;
    return;
L_089A4ED8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4F64;
      }
      goto L_089A4EE0;
    }
L_089A4EE0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 30000u);
    ctx.gpr[31] = (0x089A4EF4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x089A4EF4u) goto L_089A4EF4;
    return;
L_089A4EF4:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089A4F04u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 19u, 0x08944130u>(ctx, &aot_mem) && ctx.pc == 0x089A4F04u) goto L_089A4F04;
    return;
L_089A4F04:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (0u | 45u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089A4F1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 317u, 0x088EE2C8u>(ctx, &aot_mem) && ctx.pc == 0x089A4F1Cu) goto L_089A4F1C;
    return;
L_089A4F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[4] = (0u | 12u);
      if (branch_taken) {
          goto L_089A4F5C;
      }
      goto L_089A4F28;
    }
L_089A4F28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4F50;
      }
      goto L_089A4F34;
    }
L_089A4F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A4F50;
    }
    goto L_089A4F40;
L_089A4F40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089A4F4Cu);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A4F4Cu) goto L_089A4F4C;
    return;
L_089A4F4C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A4F50;
L_089A4F50:
    ctx.gpr[31] = (0x089A4F58u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089A4F58u) goto L_089A4F58;
    return;
L_089A4F58:
    ctx.gpr[4] = (0u | 12u);
    goto L_089A4F5C;
L_089A4F5C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A4F78;
      }
      goto L_089A4F64;
    }
L_089A4F64:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 30000u);
    ctx.gpr[31] = (0x089A4F78u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x089A4F78u) goto L_089A4F78;
    return;
L_089A4F78:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089A4F84u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 609u, 0x0899F378u>(ctx, &aot_mem) && ctx.pc == 0x089A4F84u) goto L_089A4F84;
    return;
L_089A4F84:
    ctx.gpr[31] = (0x089A4F8Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 397u, 0x089BDFA4u>(ctx, &aot_mem) && ctx.pc == 0x089A4F8Cu) goto L_089A4F8C;
    return;
L_089A4F8C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089A4F98u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 266u, 0x088D534Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4F98u) goto L_089A4F98;
    return;
L_089A4F98:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_089A4F9C;
L_089A4F9C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_089A4FC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1924), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 54u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A5090;
      }
      goto L_089A4FEC;
    }
L_089A4FEC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), ctx.gpr[4]);
    ctx.gpr[5] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089A5078u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 278u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x089A5078u) goto L_089A5078;
    return;
L_089A5078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5214;
      }
      goto L_089A5090;
    }
L_089A5090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A5214;
      }
      goto L_089A50A0;
    }
L_089A50A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 45u);
      if (branch_taken) {
          goto L_089A50F0;
      }
      goto L_089A50C4;
    }
L_089A50C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089A50E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x089A50E4u) goto L_089A50E4;
    return;
L_089A50E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x089A50F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 576u, 0x0899F198u>(ctx, &aot_mem) && ctx.pc == 0x089A50F0u) goto L_089A50F0;
    return;
L_089A50F0:
    ctx.gpr[31] = (0x089A50F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089A50F8u) goto L_089A50F8;
    return;
L_089A50F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5130;
      }
      goto L_089A5100;
    }
L_089A5100:
    ctx.gpr[31] = (0x089A5108u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x089A5108u) goto L_089A5108;
    return;
L_089A5108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (17530u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089A5120u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089A5120u) goto L_089A5120;
    return;
L_089A5120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A5134;
      }
      goto L_089A5130;
    }
L_089A5130:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    goto L_089A5134;
L_089A5134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1708)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089A51FC;
      }
      goto L_089A5140;
    }
L_089A5140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1964)));
    if (ctx.gpr[4] == ctx.gpr[17]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_089A5198;
    }
    goto L_089A514C;
L_089A514C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1964)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1968)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1964), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1968), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089A51CC;
      }
      goto L_089A5198;
    }
L_089A5198:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    goto L_089A51CC;
L_089A51CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1708)));
    ctx.gpr[31] = (0x089A51D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 609u, 0x0899F378u>(ctx, &aot_mem) && ctx.pc == 0x089A51D8u) goto L_089A51D8;
    return;
L_089A51D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1708), ctx.gpr[17]);
    goto L_089A51FC;
L_089A51FC:
    ctx.gpr[31] = (0x089A5204u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089A5204u) goto L_089A5204;
    return;
L_089A5204:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A5214;
      }
      goto L_089A520C;
    }
L_089A520C:
    ctx.gpr[31] = (0x089A5214u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A4788;
L_089A5214:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5228:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A5254u);
    ctx.gpr[5] = (0u | 161u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x089A5254u) goto L_089A5254;
    return;
L_089A5254:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5268;
      }
      goto L_089A5260;
    }
L_089A5260:
    ctx.gpr[31] = (0x089A5268u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 148u, 0x0899D358u>(ctx, &aot_mem) && ctx.pc == 0x089A5268u) goto L_089A5268;
    return;
L_089A5268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089A5280u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A5280u) goto L_089A5280;
    return;
L_089A5280:
    ctx.gpr[31] = (0x089A5288u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089A5288u) goto L_089A5288;
    return;
L_089A5288:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5294;
      }
      goto L_089A5290;
    }
L_089A5290:
    ctx.gpr[18] = (0u | 0u);
    goto L_089A5294;
L_089A5294:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A52A4u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 667u, 0x089C6D48u>(ctx, &aot_mem) && ctx.pc == 0x089A52A4u) goto L_089A52A4;
    return;
L_089A52A4:
    ctx.gpr[31] = (0x089A52ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x089A52ACu) goto L_089A52AC;
    return;
L_089A52AC:
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
L_089A52C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089A52F8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A52F8u) goto L_089A52F8;
    return;
L_089A52F8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(864), 0u);
    ctx.gpr[31] = (0x089A5318u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5318u) goto L_089A5318;
    return;
L_089A5318:
    ctx.gpr[31] = (0x089A5320u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 887u, 0x089A3C28u>(ctx, &aot_mem) && ctx.pc == 0x089A5320u) goto L_089A5320;
    return;
L_089A5320:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5330:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(1914), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5338:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1914)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5340:
    ctx.gpr[5] = (0u | 2u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1084), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A534C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1084)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089A5368;
      }
      goto L_089A5360;
    }
L_089A5360:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1084), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089A5368;
L_089A5368:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089A5374u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1088));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x089A5374u) goto L_089A5374;
    return;
L_089A5374:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5380:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-36));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(50) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A5398;
    }
L_089A5398:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17704)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A53B0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A53BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18196));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A53BCu) goto L_089A53BC;
    return;
L_089A53BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A53C4;
    }
L_089A53C4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A53D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18188));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A53D0u) goto L_089A53D0;
    return;
L_089A53D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A53D8;
    }
L_089A53D8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A53E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18180));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A53E4u) goto L_089A53E4;
    return;
L_089A53E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A53EC;
    }
L_089A53EC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A53F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18172));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A53F8u) goto L_089A53F8;
    return;
L_089A53F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A5400;
    }
L_089A5400:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A540Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18164));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A540Cu) goto L_089A540C;
    return;
L_089A540C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A5414;
    }
L_089A5414:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5420u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18156));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5420u) goto L_089A5420;
    return;
L_089A5420:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A5428;
    }
L_089A5428:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5434u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18148));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5434u) goto L_089A5434;
    return;
L_089A5434:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A543C;
    }
L_089A543C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5448u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18140));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5448u) goto L_089A5448;
    return;
L_089A5448:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A5450;
    }
L_089A5450:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A545Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18132));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A545Cu) goto L_089A545C;
    return;
L_089A545C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A5464;
    }
L_089A5464:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5470u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18124));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5470u) goto L_089A5470;
    return;
L_089A5470:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A5478;
    }
L_089A5478:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5484u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18116));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5484u) goto L_089A5484;
    return;
L_089A5484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A548C;
    }
L_089A548C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5498u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18108));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5498u) goto L_089A5498;
    return;
L_089A5498:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A54A0;
    }
L_089A54A0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A54ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18100));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A54ACu) goto L_089A54AC;
    return;
L_089A54AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A54B4;
    }
L_089A54B4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A54C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18092));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A54C0u) goto L_089A54C0;
    return;
L_089A54C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A54C8;
    }
L_089A54C8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A54D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18084));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A54D4u) goto L_089A54D4;
    return;
L_089A54D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A54DC;
    }
L_089A54DC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A54E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18076));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A54E8u) goto L_089A54E8;
    return;
L_089A54E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A54F0;
    }
L_089A54F0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A54FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18068));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A54FCu) goto L_089A54FC;
    return;
L_089A54FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A5504;
    }
L_089A5504:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5510u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18060));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5510u) goto L_089A5510;
    return;
L_089A5510:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A5518;
    }
L_089A5518:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5524u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18052));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5524u) goto L_089A5524;
    return;
L_089A5524:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A552C;
    }
L_089A552C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5538u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18044));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5538u) goto L_089A5538;
    return;
L_089A5538:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A5540;
    }
L_089A5540:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A554Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18036));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A554Cu) goto L_089A554C;
    return;
L_089A554C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A5554;
    }
L_089A5554:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5560u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18028));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5560u) goto L_089A5560;
    return;
L_089A5560:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A5568;
    }
L_089A5568:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5574u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18020));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5574u) goto L_089A5574;
    return;
L_089A5574:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A558C;
      }
      goto L_089A557C;
    }
L_089A557C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5588u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18012));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5588u) goto L_089A5588;
    return;
L_089A5588:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089A558C;
L_089A558C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6115));
    ctx.gpr[31] = (0x089A5598u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x089A5598u) goto L_089A5598;
    return;
L_089A5598:
    ctx.gpr[31] = (0x089A55A0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x089A55A0u) goto L_089A55A0;
    return;
L_089A55A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A55AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[6] = (18804u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 9214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089A5604u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 376u, 0x089757BCu>(ctx, &aot_mem) && ctx.pc == 0x089A5604u) goto L_089A5604;
    return;
L_089A5604:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A5718;
      }
      goto L_089A5610;
    }
L_089A5610:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x089A5624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 137u, 0x08914A64u>(ctx, &aot_mem) && ctx.pc == 0x089A5624u) goto L_089A5624;
    return;
L_089A5624:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5718;
      }
      goto L_089A5630;
    }
L_089A5630:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[17] << 4u);
    ctx.gpr[7] = (ctx.gpr[17] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A5718;
      }
      goto L_089A56C0;
    }
L_089A56C0:
    ctx.gpr[31] = (0x089A56C8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 433u, 0x088A6DC0u>(ctx, &aot_mem) && ctx.pc == 0x089A56C8u) goto L_089A56C8;
    return;
L_089A56C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x089A56DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A066A0u>(ctx, &aot_mem) && ctx.pc == 0x089A56DCu) goto L_089A56DC;
    return;
L_089A56DC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2036), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2040), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089A5718;
L_089A5718:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5734:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17096u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[19] = (65535u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-2));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A57A4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 176u, 0x08A0D538u>(ctx, &aot_mem) && ctx.pc == 0x089A57A4u) goto L_089A57A4;
    return;
L_089A57A4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16964));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(528), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(532), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[21] = (ctx.gpr[30] + static_cast<std::uint32_t>(768));
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(784));
    ctx.gpr[31] = (0x089A57D8u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 41u, 0x08AA8390u>(ctx, &aot_mem) && ctx.pc == 0x089A57D8u) goto L_089A57D8;
    return;
L_089A57D8:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(920));
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(13696));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x089A57F0u);
    ctx.gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x089A57F0u) goto L_089A57F0;
    return;
L_089A57F0:
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1084), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1152), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1156), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[30] + static_cast<std::uint32_t>(1184));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[22] = (ctx.gpr[30] + static_cast<std::uint32_t>(1280));
    ctx.gpr[23] = (ctx.gpr[30] + static_cast<std::uint32_t>(1312));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1376), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1428));
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(13716));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x089A5834u);
    ctx.gpr[6] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x089A5834u) goto L_089A5834;
    return;
L_089A5834:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1992), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1996), 0u);
    ctx.gpr[4] = (0u | 209u);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(2000), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(2002), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(2004), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(2016));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(2044), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-15));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] | 6u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[19]);
    ctx.gpr[7] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(592), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(596), 0u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(628), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(600), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(604), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1332), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(748), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1352), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1356), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(632), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1408), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(840), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1368), 0u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1416), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1772), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1776), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1788), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1420), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1780), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1784), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1792), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1796), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1800), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1804), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1808), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1812), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (16752u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (0u | 15u);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1264), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1328), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1721), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1340), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1344), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1204), 0u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1360), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1362), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1372), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1392), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1396), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1400), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(2032), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(864), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(868), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1412), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(848), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(856), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1756), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1724), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1760), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1764), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1296), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1424), 0u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(664), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_089A5A3C;
L_089A5A3C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A5A3C;
      }
      goto L_089A5A50;
    }
L_089A5A50:
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1172), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1176), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(908), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(912), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(916), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1080), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1972), 0u);
    ctx.gpr[31] = (0x089A5A80u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1976), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089A5A80u) goto L_089A5A80;
    return;
L_089A5A80:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28980)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28984)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A5A98u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089A5A98u) goto L_089A5A98;
    return;
L_089A5A98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[12] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[14] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[15] = (0u + static_cast<std::uint32_t>(-1025));
    ctx.gpr[24] = (17036u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[15]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[25] = (16076u << 16u);
    ctx.gpr[24] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[25] = (ctx.gpr[25] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[25]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[24]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[2] = (ctx.gpr[2] >> 31u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[2] = (ctx.gpr[1] | ctx.gpr[2]);
    ctx.gpr[25] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(-28972)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(-28976)));
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[31] = (ctx.gpr[2] + ctx.gpr[16]);
    ctx.gpr[18] = (ctx.gpr[31] < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[25] = (ctx.gpr[25] & ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[18] + ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[25]);
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[16] = (ctx.gpr[31] | 0u);
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[25] = (ctx.gpr[25] & ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1980), ctx.gpr[2]);
    ctx.gpr[31] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[25]);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1228), static_cast<std::uint16_t>(ctx.gpr[31]));
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1230), static_cast<std::uint16_t>(0u));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-16385));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1232), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1234), static_cast<std::uint16_t>(0u));
    ctx.gpr[25] = (ctx.gpr[25] & ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[25] = (65535u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(32767));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[16] = (ctx.gpr[16] & ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (15692u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] | 52429u);
    ctx.gpr[17] = (ctx.gpr[17] & ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1816), 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[16] = (65535u << 16u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1820), 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1826), static_cast<std::uint8_t>(ctx.gpr[31]));
    ctx.gpr[31] = (ctx.gpr[17] & ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[18] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[31] = (2u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[17] | ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[17] = (ctx.gpr[17] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[17]);
    ctx.gpr[17] = (4u << 16u);
    ctx.gpr[17] = (ctx.gpr[18] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[17]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[17] = (65528u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[9]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[19] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[19] = (65520u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[20] & ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[18]);
    ctx.gpr[18] = (65504u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[20] = (ctx.gpr[20] & ctx.gpr[18]);
    ctx.gpr[21] = (ctx.gpr[21] & ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[21]);
    ctx.gpr[20] = (65472u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[21] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[21] = (ctx.gpr[21] & ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[21]);
    ctx.gpr[21] = (65408u << 16u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[23] = (65024u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[8] = (64512u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[3] = (63488u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[2]);
    ctx.gpr[2] = (61440u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (57344u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[22] = (ctx.gpr[22] | ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[7] = (49152u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[6]);
    ctx.gpr[6] = (65532u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[9] = (32768u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[18] = (ctx.gpr[22] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[22] = (65280u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[8] = (ctx.gpr[18] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[8] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(418), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[6] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(420)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | 2u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[3]);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[3]);
    ctx.gpr[3] = (1024u << 16u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[10]);
    ctx.gpr[10] = (2048u << 16u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[10]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[9]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(420)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(420), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(420)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(420)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 100u);
    ctx.gpr[31] = (0x089A6144u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(422), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089A6144u) goto L_089A6144;
    return;
L_089A6144:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A616C;
      }
      goto L_089A6154;
    }
L_089A6154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A617C;
      }
      goto L_089A616C;
    }
L_089A616C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089A617C;
L_089A617C:
    ctx.gpr[31] = (0x089A6184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089A6184u) goto L_089A6184;
    return;
L_089A6184:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    ctx.gpr[4] = (16243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A61C0;
      }
      goto L_089A61AC;
    }
L_089A61AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A61D4;
      }
      goto L_089A61C0;
    }
L_089A61C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_089A61D4;
L_089A61D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A61ECu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 96u, 0x08864718u>(ctx, &aot_mem) && ctx.pc == 0x089A61ECu) goto L_089A61EC;
    return;
L_089A61EC:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A6200u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 100u, 0x08864758u>(ctx, &aot_mem) && ctx.pc == 0x089A6200u) goto L_089A6200;
    return;
L_089A6200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11740)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(640), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(636), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(656), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(652), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1868), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1912), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    goto L_089A624C;
L_089A624C:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1828), 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1872), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A624C;
      }
      goto L_089A6274;
    }
L_089A6274:
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1914), static_cast<std::uint16_t>(0u));
    ctx.gpr[17] = (0u | 45u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1720), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1708), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1712), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_089A6290;
L_089A6290:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1428), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1432), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1436), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1440), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1444), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089A6290;
      }
      goto L_089A62B4;
    }
L_089A62B4:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1748), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1744), 0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089A62D0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x089A62D0u) goto L_089A62D0;
    return;
L_089A62D0:
    ctx.gpr[4] = (17046u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_089A62E8;
    }
    goto L_089A62E8;
L_089A62E8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1918), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1920), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1924), 0u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1960), 0u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1722), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1968), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1964), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(384), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089A6320u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1768), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089A6320u) goto L_089A6320;
    return;
L_089A6320:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (0u | 25u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (0u | 23u);
    ctx.gpr[5] = (ctx.hi);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1916), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(1916)));
    if (ctx.gpr[5] != ctx.gpr[4]) {
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1755), static_cast<std::uint8_t>(0u));
        goto L_089A6350;
    }
    goto L_089A6344;
L_089A6344:
    ctx.gpr[4] = (0u | 400u);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1916), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1755), static_cast<std::uint8_t>(0u));
    goto L_089A6350;
L_089A6350:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1216), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1348), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1352), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1356), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1220), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1224), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(740), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1984), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1376)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1988), 0u);
    ctx.gpr[31] = (0x089A6380u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 602u, 0x08A9ECA4u>(ctx, &aot_mem) && ctx.pc == 0x089A6380u) goto L_089A6380;
    return;
L_089A6380:
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(2048), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(2008), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(2036), 0u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(2040), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[30] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A63D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089A66A4;
      }
      goto L_089A63F0;
    }
L_089A63F0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16964));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[31] = (0x089A6404u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x089A6404u) goto L_089A6404;
    return;
L_089A6404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6428;
      }
      goto L_089A6410;
    }
L_089A6410:
    ctx.gpr[31] = (0x089A6418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A296C8u>(ctx, &aot_mem) && ctx.pc == 0x089A6418u) goto L_089A6418;
    return;
L_089A6418:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A6428u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2AA08u>(ctx, &aot_mem) && ctx.pc == 0x089A6428u) goto L_089A6428;
    return;
L_089A6428:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x089A6438u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 493u, 0x08AFE0A8u>(ctx, &aot_mem) && ctx.pc == 0x089A6438u) goto L_089A6438;
    return;
L_089A6438:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x089A6444u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 22u, 0x089681E4u>(ctx, &aot_mem) && ctx.pc == 0x089A6444u) goto L_089A6444;
    return;
L_089A6444:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6548;
      }
      goto L_089A6450;
    }
L_089A6450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6548;
      }
      goto L_089A645C;
    }
L_089A645C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[9] = (0u | 60u);
      if (branch_taken) {
          goto L_089A649C;
      }
      goto L_089A6470;
    }
L_089A6470:
    ctx.gpr[7] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 12u);
      if (branch_taken) {
          goto L_089A6494;
      }
      goto L_089A647C;
    }
L_089A647C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 11u);
      if (branch_taken) {
          goto L_089A64A4;
      }
      goto L_089A6484;
    }
L_089A6484:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089A64AC;
      }
      goto L_089A648C;
    }
L_089A648C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_089A64AC;
      }
      goto L_089A6494;
    }
L_089A6494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_089A64AC;
      }
      goto L_089A649C;
    }
L_089A649C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_089A64AC;
      }
      goto L_089A64A4;
    }
L_089A64A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_089A64AC;
      }
      goto L_089A64AC;
    }
L_089A64AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089A64C4;
      }
      goto L_089A64B8;
    }
L_089A64B8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(504), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
      if (branch_taken) {
          goto L_089A6508;
      }
      goto L_089A64C4;
    }
L_089A64C4:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(544)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089A6504;
      }
      goto L_089A64D8;
    }
L_089A64D8:
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089A64F0;
      }
      goto L_089A64E8;
    }
L_089A64E8:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(508), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    goto L_089A64F0;
L_089A64F0:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(544)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A64D8;
      }
      goto L_089A6504;
    }
L_089A6504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    goto L_089A6508;
L_089A6508:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[9];
    ctx.gpr[6] = (0u | 57u);
      if (branch_taken) {
          goto L_089A6518;
      }
      goto L_089A6510;
    }
L_089A6510:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A653C;
      }
      goto L_089A6518;
    }
L_089A6518:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[9];
    ctx.gpr[6] = (0u | 57u);
      if (branch_taken) {
          goto L_089A6528;
      }
      goto L_089A6520;
    }
L_089A6520:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A653C;
      }
      goto L_089A6528;
    }
L_089A6528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (~(ctx.gpr[5] | 0u));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(543)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(543), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089A653C;
L_089A653C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), 0u);
      if (branch_taken) {
          goto L_089A6568;
      }
      goto L_089A6548;
    }
L_089A6548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 56u);
      if (branch_taken) {
          goto L_089A6560;
      }
      goto L_089A6558;
    }
L_089A6558:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A6568;
      }
      goto L_089A6560;
    }
L_089A6560:
    ctx.gpr[31] = (0x089A6568u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 621u, 0x0888F0A4u>(ctx, &aot_mem) && ctx.pc == 0x089A6568u) goto L_089A6568;
    return;
L_089A6568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A657C;
      }
      goto L_089A6574;
    }
L_089A6574:
    ctx.gpr[31] = (0x089A657Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 545u, 0x0884E1D0u>(ctx, &aot_mem) && ctx.pc == 0x089A657Cu) goto L_089A657C;
    return;
L_089A657C:
    ctx.gpr[31] = (0x089A6584u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 693u, 0x0899F8F8u>(ctx, &aot_mem) && ctx.pc == 0x089A6584u) goto L_089A6584;
    return;
L_089A6584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A65A8;
      }
      goto L_089A6594;
    }
L_089A6594:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6296)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6296), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    goto L_089A65A8;
L_089A65A8:
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A65C4;
      }
      goto L_089A65B4;
    }
L_089A65B4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25828)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25828), ctx.gpr[5]);
    goto L_089A65C4;
L_089A65C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[31] = (0x089A65D0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 602u, 0x08A9ECA4u>(ctx, &aot_mem) && ctx.pc == 0x089A65D0u) goto L_089A65D0;
    return;
L_089A65D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A65EC;
      }
      goto L_089A65DC;
    }
L_089A65DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A65EC;
      }
      goto L_089A65E4;
    }
L_089A65E4:
    ctx.gpr[31] = (0x089A65ECu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A65ECu) goto L_089A65EC;
    return;
L_089A65EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(908)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6608;
      }
      goto L_089A65F8;
    }
L_089A65F8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6608;
      }
      goto L_089A6600;
    }
L_089A6600:
    ctx.gpr[31] = (0x089A6608u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(908));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A6608u) goto L_089A6608;
    return;
L_089A6608:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x089A6618u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 98u, 0x08864738u>(ctx, &aot_mem) && ctx.pc == 0x089A6618u) goto L_089A6618;
    return;
L_089A6618:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1088));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(448));
      if (branch_taken) {
          goto L_089A664C;
      }
      goto L_089A6624;
    }
L_089A6624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(448));
      if (branch_taken) {
          goto L_089A664C;
      }
      goto L_089A6634;
    }
L_089A6634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(448));
        goto L_089A664C;
    }
    goto L_089A6640;
L_089A6640:
    ctx.gpr[31] = (0x089A6648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089A6648u) goto L_089A6648;
    return;
L_089A6648:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(448));
    goto L_089A664C;
L_089A664C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089A6688;
      }
      goto L_089A6654;
    }
L_089A6654:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(464));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089A6688;
      }
      goto L_089A6660;
    }
L_089A6660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089A6688;
      }
      goto L_089A6670;
    }
L_089A6670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(528)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_089A6688;
    }
    goto L_089A667C;
L_089A667C:
    ctx.gpr[31] = (0x089A6684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089A6684u) goto L_089A6684;
    return;
L_089A6684:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A6688;
L_089A6688:
    ctx.gpr[31] = (0x089A6690u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 195u, 0x08A0D848u>(ctx, &aot_mem) && ctx.pc == 0x089A6690u) goto L_089A6690;
    return;
L_089A6690:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A66A4;
      }
      goto L_089A669C;
    }
L_089A669C:
    ctx.gpr[31] = (0x089A66A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 253u, 0x0899DA6Cu>(ctx, &aot_mem) && ctx.pc == 0x089A66A4u) goto L_089A66A4;
    return;
L_089A66A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A66B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-624));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(15474))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (2230u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[16]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[16]);
      if (branch_taken) {
          goto L_089A6CD0;
      }
      goto L_089A674C;
    }
L_089A674C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[31] = (0x089A67B0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 136u, 0x089FD404u>(ctx, &aot_mem) && ctx.pc == 0x089A67B0u) goto L_089A67B0;
    return;
L_089A67B0:
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[16];
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[17];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[16];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[17];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A6BBC;
      }
      goto L_089A685C;
    }
L_089A685C:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18044));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[6] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5736));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(465));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(466));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(467));
    ctx.gpr[21] = (0u | 55u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[4]);
    goto L_089A68AC;
L_089A68AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A6B90;
      }
      goto L_089A68C0;
    }
L_089A68C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[4]);
    goto L_089A68DC;
L_089A68DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A69AC;
      }
      goto L_089A68FC;
    }
L_089A68FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A69A0;
      }
      goto L_089A690C;
    }
L_089A690C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089A693C;
      }
      goto L_089A6918;
    }
L_089A6918:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A69A0;
      }
      goto L_089A6924;
    }
L_089A6924:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A69A0;
      }
      goto L_089A6938;
    }
L_089A6938:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    goto L_089A693C;
L_089A693C:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[26] = ctx.fpr[26] - ctx.fpr[22];
    ctx.fpr[28] = ctx.fpr[28] - ctx.fpr[24];
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A69A0;
      }
      goto L_089A6968;
    }
L_089A6968:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089A6990;
      }
      goto L_089A6974;
    }
L_089A6974:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6988;
      }
      goto L_089A6980;
    }
L_089A6980:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A6990;
      }
      goto L_089A6988;
    }
L_089A6988:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A69A0;
      }
      goto L_089A6990;
    }
L_089A6990:
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    goto L_089A69A0;
L_089A69A0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A68FC;
      }
      goto L_089A69AC;
    }
L_089A69AC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6B6C;
      }
      goto L_089A69BC;
    }
L_089A69BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6B6C;
      }
      goto L_089A69DC;
    }
L_089A69DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6A10;
      }
      goto L_089A69EC;
    }
L_089A69EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089A6A08u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6A08u) goto L_089A6A08;
    return;
L_089A6A08:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6A18;
      }
      goto L_089A6A10;
    }
L_089A6A10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089A6A18;
      }
      goto L_089A6A18;
    }
L_089A6A18:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6A88;
      }
      goto L_089A6A20;
    }
L_089A6A20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6A88;
      }
      goto L_089A6A44;
    }
L_089A6A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_089A6A70;
    }
    goto L_089A6A50;
L_089A6A50:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[31] = (0x089A6A60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x089A6A60u) goto L_089A6A60;
    return;
L_089A6A60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_089A6A70;
L_089A6A70:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 65535u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6A90;
      }
      goto L_089A6A88;
    }
L_089A6A88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6B60;
      }
      goto L_089A6A90;
    }
L_089A6A90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6AB8;
      }
      goto L_089A6A9C;
    }
L_089A6A9C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A6AACu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x089A6AACu) goto L_089A6AAC;
    return;
L_089A6AAC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(465)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089A6AB8;
L_089A6AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[26] = ctx.fpr[26] - ctx.fpr[22];
      if (branch_taken) {
          goto L_089A6AE8;
      }
      goto L_089A6ACC;
    }
L_089A6ACC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A6ADCu);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x089A6ADCu) goto L_089A6ADC;
    return;
L_089A6ADC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(466)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089A6AE8;
L_089A6AE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[28] = ctx.fpr[28] - ctx.fpr[24];
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A6B60;
      }
      goto L_089A6B14;
    }
L_089A6B14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_089A6B40;
    }
    goto L_089A6B20;
L_089A6B20:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A6B30u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x089A6B30u) goto L_089A6B30;
    return;
L_089A6B30:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(467)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_089A6B40;
L_089A6B40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089A6B60;
      }
      goto L_089A6B4C;
    }
L_089A6B4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(264), ctx.gpr[4]);
    goto L_089A6B60;
L_089A6B60:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A69DC;
      }
      goto L_089A6B6C;
    }
L_089A6B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(44));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A68DC;
      }
      goto L_089A6B90;
    }
L_089A6B90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A68AC;
      }
      goto L_089A6BB4;
    }
L_089A6BB4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_089A6BBC;
L_089A6BBC:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A6BE0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 322u, 0x0899DF6Cu>(ctx, &aot_mem) && ctx.pc == 0x089A6BE0u) goto L_089A6BE0;
    return;
L_089A6BE0:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1868), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (0u | 10u);
    goto L_089A6BEC;
L_089A6BEC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089A6C1C;
      }
      goto L_089A6BF4;
    }
L_089A6BF4:
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1868), static_cast<std::uint16_t>(ctx.gpr[4]));
        goto L_089A6C20;
    }
    goto L_089A6BFC;
L_089A6BFC:
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1828), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_089A6BEC;
      }
      goto L_089A6C1C;
    }
L_089A6C1C:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1868), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089A6C20;
L_089A6C20:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 10u);
      if (branch_taken) {
          goto L_089A6C4C;
      }
      goto L_089A6C30;
    }
L_089A6C30:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    goto L_089A6C38;
L_089A6C38:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1828), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A6C38;
      }
      goto L_089A6C4C;
    }
L_089A6C4C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.gpr[7] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A6C60u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 322u, 0x0899DF6Cu>(ctx, &aot_mem) && ctx.pc == 0x089A6C60u) goto L_089A6C60;
    return;
L_089A6C60:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1912), static_cast<std::uint16_t>(0u));
    goto L_089A6C64;
L_089A6C64:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1912)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089A6CA8;
      }
      goto L_089A6C70;
    }
L_089A6C70:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6CA8;
      }
      goto L_089A6C80;
    }
L_089A6C80:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1872), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1912), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A6C64;
      }
      goto L_089A6CA8;
    }
L_089A6CA8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_089A6CD0;
      }
      goto L_089A6CB8;
    }
L_089A6CB8:
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    goto L_089A6CBC;
L_089A6CBC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1872), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A6CBC;
      }
      goto L_089A6CD0;
    }
L_089A6CD0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    goto L_089A6CD8;
L_089A6CD8:
    ctx.gpr[18] = (ctx.gpr[16] << 2u);
    ctx.gpr[18] = (ctx.gpr[19] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1828)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089A6D48;
      }
      goto L_089A6CEC;
    }
L_089A6CEC:
    ctx.gpr[31] = (0x089A6CF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1828)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 300u, 0x0899DD78u>(ctx, &aot_mem) && ctx.pc == 0x089A6CF4u) goto L_089A6CF4;
    return;
L_089A6CF4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
        goto L_089A6D04;
    }
    goto L_089A6CFC;
L_089A6CFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089A6D48;
      }
      goto L_089A6D04;
    }
L_089A6D04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1828)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A6D48;
      }
      goto L_089A6D44;
    }
L_089A6D44:
    ctx.gpr[17] = (0u | 1u);
    goto L_089A6D48;
L_089A6D48:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6D9C;
      }
      goto L_089A6D50;
    }
L_089A6D50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6D88;
      }
      goto L_089A6D60;
    }
L_089A6D60:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1832)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1828), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6D60;
      }
      goto L_089A6D88;
    }
L_089A6D88:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1868)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1864), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(1868), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A6DA8;
      }
      goto L_089A6D9C;
    }
L_089A6D9C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    goto L_089A6DA8;
L_089A6DA8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6CD8;
      }
      goto L_089A6DB4;
    }
L_089A6DB4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(604)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A6DF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-848));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(816), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(800), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(804), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(808), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(812), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(820), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(824), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(828), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(832), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(836), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(840), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A6E34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 347u, 0x0897235Cu>(ctx, &aot_mem) && ctx.pc == 0x089A6E34u) goto L_089A6E34;
    return;
L_089A6E34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8140)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(156)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[19] = (ctx.gpr[5] ^ ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 64u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089A6EC4;
      }
      goto L_089A6E88;
    }
L_089A6E88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6EC4;
      }
      goto L_089A6E94;
    }
L_089A6E94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(300) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6EC4;
      }
      goto L_089A6EA4;
    }
L_089A6EA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A6EC4;
      }
      goto L_089A6EB4;
    }
L_089A6EB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[5]);
    goto L_089A6EC4;
L_089A6EC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6EEC;
      }
      goto L_089A6ED4;
    }
L_089A6ED4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A6EF4;
      }
      goto L_089A6EE4;
    }
L_089A6EE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6F60;
      }
      goto L_089A6EEC;
    }
L_089A6EEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7F68;
      }
      goto L_089A6EF4;
    }
L_089A6EF4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6FB4;
      }
      goto L_089A6EFC;
    }
L_089A6EFC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 256u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6F24;
      }
      goto L_089A6F14;
    }
L_089A6F14:
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_089A6F44;
      }
      goto L_089A6F24;
    }
L_089A6F24:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 1024u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6F44;
      }
      goto L_089A6F3C;
    }
L_089A6F3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_089A6F44;
L_089A6F44:
    ctx.gpr[31] = (0x089A6F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 343u, 0x088658B8u>(ctx, &aot_mem) && ctx.pc == 0x089A6F4Cu) goto L_089A6F4C;
    return;
L_089A6F4C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6EFC;
      }
      goto L_089A6F58;
    }
L_089A6F58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6FB4;
      }
      goto L_089A6F60;
    }
L_089A6F60:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6FB4;
      }
      goto L_089A6F68;
    }
L_089A6F68:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6F94;
      }
      goto L_089A6F74;
    }
L_089A6F74:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A6F94;
      }
      goto L_089A6F84;
    }
L_089A6F84:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A6FA0;
      }
      goto L_089A6F94;
    }
L_089A6F94:
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_089A6FA0;
L_089A6FA0:
    ctx.gpr[31] = (0x089A6FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 343u, 0x088658B8u>(ctx, &aot_mem) && ctx.pc == 0x089A6FA8u) goto L_089A6FA8;
    return;
L_089A6FA8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6F68;
      }
      goto L_089A6FB4;
    }
L_089A6FB4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A77F0;
      }
      goto L_089A6FBC;
    }
L_089A6FBC:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_089A77F0;
      }
      goto L_089A6FD4;
    }
L_089A6FD4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A77F0;
      }
      goto L_089A6FE8;
    }
L_089A6FE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (15752u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 34953u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[14];
      if (branch_taken) {
          goto L_089A72B4;
      }
      goto L_089A7010;
    }
L_089A7010:
    ctx.gpr[4] = (0u | 170u);
    ctx.gpr[5] = (0u | 165u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 140u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(241), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(242), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(243), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7050;
      }
      goto L_089A703C;
    }
L_089A703C:
    ctx.gpr[4] = (16136u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 34953u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A7060;
      }
      goto L_089A7050;
    }
L_089A7050:
    ctx.gpr[4] = (16042u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 43691u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089A7060;
L_089A7060:
    ctx.gpr[31] = (0x089A7068u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(325)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x08925840u>(ctx, &aot_mem) && ctx.pc == 0x089A7068u) goto L_089A7068;
    return;
L_089A7068:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089A708C;
      }
      goto L_089A7078;
    }
L_089A7078:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A718C;
      }
      goto L_089A7084;
    }
L_089A7084:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A70CC;
      }
      goto L_089A708C;
    }
L_089A708C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_089A7128;
      }
      goto L_089A7094;
    }
L_089A7094:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16025u << 16u);
      if (branch_taken) {
          goto L_089A718C;
      }
      goto L_089A709C;
    }
L_089A709C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(752)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(756)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089A7194;
      }
      goto L_089A70CC;
    }
L_089A70CC:
    ctx.gpr[31] = (0x089A70D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089A70D4u) goto L_089A70D4;
    return;
L_089A70D4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 127u);
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(752)));
        goto L_089A7100;
    }
    goto L_089A70E4;
L_089A70E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 27u);
    ctx.gpr[31] = (0x089A70F8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 106u, 0x089A07E8u>(ctx, &aot_mem) && ctx.pc == 0x089A70F8u) goto L_089A70F8;
    return;
L_089A70F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A711C;
      }
      goto L_089A7100;
    }
L_089A7100:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(756)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089A711C;
L_089A711C:
    ctx.gpr[4] = (16128u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A7194;
      }
      goto L_089A7128;
    }
L_089A7128:
    ctx.gpr[31] = (0x089A7130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089A7130u) goto L_089A7130;
    return;
L_089A7130:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_089A715C;
      }
      goto L_089A7140;
    }
L_089A7140:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 27u);
    ctx.gpr[31] = (0x089A7154u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 106u, 0x089A07E8u>(ctx, &aot_mem) && ctx.pc == 0x089A7154u) goto L_089A7154;
    return;
L_089A7154:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A717C;
      }
      goto L_089A715C;
    }
L_089A715C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(752)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(756)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089A717C;
L_089A717C:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A7194;
      }
      goto L_089A718C;
    }
L_089A718C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089A7194;
L_089A7194:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7224;
      }
      goto L_089A71B0;
    }
L_089A71B0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7224;
      }
      goto L_089A71C4;
    }
L_089A71C4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17150u << 16u);
      if (branch_taken) {
          goto L_089A7224;
      }
      goto L_089A71E0;
    }
L_089A71E0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[6] = (0u | 189u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089A721Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x089A721Cu) goto L_089A721C;
    return;
L_089A721C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A72AC;
      }
      goto L_089A7224;
    }
L_089A7224:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A72AC;
      }
      goto L_089A7240;
    }
L_089A7240:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A72AC;
      }
      goto L_089A7254;
    }
L_089A7254:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17150u << 16u);
      if (branch_taken) {
          goto L_089A72AC;
      }
      goto L_089A7270;
    }
L_089A7270:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[6] = (0u | 189u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089A72ACu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x089A72ACu) goto L_089A72AC;
    return;
L_089A72AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A77F0;
      }
      goto L_089A72B4;
    }
L_089A72B4:
    ctx.gpr[4] = (15752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 34953u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A754C;
      }
      goto L_089A72D4;
    }
L_089A72D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (15752u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 34953u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A754C;
      }
      goto L_089A72FC;
    }
L_089A72FC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089A7318u);
    ctx.gpr[6] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x089A7318u) goto L_089A7318;
    return;
L_089A7318:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089A732Cu);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 140u, 0x0899D294u>(ctx, &aot_mem) && ctx.pc == 0x089A732Cu) goto L_089A732C;
    return;
L_089A732C:
    ctx.gpr[17] = (0u | 1u);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (15948u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089A739Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089A739Cu) goto L_089A739C;
    return;
L_089A739C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16005u << 16u);
      if (branch_taken) {
          goto L_089A744C;
      }
      goto L_089A73AC;
    }
L_089A73AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15887u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[2] = (16512u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27688)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 3000u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[2] = (16256u << 16u);
    ctx.gpr[31] = (0x089A7418u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 147u, 0x089292F8u>(ctx, &aot_mem) && ctx.pc == 0x089A7418u) goto L_089A7418;
    return;
L_089A7418:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7438;
      }
      goto L_089A7428;
    }
L_089A7428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A744C;
      }
      goto L_089A7438;
    }
L_089A7438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089A744C;
L_089A744C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (48773u << 16u);
      if (branch_taken) {
          goto L_089A7470;
      }
      goto L_089A745C;
    }
L_089A745C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A74DC;
      }
      goto L_089A746C;
    }
L_089A746C:
    ctx.gpr[4] = (48773u << 16u);
    goto L_089A7470;
L_089A7470:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[2] = (16512u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27652)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (0u | 50u);
    ctx.gpr[8] = (0u | 250u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[9] = (0u | 250u);
    ctx.gpr[10] = (0u | 50u);
    ctx.gpr[11] = (0u | 5000u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[2] = (16256u << 16u);
    ctx.gpr[31] = (0x089A74DCu);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 147u, 0x089292F8u>(ctx, &aot_mem) && ctx.pc == 0x089A74DCu) goto L_089A74DC;
    return;
L_089A74DC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8088)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7520;
      }
      goto L_089A7500;
    }
L_089A7500:
    ctx.gpr[31] = (0x089A7508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 436u, 0x08ACA9D8u>(ctx, &aot_mem) && ctx.pc == 0x089A7508u) goto L_089A7508;
    return;
L_089A7508:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7520;
      }
      goto L_089A7510;
    }
L_089A7510:
    ctx.gpr[31] = (0x089A7518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 440u, 0x08ACAA00u>(ctx, &aot_mem) && ctx.pc == 0x089A7518u) goto L_089A7518;
    return;
L_089A7518:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7544;
      }
      goto L_089A7520;
    }
L_089A7520:
    ctx.gpr[31] = (0x089A7528u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089A7528u) goto L_089A7528;
    return;
L_089A7528:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7544;
      }
      goto L_089A7530;
    }
L_089A7530:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A7544u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 127u, 0x0899D0C4u>(ctx, &aot_mem) && ctx.pc == 0x089A7544u) goto L_089A7544;
    return;
L_089A7544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A77F0;
      }
      goto L_089A754C;
    }
L_089A754C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A77F0;
      }
      goto L_089A7560;
    }
L_089A7560:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A77F0;
      }
      goto L_089A757C;
    }
L_089A757C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089A7598u);
    ctx.gpr[6] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x089A7598u) goto L_089A7598;
    return;
L_089A7598:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089A75ACu);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 140u, 0x0899D294u>(ctx, &aot_mem) && ctx.pc == 0x089A75ACu) goto L_089A75AC;
    return;
L_089A75AC:
    ctx.gpr[18] = (0u | 1u);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (15948u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089A761Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089A761Cu) goto L_089A761C;
    return;
L_089A761C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16005u << 16u);
      if (branch_taken) {
          goto L_089A76CC;
      }
      goto L_089A762C;
    }
L_089A762C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[2] = (16512u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27688)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 3000u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[2] = (16256u << 16u);
    ctx.gpr[31] = (0x089A7698u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 147u, 0x089292F8u>(ctx, &aot_mem) && ctx.pc == 0x089A7698u) goto L_089A7698;
    return;
L_089A7698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A76B8;
      }
      goto L_089A76A8;
    }
L_089A76A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A76CC;
      }
      goto L_089A76B8;
    }
L_089A76B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089A76CC;
L_089A76CC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7764;
      }
      goto L_089A76D4;
    }
L_089A76D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (48773u << 16u);
      if (branch_taken) {
          goto L_089A76F8;
      }
      goto L_089A76E4;
    }
L_089A76E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A7764;
      }
      goto L_089A76F4;
    }
L_089A76F4:
    ctx.gpr[4] = (48773u << 16u);
    goto L_089A76F8;
L_089A76F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15887u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[2] = (16512u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27652)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (0u | 50u);
    ctx.gpr[8] = (0u | 250u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[9] = (0u | 250u);
    ctx.gpr[10] = (0u | 50u);
    ctx.gpr[11] = (0u | 5000u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[2] = (16256u << 16u);
    ctx.gpr[31] = (0x089A7764u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 147u, 0x089292F8u>(ctx, &aot_mem) && ctx.pc == 0x089A7764u) goto L_089A7764;
    return;
L_089A7764:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8088)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A77CC;
      }
      goto L_089A7788;
    }
L_089A7788:
    ctx.gpr[31] = (0x089A7790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 436u, 0x08ACA9D8u>(ctx, &aot_mem) && ctx.pc == 0x089A7790u) goto L_089A7790;
    return;
L_089A7790:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A77CC;
      }
      goto L_089A7798;
    }
L_089A7798:
    ctx.gpr[31] = (0x089A77A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 440u, 0x08ACAA00u>(ctx, &aot_mem) && ctx.pc == 0x089A77A0u) goto L_089A77A0;
    return;
L_089A77A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A77CC;
      }
      goto L_089A77A8;
    }
L_089A77A8:
    ctx.gpr[7] = (15897u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 39322u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A77C4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 118u, 0x0899CF3Cu>(ctx, &aot_mem) && ctx.pc == 0x089A77C4u) goto L_089A77C4;
    return;
L_089A77C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A77F0;
      }
      goto L_089A77CC;
    }
L_089A77CC:
    ctx.gpr[31] = (0x089A77D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089A77D4u) goto L_089A77D4;
    return;
L_089A77D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A77F0;
      }
      goto L_089A77DC;
    }
L_089A77DC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A77F0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 127u, 0x0899D0C4u>(ctx, &aot_mem) && ctx.pc == 0x089A77F0u) goto L_089A77F0;
    return;
L_089A77F0:
    ctx.gpr[31] = (0x089A77F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x089A77F8u) goto L_089A77F8;
    return;
L_089A77F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7BE8;
      }
      goto L_089A7800;
    }
L_089A7800:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7BE8;
      }
      goto L_089A7808;
    }
L_089A7808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7BE8;
      }
      goto L_089A7818;
    }
L_089A7818:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_089A7838;
      }
      goto L_089A7820;
    }
L_089A7820:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7854;
      }
      goto L_089A7838;
    }
L_089A7838:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A7848u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 140u, 0x0899D294u>(ctx, &aot_mem) && ctx.pc == 0x089A7848u) goto L_089A7848;
    return;
L_089A7848:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089A7854;
L_089A7854:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[6] = (15948u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089A78B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089A78B8u) goto L_089A78B8;
    return;
L_089A78B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16005u << 16u);
      if (branch_taken) {
          goto L_089A7968;
      }
      goto L_089A78C8;
    }
L_089A78C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15887u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[2] = (16512u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27688)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 3000u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[2] = (16256u << 16u);
    ctx.gpr[31] = (0x089A7934u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 147u, 0x089292F8u>(ctx, &aot_mem) && ctx.pc == 0x089A7934u) goto L_089A7934;
    return;
L_089A7934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7954;
      }
      goto L_089A7944;
    }
L_089A7944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A7968;
      }
      goto L_089A7954;
    }
L_089A7954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089A7968;
L_089A7968:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7A00;
      }
      goto L_089A7970;
    }
L_089A7970:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (48773u << 16u);
      if (branch_taken) {
          goto L_089A7994;
      }
      goto L_089A7980;
    }
L_089A7980:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A7A00;
      }
      goto L_089A7990;
    }
L_089A7990:
    ctx.gpr[4] = (48773u << 16u);
    goto L_089A7994;
L_089A7994:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15887u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[2] = (16512u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27652)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (0u | 5u);
    ctx.gpr[8] = (0u | 250u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[9] = (0u | 250u);
    ctx.gpr[10] = (0u | 50u);
    ctx.gpr[11] = (0u | 5000u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[2] = (16256u << 16u);
    ctx.gpr[31] = (0x089A7A00u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 147u, 0x089292F8u>(ctx, &aot_mem) && ctx.pc == 0x089A7A00u) goto L_089A7A00;
    return;
L_089A7A00:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089A7A20;
      }
      goto L_089A7A08;
    }
L_089A7A08:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7A3C;
      }
      goto L_089A7A20;
    }
L_089A7A20:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A7A30u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 140u, 0x0899D294u>(ctx, &aot_mem) && ctx.pc == 0x089A7A30u) goto L_089A7A30;
    return;
L_089A7A30:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089A7A3C;
L_089A7A3C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[6] = (15948u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089A7AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089A7AA0u) goto L_089A7AA0;
    return;
L_089A7AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16005u << 16u);
      if (branch_taken) {
          goto L_089A7B50;
      }
      goto L_089A7AB0;
    }
L_089A7AB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[2] = (16512u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27688)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 3000u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[2] = (16256u << 16u);
    ctx.gpr[31] = (0x089A7B1Cu);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 147u, 0x089292F8u>(ctx, &aot_mem) && ctx.pc == 0x089A7B1Cu) goto L_089A7B1C;
    return;
L_089A7B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7B3C;
      }
      goto L_089A7B2C;
    }
L_089A7B2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A7B50;
      }
      goto L_089A7B3C;
    }
L_089A7B3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089A7B50;
L_089A7B50:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7BE8;
      }
      goto L_089A7B58;
    }
L_089A7B58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (48773u << 16u);
      if (branch_taken) {
          goto L_089A7B7C;
      }
      goto L_089A7B68;
    }
L_089A7B68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A7BE8;
      }
      goto L_089A7B78;
    }
L_089A7B78:
    ctx.gpr[4] = (48773u << 16u);
    goto L_089A7B7C;
L_089A7B7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15887u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[2] = (16512u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27652)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (0u | 5u);
    ctx.gpr[8] = (0u | 250u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[9] = (0u | 250u);
    ctx.gpr[10] = (0u | 50u);
    ctx.gpr[11] = (0u | 5000u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[2] = (16256u << 16u);
    ctx.gpr[31] = (0x089A7BE8u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 147u, 0x089292F8u>(ctx, &aot_mem) && ctx.pc == 0x089A7BE8u) goto L_089A7BE8;
    return;
L_089A7BE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A7F68;
      }
      goto L_089A7BF8;
    }
L_089A7BF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (0u | 255u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(512), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(513), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(514), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (14955u << 16u);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 60922u);
    ctx.gpr[5] = (0u | 196u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(515), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089A7E14;
      }
      goto L_089A7C3C;
    }
L_089A7C3C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15498u << 16u);
      if (branch_taken) {
          goto L_089A7E14;
      }
      goto L_089A7C50;
    }
L_089A7C50:
    ctx.gpr[4] = (ctx.gpr[4] | 29150u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7E14;
      }
      goto L_089A7C68;
    }
L_089A7C68:
    ctx.fpr[12] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[31] = (0x089A7C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x089A7C74u) goto L_089A7C74;
    return;
L_089A7C74:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28956)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28960)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089A7C8Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x089A7C8Cu) goto L_089A7C8C;
    return;
L_089A7C8C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089A7C98u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x089A7C98u) goto L_089A7C98;
    return;
L_089A7C98:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7CBC;
      }
      goto L_089A7CB4;
    }
L_089A7CB4:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089A7CBC;
L_089A7CBC:
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7CDC;
      }
      goto L_089A7CD4;
    }
L_089A7CD4:
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089A7CDC;
L_089A7CDC:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
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
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.gpr[5] = (16281u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (48960u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.gpr[31] = (0x089A7D88u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089A7D88u) goto L_089A7D88;
    return;
L_089A7D88:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089A7DBCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089A7DBCu) goto L_089A7DBC;
    return;
L_089A7DBC:
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089A7DE8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x089A7DE8u) goto L_089A7DE8;
    return;
L_089A7DE8:
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089A7E14u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x089A7E14u) goto L_089A7E14;
    return;
L_089A7E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A7F68;
      }
      goto L_089A7E24;
    }
L_089A7E24:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15769u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089A7E90u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089A7E90u) goto L_089A7E90;
    return;
L_089A7E90:
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089A7EBCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x089A7EBCu) goto L_089A7EBC;
    return;
L_089A7EBC:
    ctx.gpr[4] = (48460u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x089A7ED8u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089A7ED8u) goto L_089A7ED8;
    return;
L_089A7ED8:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089A7EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089A7EF8u) goto L_089A7EF8;
    return;
L_089A7EF8:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15564u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x089A7F20u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089A7F20u) goto L_089A7F20;
    return;
L_089A7F20:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089A7F68u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x089A7F68u) goto L_089A7F68;
    return;
L_089A7F68:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(800)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(804)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(808)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(812)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(816)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(820)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(824)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(828)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(832)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(836)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(840)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A7F9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-784));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(716), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(724), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(732), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(748), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(756), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(760), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(764), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(772), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.pc = 0x089A8000u; return;
}

void recomp_unit_0104(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0104_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_104(Runtime &runtime) {
    runtime.register_generated_unit(104u, 0x089A4000u, 16384u, &recomp_unit_0104, &recomp_unit_0104_entry);
    runtime.register_function(0x089A4000u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4008u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4018u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A402Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4038u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4060u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A406Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4078u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4090u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4098u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A40A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A40ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A40D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A40F4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A40FCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4104u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4110u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4120u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A412Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4134u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A413Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4140u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4148u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A414Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4160u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A417Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4188u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A41A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A41B0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A41C4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A41CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A41D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A41E0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A41F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A421Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4224u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4230u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4238u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4250u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4274u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4284u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A42ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A42B8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A42C4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A42D0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A42D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A42F4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A430Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4314u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A432Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4334u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4340u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4348u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4350u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4354u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A435Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4360u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4368u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4370u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A437Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4384u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A438Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4390u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4398u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A439Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A43A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A43B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A43C4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A43DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A43E8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4434u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A443Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4444u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A444Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A446Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A448Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4510u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4518u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4520u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4598u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A45BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A45D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4618u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4620u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4640u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A465Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4698u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A46A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A46A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A46ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A46CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A46DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A46F4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A46FCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4710u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A471Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4734u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4740u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A474Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4764u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A476Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A477Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4780u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4788u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A47A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A47B8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A47C4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A47CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A47DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A47E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A47ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A47F4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4820u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4824u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4840u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4850u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4858u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4860u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4868u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4874u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4880u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4884u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A488Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A48A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A48BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A48C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A48E0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A48F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4904u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A490Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4988u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A49A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A49BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A49CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A49D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A49E0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A49E8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A18u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A2Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A44u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A54u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A5Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A7Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A88u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4ABCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4AC4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4ACCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4AE0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4AECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4AF4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4AFCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B04u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B0Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B1Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B2Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B38u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B48u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B54u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B5Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B6Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B7Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B88u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B98u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4BA4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4BACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4BBCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4BCCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4BD8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4BE8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4BF4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4BFCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C0Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C1Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C28u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C38u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C44u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C4Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C5Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C6Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C78u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C88u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C94u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C9Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4CACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4CBCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4CC8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4CD8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4CE4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4CECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D08u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D44u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D50u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D60u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D7Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D88u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D9Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4DA4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4DACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4DC8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4DCCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4DD4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4DDCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4DE4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4DECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4DF8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E04u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E10u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E1Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E20u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E28u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E4Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E58u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E80u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E8Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4EB4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4ED8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4EE0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4EF4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F04u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F1Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F28u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F34u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F40u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F4Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F50u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F58u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F5Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F64u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F78u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F84u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F8Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F98u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F9Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4FC0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4FECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5078u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5090u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A50A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A50C4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A50E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A50F0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A50F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5100u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5108u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5120u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5130u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5134u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5140u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A514Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5198u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A51CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A51D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A51FCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5204u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A520Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5214u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5228u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5254u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5260u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5268u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5280u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5288u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5290u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5294u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A52A4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A52ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A52C4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A52F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5318u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5320u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5330u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5338u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5340u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A534Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5360u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5368u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5374u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5380u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5398u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A53B0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A53BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A53C4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A53D0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A53D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A53E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A53ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A53F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5400u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A540Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5414u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5420u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5428u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5434u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A543Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5448u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5450u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A545Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5464u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5470u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5478u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5484u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A548Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5498u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54E8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54F0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54FCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5504u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5510u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5518u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5524u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A552Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5538u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5540u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A554Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5554u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5560u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5568u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5574u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A557Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5588u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A558Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5598u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A55A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A55ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5604u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5610u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5624u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5630u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A56C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A56C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A56DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5718u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5734u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A57A4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A57D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A57F0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5834u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5A3Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5A50u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5A80u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5A98u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6144u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6154u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A616Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A617Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6184u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A61ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A61C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A61D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A61ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6200u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A624Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6274u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6290u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A62B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A62D0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A62E8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6320u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6344u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6350u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6380u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A63D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A63F0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6404u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6410u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6418u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6428u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6438u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6444u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6450u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A645Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6470u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A647Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6484u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A648Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6494u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A649Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A64A4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A64ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A64B8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A64C4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A64D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A64E8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A64F0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6504u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6508u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6510u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6518u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6520u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6528u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A653Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6548u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6558u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6560u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6568u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6574u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A657Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6584u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6594u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65C4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65D0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6600u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6608u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6618u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6624u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6634u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6640u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6648u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A664Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6654u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6660u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6670u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A667Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6684u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6688u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6690u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A669Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A66A4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A66B8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A674Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A67B0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A685Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A68ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A68C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A68DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A68FCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A690Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6918u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6924u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6938u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A693Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6968u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6974u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6980u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6988u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6990u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A69A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A69ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A69BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A69DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A69ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A08u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A10u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A18u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A20u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A44u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A50u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A60u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A70u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A88u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A90u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A9Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6AACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6AB8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6ACCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6ADCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6AE8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B14u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B20u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B30u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B40u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B4Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B60u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B6Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B90u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6BB4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6BBCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6BE0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6BECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6BF4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6BFCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C1Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C20u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C30u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C38u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C4Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C60u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C64u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C70u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C80u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6CA8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6CB8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6CBCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6CD0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6CD8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6CECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6CF4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6CFCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6D04u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6D44u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6D48u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6D50u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6D60u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6D88u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6D9Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6DA8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6DB4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6DF8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E34u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E88u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E94u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6EA4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6EB4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6EC4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6ED4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6EE4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6EECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6EF4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6EFCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F14u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F24u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F3Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F44u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F4Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F58u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F60u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F68u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F74u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F84u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F94u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6FA0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6FA8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6FB4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6FBCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6FD4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6FE8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7010u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A703Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7050u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7060u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7068u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7078u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7084u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A708Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7094u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A709Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A70CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A70D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A70E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A70F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7100u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A711Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7128u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7130u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7140u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7154u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A715Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A717Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A718Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7194u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A71B0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A71C4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A71E0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A721Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7224u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7240u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7254u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7270u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A72ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A72B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A72D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A72FCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7318u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A732Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A739Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A73ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7418u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7428u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7438u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A744Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A745Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A746Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7470u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A74DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7500u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7508u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7510u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7518u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7520u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7528u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7530u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7544u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A754Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7560u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A757Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7598u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A75ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A761Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A762Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7698u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A76A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A76B8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A76CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A76D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A76E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A76F4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A76F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7764u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7788u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7790u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7798u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A77A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A77A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A77C4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A77CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A77D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A77DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A77F0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A77F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7800u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7808u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7818u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7820u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7838u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7848u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7854u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A78B8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A78C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7934u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7944u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7954u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7968u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7970u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7980u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7990u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7994u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7A00u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7A08u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7A20u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7A30u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7A3Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7AA0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7AB0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7B1Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7B2Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7B3Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7B50u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7B58u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7B68u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7B78u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7B7Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7BE8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7BF8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7C3Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7C50u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7C68u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7C74u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7C8Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7C98u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7CB4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7CBCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7CD4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7CDCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7D88u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7DBCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7DE8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7E14u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7E24u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7E90u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7EBCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7ED8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7EF8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7F20u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7F68u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7F9Cu, &recomp_unit_0104, "recomp_unit_0104");
}
} // namespace psprecomp
